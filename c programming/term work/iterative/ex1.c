
#include<stdio.h>
int maximum(int a[])
{
    int i=0;
    int max=0;
    for(i=0;i<10;i++)
    {
        if(a[i]>max)
            max=a[i];
    }
    return max;
}

int main()
{
    int maxi;
    int a[10];
    int i;
    printf("ENTER THE TEN NUMBERS");
    for(i=0;i<10;i++)
    {
        scanf("%d",&a[i]);
    }
    maxi=maximum(a);
    printf("%d",maxi);
}
