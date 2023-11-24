#include <stdio.h>
void Mayusculas(char[]);

int main(void){
    char str[100];
    printf("Ingresa una oracion de no mas de 100 palabras: ");
    gets(str);
    Mayusculas(str);

    printf("%s", str);
}

void Mayusculas(char str[]){
    for(int i=0; str[i]!=0; i++){
        if(str[i]>=97 && str[i]<=122){
            str[i]-=32;
        }
    }
}