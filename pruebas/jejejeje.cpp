#include <stdio.h>
#include <stdlib.h>
#define TAM 100
void fun(char cad[TAM], int tam, FILE *pa);
int lectura (char cad[TAM]);
main () {
	FILE *ap;
	char val;
	char cadena[TAM];
	puts("Ingresa una cadena");
	gets(cadena);
	printf("\n");
	ap = fopen("cadena.txt", "w+");
	printf("La cadena resultante es:\n");
	val = lectura(cadena);
	fun(cadena, val, ap);
	fclose(ap);
	printf("\n");
	system("PAUSE");
}

void fun(char cad[TAM], int tam, FILE *pa) {
	int i;
	for(i = tam-1; i >= 0; i--) {
		printf("%c", cad[i]);
		fprintf(pa, "%c", cad[i]);
	}
}

int lectura(char cad[TAM]){
	int conta = 0;
	while(cad[conta] != '\0')
	conta++;
	return (conta);
}

