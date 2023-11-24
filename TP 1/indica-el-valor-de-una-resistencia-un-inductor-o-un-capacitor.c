#include <stdio.h>
#include <math.h>
#define PI 3.14159265

void Bienvenido(void);
float Parte_Real_De_La_Impedancia();
float Parte_Imaginaria_De_La_Impedancia();
float Frecuencia_De_La_Impedancia();
float Calcular_El_Capacitor(float, float);
float Calacular_El_Inductor(float, float);

int main (void){
    Bienvenido();
    printf("Porfavor ingresa los numeros correspondientes de la impedancia");
    float Real=Parte_Real_De_La_Impedancia();
    float Imaginario=Parte_Imaginaria_De_La_Impedancia();
    float Frecuencia=Frecuencia_De_La_Impedancia();
    float Capacitor=Calcular_El_Capacitor(Imaginario, Frecuencia); 
    float Inductor=Calacular_El_Inductor(Frecuencia, Imaginario);
    if (Imaginario<0){
        printf("\nSe trata de un capacitor de: %fF\n", Capacitor);
        printf("El valor de la resistencia es de:%f Ohms", Real);
    }else if(Imaginario>0){
       printf("\nSe trata de un inductor de: %fH\n", Inductor); 
       printf("El valor de la resistencia es de:%f Ohms", Real);
    }else{
        printf("\nSe trata de un resistor de: %f ohms", Real);
    }

    
}

void Bienvenido(){
    printf("Esta calculadora recibe una impedancia (parte real y parte imaginaria) y la frecuencia de trabajo,\nindique el valor de la resistencia y el capacitor o inductor segun sea\n");
}
float Parte_Real_De_La_Impedancia(){
    float Real;
    printf("\n\nParte Real (Ohms): ");
    scanf("%f", &Real);
    return Real;
}
float Parte_Imaginaria_De_La_Impedancia(){
    float Imaginario;
    printf("Parte Imaginario (Ohms): ");
    scanf("%f", &Imaginario);
    return Imaginario;
}
float Frecuencia_De_La_Impedancia(){
    float Frecuencia;
    printf("Frecuencia de trabajo (Hz): ");
    scanf("%f", &Frecuencia);
    return Frecuencia;
}
float Calcular_El_Capacitor(float Parte_Imaginaria_De_La_Impedancia, float Frecuencia_De_La_Impedancia){
    float Capacitor;
    Capacitor=-1/(2*PI*Parte_Imaginaria_De_La_Impedancia*Frecuencia_De_La_Impedancia);
    return Capacitor;
}
float Calacular_El_Inductor(float Frecuencia, float Imaginario){
    float Inductor;
    Inductor=Imaginario/(2*PI*Frecuencia);
    return Inductor;
}
