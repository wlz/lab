/*
 * Modify the temperature conversion program to print the table in reverse order, that is, from 300 degrees to 0 .
 */
#include <stdio.h>

main()
{ 
    int fahr, celsius;
    int lower, upper, step;

    lower = 0;
    upper = 300;
    step = 20;

    // add heading
    printf("fahr\tcelsius\n"); 
    for(fahr = upper; fahr >= lower; fahr -= step)
    {
        celsius = 5 * (fahr - 32) / 9;
        printf("%d\t\%d\n", fahr, celsius); 
    }
}

