#include<stdio.h>
int main()
{
    float distance,meter,feet,inches,cm;
    printf("Enter the Distance betrwwn two cities:");
    scanf("%f",&distance);
    meter=distance*1000;
    feet=distance*3280.83;
    inches=distance*39370.1;
    cm=distance*100000;
    printf("Distance in meter is :%fm\n",meter);
    printf("Distance in feet is :%fft\n",feet);
    printf("Distance in inches is :%fin\n",inches);
    printf("Distance in centimeter is :%fcm",cm);
    return 0;
}