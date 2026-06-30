#include <stdio.h>

int main()
{
    int i, n;
    int roll[20];
    char name[20][30];
    float marks[20];

    printf("Enter number of students: ");
    scanf("%d", &n);

    for(i = 0; i < n; i++)
    {
        printf("\nStudent %d\n", i + 1);

        printf("Enter Roll No: ");
        scanf("%d", &roll[i]);

        printf("Enter Name: ");
        scanf("%s", name[i]);

        printf("Enter Marks: ");
        scanf("%f", &marks[i]);
    }

    printf("\nStudent Records\n");

    for(i = 0; i < n; i++)
    {
        printf("\nRoll No: %d", roll[i]);
        printf("\nName: %s", name[i]);
        printf("\nMarks: %.2f\n", marks[i]);
    }

    return 0;
}