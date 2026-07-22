# Sistemas Operativos - Taller 01 - El mundo según C, C++, Bash y otros ...

## Agenda

1. Instalación de las herramientas básicas para el curso
2. Repositorio y estructura de los talleres
3. El mundo según C, C++ y otros

## Instalación de las herramientas básicas para el curso

Tenga en cuenta su sistema operativo e instale las herramientas correspondientes. La idea es utilizar ambos sistemas, en Windows podemos tener ambos instalados, el Windows mismo y a través del subsistema de Windows para Linux (WSL). En Linux y en Mac se recomienda, si su máquina tiene el poder (procesado con múltiples núcleos y bastante memoria) instale una máquina virtual (VirtualBox) con Windows, en ese caso es mejor utilizar otra máquina.

### Windows

#### Subsistema de Windows para Linux (WSL)

El WSL es un sistema que permite instalar una distribución de linux en Windows.  Esta parte del taller le pedirá instalar una en su máquina. Tenga en cuenta lo siguiente:

* Instale la versión por omisión (**default**) Ubuntu. 
* [Pasos para instalar WSL](https://learn.microsoft.com/es-es/windows/wsl/install)

Una vez instalado WSL abra una sesión invocando a `WSL` en la barra de inicio.

Instale el ambiente de desarrollo, la siguiente son las instrucciones del interpretador de comandos:

```bash
sudo apt update
sudo apt install build-essential
```

Una vez instalado instale los editores.

```bash
sudo apt install nano emacs vim
```

Algunos tutoriales sobre estos editores (Por Dios, que les ayuda a seleccionar el mejor):

* [Nano](https://linuxize.com/post/how-to-use-nano-text-editor/)
* [VIM](https://www.freecodecamp.org/espanol/news/como-usar-vim-tutorial-para-principiantes/)
* [emacs](https://www-digitalocean-com.translate.goog/community/tutorials/how-to-use-the-emacs-editor-in-linux?_x_tr_sl=en&_x_tr_tl=es&_x_tr_hl=es&_x_tr_pto=tc&_x_tr_hist=true)

Instalar algunas herramientas adicionales:

```bash
sudo apt install git golang meld tree ssh tmux wget curl cmake zip unzip
```

* Para instalar [Rush](https://www.digitalocean.com/community/tutorials/install-rust-on-ubuntu-linux).

Instalar la terminal de [Windows](https://learn.microsoft.com/en-us/windows/terminal/install).

#### MSYS2

MSYS2 es una colección de herramientas y bibliotecas que le suministra un ambiente de fácil uso para construir, instalar y correr software nativo en Windows.

* Para instalar sigue este enlace ([MSYS2](https://www.msys2.org/)).

Actualizar el entorno:

```bash
 pacman -Syu
 pacman -S --needed base-devel mingw-w64-ucrt-x86_64-toolchain
```

Se recomienza el uso de UCRT64.

Instalar otros paquetes:

```bash
pacman -S git tmux tree nano vim emacs wget curl cmake unzip zip
pacman -S mingw-w64-ucrt-x86_64-go
pacman -S --needed mingw-w64-ucrt-x86_64-rust
```

### Mac OS X

Hay varias herramientas para instalar herramientas de desarrollo:

* [XCode](https://www.freecodecamp.org/espanol/news/como-descargar-xcode-e-instalarlo-en-tu-mac-y-actualizarlo-para-desarrollo-en-ios/). Herramientas para desarrolla principal en Swift y Objective-C. Esta herramienta es base para instalar otras herramientas.
* [Homebrew](https://brew.sh/). Esta es una herramienta para tener el mundo de Linux en Mac. Esta es la herramienta preferida para instalar herramientas para desarrollar en consola de Mac. Fácil de instalar
* [MacPort](https://translate.google.com/translate?u=https://www.macports.org/&hl=es&sl=en&tl=es&client=srp). Esta es otra herramienta que permite tener el mundo de Linux en Mac. Es más difícil instalar, pero tiene mucho más paquetes.

Recomiendo tener una terminal ([`iTerm2` ](https://iterm2.com/)) mucho más poderosa que la encontramos en Mac `iTerm`. 

Ahora instalar las herramienta que se van a utilizar.

```bash
brew install git nano vim tmux tree emacs gcc make cmake gdb unzip zip git wget go rustup
brew install --cask meld
rustup-init
```

#### Advertencia

La nuevas versiones de Max OS X han decidido cambiar utilizar por omisión como interpretador de comandos `zsh`, en este curso vamos a utilizar `bash` en vez de `zsh`.

Verifique que **shell** se esta utilizando:

```bash 
echo $SHELL
```

Si quiere cambiar de forma definitiva:

```
chsh -s /bin/bash
```

Si solo quieres cambiar temporalmente:

```bash
bash
```

Recuerde que vamos a utilizar solamente **`bash`**, en los ejemplos del curso.

### Linux

Hay mucha distribuciones de Linux con muchos sistemas de paquetes, solamente se hará énfasis en dos de ellas `.deb` y `.rpm`.  La primera están en [debian](https://www.debian.org/index.es.html), y [ubuntu](https://ubuntu.com/); la segunda se encuentra en [Fedora](https://fedoraproject.org/es/), [RHEL](https://www.redhat.com/), [OpenSuse](https://www.opensuse.org/).

Eliga la distribución que más le guste, la siguiente es una lista corta de vlogs donde se explican distintas distribuciones:

* [Best Linux Distro (2026)](https://linuxblog.io/best-linux-distro/)
* [Exploring the World of Linux Distributions](https://medium.com/@Chinacolt/exploring-the-world-of-linux-distributions-a-guide-to-choosing-the-right-one-for-you-a987adcf8f06)
* [Linux Distribution Explained](https://medium.com/@Iampreth/linux-distribution-explained-finding-the-perfect-fit-3797103bf3bd)

#### Herramientas `.deb`

```bash
sudo apt update
sudo apt install build-essential gdb
sudo apt install wget curl tmux make cmake meld tree nano vim emacs unzip zip git wget curl
```

#### Herramientas `.rpm` 

```bash
sudo dnf update
sudo dnf group install "Development Tools"
sudo dnf install wget curl tmux make cmake meld tree nano vim emacs unzip zip git wget curl
```

## Repositorios y estructura de los talleres

Una vez instalado todas las herramientas según su plataforma (Sistema Operativo y Hardware), realize los siguiente pasos:

### 1. Crear un repositorio para el curso

Abra su plataforma de control de versiones favorita: [GitHub](https://github.com/), [GitLab](https://gitlab.com/), [BitBucket](https://bitbucket.org/product/). Y cree un repositorio **privado**, con un nombre con el siguiente formato: `<eafit-email-name>-so-c2661-4677-seguimiento`, donde `<eafit-email-name>` es el nombre del correo electrónico (`fcardona@eafit.edu.co`), es `fcardona`. En mi caso personal sería `fcardona-so-c2661-4677-seguimiento`, este será `<repositorio-seguimiento>`

Una vez creado invite al profesor busque la cuenta `fcardonaEAFIT` y invítelo como colaborador (no como administrador o semejante).

### 2. Crear estructura de directorios

Cree una copia local del repositorio en su máquina.

```bash
git clone <repositorio-enlace>
```

Ir al directorio

```
cd <repositorio-enlace>
```

En ese directorio cree un carpeta (*folder* o directorio) con el nombre de talleres.

```
mkdir talleres
```

### 3. Poblar la estructura de directorios y el repositorio

Abra el directorio

```
cd talleres
```

Descargue el taller en formato zip, descomprimalo.

```
wget https://github.com/jfcmacro/TallerSO_01/archive/refs/heads/master.zip
unzip master.zip
rm master.zip
```

Mire la estructura actual

```
tree .
```

Entre al directorio del taller

```
cd TallerSO_01-master
```

Adicione los ficheros

```bash
git add README.md .gitignore
```

Adicione los ficheros del proyecto, esto adiciona todos ficheros del taller.

```bash
find . -name *.c -exec git add {} \;
```

Acometa (*commit*) el proyecto.

```
git commit -m "Iniciando el Taller 01"
git push
```

## Ejercicios

Para cada ejercicio tenga en cuenta que los ejercicios están diseñados para Windows o para Linux (MacOS o WSL), en el caso de Windows abra una terminal de `msys2`, en Linux (y otros) abra una terminal del `shell` favorito.

## El mundo según C, C++ y otros

### Introducción

Programar consiste en crear una implementación de una solución, lo suficientemente genérica para que a través de parámetros, se puede cambiar el comportamiento de dicha solución, sin tener que cambiar el código.

Normalmente, esto lo observamos la declaración de funciones, que reciben parámetros que le permtien modificar consistente la solución, por ejemplo tememos una función de ordenamiento (`sort`), que además de recibir en un argumento los datos a ordenar, puede tener recibir un parámetro que representa la función de comparación. Esto parámetros, hacen que el ordenamiento se pueda hace utilizando diferentes criterios, sin tener que modificar el programa.

En la programación actual, se requiere construir programas que implementen la solución más general y que a través de los parámetros se pueda cambiar su comportamiento. En el caso de los programas y los guiones, esto se puede lograr a través de los argumentos de la línea de comandos o las variables de ambiente.

Vamos a ver como hacerlo a través de Linux y Windows y en el camino como aprenderlo hacerlo utilizando el lenguaje de programación C.

### Línea de argumentos

#### Linux

Un programa tiene un comportamiento definido por su código, este comportamiento puede cambiar con la iteración del mundo exterior, ya sea a través de las operaciones de entrada y salida, línea de argumentos y variables de ambiente.

La línea de argumentos permite pasar elementos que cambien el comportamiento de un programa, por ejemplo algunos programas puede recibir una argumento que indique el orden que van a ser ordenado los resultados. 

##### [Línea de Argumentos](./argumentos/linux/argumentos.c)

Se encarga de mostrar como un programa recibe argumentos del mundo exterior, a través del `shell` y mostrar cada uno de los argumentos.

**Ejercicio 1**. [Compilar `argumentos.c`]. El compilador instalado es `gcc`.

La siguiente líneas nos permite ejecutar dos tareas. Mover a un directorio (`cd`) y compilar un programa (`gcc`). Ejecute la siguiente líneas en la terminal:

```bash
cd argumentos/linux/
gcc argumentos.c
```

El primero (`cd`) es un **inner command**, este es ejecutado internamente por el `shell` (`bash`), no es programa en ejecución. Este comando recibe un argumento el nombre de la ruta del directorio de trabajo (**pathname**).

El segundo (`gcc`) es la ejecución de programa con un argumento `argumentos.c`, este es un programa real:

```bash
which gcc
```

Muestra la ruta donde está ubicado el ejecutable `gcc`.

La ejecución anterior generar un ejecutable llamado `a.out`. Para ejecutarlo:

```bash
./a.out
```

Esto muestra que el programa recibe un solo argumento que es el nombre el programa que se esta ejecutando.

Ejecute con varios argumentos:

```bash
./a.out arg1 arg2 arg3 "varios argumentos" /tmp/fichero ../fichero2
```

Así se pueden pasar varios argumentos al programa y cada argumento puede ser utilizado para definir un comando, una acción, un fichero (o ficheros), todo dependerá de la forma que el programado defina el comportamiento del comando.

**Ejercicio 2.** [Dar un nombre al ejecutable]. El nombre `a.out` puede ser confuso para determinar cual es el propósito de un programa, algunos ejecutables tiene nombres que sugiere su tarea por ejemplo: `sort` un programa que ordena; `ls` listar directorios, `pwd` (Process Working Directory). Nosotros podemos nombrar los ejecutables a traves de una opción (línea de argumento del compilador).

```bash
gcc -o argumentos argumentos.c
```

Observe el fichero creado:

```bash
ls -l
```

Observe que se ha creado un fichero llamado argumentos.

##### [Manejo de argumentos](./argumentos/linux/manejo_argumentos.c)

Los argumentos puede ser opcionales, obligatorios, tener valor. El manejo manual de la línea de argumentos puede se un poco complicado, para ello existe una biblioteca (ustedes llaman librería) que se encarga de procesar la línea de argumentos, esta es la biblioteca [`getpopt`](https://man7.org/linux/man-pages/man3/getopt.3.html).



#### Windows

El comportamiento de un programa es a través de la línea de comandos.

* [Linea de Argumentos](./argumentos/windows/argumentos.c): Se encarga de mostrar como un programa recibe argumentos del mundo exterior, a través del Shell y de la línea de comandos.
* [Manejo de argumentos](./argumentos/windows/manejo_argumentos.c): Los argumentos puede ser opcionales o tener variables, hacerlo de manera manual es un poco complicado, vamos a utilizar una biblioteca `getpopt`.

### Variables de ambiente

El comportamiento de un programa puede alterarse a través de las variables de ambiente.

#### Linux

* [Mostrar las variables de ambiente](./ambiente/linux/ambiente.c): Listar todas las variables de ambiente.
* [Mostrar una variable de ambiente en particular](./ambiente/linux/variable.c): Mostrar una variable particular.

#### Windows

* [Mostrar las variables de ambiente](./ambiente/windows/ambiente.c): Listar todas las variables de ambiente.
* [Mostrar una variable de ambiente en particular](./ambiente/windows/variable.c): Mostrar una variable particular.

## Interprete de comandos (`bash`)

* Scripts
* Proyecto: `downproglab.sh`
