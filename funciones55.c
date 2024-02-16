/* Este codigo ha sido generado por el modulo psexport 20230904-w32 de PSeInt.
Es posible que el codigo generado no sea completamente correcto. Si encuentra
errores por favor reportelos en el foro (http://pseint.sourceforge.net). */

#include<stdio.h>

/* Para las variables que no se pudo determinar el tipo se utiliza la constante
   SIN_TIPO. El usuario debe reemplazar sus ocurrencias por el tipo adecuado
   (usualmente int,float,bool, o char[]). */
#define SIN_TIPO float

// Declaraciones adelantadas de las funciones
float calcularareatriangulo(float base, float altura);
float calcularareacuadrado(float lado);
float calcularareacirculo(float radio);

/* Se declara una funcion, se definen los argumentos y la operacion  */
/* a retomar */
float calcularareatriangulo(float base, float altura) {
	float area;
	area = (base*altura)/2;
	return area;
}

float calcularareacuadrado(float lado) {
	float areadelcuadrado;
	areadelcuadrado = (lado*lado);
	return areadelcuadrado;
}

float calcularareacirculo(float radio) {
	float areadelcirculo;
	areadelcirculo = (3.1416*radio)*2;
	return areadelcirculo;
}

int main() {
	SIN_TIPO area;
	SIN_TIPO areadelcirculo;
	SIN_TIPO areadelcuadrado;
	/* vamos a llamar a nuestra funcion (invovar) */
	area = calcularareatriangulo(5, 8);
	printf("El area del triangulo es: %f\n", area);
	areadelcuadrado = calcularareacuadrado(6);
	printf("El area del cuadrado es: %f\n", areadelcuadrado);
	areadelcirculo = calcularareacirculo(10);
	printf("El area del circulo es: %f\n", areadelcirculo);
	return 0;
}


