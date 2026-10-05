#include<stdio.h>
int main(){
    int n;
    scanf("%d",&n);
   int arr[n+1];
    int i;
    for(i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    int idx,val;
    scanf("%d %d",&idx,&val);
    for(i=n;i>=idx+1;i--){
        arr[i]=arr[i-1];
    }
    arr[idx]=val;

    for(i=0;i<=n;i++){
        printf("%d ",arr[i]);
    }
}
