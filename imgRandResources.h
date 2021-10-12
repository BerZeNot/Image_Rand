#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define SUCCESS 0
#define INVALID_NULL_POINTER -1
#define INVALID_IMAGE_WIDTH -2
#define INVALID_IMAGE_HEIGTH -3
#define INVALID_IMAGE_LINEHEIGTH -4

// Função que insere o cabeçalho da imagem.pgm
//
// Params:
// FILE *fp: file pointer - Ponteiro para o arquivo de saída
// int img_width: largura da imagem de saída 
// int img_heigth: altura da imagem de saída
//
// Return: 
//   0 - Sucesso
//  -1 - Ponteiro para arquivo inválido
//  -2 - Largura da imagem inválida (deve ser maior que 0)
//  -3 - Altura da imagem inválida (deve ser maior que 0)
int img_put_Header(FILE *fp, int img_width, int img_heigth);


// Função que preenche a imagem com pontos em tons de cinza aleatórios
//
// Params:
// FILE *fp: file pointer - Ponteiro para o arquivo de saída
// int img_width: largura da imagem de saída 
// int img_heigth: altura da imagem de saída
//
// Return: 
//   0 - Sucesso
//  -1 - Ponteiro para arquivo inválido
//  -2 - Largura da imagem inválida (deve ser maior que 0)
//  -3 - Altura da imagem inválida (deve ser maior que 0)
int img_fill_with_Noise(FILE *fp, int img_width, int img_heigth);

// Função que preenche a imagem com linhas de espessura fixa (1px) e com 
// a largura da imagem (img_width);
//
// Params:
// FILE *fp: file pointer - Ponteiro para o arquivo de saída
// int img_width: largura da imagem de saída 
// int img_heigth: altura da imagem de saída
//
// Return: 
//   0 - Sucesso
//  -1 - Ponteiro para arquivo inválido
//  -2 - Largura da imagem inválida (deve ser maior que 0)
//  -3 - Altura da imagem inválida (deve ser maior que 0)
int img_fill_with_Lines(FILE *fp, int img_width, int img_heigth);

// Função que preenche a imagem com linhas de espessura definida por parâmetro 
// (line_width) e com a largura da imagem (img_width);
//
// Params:
// FILE *fp: file pointer - Ponteiro para o arquivo de saída
// int img_width: largura da imagem de saída 
// int img_heigth: altura da imagem de saída
// int line_width: espessura das linhas que preencherão a imagem
//
// Return: 
//   0 - Sucesso
//  -1 - Ponteiro para arquivo inválido
//  -2 - Largura da imagem inválida (deve ser maior que 0)
//  -3 - Altura da imagem inválida (deve ser maior que 0)
//  -4 - Espessura da linha inválida (deve ser maior que 0)
int img_fill_with_Bold_Lines(FILE *fp, int img_width, int img_heigth, int line_width);