#include <stdio.h>
#include <math.h>

#define PI 3.14159265

void Bienvenida (void);
float Numero_Del_Modulo(void);
float Numero_De_La_Fase(void);
float Calcular_Parte_Real(float, float);
float Calcular_Parte_Imag(float, float);
void Resultados (float, float);

int main(void){
    Bienvenida();
    float Modulo=Numero_Del_Modulo();
    float Fase=Numero_De_La_Fase();
    float Parte_Real=Calcular_Parte_Real(Modulo, Fase);
    float Parte_Imaginaria=Calcular_Parte_Imag(Modulo, Fase);
    Resultados(Parte_Real, Parte_Imaginaria);
}
void Bienvenida (void){
    printf("Bienvenido a la calculadora a que devuelva el numero complejo en formato rectangular (su parte real + j su parte imaginaria)\n");
}
float Numero_Del_Modulo(void){
    float Modulo;
    printf("Escribi el modulo:");
    scanf("%f", &Modulo);
    return Modulo;
}
float Numero_De_La_Fase(void){
    float Fase;
    printf("Escribi el numero Fase:");
    scanf("%f", &Fase);
    return Fase;
}
float Calcular_Parte_Real(float Modulo, float Fase){
    float Parte_Real;
    Parte_Real=cos(Fase*PI/180)*Modulo;
    return Parte_Real;
}
float Calcular_Parte_Imag(float Modulo, float Fase){
    float Parte_Imaginario;
    Parte_Imaginario=sin(Fase*PI/180)*Modulo;
    return Parte_Imaginario;
}
void Resultados (float Parte_Real, float Parte_Imaginario){
    printf("La parte real es: %f", Parte_Real);
    printf("\nLa fase es: j %f", Parte_Imaginario);
}
