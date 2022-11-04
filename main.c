#include <stdio.h>
#define MAX_LENGTH 100
int main()
{
    system("cls");
    int data[MAX_LENGTH];
    int length = 0;
    int value, index;
    int input;
    do
    {
        printf("Menu\n");
        printf("--------------------\n");
        printf("1. Add\n");
        printf("2. Insert\n");
        printf("3. Edit\n");
        printf("4. Delete\n");
        printf("5. Display\n");
        printf("6. Clear\n");
        printf("0. Exit\n");
        printf("--------------------\n");

        printf("Enter a menu: ");
        scanf("%d", &input);

        printf("_________ Result _______\n");
        system("cls");

        switch (input)
        {
        case 0:
            break;
        case 1:
            // Add operation
            printf("Please enter an integer value: ");
            scanf("%d", &value);
            data[length] = value;
            printf("%d Inserted at index %d\n", value, length);
            length++;
            break;
        case 2:
            // insert operation
            printf("Please enter a value: ");
            scanf("%d", &value);
            printf("Please enter an index between 0 - %d: ", length);
            scanf("%d", &index);
            for (int i = length; i > index; i--)
            {
                data[i] = data[i - 1];
            }
            data[index] = value;
            length++;
            printf("%d Inserted at index %d\n", value, index);

            break;
        case 3:
            // Edit operation
            printf("Please enter an index between 0 - %d: ", length - 1);
            scanf("%d", &index);
            printf("Please enter a new integer value: ");
            scanf("%d", &value);
            data[index] = value;
            printf("%d updated at index %d", value, index);
            break;
        case 4:
            // delete operation
            printf("Please enter an index between 0 - %d: ", length - 1);
            scanf("%d", &index);
            int dv = data[index];
            for (int i = index; i < length; i++)
            {
                data[i] = data[i + 1];
            }
            data[length] = 0;
            length--;
            printf("%d deleted at index %d", dv, index);

            break;
        case 5:
            // display item using a for loop
            if (length == 0)
            {
                printf("There is no data\n");
            }
            else
            {
                printf("Data: ");
                for (int i = 0; i < length; i++)
                {
                    printf("%d\t", data[i]);
                }
                printf("\n");
            }
            break;

        case 6:
            for (int i = 0; i < length; i++)
            {
                data[i] = 0;
            }
            length = 0;
            printf("Data cleared\n");
            break;

        default:
            printf("Invalid Input\n");
            break;
        }
        printf("_________ Result End _______\n");

    } while (input != 0);
    system("cls");
    printf("Thanks for using our application. Good Bye.\n");
    return 0;
}

/* 
    Upcoming features
    -min
    -max
    -sum
    -average
    -search
    -sort
 */