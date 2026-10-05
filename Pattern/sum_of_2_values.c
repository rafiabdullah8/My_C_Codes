#include<stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    int a[n];
    for(int i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
    int x;
    scanf("%d",&x);

    int flag=0;
    
    for(int i=0;i<n-1;i++)   //for checking i;
    {  
        for(int j=i+1;j<n;j++)     //for checking j;
        {
            if(a[i]+a[j]==x){
               flag=1;
                printf("Yes");
            }
        }          
    }    
    if(flag==0){
     printf("No");       
    }    
    return 0;
}
