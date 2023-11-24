#include <stdio.h>
#define Cantidades 30

char stringcompare(char[], char[]);
void Ingresar_strings(char[], char[]);

int main (void){
    char str1[Cantidades];
    char str2[Cantidades];
    Ingresar_strings(str1, str2);

    char igual=stringcompare(str1, str2);
    if(0==igual){
        printf("Ambas oraciones son iguales");
    }
    else{
        printf("Ambas oraciones son diferentes");
    }
}
void Ingresar_strings(char str1[], char str2[]){
    printf("El primer string: ");
    gets(str1);
    printf("El segundo string: ");
    gets(str2);
}
char stringcompare(char str1[], char str2[]){
    int idx=0;
    while(str1[idx]!=0 || str2[idx]!=0){
        if(str1[idx]!=str2[idx]){
            return 1;
        }
        idx++;
    }
    return 0;
}