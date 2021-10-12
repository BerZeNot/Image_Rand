#include "imgRandResources.h"

int img_put_Header(FILE *fp, int img_width, int img_heigth){
    if(fp == NULL)
        return INVALID_NULL_POINTER;
    
    else if(img_width <= 0)
        return INVALID_IMAGE_WIDTH;
    
    else if(img_heigth <= 0)
        return INVALID_IMAGE_HEIGTH;
    
    else
	    fprintf(fp,"P2\n%d %d\n255\n", img_width, img_heigth);

	return SUCCESS;
}

int img_fill_with_Noise(FILE *fp, int img_width, int img_heigth){
    if(fp == NULL)
        return INVALID_NULL_POINTER;
    
    else if(img_width <= 0)
        return INVALID_IMAGE_WIDTH;
    
    else if(img_heigth <= 0)
        return INVALID_IMAGE_HEIGTH;

    else{
        srand(time(NULL));
	    double num;
	    for(int i = 0; i < img_heigth; i++){
		    for(int j = 0; j < img_width; j++){
                num = (rand()/(double)RAND_MAX)*255;
                fprintf(fp, "%.lf", num);
                if(num < 10)
                    fprintf(fp, "   ");
                else if(num < 100)
                    fprintf(fp, "  ");
                else if(num < 1000)
                    fprintf(fp, " ");
		    }
		    fprintf(fp, "\n");
	    }
    }

	return SUCCESS;
}


int img_fill_with_Lines(FILE *fp, int img_width, int img_heigth){
    if(fp == NULL)
        return INVALID_NULL_POINTER;
    
    else if(img_width <= 0)
        return INVALID_IMAGE_WIDTH;
    
    else if(img_heigth <= 0)
        return INVALID_IMAGE_HEIGTH;    
    
    else{
        srand(time(NULL));
        double num;
        for(int i = 0; i < img_heigth; i++){
            num = (rand()/(double)RAND_MAX)*255;
            for(int j = 0; j < img_width; j++){
                fprintf(fp, "%.lf", num);
                if(num < 10)
                    fprintf(fp, "   ");
                else if(num < 100)
                    fprintf(fp, "  ");
                else if(num < 1000)
                    fprintf(fp, " ");
            }
            fprintf(fp, "\n");
        }
    }
	return SUCCESS;
}


int img_fill_with_Bold_Lines(FILE *fp, int img_width, int img_heigth, int line_width){
    if(fp == NULL)
        return INVALID_NULL_POINTER;
    
    else if(img_width <= 0)
        return INVALID_IMAGE_WIDTH;
    
    else if(img_heigth <= 0)
        return INVALID_IMAGE_HEIGTH;
    else if(line_width <= 0)
        return INVALID_IMAGE_HEIGTH;
    
    else {
        srand(time(NULL));
        int cont = 0;
        double num;
        num = (rand()/(double)RAND_MAX)*255;
        for(int i = 0; i < img_heigth; i++){
            cont++;
            if(cont == line_width){
                num = (rand()/(double)RAND_MAX)*255;
                cont = 0;
            }
            
            for(int j = 0; j < img_width; j++){
                fprintf(fp, "%.lf", num);
                if(num < 10)
                    fprintf(fp, "   ");
                else if(num < 100)
                    fprintf(fp, "  ");
                else if(num < 1000)
                    fprintf(fp, " ");
            }
            fprintf(fp, "\n");
        }
    }
	return SUCCESS;
}