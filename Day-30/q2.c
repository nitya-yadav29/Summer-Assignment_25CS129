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

            printf("Enter Book Name to Search: ");
            scanf(" %[^\n]", search);

            for(i = 0; i < n; i++)
            {
                if(strcmp(book[i], search) == 0)
                {
                    printf("Book Found!\n");
                    printf("Book Name: %s\n", book[i]);
                    printf("Author: %s\n", author[i]);
                    found = 1;
                }
            }

            if(found == 0)
            {
                printf("Book Not Found.\n");
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