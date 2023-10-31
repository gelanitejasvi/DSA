// double circular link list

#include<stdio.h>
#include<stdlib.h>
struct node{
    int data;
    struct node *next;
    struct node *prev;

};

struct node *head=NULL;
void display()
{
    struct node *ptr=head;
    if(head == NULL)
    printf("list is empty");
    else
    {
        while(ptr -> next != head)
        {
            printf("%d ",ptr -> data);
            ptr=ptr-> next;
        }
        printf("%d ",ptr -> data);
    }
    printf("\n");
}

void insertend(int val)
{
    struct node *ptr = head;
    struct node *temp=malloc(sizeof(struct node));
    temp-> data=val;
    temp-> prev=NULL;

    if(head == NULL){
        head = temp;
        temp -> next = head;
        return;
    }

    while(ptr -> next != head)
    ptr=ptr -> next;
    ptr -> next = temp;
    temp -> next = head;
    temp -> prev = ptr;
    return;
}

void insertfirst(int val)
{
    struct node *ptr=head;
     struct node *temp=malloc(sizeof(struct node));

       temp-> data=val;
    temp-> prev=NULL;

    if(head == NULL){
        head = temp;
        temp -> next = head;
        return;
    }

      while(ptr -> next != head)
    ptr=ptr -> next;
    ptr -> next = temp;
    temp -> prev = ptr;
    temp -> next = head;
    head=temp;
    return;
}

void insertmid(int val, int p)
{
      struct node *ptr=head;
     struct node *temp=malloc(sizeof(struct node));

       temp-> data=val;
    temp-> prev=NULL;

    while(ptr -> data != p)
    ptr = ptr -> next;
    temp -> next = ptr -> next;
    ptr -> next = temp;
    temp -> prev = ptr;
}

void deleteend()
{
    struct node *ptr = head;
    struct node *p;
   
    if(head -> next == head)
    {
        head= NULL;
        free(ptr);
        return;
    }

     while(ptr -> next != head){
        p = ptr;
        ptr = ptr -> next;
    }

    p -> next= head;
    head -> prev =p;
    free(ptr);
    return;
}

void deletefirst()
{
    struct node *ptr = head;
    struct node *p = head;
   
    if(head -> next == head)
    {
        head= NULL;
        free(ptr);
        return;
    }

     while(ptr -> next != head)
        ptr = ptr -> next; 
        ptr -> next = p -> next;
        p -> prev = ptr;
        head = p-> next;
        free(p);
        return;
}

void deletemid(int position)
{
     struct node *ptr = head;
    struct node *p;

     while(ptr -> data != position){
        p = ptr;
        ptr = ptr -> next;
    }

    p -> next = ptr -> next;
    ptr -> next =p;
    free(ptr);
    return;
}

int main(){
   
            int ch;
            printf("1.insertend :\n");
            printf("2. deleteend :\n");
            printf("3.display :\n");
            printf("4.insertfirst:\n");
            printf("5.deletefirst:\n");
            printf("6.insertmid:\n");
            printf("7.deletemid:\n");

           do{
                 printf("enter your ch:");
                scanf("%d",&ch);
           
                
                int data,position;
                switch(ch){
                    case 1:
                    printf("enter data:");
                    scanf("%d",&data);
                    insertend(data);
                    break;

                    case 2:
                    deleteend();
                    break;

                    case 3:
                    display();
                    break;

                    case 4:
                    printf("enter data:");
                    scanf("%d",&data);
                   insertfirst(data);
                    break;

                    case 5:
                    deletefirst();
                    break;  

                    case 6:
                    printf("enter data:");
                    scanf("%d",&data);
                   printf("enter position:");
                   scanf("%d",&position);
                   insertmid(data,position);
                    break;

                    case 7:
                    printf("enter position:");
                    scanf("%d",&position);
                    deletemid(position);
                    break;

                      default:
                    printf("wrong ch:");
                    break;
                }
            }

            while(ch!=0);
 }