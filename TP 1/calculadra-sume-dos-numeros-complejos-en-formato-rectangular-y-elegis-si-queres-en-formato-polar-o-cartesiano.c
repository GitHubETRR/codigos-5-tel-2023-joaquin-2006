#include <stdio.h>
#include <math.h>

void Bienvenida(void);
float Numero_Real();
float Numero_Imaginario();
int Seleccion_De_Formato();
float Calcular_Modulo(float Real_Total, float Imaginario_Total);
float Calcular_Fase(float Real_Total, float Imaginario_Total);


int main (void){
    Bienvenida();
    printf("Escriba los numeros del primer numero que corresponda\n");
    float Real_1=Numero_Real();
    float Imaginario_1=Numero_Imaginario();
    printf("Escriba los numeros del segundo numero que corresponda\n");
    float Real_2=Numero_Real();
    float Imaginario_2=Numero_Imaginario();
    float Real_Total=Real_1+Real_2;
    float Imaginario_Total=Imaginario_1+Imaginario_2;
    int Formato=Seleccion_De_Formato();
    float Modulo=Calcular_Modulo(Real_Total, Imaginario_Total);
    float Fase=Calcular_Fase(Real_Total, Imaginario_Total);
    if (Formato==0)
    {
        printf("Cartesiano:%f+j %f", Real_Total, Imaginario_Total);
    }else{
    printf("Polar (Modulo): %f", Modulo);
    printf("Polar (Angulo): %f", Fase);
    }
}

void Bienvenida (){
    printf("Esta calculadra sume dos numeros complejos en formato rectangular y elegis si queres en formato Polar o Cartesiano\n");
}
float Numero_Real (){
    float Numero_Real;
    printf("Escribi el numero Real:");
    scanf("%f", &Numero_Real);
    return Numero_Real;
}
float Numero_Imaginario () {
    float Numero_Imaginario;
    printf("escribi el numero Imaginario:");
    scanf("%f", &Numero_Imaginario);
    return Numero_Imaginario;
}
int Seleccion_De_Formato (){
    int Formato;
    printf("Escriba 0 Para ver en formato cartesiano, o 1 para ver en formato polar:");
    scanf("%f", &Formato);
    return Formato;
}
float Calcular_Modulo(float Real_Total, float Imaginario_Total){
    float Modulo;
    Modulo=sqrt(pow(Real_Total, 2) + pow(Imaginario_Total, 2));
    return Modulo;
}
float Calcular_Fase(float Real_Total, float Imaginario_Total){
    float Fase;
    Fase=atan2(Imaginario_Total, Real_Total);
    return Fase;
}
