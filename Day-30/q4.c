#include <stdio.h>
#include <string.h>

int id[20], marks[20], n = 0;
char name[20][50];

void addStudent();
void displayStudent();
void searchStudent();

int main()
{
    int choice;

    while(1)
    {
        printf("\n===== STUDENT RECORD SYSTEM =====\n");
        printf("1. Add Student\n");
        printf("2. Display Students\n");
        printf("3. Search Student\n");
        printf("4. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch(choice)
        {
            case 1:
                addStudent();
                break;

            case 2:
                displayStudent();
                break;

            case 3:
                searchStudent();
                break;

            case 4:
                printf("Thank You!\n");
                return 0;

            default:
                printf("Invalid Choice!\n");
        }
    }
}

void addStudent()
{
    printf("Enter Student ID: ");
    scanf("%d", &id[n]);

    printf("Enter Student Name: ");
    scanf(" %[^\n]", name[n]);

    printf("Enter Marks: ");
    scanf("%d", &marks[n]);

    n++;

    printf("Student Added Successfully.\n");
}

void displayStudent()
{
    int i;

    if(n == 0)
    {
        printf("No Records Found.\n");
        return;
    }

    printf("\nStudent Details:\n");

    for(i = 0; i < n; i++)
    {
        printf("\nStudent %d\n", i + 1);
        printf("ID : %d\n", id[i]);
        printf("Name : %s\n", name[i]);
        printf("Marks : %d\n", marks[i]);
    }
}

void searchStudent()
{
    int i, found = 0;
    char search[50];

    printf("Enter Student Name: ");
    scanf(" %[^\n]", search);

    for(i = 0; i < n; i++)
    {
        if(strcmp(name[i], search) == 0)
        {
            printf("\nStudent Found!\n");
            printf("ID : %d\n", id[i]);
            printf("Name : %s\n", name[i]);
            printf("Marks : %d\n", marks[i]);
            found = 1;
        }
    }

    if(found == 0)
    {
        printf("Student Not Found.\n");
    }
}