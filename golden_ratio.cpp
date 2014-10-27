/*
mosix
golden ratio
*/
#include <stdio.h>
#include "calcgr.h"
#include "gr.h"

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

double calcgr(int n) {
 double v = 1.618033988749L;
 return v;
}

int main() {

	int precision;

	double result;

	fscanf()

	result = gr(precision);

	printf("Golden ratio, with %d precision = %lf\n", precision, result );

	return 0;
}

