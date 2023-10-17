// simple queue
#include<stdio.h>
#define n 5
int a[n],f=-1, r=-1;
int display(){
    if(f<0){
        printf("array is empty...");
    }
    else{
        for(int i=f; i<=r; i++)
        printf("%d ",a[i]);
    }
}
int insert(){
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
int delete()
{
    if(f<0){
        printf("empty...");
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
int main(){
    int ch;
    printf("1.display \n");
    printf("2.insert \n");
    printf("3.delete\n");
    printf("4.the end \n");
    do{
        printf("enter your ch:");
        scanf("%d",&ch);
        int data;
        switch(ch){

            case 1:
            display();
            break;

            case 2:
            insert();
            break;

            case 3:
            delete();
            break;

            case 4:
            printf("close");
            break;

            default:
            printf("wrong ch:");
            break;
        }
    }
    while(ch!=0);
}
