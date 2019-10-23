# Biblioteca con Yocto
Introducción a los Sistemas Embebidos  
Taller 7  
Instituto Tecnológico de Costa Rica  
Ingeniería en Computadores.   
2019, II Semestre.  

## Descripción
Ejemplo básico de biblioteca para manejo de pines GPIO de Raspberry Pi 2, creada con ayuda de la herrramienta Yocto y compilación cruzada usando Autotools.   

## Ambiente de prueba
Linux, Ubuntu 18.04.

## Instrucciones

### Generación de script de configuración:
1. Dentro de la carpeta raíz ejecutar el comando: 
```
autoreconf --install
```
### Preparar instalación:
2. Crear carpeta build dentro de la acrpeta raíz.
3. Ingresar a build y crear carpeta usr dentro de ella
### Configurar instalación:
4. Dentro de la carpeta build, ejecutar comando: 
```
source /opt/poky/2.5.1/environment-setup-cortexa7hf-neon-vfpv4-poky-linux-gnueabi
```
-NOTA: Tomar en cuenta que la ruta dada (/opt/poky/2.5.1/..) puede variar en cada máquina, dependiendo de la versión de Yocto instalada)   
5. Dentro de la carpeta build ejecutar comando: 
```
$ ../configure --host=arm-poky-linux-gnueabi --prefix=/home/USER/ROOTDIR/build/usr
```
### Construir biblioteca:
6. Dentro de la carpeta build ejecutar comando: 
```
$ make
```
### Instalar:
7. Dentro de la carpeta build ejecutar comando: 
```
$ make install
```
### Ejecutar programa:
8. El archivo ejecutable se encuentra dentro de ROOTDIR/build/usr/bin/
9. Ejecutar con: 
```
$ ./gpiotest
```
## Autor
* Jeremy Rodríguez Solórzano  
201209131  
jrodriguezs0292@gmail.com

## Version
1.0.0
