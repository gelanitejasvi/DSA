// swiping value

#include<stdio.h>

int main()
{
    int a[5],i,x,n;
    printf("enter n:");
    scanf("%d",&n);

    for(i=0; i<n; i++){
      printf("enter a[%d]:",i);
      scanf("%d",&a[i]);
  }
    printf("\n swaping number ");
    for(i=0; i<n; i++){
        x=a[0];
        a[0]=a[n-1];
        a[n-1]=x;
    }
    printf("\n");
    for(i=0; i<n; i++){
        printf("%d",a[i]);
    }
}



