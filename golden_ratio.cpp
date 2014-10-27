/*
mosix
golden ratio
*/
#include <stdio.h>
#include "calcgr.h"
#include "gr.h"

/* Fucntion that reads variables from a file*/
void readFromFile(int &a, &b, char fileName[]){
	FILE *file;
	file = fopen(fileName, "rt");
	if (fp == NULL){
		perror("Error while opening the file.\n");
		exit(EXIT_FAILURE);
	}
	fscanf(file, "%d", &a);
	fscanf(file,"%d", &b);
	fclose(file);
} 

/*Fucntion that computes the ration number with N precision*/
double calcgr(int n) {
 double v = 1.618033988749L;
 return v;
}

/* The core part of the application */

int main() {

	//declare variables
	int precision;
	double result;

	//read precision value
	fscanf();

	//calculate the golden ration number having N precision
	result = gr(precision);

	//display the results in a formatted way
	printf("Golden ratio, with %d precision = %lf\n", precision, result );

	return 0;
}

