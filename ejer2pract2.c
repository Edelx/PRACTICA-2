#include<stdio.h>		//Realizado por Perez Edilberto  el 11/03/2021
#include<stdlib.h>

int main(){
	int *ip;		//Apuntadores de cada variable
	float *fp;
	char *cp;
	double *dp;
	long *lp;
	short *sp;
	
	ip=(int*) malloc(sizeof(int));		//Llamada malloc para tamaño correspondiente para cada apuntador
	fp=(float*) malloc(sizeof(float));
	cp=(char*) malloc(sizeof(char));
	dp=(double*) malloc(sizeof(double));
	lp=(long*) malloc(sizeof(long));
	sp=(short*) malloc(sizeof(short));
	
	printf("\nDireccion de memoria de la variable anonima entero:%p\n ", ip);		//mostrar direcciones de memoria
	printf("\nDireccion de memoria de la variable anonima flotante:%p\n ", fp);
	printf("\nDireccion de memoria de la variable anonima caracter:%p\n ", cp);
	printf("\nDireccion de memoria de la variable anonima doble:%p\n ", dp);
	printf("\nDireccion de memoria de la variable anonima largo:%p\n ", lp);
	printf("\nDireccion de memoria de la variable anonima corto:%p\n ", sp);
	printf("\n");
	*ip=5;		//asignarles valor al apuntador
	*fp=2.2;
	*cp='e';
	*dp=7;
	*lp=10000;
	*sp=15;
	printf("\n");
	printf("\ncontenido de memoria de la variable anonima entero:%d\n ", *ip);		//Mostrar contenido
	printf("\ncontenido de memoria de la variable anonima flotante:%f\n ", *fp);
	printf("\ncontenido de memoria de la variable anonima caracter:%c\n ", *cp);
	printf("\ncontenido de memoria de la variable anonima doble:%f\n ", *dp);
	printf("\ncontenido de memoria de la variable anonima largo:%ld\n ", *lp);
	printf("\ncontenido de memoria de la variable anonima corto:%d\n ", *sp);
	printf("\n");
	*ip=14;
	printf("\ncontenido de memoria de la variable anonima entero ahora es:%d\n ", *ip);		//modificar el contenido, en este caso solo uno
	free(ip);		//Liberar memoria para todos los apuntadores
	free(fp);
	free(cp);
	free(dp);		
	free(lp);
	free(sp);
	printf("\n");
	printf("\ncontenido de memoria de la variable anonima entero:%d\n ", *ip);		//comprobar el contenido ya liberado, en este caso solo uno
	
	return 0;
}
