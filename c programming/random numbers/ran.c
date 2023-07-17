#include<stdio.h>
#include<stdlib.h>
#include<time.h>

int main()
{
    printf("%d to %d",0,RAND_MAX);
    printf("\n------------\n");

    printf("%d\n",rand());
    printf("%d\n",rand()); // for same number generation again and again
    printf("%d\n",rand());
    printf("%d\n",rand());
    printf("%d\n",rand());
    printf("\n------------\n");

    srand(time(NULL));
    printf("%d\n",rand());
    printf("%d\n",rand()); // for different number generation
    printf("%d\n",rand());
    printf("%d\n",rand());
    printf("%d\n",rand());
    printf("\n------------\n");

    int number;                    // generating numbers for a given range
    int upper=100,lower=10;
    srand(time(NULL));
    for(int i=0;i<=9;i++)
    {
    number=(rand()%(upper-lower+1))+lower;
    printf("%d\n",number);
    }
}
