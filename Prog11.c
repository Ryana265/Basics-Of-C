//Calculate the Average of Marks of a Trainee using Single Dimensional Arrays.

#include <stdio.h>

int main() {
    int numMarks;
    printf("Enter the number of marks: ");
    scanf("%d", &numMarks);
    
    int marks[numMarks]; // Declare an array to store marks
    
    // Input marks
    printf("Enter %d marks:\n", numMarks);
    for (int i = 0; i < numMarks; i++) {
        scanf("%d", &marks[i]);
    }
    
    // Calculate the sum of marks
    int sum = 0;
    for (int i = 0; i < numMarks; i++) {
        sum += marks[i];
    }
    
    // Calculate the average
    float average = (float) sum / numMarks;
    
    // Display the average
    printf("Average marks: %.2f\n", average);
    
    return 0;
}
