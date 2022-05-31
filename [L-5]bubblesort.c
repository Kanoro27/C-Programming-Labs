#include<stdio.h>
int main() {
    int n,a[20],temp,x,y;
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
        printf("%d\t",a[x]);
    }
    return 0;
}
