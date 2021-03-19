#include<stdio.h>			//Realizado por Perez Edilberto  el 11/03/2021
#include<stdlib.h>
int main (){
	int a;
	float b;		//declaracion de variables de cada tipo
	double c;
	char d;
	long e;
	short f;
	int *ip;		//declaracion de variables apuntador de cada tipo
	float *fp;
	double *db;
	char *cp;
	long *lp;
	short *st;
	ip=&a;		//asignar apuntador a variable
	fp=&b;	
	db=&c;
	cp=&d;
	lp=&e;
	st=&f;
	printf("\nLa direccion del apuntador entero es: %p", ip);		//mostrar direcciones de memoria de variable y apuntador
	printf("\nLa direccion de la variable entero es: %p", &a);
	printf("\n");
	printf("\nLa direccion del apuntador flotante es: %p", fp);
	printf("\nLa direccion de la variable flotante es: %p", &b);
	printf("\n");
	printf("\nLa direccion del apuntador doble es: %p", db);
	printf("\nLa direccion de la variable doble es: %p", &c);
	printf("\n");
	printf("\nLa direccion del apuntador caracter es: %p", cp);
	printf("\nLa direccion de la variable caracter es: %p", &d);
	printf("\n");
	printf("\nLa direccion del apuntador largo es: %p", lp);
	printf("\nLa direccion de la variable largo es: %p", &e);
	printf("\n");	
	printf("\nLa direccion del apuntador corto es: %p", st);
	printf("\nLa direccion de la variable entero es: %p", &f);	
	printf("\n");
	a=1;		//asignar valor a variables
	b=1.1;
	c=2.22222;
	d='e';
	e=200;
	f=-1212;
	printf("\nEl valor del apuntador entero es: %d", *ip);		//comprobar valor desde apuntador
	printf("\nEl valor del apuntador flotante es: %f", *fp);
	printf("\nEl valor del apuntador doble es: %f", *db);
	printf("\nEl valor del apuntador caracter es: %c", *cp);
	printf("\nEl valor del apuntador largo es: %ld", *lp);
	printf("\nEl valor del apuntador corto es: %d", *st);
	printf("\n");
	*ip=5;		//modificar valor desde apuntador
	*fp=3.21;
	*db=4.33333;
	*cp='a';
	*lp=500000;
	*st=50;
	printf("\n");
	printf("\nEl valor del la variable entero ahora es: %d", a);		//comprobar valor modificado desde variable
	printf("\nEl valor del variable flotante ahora es: %f", b);	
	printf("\nEl valor del variable doble  ahora es: %f", c);
	printf("\nEl valor del variable caracter ahora es: %c", d);
	printf("\nEl valor del variable largo ahora es: %ld", e);
	printf("\nEl valor del variable corto  ahora es: %d", f);
	return 0;
}
