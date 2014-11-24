/*
 *  Write a program to print the corresponding Celsius to Fahrenheit table .
 */
#include <stdio.h>

main()
{ 
    int fahr, celsius;
    int lower, upper, step;

    lower = 0;
    upper = 300;
    step = 20;

    celsius = lower;

    // add heading
    printf("celsius\tfahr\n"); 
    while(celsius <= upper)
    {
        fahr = 9 * celsius / 5 + 32;
        printf("%d\t\%d\n", celsius, fahr); 
        celsius = celsius + step;
    }
}

