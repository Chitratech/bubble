#include<stdio.h>
void main(){
    int n,a[50],i,j,temp;
    printf("enter limit:");
    scanf("%d",&n);
    printf("enter elements:\n");
    for(i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
    for(i=0;i<n;i++){
        for(j=0;j<n-i-1;j++){
            if(a[j]>a[j+1]){
                temp=a[j];
                a[j]=a[j+1];
                a[j+1]=temp;
            }
        }
    }

       for(i=0;i<n;i++)
        printf("%d\n",a[i]);
}


