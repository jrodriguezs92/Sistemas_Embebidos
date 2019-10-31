################################################################
# KPN Model for factorial sequence
# Author: Jeremy Rodriguez Solorzano
# Date: 30/10/2019
# Course: Introduccion a los Sistemas Embebidos
################################################################

import queue
import threading
import time

#Adder
def add():
    while True:
        a = hk.get()
        b = 1
        c = a+b
        ek.put(c)

#Delay for counter
def delay1Add():
    fk.put(1)
    while True:
        fk.put(ek.get())

#Delay for multiplier
def delay1Mult():
    bk.put(1)
    while True:
        bk.put(ak.get())

#Split from add
def splitAdd():
    while True:
        fkTmp = fk.get()
        gk.put(fkTmp)
        hk.put(fkTmp)

#Split from Multiplier
def splitMult():
    while True:
        bkTmp = bk.get()
        dk.put(bkTmp)
        print(bkTmp)
        time.sleep(1)

#Multiplier
def mult():
    while True:
        x = gk.get()
        y = dk.get()
        z = x*y
        ak.put(z)

if __name__ == "__main__":
    ak = queue.Queue()
    bk = queue.Queue()
    ck = queue.Queue()
    dk = queue.Queue()
    ek = queue.Queue()
    fk = queue.Queue()
    gk = queue.Queue()
    hk = queue.Queue()

    addt = threading.Thread(target=add)
    delay1At = threading.Thread(target=delay1Add)
    delay1Mt = threading.Thread(target=delay1Mult)
    splitAt = threading.Thread(target=splitAdd)
    splitMt = threading.Thread(target=splitMult)
    multt = threading.Thread(target=mult)

    addt.start()
    delay1At.start()
    delay1Mt.start()
    splitAt.start()
    splitMt.start()
    multt.start()