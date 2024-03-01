#include<stdio.h>
#include<stdlib.h>
struct node
{
    int data;
    struct node *next;
};
int main()
{
    int i,n,item;
    struct node *temp,*new,*head,*tail;
    printf("enter the number of nodes");
    scanf("%d",&n);
    printf("enter the value of head node");
    scanf("%d",&item);
    new=(struct node *)malloc(sizeof(struct node));
    new->data=item;
    new->next=NULL;
    head=new;
    temp= head;
    for(i=1;i<n;i++)
   {
     printf("enter the value of the next node\n");
     scanf("%d",&item);
     new=(struct node*)malloc(sizeof(struct node));
     new->data=item;
     new->next=NULL;
     temp->next=new;
     temp=temp->next;
   }
    tail=temp;
   temp=head;
   while(temp->next!=tail)
   {
    temp= temp-> next; 
   }
   temp->next=NULL;
   temp=head;
   while(temp!=NULL)
   {
   printf("%d",temp->data);
   temp=temp->next;
   }
 return 0;
}
