#include <stdio.h>

int main() {
	float peso;
	float altura;
	
	do {
		printf("Ingrese su peso en kg:");
		scanf("%f", &peso);
		if (peso < 0) {
			printf("Error: el peso no puede ser negativo\n");
		}
	} while (peso < 0);
	
	do {
		printf("Ingrese la altura en metros");
		scanf("%f", &altura);
		if (altura < 0) {
			printf("Error: la altura no puede ser negativa\n");
		}
	} while (altura < 0);
	
	float imc = peso / (altura*2) ;
	
	printf("Su índice de masa corporal es:%f \n", imc );
	
	printf("Índice     | condición\n------------------------ \n<18.5      | Bajo peso\n18.5 a 24.9| Normal \n25.0 a 29.9| Sobrepeso \n>=30       | Obesidad ");
	
	// Indicar en que condicion se encuentra el usuario
	if (imc < 18.5) {
		printf("\nTu condicion es: Bajo peso\n");
	} else if (imc < 24.9) {
		printf("\nTu condicion es: Normal\n");
	} else if (imc < 29.9) {
		printf("\nTu condicion es: Sobrepeso\n");
	} else {
		printf("\nTu condicion es: Obesidad\n");
	}
	
	// TP LUGO ENZO TIZIANO, LEGAJO 431415
	//https://github.com/TizianooL/Informatica-1-2026-TP.git
	return 0;
}
