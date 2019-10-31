################################################################
# KPN Model for Fibonacci sequence
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
        a = ck.get()
        b = fk.get()
        c = a+b
        ak.put(c)

#Delay1
def delay1():
    bk.put(1)
    while True:
        bk.put(ak.get())

#Delay0
def delay0():
    fk.put(0)
    while True:
        fk.put(ek.get())

#Split
def split():
    while True:
        bktmp = bk.get()
        ck.put(bktmp)
        ek.put(bktmp)
        print(bktmp)
        time.sleep(1)

if __name__ == "__main__":
    ck = queue.Queue()
    fk = queue.Queue()
    ak = queue.Queue()
    bk = queue.Queue()
    ek = queue.Queue()

    addt = threading.Thread(target=add)
    delay0t = threading.Thread(target=delay0)
    delay1t = threading.Thread(target=delay1)
    splitt = threading.Thread(target=split)

    addt.start()
    delay0t.start()
    delay1t.start()
    splitt.start()