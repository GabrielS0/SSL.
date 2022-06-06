#include <stdio.h>
#include "Conversion.h"


double const (*Cels_Fahr) (double) = celsius_A_Fahrenheit;
double const (*Fahr_Cels) (double) = fahrenheit_A_Celsius;

void PrintTablas(double ,double , double);
void PrintTablaCelcius(double ,double , double);
void PrintTablaFahrenheit(double ,double , double);
void PrintFilas(double ,double , double,double (*funcion)(double));
void PrintFila(double , double (*funcion)(double));


int main(void){
    double Step=5;
    double Max=100; 
    double Min=0;
    printf("Ingrese el Limite Inferior:\n");
    scanf("%lf", &Min);
    printf("Ingrese el Limite Superior:\n");
    scanf("%lf", &Max);
    printf("Ingrese el Incremento:\n");
    scanf("%lf", &Step);  //Nose debido a que no me toma los valores que ingreso pero estaria implentedao
    //si lo hiciese, por mientras le dejo valores predefinidos
    PrintTablas(Min,Max,Step);
    return 0;
}

void PrintTablas(double Min, double Max, double Step ){
    printf("Conversion de Celcius a Fahrenheits\n");
    PrintTablaCelcius(Min,Max,Step);
    printf("Conversion de Fahrenheits a Celcius\n");
    PrintTablaFahrenheit(Min,Max,Step);
}

void PrintTablaCelcius(double Min, double Max, double Step ){
    printf(" ---------------\n");
    printf("|  Cels |  Fahr |\n");
    PrintFilas(Min,Max,Step,Cels_Fahr);
    printf(" ---------------\n");
}

void PrintTablaFahrenheit(double Min, double Max, double Step ){
    
    printf(" ---------------\n");
    printf("|  Fahr |  Cels |\n");
    PrintFilas(Min,Max,Step,Fahr_Cels);
    printf(" ---------------\n");
}

void PrintFilas(double Min,double Max, double Step,double (*funcion)(double)){
    double valor;
    for(valor = Min; valor <= Max; valor+=Step){
        PrintFila(valor,*funcion);
    }
}

void PrintFila(double valor, double (*funcion)(double)){
    printf("|%7.2f|%7.2f|\n",valor, funcion (valor));
}