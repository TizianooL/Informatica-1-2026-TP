#include <stdio.h>

int main() {
	float peso;
	float altura;
	
	printf("Ingrese su peso en kg:");
	scanf("%f", &peso);
	
	printf("Ingrese la altura en metros");
	scanf("%f", &altura);
	
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
