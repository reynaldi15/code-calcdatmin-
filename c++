#include<stdio.h>

int main(){
  float temp;
  int a,n;
  float mean;
  scanf("%d",&n);
  for(int i=0;i<n;i++){
    scanf("%d",&a);
    temp=(a-mean)*(a-mean);
    printf("%.2f ",temp);
  }
return 0;
}
