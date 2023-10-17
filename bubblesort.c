// bubble sort

#include<stdio.h>
#define n 10
int a[]={5,2,10,4,12,15,18,20,30,9};

int bubble(int a[])
{
    for(int i=0; i<n; i++){
        for(int j=0; j<n-1; j++)
        {
            if(a[j]>a[j+1])
            {
                int x = a[j];
                a[j]=a[j+1];
                a[j+1]=x;
            }
        }
    }
}
int main()
{
    bubble (a);
    printf("sorted array is:");
    for(int i=0; i<n; i++)
    {
        printf("%d ",a[i]);
    }
}