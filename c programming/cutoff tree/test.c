#include<stdio.h>
#include<stdlib.h>
#include<time.h>

typedef struct node
{
 struct node* left;
 int marks;
 struct node* right;

}*cuttoff;

struct node* create(int data)
{
    struct node* new_node = (struct node*) malloc (sizeof(struct node));
    if (new_node == NULL)
    {
        printf("\nMemory can't be allocated\n");
        return NULL;
    }
    new_node->marks = marks;
    new_node->left = NULL;
    new_node->right = NULL;
    return new_node;
}


