# Biblioteca con Autotools
Introducción a los Sistemas Embebidos  
Taller 4  
Instituto Tecnológico de Costa Rica  
Ingeniería en Computadores.   
2019, II Semestre.  

## Descripción
Ejemplo básico de biblioteca matemática compilada y empaquetada con ayuda de la herramienta Autotools.

## Ambiente de prueba
Linux, Ubuntu 18.04.

## Instrucciones
-Antes que nada, crear en la carpeta raiz el directorio /build/usr/  
-Ejecutar:  
```
$ autoreconf --install
```
-Luego, Ingresar a la carpeta build, y ejecutar:
```
$ ../configure --prefix=/home/USER/ROOTDIR/build/usr
$ make
$ make install
$ make distcheck
```
## Autor
* Jeremy Rodríguez Solórzano  
201209131  
jrodriguezs0292@gmail.com

## Version
1.0.0
