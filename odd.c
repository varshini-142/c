#include<stdio.h>
int main(){
int n,i,sum=0;
scanf("%d",&n);
for(i=0;i<=n;i++){
if(n%2==0){
sum=sum+1;
printf("sum of odd numbers:%d\n",sum);
}
}
return 0;
}