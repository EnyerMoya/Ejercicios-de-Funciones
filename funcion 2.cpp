#include <stdio.h>
// programa que reciba como argumento un conjunto de
//numeros. Calcular la media mediante una funcion.

int media(float x, float y){ //funcion
	float media;
	printf("Ingrese un numero\n");
	scanf("%f", &x);
	printf("Ingrese un numero\n");
	scanf("%f", &y);
	media=(x+y)/2;
	printf("la media es %.1f\n", media);
	
}

main(){
	
	media(5,3);
	return 0;
}



