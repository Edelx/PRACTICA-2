#include<stdio.h>		//Realizado por Perez Edilberto  el 11/03/2021

int main(){
	
	int arr[10]={1,2,3,4,5,6,7,8,9,10},i;			//Asignarles valor para tener algo que mostrar
	int *ptr+6;
	arr[1]=5; 
	// equivale a *( a r r +1)= 5;		//uso de for en caso especifico
	ptr= &arr[2];
	//for(i=0;i<10;i++){		
	printf("\n posicion [%p] ", ptr);		//imprimir cada caso, segun corresponda
	//}
	return 0;
}

