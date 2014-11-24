/*
 * Modify the temperature conversion program to print a heading above the table .
 */
#include <stdio.h>

main()
{ 
    int fahr, celsius;
    int lower, upper, step;

    lower = 0;
    upper = 300;
    step = 20;

    fahr = lower;

    // add heading
    printf("fahr\tcelsius\n"); 
    while(fahr <= upper)
    {
        celsius = 5 * (fahr - 32) / 9;
        printf("%d\t\%d\n", fahr, celsius); 
        fahr = fahr + step;
    }
}

