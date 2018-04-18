
class CalculoIMC{
	int main (){
		int peso;
		int altura;
		int imc;
		int alturac;
		
		peso = scanf(&d, "Ingrese peso: ");
		altura = scanf(&d, "Ingrese altura: ");	
		
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
	
};
