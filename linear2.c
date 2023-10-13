#include<stdio.h>
#include<stdlib.h>
#define n 10
int main()
{
    int a[20], i,x;
    for(i=0; i<n; i++)

    a[i]=rand()%100+1;
    printf("array is:\n");
    for(i=0; i<n; i++)
    printf("%d ",a[i]);
    printf("\n enter element to search:");
    scanf("%d",&x);

    for(i=0; i<n; i++)
    if (a[i]==x)
    break;

    if(i<n)
    printf("element found at index %d ",i);
    else
    printf("element not found:");


    return 0;
}