#include<stdio.h>
#include<conio.h>
int main()
{
    struct node
    {
        int data;
        struct node*next;
    };
    struct node*head,*newnode,*temp;
    head = 0;
    int choice;
    while(choice)
    {
        newnode=(struct node*)malloc(sizeof(struct node)); 
        printf("Enter the data:");
        scanf("%d",&newnode->data);
        if(head==0)
          {
              head=temp=newnode;
          }
        else//when we want to create more than one node//
          {
              temp->next=newnode;
              temp=newnode;
          }
        printf("Do You Want Continue(0,1)?");
        scanf("%d",&choice);
    }
temp=head;
while(temp!=0)
 {
     printf("%d",temp->data);
     temp=temp->next;
 }
 getch();
 return 0;
    
}