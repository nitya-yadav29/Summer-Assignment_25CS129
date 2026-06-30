#include <stdio.h>
#include <string.h>

int main()
{
    char book[20][50], author[20][50], search[50];
    int i, n = 0, choice, found;

    while(1)
    {
        printf("\n----- MINI LIBRARY SYSTEM -----\n");
        printf("1. Add Book\n");
        printf("2. Show Books\n");
        printf("3. Search Book\n");
        printf("4. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        if(choice == 1)
        {
            printf("Enter Book Name: ");
            scanf(" %[^\n]", book[n]);

            printf("Enter Author Name: ");
            scanf(" %[^\n]", author[n]);

            n++;
            printf("Book Added Successfully.\n");
        }
        else if(choice == 2)
        {
            if(n == 0)
            {
                printf("No Books Available.\n");
            }
            else
            {
                printf("\nBook List:\n");
                for(i = 0; i < n; i++)
                {
                    printf("%d. %s - %s\n", i + 1, book[i], author[i]);
                }
            }
        }
        else if(choice == 3)
        {
            found = 0;

            printf("Enter Book Name to Search: