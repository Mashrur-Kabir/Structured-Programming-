/*This program will convert a temperature in farenheit degree into
centigrade degree*/

#include <stdio.h>

    int main () {

    float ct_farenheit;
    float ct_centigrade;

    printf ("please input temperature of city in farenheit= ");
    scanf ("%f", &ct_farenheit);

    ct_centigrade=(ct_farenheit-32)*5/9;

    printf ("the temperature of the centigrade degree is= %.2f", ct_centigrade);

    return 0;

}
