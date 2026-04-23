#include<stdio.h>

struct node
{
    int data;
    struct node *next;    // Self Referential structure

};
int main()
{
    struct node obj;

    printf("%ld\n",sizeof(obj));
    
    return 0;
}