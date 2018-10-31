#include<stdio.h>

int main(){

    int a[50],n,i,j,temp;

    printf("Enter the size of Array");
    scanf("%d",&n);

    printf("Please Enter the Array Element");
    for(i=0;i<n;i++){
        scanf("%d",&a[i]);
    }

    for(i=1;i<n;i++){
        for(j=0;j<n-1;j++){

            if(a[i]>a[j+1]){
                temp= a[i];
                a[i]=a[j+1];
                temp=a[j+1];
            }
        }
    }
    printf("Here the sorting of the Array");
    for(i=0;i<n;i++){
        printf("%d",a[i]);
    }
    return 0;
}
