#include<stdio.h>
#include<stdlib.h>
#define SIZE 5

struct stack{

int item[SIZE];
int top;
};

int count=0;

typedef struct stack stk1;

int isfull(stk1 *s)
{
    if(s->top==(SIZE))
        return 1;
    else
        return 0;
}

int isEmpty(stk1 *s)
{
    if(s->top==0)
        return 1;
    else
        return 0;
}

int push(stk1 *s,int data)
{


    return s->item[s->top]=data;
}

int pop(stk1 *s)
{
    int data;
    s->top--;
    data=s->item[s->top];
    count--;
    return data;
}

void display(stk1 *s)
{
    if(s->top==0)
    {
        printf("stack is empty\n");
        return 0;
    }
    printf("Stack contains:\n");
    for(int i=s->top;i>=0;i--)
    {
        printf("%d \n",s->item[i]);
    }
}

void rad(FILE *fp,int n)
{
    for(int i=0;i<n;i++)
    {
        fprintf(fp,"%d\t",rand()%9);
    }
}

int peek(stk1 *s)
{
    return s->item[s->top];
}


int main()
{
    stk1 stk;
    stk.top=0;
    int x,y,z;
    int ch;
    FILE *fp,*fp1,*fp2,*fp3;
    fp=fopen("data.txt","w");
    fp1=fopen("pushdata.txt","w");
    fp2=fopen("stacklog.txt","w");
    fp3=fopen("popdata.txt","w");
    rad(fp,5);
    fclose(fp);
    fclose(fp1);
    fclose(fp2);
    fclose(fp3);
    fp=fopen("data.txt","r");
    fp1=fopen("pushdata.txt","a");
    fp2=fopen("stacklog.txt","a");
    fp3=fopen("popdata.txt","a");
    fprintf(fp3,"Popped Data: \n");
    fprintf(fp1,"Pushed Data: \n");
    fprintf(fp2,"Stack Operations: \n");
    while(1)
    {
    printf("1.Push 2.Pop 3.Display 4.Exit\n");
    scanf("%d",&ch);
    switch(ch)
    {
        case 1:
                if(isfull(&stk))
                {
                    printf("stack full.\n");
                    break;
                }
                fscanf(fp,"%d",&x);
                z=push(&stk,x);
                fprintf(fp1,"%d ",z);
                stk.top++;
                fprintf(fp2,"Push \n");
                printf("Data Pushed.\n");
                break;
        case 2: if(isEmpty(&stk))
                {
                    printf("Stack Empty.\n");
                    break;
                }
                y=pop(&stk);
                fclose(fp1);
                fp1=fopen("pushdata.txt","w");
               // fprintf(fp1,"Pushed Data: \n");
                /*for(int i=0;i<count;i++)
                {
                    fprintf(fp1,"%d ",stk.item[i]);
                }
                */
                fprintf(fp2,"Pop \n");
                fprintf(fp3,"%d ",y);
                printf("Data popped : %d \n",y);
                break;
        case 3: display(&stk);
                break;

        default:fclose(fp);
            exit(0);
    }
    }


}
