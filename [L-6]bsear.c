#include<stdio.h>
int main() {
    int n,a[20],temp,x,y,skey,first,last,mid;
    printf("Enter the Number of Elements : ");
    scanf("%d",&n);
    for (x=0;x<n;x++) {
        printf("Enter the Element %d : ",x+1);
        scanf("%d",&a[x]);
    }
    for (x=0;x<n-1;x++) {
        for (y=0;y<n-1-x;y++) {
            if (a[y]>a[y+1]) {
                temp=a[y];
                a[y]=a[y+1];
                a[y+1]=temp;
            } 
        }
    }
    printf("The Sorted Array is : ");
    for (x=0;x<n;x++) {
        printf("\t%d",a[x]);
    }
    printf("\nEnter the Search Key : ");
    scanf("%d",&skey);
    first=0;
    last=n-1;
    while(first<=last) {
        mid=(first+last)/2;
        if (skey==a[mid]) {
            printf("\nThe Key %d was found at %d Position.",skey,mid+1);
            return 0;
        }
        else if (skey<a[mid]) last=mid-1;
        else first=mid+1;
    }
    printf("\nThe given key was not found in the Array.");
    return 1;
}