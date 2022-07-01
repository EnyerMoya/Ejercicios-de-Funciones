#include <stdio.h>

//Programa que suma dos numeros

int suma();

main(){
	int x, y;
	printf("Ingrese un numero");
	scanf("%i", &x);
	printf("Ingrese otro numero");
	scanf("%i", &y);
	
	printf("El resultado es %d", suma(x,y));
	
	return 0;
}
	
int suma(int x,int y){
	
	int suma=x+y;
	
	suma = x + y;

	return suma;
}	
	
	
	


