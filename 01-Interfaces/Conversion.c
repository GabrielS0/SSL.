#include "Conversion.h"
double const Const_1=32.0;
double const Const_2=1.8;
double celsius_A_Fahrenheit (double cels){
return (cels*Const_2)+Const_1;
}

double fahrenheit_A_Celsius (double fahr){
return (fahr-Const_1)/Const_2;
}