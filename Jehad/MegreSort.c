#include <stdio.h>

void Merge(int a[], int p, int q, int r){
    int n1,n2,i,j;
    n1=q-p+1;
     n2=r-q;
    int L[n1],R[n2];
    for (i=0;i<=n1;i++){
        L[i]=a[p+i-1];

    }
    for (j=0;j<=n2;j++){
        L[j]=a[q+j];
    }
    L[n1+1]=9999;
    R[n2+1]=9999;
    i=0;
    j=0;
    int k;

    for (k=p; k<=r;k++){
        if (L[i]<=R[j]){
            a[k]=L[i];
            i++;
        }else{
             a[k]=R[j];
            j++;
        }
    }

}

void Merge_Sort(int a[], int p, int r){
    if(p<r){
        int q=(int) ((p+r)/2);
        Merge_Sort(a,p,q);
        Merge_Sort(a,q+1,r);
        Merge(a,p,q,r);
    }
}
void input_array(int a[], int length){
    int i;
     for(i=0; i<length;i++){
        scanf("%d",&a[i]);
     }
}
void output_array(int a[], int length){
    int i;
     for(i=0; i<length;i++){
        printf("%d  ",a[i]);
     }
}
int main(){
    int x[5],p,r;
    input_array(x,5);
    output_array(x,5);
    p=0;r=4;
    Merge_Sort(x,p,r);
    printf("\n After sorting: \n");
     output_array(x,5);
    return 0;
}
