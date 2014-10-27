/*
mosix
golden ratio
*/
#include <stdio.h>

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
