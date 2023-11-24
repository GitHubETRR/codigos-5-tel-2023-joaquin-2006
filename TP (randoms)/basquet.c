#include <stdio.h>

int simples=0,dobles=0,triples=0,puntos_locales;
int puntos_visitantes;
int puntos;
int equipo;
int puntuacion;
float porcentajeSimple;
float porcentajeDobles;
float porcentajeTriple;

int main(void){
    printf("Bienvenidos al contador en Basquet de la liga nacional\n");
    printf("Equipo local: %d\n",puntos_locales);
    printf("Equipo visitante: %d\n",puntos_visitantes);
    printf("Anote el equipo que gano punto/s\n");
    do{
        printf("Equipo local (1) o equipo visitante (2)\n");
        do{
            scanf("%d", &equipo);
            if(equipo!=2 && equipo!=1 && equipo!=0){
                printf("Porfavor tiene que ser Equipo local (1) o equipo vistante (2)\n");
            }
        }while(equipo!=2 && equipo!=1 && equipo!=0);
        
        if(equipo!=0){
            do{
                printf("Anote 1 (punto simple) Anote 2 (doble) Anote 3 (triple)\n");
                scanf("%d",&puntuacion);
            }while (!(puntuacion==1 || puntuacion==2 || puntuacion==3));
            
            switch(puntuacion){
                case 1: 
                    simples++;
                    break;
                case 2: 
                    dobles++;
                    break;
                case 3:
                    triples++;
                    break;
            } 
            if(equipo==1){
                puntos_locales=puntuacion+puntos_locales;
            }else {
                puntos_visitantes=puntuacion+puntos_locales;  
            }
        }
    }while(equipo!=0);
    printf("puntos locales: %d\n", puntos_locales);
    printf("puntos visitantes:%d\n", puntos_visitantes);
    if (puntos_locales>puntos_visitantes){
         printf("¡Gano el equipo local!\n");
    }else if(puntos_locales<puntos_visitantes){
        printf("¡Gano el equipo visitante!\n");
    }else{
        printf("!Hay empate!\n");
    }
    puntos=simples+dobles+triples;
    if(puntos!=0){
        porcentajeSimple=((float)simples/puntos)*100;
        porcentajeDobles=((float)dobles/puntos)*100;
        porcentajeTriple=((float)triples/puntos)*100;
        printf("simples: %d\n", simples);
        printf("dobles: %d\n", dobles);
        printf("triples: %d\n", triples);
        printf("porcentajeSimple: %f\n", porcentajeSimple);
        printf("porcentajeDobles: %f\n", porcentajeDobles);
        printf("porcentajeTriple: %f\n", porcentajeTriple);
        return 0;
    }else if(puntos==0){
        printf("no hubo ningun tiro\n");
        printf("por lo que el porcentaje total es 0");
    }
}
