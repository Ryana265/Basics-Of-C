#include <stdio.h>

int main() {
    int i,number,a;
    printf("Enter a number :");
    scanf("%d",&number);
    for(i=1;i<=10;i++)
    {
       a=number*i ;
       printf("%d*%d=%d\n",number,i,a);
    }
}
