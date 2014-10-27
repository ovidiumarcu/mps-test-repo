/*
mosix
golden ratio
*/
#include <stdio.h>
#include "calcgr.h"
#include "gr.h"

/* implementation of the function defined in file 'calcgr.h' */

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
