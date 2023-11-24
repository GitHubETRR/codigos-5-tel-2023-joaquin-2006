#include <stdio.h>
#include <math.h>

#define PI 3.14159265

void Bienvenida (void);
float Numero_Real(void);
float Numero_Imag(void);
float Calcular_Modulo(float, float);
float Calcular_Fase(float, float);
void Resultados (float, float);

int main(void){
    Bienvenida();
    float Real=Numero_Real();
    float Imag=Numero_Imag();
    float Modulo=Calcular_Modulo(Real, Imag);
    float Fase=Calcular_Fase(Real, Imag);
    Resultados(Modulo, Fase);
}
void Bienvenida (void){
    printf("bienvenido a la calculadora que calcule el modulo de un número complejo y su angulo (fase) ingresa su parte real y su parte imaginaria.\n");
}
float Numero_Real(void){
    float Real;
    printf("Escribi el numero Real:");
    scanf("%f", &Real);
    return Real;
}
float Numero_Imag(void){
    float Imag;
    printf("Escribi el numero imag:");
    scanf("%f", &Imag);
    return Imag;
}
float Calcular_Modulo(float Real, float Imag){
    float Modulo;
    Modulo=sqrt(Real*Real+Imag*Imag);
    return Modulo;
}
float Calcular_Fase(float Real, float Imag){
    float Fase;
    Fase=atan2(Imag, Real)*180/PI;
    return Fase;
}
void Resultados (float Modulo, float Fase){
    printf("El modulo es: %f", Modulo);
    printf("La fase es: %f", Fase);
}