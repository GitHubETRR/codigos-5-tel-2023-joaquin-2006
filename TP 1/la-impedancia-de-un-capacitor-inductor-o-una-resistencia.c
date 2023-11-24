#include <stdio.h>
#include <math.h>

#define PI 3.14159265

float Parte_Del_Modulo();
float Parte_De_La_Fase();
float Parte_De_La_Frecuencia();
float Calcular_La_Parte_Real(float Modulo_Z, float Fase_Z);
float Calcular_La_Parte_Imaginaria(float Modulo_Z, float Fase_Z);
float Calcular_Inductancia(float Imaginaria, float Frecuencia);
float Calcular_Capacitancia(float Imaginaria, float Frecuencia);
void Inductor_Texto(float Real, float Imaginaria, float Inductancia);
void Capacitor_Texto(float Real, float Imaginaria, float Capacitancia);
void Resistencia_Texto(float Real); 


int main(void){
printf("\ningresa los valores del voltaje:\n");
    float Modulo_v=Parte_Del_Modulo();
    float Fase_v=Parte_De_La_Fase();
    printf("\ningresa los valores de la corriente:\n");
    float Modulo_i=Parte_Del_Modulo();
    float Fase_i=Parte_De_La_Fase();
    float Frecuencia=Parte_De_La_Frecuencia();
    float Modulo_Z=Modulo_v/Modulo_i;
    float Fase_Z=Fase_v-Fase_i;
    float Real=Calcular_La_Parte_Real(Modulo_Z, Fase_Z);
    float Imaginaria=Calcular_La_Parte_Imaginaria(Modulo_Z, Fase_Z);
    if (Imaginaria>0){
        float Inductancia = Calcular_Inductancia(Imaginaria, Frecuencia);
        Inductor_Texto(Real, Imaginaria, Inductancia);
    }
    else if(Imaginaria<0){
        float Capacitor = Calcular_Capacitancia(Imaginaria, Frecuencia);
        Capacitor_Texto(Real, Imaginaria, Capacitor);
    }
    else{
        Resistencia_Texto(Real);
    }


}

float Parte_Del_Modulo(){
    float Modulo;
    printf("Valor del modulo que le corresponde: ");
    scanf("%f", &Modulo);
    return Modulo;
}
float Parte_De_La_Fase (){
    float Fase;
    printf("Valor de la fase que corresponde: ");
    scanf("%f", &Fase);
    return Fase;
}
float Parte_De_La_Frecuencia(){
    float Frecuencia;
    printf("Valor de la frecuencia que corresponde: ");
    scanf("%f", &Frecuencia);
    return Frecuencia;
}
float Calcular_La_Parte_Real(float Modulo_Z, float Fase_Z){
    float Real;
    Real=cos(Fase_Z*PI/180)*Modulo_Z;
    return Real;   
}
float Calcular_La_Parte_Imaginaria(float Modulo_Z, float Fase_Z){
    float Imaginaria;
    Imaginaria=sin(Fase_Z*PI/180)*Modulo_Z;
    return Imaginaria;  
}
float Calcular_Inductancia(float Imaginaria, float Frecuencia){
    float Inductancia;
    Imaginaria=Imaginaria/(2*PI*Frecuencia);
    return Inductancia; 
}
float Calcular_Capacitancia(float Imaginaria, float Frecuencia){
    float Capacitancia;
    Capacitancia=-1/(2*PI*Imaginaria*Frecuencia);
    return Capacitancia; 
}
    void Inductor_Texto(float Real, float Imaginaria, float Inductancia){
        printf("La impedancia es de %f + j%f, y el valor del inductor: %fH", Real, Imaginaria, Inductancia);
}
    void Capacitor_Texto(float Real, float Imaginaria, float Capacitor){
        printf("La impedancia es de %f + j%f, y el valor del capacitor: %fH", Real, Imaginaria, Capacitor);
}
    void Resistencia_Texto(float Real){
        printf("El valor de la resistencia es de%fohms", Real);
}
