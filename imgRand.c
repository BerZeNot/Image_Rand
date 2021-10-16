#include <stdio.h>
#include "imgRandResources.h"

void show_options(){
	printf(" ___________________________________\n");
	printf("|             IMAGE RAND            |\n");
	printf("|___________________________________|\n");
	printf("| 1 - Imagem com ruído              |\n");
	printf("| 2 - Imagem com linhas             |\n");
	printf("| 3 - Imagem com linhas definidas   |\n");
	printf("| 0 - Sair                          |\n");
	printf("|___________________________________|\n");
}

void get_image_size(int *img_width, int *img_heigth){
	printf("<< Proporções da imagem >>\n");
	printf("Informe a largura da imagem(px): ");
	scanf("%d", img_width);
	printf("Informe a altura da imagem(px): ");
	scanf("%d", img_heigth);
}
void image_with_noise(){
	FILE *fp;
	fp = fopen("img_with_noise.pgm", "w");
	if(fp == NULL){
		printf("Falha ao criar a imagem!\n");
		exit(1);
	}

	int img_width, img_heigth;

	get_image_size(&img_width, &img_heigth);
	
	img_put_Header(fp, img_width, img_heigth);
	
	img_fill_with_Noise(fp, img_width, img_heigth);
	
	fclose(fp);

	printf("Done!\n");
}

void image_with_line(){
	FILE *fp;
	fp = fopen("img_with_lines.pgm", "w");
	if(fp == NULL){
		printf("Falha ao criar a imagem!\n");
		exit(1);
	}

	int img_width, img_heigth;

	get_image_size(&img_width, &img_heigth);
	
	img_put_Header(fp, img_width, img_heigth);
	
	img_fill_with_Lines(fp, img_width, img_heigth);
	
	fclose(fp);
	
	printf("Done!\n");
}

void image_with_thick_line(){
	FILE *fp;
	fp = fopen("img_with_bold_lines.pgm", "w");
	if(fp == NULL){
		printf("Falha ao criar a imagem!\n");
		exit(1);
	}

	int img_width, img_heigth, line_width;

	get_image_size(&img_width, &img_heigth);
	
	printf("Informe a espessura das linhas: ");
	scanf("%d", &line_width);

	img_put_Header(fp, img_width, img_heigth);
	
	img_fill_with_Bold_Lines(fp, img_width, img_heigth, line_width);
	
	fclose(fp);
	
	printf("Done!\n");

}
int menu(){
	int option;
	do{
		show_options();
		printf("\nEscolha uma opção: ");
		scanf("%d", &option);
		if(option < 0 || option > 3){
			printf("Opção inválida!\n");
			continue;
		} else {
			if(option == 1)
				image_with_noise();

			else if(option == 2)
				image_with_line();

			else if(option == 3)
				image_with_thick_line();

			else if(option == 0)
				exit(0);		
		}

	} while(option!=0);
	return 0;
}

int main(){
	menu();
	return 0;
}