#include<stdio.h>
int main(){
        int n,i,j;
        int ispalindrome=1;
        j=0;
       scanf("%d",&n);
        int a[n];
        int b[n];
    for(i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
    for(i=n-1;i>=0;i--){
       b[j] =a[i];
       j++;
    }
    for(i=0;i<n;i++){
        if(b[i]!=a[i]){
         ispalindrome=0;
         break;
        }
    }
        if(ispalindrome){
            printf("YES\n");
        }else{
            printf("NO ");
        }           

return 0;
}
