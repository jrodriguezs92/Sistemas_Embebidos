# Biblioteca con GCC
Introducción a los Sistemas Embebidos  
Taller 2  
Instituto Tecnológico de Costa Rica  
Ingeniería en Computadores.   
2019, II Semestre.  

## Ambiente de prueba
Linux, Ubuntu 18.04.

## Instrucciones
### Comandos utilizados para crear las bibliotecas:
#### Biblioteca estática:
```
$ gcc -c mymath.c
$ ar rv libmymath.a mymath.o
$ ranlib libmymath.a
```
#### Biblioteca dinámica:
```
$ gcc -fPIC -c mymath.c
$ ld -o libmymath.so mymath.o -shared
```
### Generar ejecutable con biblioteca estática:
```
$ gcc -o calculadora calculadora.c libmymath.a -lm
```
### Generar ejecutable con biblioteca dinámica:
```
$ gcc -o calculadora calculadora.c -I/home/USER/ROOTDIR -I//home/USER/ROOTDIR -Bdynamic libmymath.so -lm
$ export LD_LIBRARY_PATH=$LD_LIBRARY_PATH:/home/USER/ROOTDIR
```
