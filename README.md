# Sistemas Operativos - Taller 01 - El mundo según C, C++ y otros

## Instalación de las herramientas básicas para el curso

### Windows

#### Subsistema de Windows para Linux (WSL)

El WSL es un sistema que permite instalar una distribución de linux en Windows.  Esta parte del taller le pedirá instalar una en su máquina. Tenga en cuenta lo siguiente:

* Instale la versión por omisión (**default**) [Ubuntu](https://ubuntu.com/). 
* [Pasos para instalar WSL](https://learn.microsoft.com/es-es/windows/wsl/install)

Abra una sesión invocando a `WSL` en la barra de inicio.

Instale el ambiente de desarrollo, la siguiente son las instrucciones del interpretador de comandos:

```bash
sudo apt update
sudo apt install build-essential
```

Una vez instalado instale los editores.

```bash
sudo apt install nano emacs vim
```

Algunos tutoriales sobre estos editores (Por Dios que sepan seleccionar el mejor):

* [Nano](https://linuxize.com/post/how-to-use-nano-text-editor/)
* [VIM](https://www.freecodecamp.org/espanol/news/como-usar-vim-tutorial-para-principiantes/)
* [emacs](https://www-digitalocean-com.translate.goog/community/tutorials/how-to-use-the-emacs-editor-in-linux?_x_tr_sl=en&_x_tr_tl=es&_x_tr_hl=es&_x_tr_pto=tc&_x_tr_hist=true)

Instalar algunas herramientas adicionales:

```bash
sudo apt install git golang meld tree ssh tmux wget curl cmake
```

* Para instalar [Rush](https://www.digitalocean.com/community/tutorials/install-rust-on-ubuntu-linux).

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
pacman -S git tmux tree nano vim emacs wget curl cmake 
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
brew install git nano vim tmux tree emacs gcc make cmake gdb 
brew install --cask meld
```

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
sudo apt install wget curl tmux make cmake meld tree nano vim emacs
```

#### Herramientas `.rpm` 

```bash
sudo dnf update
sudo dnf group install "Development Tools"
sudo dnf install wget curl tmux make cmake meld tree nano vim emacs
```



Programar consiste en crear una implementación de una solución, lo suficientemente genérica para que a través de parámetros, se puede cambiar el comportamiento de dicha solución, sin tener que cambiar el código.

Normalmente, esto lo observamos la declaración de funciones, que reciben parámetros que le permtien modificar consistente la solución, por ejemplo tememos una función de ordenamiento (`sort`), que además de recibir en un argumento los datos a ordenar, puede tener recibir un parámetro que representa la función de comparación. Esto parámetros, hacen que el ordenamiento se pueda hace utilizando diferentes criterios, sin tener que modificar el programa.

En la programación actual, se requiere construir programas que implementen la solución más general y que a través de los parámetros se pueda cambiar su comportamiento. En el caso de los programas y los guiones, esto se puede lograr a través de los argumentos de la línea de comandos o las variables de ambiente.

Vamos a ver como hacerlo a través de Linux y Windows.

## Línea de Argumentos. En los programas de terminal más común de cambiar
el comportamiento de un programa es a través de la línea de comandos.


* [Linea de Argumentos](./src/LineaDeArgumentos.c): Se encarga de
  mostrar como un programa recibe argumentos del mundo exterior, a
  través del Shell y de la línea de comandos.