//Sum of Postive Numbers with while loop
#include <stdio.h>
int main() {
    int n,i,sum=0;
    printf("Enter a Postive Number : ");
    scanf("%d",&n);
    while(i<=n){
        sum+=i;
        i++;
    }
    printf("Sum=%d",sum);
    return 0;
}
