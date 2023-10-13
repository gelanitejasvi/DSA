// LIFO / FIFO

#include <stdio.h>
#define n 5
int a[n], top = -1;
int display()
{
    if (top < 0)
    {
        printf("array is empty......");
    }
    else
    {
        for (int i = 0; i <= top; i++)
         printf("%d", a[i]);
    }
}

int insertend(int val)
{
    if (top >= n - 1)
    {
        printf("stack is overflow...\n");
    }
    else
    {
        top++;
        a[top] = val;
    }
}

int insertfirst(int val)
{
    if (top >= n - 1)
    {
        printf("stack is overflow...\n");
    }
    else
    {
        top++;
        for (int i = top; i >= 0; i--)
        {
            a[i] = a[i - 1];
        }
        a[0] = val;
    }
}

int delete()
{
    if (top > n - 1)
    {
        printf("stack is overflow...\n");
    }
    else
    {
        top--;
    }
}

int deletefirst()
{
    if (top > n - 1)
    {
        printf("stack is overflow...\n");
    }
    else
    {
        for (int i =0; i <top; i++)
        {
            a[i]=a[i+1];
        }
        top--;
    }
}
int main()
{
    int ch;
    printf("1.display:");
    printf("2.insertend:");
    printf("3.insertfirst:");
    printf("4.delete:");
    printf("4.deletefirst:");
    printf("\n thank you....");

    do
    {
        printf("\n enter your choice:");
        scanf("%d",&ch);
        int val;
        switch(ch){
            case 1:
            display();
            break;

            case 2:
            printf("enter your array:");
            scanf("%d",&val);
            insertfirst(val);
            break;

            case 3:
           deletefirst();
           break;

           case 4:
           printf("enter your array:");
           scanf("%d",&val);
           insertend(val);
           break;

           case 5:
           delete();
           break;

           case 6:
           printf("thank you...");
           break;

           default:
           break;
        }
    }
   while(ch!=0);
   return 0;
}