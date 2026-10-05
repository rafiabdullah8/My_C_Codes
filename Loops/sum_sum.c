#include<stdio.h>
int main(){
    int n,sum1, sum2;
    sum1,sum2=0;
    int i;
    scanf("%d",&n);
    int v[n];
    
    for(i=0;i<n;i++){
        scanf("%d",&v[i]);
    }
    for(i=0;i<n;i++){
       if(v[i]>0){
     sum1+=v[i];
       }else if(v[i]<0){
        sum2+=v[i];
       }
      
    }
    printf("%d %d",sum1,sum2);
}
