//switch case Example
#include <stdio.h>
int main(){
    char c;
    printf("Enter the signal r-Red,g-Green,b-Blue\n");
    scanf("%c",&c);
    switch(c)
    {
        case 'r':
        printf("The Signal is Red");
        break;
        case 'g':
        printf("The Signal is Green");
        break;
        case 'b':
        printf("The Signal is Blue");
        break;
        default:
        printf("Signal not in use");
    }
    return 0;
}
