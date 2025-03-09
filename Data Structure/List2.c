#include <stdio.h>
#define MAX_SIZE 100

void insertion(int *list, int *size)
{
    int newElement, pos;
    printf("Enter position:");
    scanf("%d", &pos);

    printf("Enter new element:");
    scanf("%d", &newElement);

    if (pos < 0 || pos > *size)
    {
        printf("Invalid position!!\n");
    }
    else if (pos == *size)
    {
        list[pos] = newElement;

        *size = *size + 1;

        printf("Element inserted successfully!!!!!\n");
    }
    else
    {
        for(int i = *size; i >= pos; i--)
        {
            list[i] = list[i-1];
        }
        list[pos] = newElement;
        (*size)++;
        printf("Element inserted successfully!!!!!\n");
    }

}

void deletion(int *list, int *size)
{
    int pos;
    printf("Enter Position: ");
    scanf("%d", &pos);
    pos--;

    if(pos < 0 || pos > *size)
    {
        printf("Galat position!!!");
    }
    else if (pos == *size - 1)
    {
        *size = *size - 1;
        printf("DELETED!!!");
    }
    else{
        for(int i = 0; i < *size - 1; i++)
        {
            if(pos <= i)
            {
                list[i] = list[i+1];
            }
        }
        *size = *size - 1;
        printf("Element Deleted!!!!\n");
    }
    
}

void search(int *list, int *size)
{
    int value,i,flag=0;
    printf("Element to search: ");
    scanf("%d", &value);

    for( i = 0; i < *size; i++)
    {
        if(value == list[i])
        {
            flag = 1;
            break;
        }
    }
    if(flag == 1)
    {
        printf("Element found at index: %d\n", i);
    }
    else{
        printf("Not found\n");
    }
}

void displayList(int *list, int size) 
{
    int i;
    printf("Elements of the list are:");
    for (i = 0; i < size; i++)
    {
        printf("%d ", list[i]);
    }
}

int main()
{

    int list[MAX_SIZE], size;

    printf("Enter size of list: ");
    scanf("%d", &size);

    // int arr[size];

    printf("Enter elements of the array: ");
    for (int i = 0; i < size; i++)
    {
        scanf("%d", &list[i]);
    }

    while (1)
    {
        printf("\n1. insertion\n");
        printf("2. Deletion\n");
        printf("3. Searching\n");
        printf("4. Traversing\n");
        printf("5. Exit\n");

        int choice;

        printf("Enter ur choice: ");
        scanf("%d", &choice);

        switch (choice)
        {
        case 1:
            insertion(list, &size);
            displayList(list, size);
            break;
        case 2:
            deletion(list, &size);
            break;
        case 3:
            search(list, &size);
            break;
        case 4:
            displayList(list, size);
            break;
        case 5:
            exit(0);
            break;
        default:
            printf("Galat choice!!!!!");
        }
        // getc;
        // system("pause");
    }

    return 0;
}