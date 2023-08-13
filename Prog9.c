   /*Output:
**Trainee scores**
    FA1 82
    FA2 75
    FA3 89*/
  
#include <stdio.h>
int main() {
    int i;
    int score[3]={82,75,89};
    printf("\n*****Trainee scores*****");
    for(i=0;i<3;i++)
    {
        printf("\n FA%d \t%d",i+1,score[i]);
    }
    return 0;
}
