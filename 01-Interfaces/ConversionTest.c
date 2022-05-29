#include "Conversion.h"
#include <assert.h>
#include <math.h>
#include <stdio.h>
double const margen_Error = 1e-3;
int main(void){
    assert(fabs(celsius_A_Fahrenheit(15.0)-59.0)<margen_Error);
    assert(fabs(celsius_A_Fahrenheit(27.0)-80.6)<margen_Error);
    assert(fabs(celsius_A_Fahrenheit(323.0)-613.4)<margen_Error);
    assert(fabs(celsius_A_Fahrenheit(76.0)-168.8)<margen_Error);
    assert(fabs(celsius_A_Fahrenheit(-32.0)-(-25.6))<margen_Error);
    assert(fabs(fahrenheit_A_Celsius(-22.0)-(-30.0))<margen_Error);
    assert(fabs(fahrenheit_A_Celsius(0)-(-17.778))<margen_Error);
    assert(fabs(fahrenheit_A_Celsius(-22.0)-(-30.0))<margen_Error);
    assert(fabs(fahrenheit_A_Celsius(67.0)-19.444)<margen_Error);
    assert(fabs(fahrenheit_A_Celsius(100.0)-37.777)<margen_Error);
    
    return 0;
}
