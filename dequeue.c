// dequeue => double ended queue

#include<stdio.h>
#define n 5
int a[n],f=-1, r=-1;
int display()
{
    if(f<0){
        printf("array is empty....");
    }
    else{
        for(int i=f; i<=r; i++)
        printf("%d ",a[i]);
    }
}
int rearinsert()
{
    int data;
    printf("enter data:");
    scanf("%d",&data);
    if(r>n-1){
        printf("\n full queue \n");
    }
    else{
        if(f<0){
            f=r=0;
            a[r]=data;
        }
        else{
            r++;
            a[r]=data;
        }
    }
}
int firstdelete(){
    if(f<0){
        printf("empty.....");
    }
    else{
        if(f==r){
            f=-1;
            r=-1;
        }
        else{
            f++;
        }
        printf("\n value deleted:");
    }
}
int firstinsert()
{
    int data;
    printf("enter data:");
    scanf("%d",&data);
    if(f==0){
        printf("do not insert again....");
    }
    if(f<0){
        f=r=0;
        a[f]=data;
    }
    else{
        --f;
         printf("\n value deleted:");
    }
}
int reardelete()
{
    if(f<0)
    {
        printf("empty....");
    }
    else{
            if(f==r){
                f=-1;
                r=-1;
            }
            else{
                --r;
            }
            printf("\n value delete:");
    }
}
int main(){
    int ch;
    printf("1.display \n");
    printf("2.rearinsert \n");
    printf("3.firstdelete\n");
    printf("4.first insert \n");
    printf("5.reardelete:\n");
    printf("6.the end:\n");
    do{
        printf("enter your ch:");
        scanf("%d",&ch);
        int data;
        switch(ch){

            case 1:
            display();
            break;

            case 2:
            rearinsert();
            break;

            case 3:
            firstdelete();
            break;

            case 4:
           firstinsert();
            break;

            case 5:
            reardelete();
            break;

            default:
            printf("wrong ch:");
            break;
        }
    }
    while(ch!=0);
}
