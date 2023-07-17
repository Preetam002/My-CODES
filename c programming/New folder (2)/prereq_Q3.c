#include <stdio.h>
#include <stdlib.h>
#include <time.h>
void read(FILE *fp,int arr[],int x)
{
    for(int i=0;i<x;i++)
    {
        fscanf(fp,"%d",&arr[i]);
    }
}
void selection_sort(int arr[],int x)
{
    int i,j,min;
    for(i=0;i<x-1;i++)
    {
        min=i;
        for(j=i+1;j<x;j++)        
        {                        
            if(arr[j]<arr[min])   
                min=j;            
        }                         
        if(min!=i)                
        {                         
            int temp=arr[min];    
            arr[min]=arr[i];
            arr[i]=temp;
        }
    }
}
void bubble_sort(int arr[],int x)
{
    for (int i=0;i<x-1;i++)
    {
        for (int j=0;j<x-i-1;j++)   
        {                           
            if (arr[j]>arr[j+1])    
            {                       
                int temp=arr[j];    
                arr[j]=arr[j+1];    
                arr[j+1]=temp;
            }
        }
    }
}
void store(FILE *fp,int arr[],int x)
{
    for(int i=0;i<x;i++)
    {
        fprintf(fp,"%d ",arr[i]);
    }
}
int main()
{
    time_t t1,t2,t3; 
    FILE *fp; 
    fp=fopen("input.txt","r");
    if(fp==NULL) 
    {
        printf("\nFile not created\n"); 
        exit(0);                        
    }
    int x;
    printf("\nEnter the number to be sorted: ");
    scanf("%d",&x);
    int arr[x],arr1[x];
    read(fp,arr,x);  
    read(fp,arr1,x);
    fclose(fp); 
    t1=time(NULL);    
    selection_sort(arr,x); 
    t2=time(NULL); 
    bubble_sort(arr1,x); 
    t3=time(NULL);     
    printf("\nTime taken to sort using selection sort : %ld",t2-t1);  
    printf("\nTime taken to sort using bubble sort : %ld",t3-t2);          
    return 0;
}
