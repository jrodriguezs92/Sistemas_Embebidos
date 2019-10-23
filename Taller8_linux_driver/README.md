# Driver en Linux
Introducción a los Sistemas Embebidos  
Taller 8  
Instituto Tecnológico de Costa Rica  
Ingeniería en Computadores.   
2019, II Semestre.  

## Descripción
Ejemplo básico de creación de Driver para Linux.

## Ambiente de prueba
Linux, Ubuntu 18.04.

## Instrucciones
-Compilar con:   
```
$ make -C /usr/src/linux-headers-$(uname -r) M=$(pwd modules)
```
-NOTA: En caso tener error por no encontrar el código del kernel, este se puede instalar con:   
```
$ sudo apt-get install linux-headers-$(uname -r)
```
-Cambiar permisos al archivo /dev/memory
```
$ sudo chmod 666 /dev/memory
```
-Cargar el módulo con:   
```
$ sudo insmod memory.ko
```
-Verificar el módulo con:   
```
$ lsmod
```
-Remover el módulo con:   
```
$ sudo rmmod memory
```
## Autor
* Jeremy Rodríguez Solórzano  
201209131  
jrodriguezs0292@gmail.com

## Version
1.0.0
