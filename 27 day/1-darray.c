/*Q55 (Nested Loops without Arrays/Strings)
Write a program to print all the prime numbers from 1 to n.*/
#include <stdio.h>
int main()
{
    int i, j, n, isPrime;

    printf("Enter a positive integer: ");
    scanf("%d", &n);

    printf("Prime numbers between 1 and %d are:\n", n);
    for(i = 2; i <= n; i++)
    {
        isPrime = 1; // Assume the number is prime
        for(j = 2; j <= i / 2; j++)
        {
            if(i % j == 0)
            {
                isPrime = 0; // Number is not prime
                break;
            }
        }
        if(isPrime)
        {
            printf("%d ", i);
        }
    }
    printf("\n");

    return 0;
}