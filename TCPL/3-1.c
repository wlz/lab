/*
 *  Our binary search makes two tests inside the loop, when one would suffice (at the price of more tests outside) . Write a version with only one test inside the loop and measure the difference in run time .
 */

#include <stdio.h>

int data[] = { 1, 2, 4, 6, 7, 8, 9 };

int binsearch(int x, int v[], int n); 
int main()
{
    printf("%d\n", binsearch(3, data, 7)); 
    printf("%d\n", binsearch(1, data, 7)); 
    printf("%d\n", binsearch(7, data, 7)); 

    return 0;
}

int binsearch(int x, int v[], int n) 
{
    int lo = 0, hi = n - 1;
    int mid;

    while(lo < hi)
    {
        mid = (lo + hi) / 2;
        if(x <= v[mid])
            hi = mid;
        else
            lo = mid + 1;
    }

    return (x == v[lo]) ? lo : -1;
}
