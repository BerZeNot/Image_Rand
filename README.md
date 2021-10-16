# Image Rand

**Image Rand** é um programa de console capaz gerar imagens de texturas em escala de cinza. 
As imagen são geradas e salvas em formado .pgm.

Na versão atual, o programa é capaz de **gerar três tipos** diferentes de texturas.

- Textuta de ruído
- Textura de linhas horizontais com 1 píxel de espessura
- Textura de linhas horizontais com espessura definida pelo usuário

A **resolução** das imagens é definida antes do programa gerá-las. 

## Como compilar e executar?
Para compilar o programa é necessário ter um compilador de linguagem C/C++. No desenvilvimento utilizei o GCC (GNU Compiler Collection) e é o 
que recomendo utilizar para compilar o programa.

### Compilando no Linux
Para compilar o programa no Linux basta entrar no terminal, navegar até a pasta em que se encontram os
arquivos do Image Rand e execultar os seguintes comandos:

`gcc -c imgRandResources.c -o imgRandResources.o`

`gcc -c imgRand.c -o imgRand.o`

`gcc -o imgRand imgRand.o imgRandResources.o imgRandResources.h`

E para executar, basta utilizar o seguinte comando:

`./imgRand`

### Compilando no Windows
Para compilar o programa no Windows basta entrar no prompt de comandos, navegar até a pasta em que se encontram os
arquivos do Image Rand e execultar os seguintes comandos:

`gcc -c imgRandResources.c -o imgRandResources.o`

`gcc -c imgRand.c -o imgRand.o`

`gcc -o imgRand.exe imgRand.o imgRandResources.o imgRandResources.h`

E para executar, basta utilizar o seguinte comando:

`imgRand.exe`

ou então o seguinte comando caso esteja em uma instancia do PowerShell:

`./imgRand.exe`

## Menu e opções

![Menu](https://user-images.githubusercontent.com/70992080/137572585-eb32173b-07e4-47c6-abfc-3a87d652f1d3.png)


Ao selecionar a **opção 1**, o programa solicitará as informações de largura e altura da imagem e exibirá uma mensagem informando que a geração foi bem sucedida.

![Option1](https://user-images.githubusercontent.com/70992080/137572635-123c4e10-1a19-4006-b577-93108c44da5e.png)

Esta é a imagem gerada:

![result1](https://user-images.githubusercontent.com/70992080/137572732-aacf42ad-f52f-45ed-81c0-8638f967543b.png)


Ao selecionar a **opção 2**, o programa solicitará as informações de largura e altura da imagem e exibirá uma mensagem informando que a geração foi bem sucedida.

![Option2](https://user-images.githubusercontent.com/70992080/137572646-5148372c-9fea-4a13-abf5-18ad2104b536.png)

Esta é a imagem gerada:

![result2](https://user-images.githubusercontent.com/70992080/137572733-b5d02dd7-b777-4ad3-948f-e43e503c311d.png)


Ao selecionar a **opção 3**, o programa solicitará as informações de largura, altura e espessura das linhas da imagem e exibirá uma mensagem informando que a geração foi bem sucedida.

![Option3](https://user-images.githubusercontent.com/70992080/137572647-a3979ba1-4dd8-4ef5-83ce-02fc2d09b189.png)

Esta é a imagem gerada:

![result3](https://user-images.githubusercontent.com/70992080/137572734-682db6da-449a-4034-a286-bee3d3257614.png)
