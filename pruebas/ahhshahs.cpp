#include <stdlib.h>
#include <stdio.h>
#include <math.h>
#include <string.h>
#include <ctype.h>

int main() {
	
	int op;
	int op2;
	int div;
	fflush(stdin);
	scanf("%i", &op);	
	div = op/op;
	if((isdigit(op))){	
	printf("No mames, metiste un numero");
	return 0;
	} else {
	printf("No mames, metiste una letra");
		return 1;
	}
	
	return 0;
}
