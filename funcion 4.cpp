/*Calcular ecuaciones*/
#include<string.h>
#include<stdio.h>
#include <math.h>
float ecuacion (float a,float b, float c){
	float p,q,s,r; 
	s= pow(b,2)-(4*a*c);
	
	if(s==0){
		p=(-b)/(2*a);
		printf ("x es igual a x=%.4f\n", a);
	}
	else{
		if(s<0){
			printf("Esta funcion no tiene solucion\n");
		}
		else{
			a=((-b)*sqrt(s))/(2*a);
			b=((-b)*sqrt(s))/(2*a);
			printf("Los valores de x son:  %.4f\n", p,q);
		}
	}

}

main (){
	float a,b,c;
	printf("Ingrese para calcular su ecuacion\n");
	scanf("%f",&a);
	printf("Ingrese para calcular su ecuacion\n");
	scanf("%f",&b);
	printf("Ingrese para calcular su ecuacion\n");
	scanf("%f",&c);
	ecuacion(a,b,c);
	return 0;
}
