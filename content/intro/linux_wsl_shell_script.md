# Linux, WSL e Shell Script (Bash) :penguin:

## O que é Linux?

Embora o Linux seja usado para se referenciar á um sistema operacional é importante dizer que **o Linux em si não é um sistema operacional mas sim o Kernel (núcleo) utilizado para construir esses sistemas operacionais**. Lançado em 1991 e criado por Linus Torvalds o qual se inspirou em sistemas Unix da época.

Hoje em dia existem diversos sistemas operacionais que utilizam-se do Linux, as chamadas distribuições (distros) Linux. Algumas delas são:

- **Ubuntu**
- Kali
- RedHat
- Mint
- Arch
- Debian

Cada distro tem suas peculiaridades e foi criada com um propósito para resolver demandas específicas.



## Windows Subsystem for Linux (WSL)

O Windows não é compatível com o Linux, na verdade ambos são bem diferentes principalmente pelo Linux ser open-source e o Windows ser uma plataforma privada mantida pela Microsoft.

Porém, desde 2016 a Microsoft vem se esforçando para melhorar essa compatibilidade. Com a criação do módulo WSL foi possível que os usuários pudessem usar todo o potencial do Linux, seus comandos e executar programas nativos sem necessidade de emuladores e máquinas virtuais.

Para utilizar, basta habilitar o recurso, instalar uma distro Linux pela Microsoft Store e por fim abrir o Command Line (CMD) e executar o comando: `bash`.



## Shell Script (Bash)

Para entender um pouco sobre Shell Script, é necessário saber que existem duas formas comuns de interação entre uma máquina e uma pessoa, são elas: 

- **Graphical User Interface (GUI):** Interface gráfica do usuário é a mais comum nos dias atuais, muitos aplicativos/programas se utilizam de componentes de tela como botões, campos de texto e entre outros para permitir a interação entre uma pessoa e uma máquina.
- **Command Line Interface (CLI)**: A Interface de Linha de Comando não é tão defasada para leigos, mas entre programadores e outros profissionais da área é essencial já que nos permitem automatizar tarefas sem precisar de uma GUI.

Para utilizar-se de CLI faz-se necessário usar um Shell, um programa específico que interpreta comandos dados a uma CLI e nos permite realizar tal tipo de interação. Atualmente existem alguns bem famosos como:

- **Bash**
- Zsh
- Ksh

Um script é basicamente um conjunto de instruções para que uma função seja executada. Dessa forma shell script é apenas a forma que se fala para um conjunto de comandos utilizados para que alguma função seja executada. Muitas vezes podem ser alguns comandos "avulsos" ou pode ser um arquivo com comandos a serem realizadas (arquivos .sh).

##### Comandos básicos

> Alguns comandos muito comuns e básicos no Bash (Presente na maior parte das distros Linux) são:

- `pwd`: Exibe o diretório atual.
- `ls`: Exibe todo o conteúdo de um diretório especifico.
- `cd`: Permite a navegação entre diretórios.
- `mkdir`: Permite criação de novos diretórios.
- `rmdir`: Permite a remoção de diretórios.
- `mv`: Permite mover arquivos ou diretórios.
- `cp`: Permite copiar arquivos ou diretórios.
- `touch`: Permite criação de arquivos vazios.
- `rm`: Permite a remoção de arquivos.