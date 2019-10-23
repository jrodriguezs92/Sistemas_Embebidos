/**
 * Application to test mymath lib.
 * 
 * Instituto Tecnológico de Costa Rica
 * Computer Engineering
 * CE5303: Embedded Systems Introduction
 * 
 * Author: Jeremy Rodriguez Solorzano
 * Date: 07/08/2019
 */

#include <stdio.h>
#include <mymath.h>

int main () {
    double resultSuma = sum(4,5);
    double resultResta = subs(5,4);
    double resultMult = mult(5,4);
    double resultDiv = div(4,2);
    double resultSqrt = sqroot(9);

    printf("Suma: 5+4 = %lf \n", resultSuma);
    printf("Resta: 5-4 = %lf \n", resultResta);
    printf("Multiplicacion: 5*4 = %lf \n", resultMult);
    printf("Division: 4/2 = %lf \n", resultDiv);
    printf("Raiz cuadrada: sqrt(9) = %lf \n", resultSqrt);
}
