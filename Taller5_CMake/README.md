# Biblioteca con CMake
Introducción a los Sistemas Embebidos  
Taller 5  
Instituto Tecnológico de Costa Rica  
Ingeniería en Computadores.   
2019, II Semestre.  

## Descripción
Ejemplo básico de biblioteca matemática creada a partir de compilación mediante CMake.

## Ambiente de prueba
Linux, Ubuntu 18.04.

## Instrucciones
-Crear directorio /build/usr/ en el directorio raíz.  
-Ingresar al directorio /build/.  
-Ejecutar:  
```
$ cmake ../ -DCMAKE_INSTALL_PREFIX:PATH=/home/USER/ROOTDIR/build/usr
$ make
$ make install
$ export LD_LIBRARY_PATH=/home/USER/ROOTDIR/build/usr/lib
```
-Comprobar:   
```
$ cd usr/bin && ./hello
```
-Empaquetar (Ejecutar dentro de /build/):   
```
$ make package_source
```
## Autor
* Jeremy Rodríguez Solórzano  
201209131  
jrodriguezs0292@gmail.com

## Version
1.0.0
