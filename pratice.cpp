#include<stdio.h>

int main() {
    int marks[5], i, add = 0;

    printf("Enter the elements: ");
    for (i = 0; i < 5; i++) {
        scanf("%d", &marks[i]); 
        add += marks[i]; // Add each entered mark to the sum
    }

    printf("Addition of the marks: %d", add);

    return 0;
}

