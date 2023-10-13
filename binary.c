#include<stdio.h>
#define n 10
int a[]={10,11,12,13,14,15,16,17,18,19};
int binarysearch(int l, int h, int ele)
{
    while(l<=h){
        int mid=(l+h)/2;
        if(a[mid]==ele){
            return mid+1;
        }
        else if(a[mid]<ele)
        {
            l=mid+1;
        }
        else
        {
            h=mid-1;
        }
    }
    return -1;
}

int main()
{
    int ele=1;
    int i=binarysearch(0,n-1,ele);
    if(i== -1){
        printf("element is not found....");
    }
    else
    {
        printf("search element is found %d",i);
    }
}
