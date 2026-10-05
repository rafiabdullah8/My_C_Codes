#include<stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    int arr[n];
    int i;
    for(i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
  i=0;
    int j=n-1;
    while(i<j){
        int tmp=arr[i];
        arr[i]=arr[j];
        arr[j]=tmp;
        i++;
        j--;
    }
    for(i=0;i<n;i++){
        printf("%d ",arr[i]);
    }
}
