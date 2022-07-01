#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/*
cadenas de caracteres
como argumentos
*/

#define x 30

void vuelta (char inicad[x],char fincad[x]);
void unir (char cad0[x],char cad1[x],char cad2[x]);

int main()
{
char cad0[x],cad1[x],cad2[x],cadal[x];

	printf ("Introduzca 1 cadena de caracteres \n");
		gets(cad1);
	printf ("Introduzca 1 cadena de caracteres \n");
		gets(cad2);
		
	unir(cad0,cad1,cad2);
	vuelta (cad0,cadal);
	
	printf ("la union de las cadenas es: %s\n", cad0);
	
	printf ("la cadena invertida es: %s\n", cadal);
		
	
	return 0;
} 

void unir (char cad0[x],char cad1[x],char cad2[x])
{
	strcpy (cad0,cad1);
	strcat(cad0,cad2);	
}

void vuelta (char inicad[x],char fincad[x])
{
	int cantidad,k;
	cantidad=strlen(inicad);
	k=cantidad-1;
	for (int i=0;i<cantidad;i++)
	{
	fincad[i]=inicad[k];
	k--;	
	}
	
	fincad[cantidad]='\0';
	return;
}
