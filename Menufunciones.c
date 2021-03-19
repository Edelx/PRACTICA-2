#include<stdio.h>		//Realizado por Perez Edilberto  el 18/03/2021 
#include<stdlib.h>	
void suma(float *a, float *b, float *c);		//prototipos de funcion
void resta(float *a, float *b, float *c);
void multiplicacion(float *a, float *b, float *c);
void division(float *a, float *b, float *c);
float a, b, c; /*variables globales*/
int main() /*función principal*/
{
 	int menu, res;
 	do
 		printf("\nSeleccione una opcion\n");
 		printf("\n1 -suma\n");
 		printf("\n2 -resta\n");
 		printf("\n3 -multiplicacion\n");
 		printf("\n4 -division\n\n");
  		scanf("%d",&menu);		//menu para cada funcion y operacion
 			switch(menu){
 				case 1:
 					printf("\nIngrese dos valores\n");
 					scanf("%f %f",&a ,&b);
 				suma(&a, &b, &c);	//mandar a llamar desde referencia
				 break;
				 case 2:
				 		printf("\nIngrese dos valores\n");
 						scanf("%f %f",&a ,&b);
 				resta(&a, &b, &c);
				 break;
 				case 3:
 						printf("\nIngrese dos valores\n");
 						scanf("%f %f",&a ,&b);
 				multiplicacion(&a, &b, &c);
				 break;
				 case 4:
				 		printf("\nIngrese dos valores\n");
 						scanf("%f %f",&a ,&b);
 				division(&a, &b, &c);
 				break;
				default:
 				printf("\nOpcion no valida\n");
 				break;
 			}
			printf("\n\nIngrese 1 si quieres ver el menu nuevamente\n");	//repetir menu para otra opcion
			scanf("%d",&res);		
		}while(res==1);
return 0;
}
void suma(float *a, float *b, float *c) /*función secundaria suma*/
{
 	*c= *a + *b;
	printf("\n%f+%f=%f", *a, *b, *c);
}
void resta(float *a, float *b, float *c) /*función secundaria resta*/
{
	*c= *a- *b;
 	printf("\n%f-%f=%f", *a, *b, *c);
}
void multiplicacion(float *a, float *b, float *c) /*función secundaria multiplicacion*/
{
 	*c=*a * *b;
	printf("\n%f*%f=%f", *a, *b, *c);
}
void division(float *a, float *b, float *c) /*función secundaria division*/
{
 	if(b!=0){		//comprobar que no sea inderterminacion
 		*c=*a / *b;
 		printf("\n%f/%f=%f", *a, *b, *c);
 }
 	else
 	printf("\nError!!!\n");
}
