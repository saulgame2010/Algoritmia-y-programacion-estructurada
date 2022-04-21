#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() {
	
	system("color 0d");
	int no, i;
	FILE * archivo;	
	printf("Cuantos registros quieres guardar?\n");	
	scanf("%i", &no);
	
	struct persona{
		char nombre [100];
		char edad [3];
		char numero [11];
		char direccion [100];
		char email [100];		
	}personas[no];
	
	struct persona2{
		char nombre [100];
		char edad [3];
		char numero [11];
		char direccion [100];
		char email [100];
	}personas2[no];
	
	
	for(i = 0; i < no; i++){
		printf("No. %d\n", i+1);
		puts("Digite su nombre");
		fflush(stdin);
		gets(personas[i].nombre);				
		puts("Digite su edad");	
		fflush(stdin);	
		gets(personas[i].edad);				
		puts("Digite su numero celular");
		fflush(stdin);		
		gets(personas[i].numero);				
		puts("Digite su direccion");		
		fflush(stdin);
		gets(personas[i].direccion);				
		puts("Digite su email");		
		fflush(stdin);
		gets(personas[i].email);				
	}		
	
	if((archivo = fopen("agenda.txt", "wb")) == NULL) {
		fprintf(stderr, "Error al cargar el archivo");
		exit(1);
	}
	if(fwrite(personas, sizeof(struct persona), no, archivo) != no) {
		fprintf(stderr, "Error al escribir el archivo");
		exit(1);
	}
	fclose(archivo);
	
	if((archivo = fopen("agenda.txt", "rb")) == NULL) {
		fprintf(stderr, "Error al abrir el archivo");
		exit(1);		
	}
	if(fread(personas2, sizeof(struct persona2), no, archivo) != no) {
		fprintf(stderr, "Error al leer el archivo");
		exit(1);
	}
	fclose(archivo);
	
	for(i = 0; i < no; i++) {
		printf("\n\nRegistro No. %d\n", i+1);
		printf("Nombre: %s, %s\n", personas[i].nombre, personas2[i].nombre);		
		printf("Edad: %s, %s\n", personas[i].edad, personas2[i].edad);
		printf("Numero: %s, %s\n", personas[i].numero, personas2[i].numero);
		printf("Direccion: %s, %s\n", personas[i].direccion, personas2[i].direccion);
		printf("Email: %s, %s\n", personas[i].email, personas2[i].email);
	}
	
	return 0;
}
