#include<stdio.h>
int main(){
    int x;
    scanf("%d",&x);
    int a[x];
    for(int i=0;i<x;i++){
        scanf("%d",&a[i]);
    }
    for(int i=x-1; i>=0;i--){
        printf("%d ",a[i]);
    }
}
