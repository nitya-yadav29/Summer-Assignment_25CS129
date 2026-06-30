#include <stdio.h>
#include <string.h>

int main()
{
    int id[20], salary[20];
    char name[20][50], search[50];
    int n = 0, choice, i, found;

    while(1)
    {
        printf("\n----- EMPLOYEE MANAGEMENT SYSTEM -----\n");
        printf("1. Add Employee\n");
        printf("2. Display Employees\n");
        printf("3. Search Employee\n");
        printf("4. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        if(choice == 1)
        {
            printf("Enter Employee ID: ");
            scanf("%d", &id[n]);

            printf("Enter Employee Name: ");
            scanf(" %[^\n]", name[n]);

            printf("Enter Salary: ");
            scanf("%d", &salary[n]);

            n++;
            printf("Employee Added Successfully.\n");
        }
        else if(choice == 2)
        {
            if(n == 0)
            {
                printf("No Employee Records Found.\n");
            }
            else
            {
                printf("\nEmployee Details