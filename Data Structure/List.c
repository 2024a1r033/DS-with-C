#include <stdio.h>
#define MAX_SIZE 100

void insertion(int *list, int *size)
{
    int position, value, i;
    printf("Enter position: \n");
    scanf("%d", &position);

    printf("Enter value: \n");
    scanf("%d", &value);

    if (position < 0 || position > *size)
    {
        printf("Invalid positon!!\n");
    }
    else if (position == *size)
    {
        list[position] = value;
        (*size)++;
        printf("Element Inserted successfully!!");
    }
    else
    {
        for (i = *size; i >= position; i--)
        {
            list[i] = list[i - 1];
        }
        list[position] = value;
        (*size)++;
        printf("Element Inserted successfully!!");
    }
}

void displaylist(int *list, int size)
{
    int i;
    printf("List Elements are: \n");
    for (int i = 0; i < size; i++)
    {
        printf("%d ", list[i]);
    }
}
void delete(int *list, int *size)
{
    int pos, i;
    printf("Enter position: ");
    scanf("%d", &pos);
    pos--;

    if (pos < 0 || pos > *size - 1)
    {
        printf("Invalid position!!");
    }
    else if (pos == *size - 1)
    {
        *size = *size - 1;
        printf("Element deleted!!");
    }
    else
    {
        for (i = 0; i < *size - 1; i++)
        {
            if (pos <= i)
            {
                list[i] = list[i + 1];
            }
        }
        *size = *size - 1;
        printf("Element deleted!!!\n");
    }
}

void search(int *list, int *size)
{
    int val, i, flag = 0;
    printf("Enter the element to search: ");
    scanf("%d", &val);
    for (i = 0; i < size; i++)
    {
        if (val == list[i])
        {
            flag = 1;
            break;
        }
    }
    if (flag == 1)
    {
        printf("Element found at index %d\n", i);
    }
    else
    {
        printf("Element not found!!!");
    }
}

int main()
{
    int list[MAX_SIZE], size;

    printf("Enter the size of array: ");
    scanf("%d", &size);

    printf("Enter elements: ");

    for (int i = 0; i < size; i++)
    {
        scanf("%d", &list[i]);
    }
    while (1)
    {
        printf("\n1. INSERTION\n");
        printf("2. DELETION\n");
        printf("3. SEARCHING\n");
        printf("4. TRAVERSING\n");
        printf("5. EXIT\n");
        int choice;
        printf("Enter choice: ");
        scanf("%d", &choice);

        switch (choice)
        {
        case 1:
            insertion(list, &size);
            displaylist(list, size);
            break;
        case 2:
            delete (list, &size);
            break;
        case 3:
            search(list, &size);
            break;
        case 4:
            displaylist(list, size);
            break;
        case 5:

            break;

        default:
            printf("Invalid choice!!!");
            break;
        }
    }

    return 0;
}