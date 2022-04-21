#include<stdio.h>

void leer_letras(char *letras){
   printf("Que Palabra deseas escribir = ");
   scanf("%s",letras);
}
void revisar_letras (char *letras){
    int i=0;
    for(i=0;i<10;i++){
        printf("\tEn la posicion %d esta la letra  %c  \n",i,letras[i]);
    }
}
void revisar_vocales_letras (char *letras){
    int i=0,contador=0;
    for(i=0;i<10;i++){
        if(letras[i]=='a' || letras[i]=='e' || letras[i]=='i' || letras[i]=='o' || letras[i]=='u'){
            contador++;
        }
    }
    printf("\n\t**la palabra contiene %d vocal (es)** \n",contador);
}
void revisar_consonantes_letras (char *letras){
    int i=0,contador=0;
    for(i=0;i<10;i++){
        if(letras[i]!='a' && letras[i]!='e' && letras[i]!='i' && letras[i]!='o' && letras[i]!='u'){
            contador++;
        }
    }
    printf("\n\t**el total de consonates es=%d (es)** \n",contador);
}
main(){
    char palabra[10];
    printf("\n\t\t\t Programa - que le una palabra - \n\n");
    printf("\tescribe hasta 10 letras en minusculas y despues dar ENTER - \n\n");
    printf("\t    el programa te dira en que posicion del arrego \n\n");
    printf("\tse encuentra cada letra e identificara cuantas vocales existen \n\n");
    leer_letras(&palabra);
    printf("\n\tLa palabra escrita es %s \n\n",palabra);
    revisar_letras(&palabra);
    revisar_vocales_letras(&palabra);
    revisar_consonantes_letras(&palabra);
    //Esta es una forma de hacelo, la forma corta
    strrev(palabra);
    printf("\nLa palabra invertida es: %s \t\t", palabra);
    //esta es la forma larga de hacerlo, usa la que mejor te convenga o la que te pida el profe
    char c;
    int l, i;
    printf("\nLa palabra invertida es: ");
    for(l = 0; palabra[l]; l++);
    	for(i = 0; i < l; i++) {
    		c = palabra[i];    		
    		printf("%c", c);
		}
}
