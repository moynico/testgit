#include <stdlib.h>
#include <stdio.h>

	int main (){
		int peso;
		int altura;
		int imc;
		int alturac;
		
		printf("Ingrese Peso: ");
		scanf("%d",&peso);
		printf("Ingrese Altura: ");
		scanf("%d",&altura);	
		
		alturac = altura*altura;
		imc = peso/alturac;
		
		if(imc>30){
			printf("Es obeso/a");
			}
		if (imc>25&&imc<30){
			printf("Tiene sobrepeso");
		}
		if(imc<25){
			printf("Peso Normal");
		}
	}	
