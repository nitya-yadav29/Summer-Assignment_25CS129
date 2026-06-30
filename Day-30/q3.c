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
                printf("\nEmployee Details:\n");

                for(i = 0; i < n; i++)
                {
                    printf("\nEmployee %d\n", i + 1);
                    printf("ID: %d\n", id[i]);
                    printf("Name: %s\n", name[i]);
                    printf("Salary: %d\n", salary[i]);
                }
            }
        }
        else if(choice == 3)
        {
            found = 0;

            printf("Enter Employee Name to Search: ");
            scanf(" %[^\n]", search);

            for(i = 0; i < n; i++)
            {
                if(strcmp(name[i], search) == 0)
                {
                    printf("\nEmployee Found!\n");
                    printf("ID: %d\n", id[i]);
                    printf("Name: %s\n", name[i]);
                    printf("Salary: %d\n", salary[i]);
                    found = 1;
                }
            }

            if(found == 0)
            {
                printf("Employee Not Found.\n");
            }
        }
        else if(choice == 4)
        {
            printf("Thank You!\n");
            break;
        }
        else
        {
            printf("Invalid Choice!\n");
        }
    }

    return 0;
}