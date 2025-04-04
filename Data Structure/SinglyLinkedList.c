#include <stdio.h> 
#include <stdlib.h>
typedef struct Node
{
    int data;
    struct Node *next;
} Node;
Node *head = NULL;
Node *createNode(int ele)
{
    Node *newNode = (Node *)malloc(sizeof(Node));
    newNode->data = ele;
    newNode->next = NULL;
    return newNode;
}
void insertNodeinbeg(int ele)
{
    Node *newNode = createNode(ele);
    newNode->next = head;
    head = newNode;
    printf("Node inserted !!!\n");
}
void insertNodeatend(int ele)
{
    Node *newNode = (Node *)malloc(sizeof(Node));
    newNode->data = ele;
    newNode->next = NULL;
    if (head == NULL)
        head = newNode;
    else
    {
        Node *temp = head;
        while (temp->next != NULL)
        {
            temp = temp->next;
        }
        temp->next = newNode;
        printf("Node inserted !!!!\n");
    }
}
void insertatanyposition(int ele, int pos)
{
    if (head == NULL)
        printf("list is empty!!!!\n");
    else if (pos == 1)
        insertNodeinbeg(ele);
    else
    {
        Node *temp = head;
        int i = 1;
        while (i < pos - 1 && temp->next != NULL)
        {
            temp = temp->next;
            i++;
        }
        if (temp->next != NULL && i > 1)
        {
            Node *newNode = createNode(ele);
            newNode->next = temp->next;
            temp->next = newNode;
            printf("node inserted !!!\n");
        }
        else
            printf("invalid postion !!!\n");
    }
}
void deleteNodefrombeg()
{
    if (head == NULL)
        printf("list is empty!!!\n");
    else
    {
        Node *temp = head;
        head = head->next;
        free(temp);
        printf("node deleted !!!!\n");
    }
}
void deleteNodefromend()
{
    if (head == NULL)
        printf("list is empty!!!\n");
    else
    {
        Node *t;
        if (head->next == NULL)
        {
            t = head;
            head = NULL;
        }
        else
        {
            Node *temp = head;
            while (temp->next->next != NULL)
            {
                temp = temp->next;
            }
            free(t);
            printf("Node deleted !!!\n");
        }
    }
}
void deleteNodefromanypos(int pos)
{
    if (head == NULL)
        printf("list is empty !!!!\n");
    else if (pos == 1)
        deleteNodefrombeg();
    else
    {
        Node *temp = head;
        int i = 1;
        while (i < pos - 1 && temp->next != NULL)
        {
            i++;
            temp = temp->next;
        }
        if (temp->next != NULL && i > 0)
        {
            Node *t = temp->next;
            temp->next = temp->next->next;
            free(t);
            printf("node deleted !!!\n");
        }
        else
            printf("invalid position !\n");
    }
}
void search(int target)
{
    if (head == NULL)
        printf("List is empty!!\n");
    else
    {
        Node *temp = head;
        while (temp != NULL)
        {
            if (temp->data == target)
            {
                printf("Found!!\n");
                return;
            }
            temp = temp->next;
        }
    }
}
void display()
{
    if (head == NULL)
        printf("list is empty!!!!\n");
    else
    {
        Node *temp = head;
        while (temp != NULL)
        {
            printf("%d ", temp->data);
            temp = temp->next;
        }
    }
}

void sort()
{
    Node *last = NULL;
    for (Node *i = head; i->next != NULL; i = i->next)
    {
        Node *j;
        for (j = head; j->next != last; j = j->next)
        {
            if (j->data > j->next->data)
            {
                int temp = j->data;
                j->data = j->next->data;
                j->next->data = temp;
            }
        }
        last = j;
    }
}
int main()
{
    while (1)
    {
        printf("SINGLY LINKED LIST\n");
        printf("1.  insert node in beginning\n");
        printf("2.  insert node at end\n");
        printf("3.  insert node at  any position\n ");
        printf("4.  delete node from beginning\n");
        printf("5.  delete node from end\n");
        printf("6.  delete node from any position\n");
        printf("7.  search element in list\n");
        printf("8.  sort elements\n");
        printf("9.  display elements\n");
        printf("10. exit\n\n");
        int choice, value, pos;
        printf("enter choice:");
        scanf("%d", &choice);
        switch (choice)
        {
        case 1:
            printf("enter the value: ");
            scanf("%d", &value);
            insertNodeinbeg(value);
            break;
        case 2:
            printf("enter the value: ");
            scanf("%d", &value);
            insertNodeatend(value);
            break;
        case 3:
            printf("enter the value: ");
            scanf("%d", &value);
            printf("enter position: ");
            scanf("%d", &pos);
            insertatanyposition(value, pos);
            break;
        case 4:
            deleteNodefrombeg();
            break;
        case 5:
            deleteNodefromend();
            break;
        case 6:
            printf("enter position: ");
            scanf("%d", &pos);
            break;
        case 7:
            printf("Enter the value: ");
            scanf("%d", &value);
            search(value);
            break;
        case 8:
            sort();
            break;
        case 9:
            display();
            break;
        case 10:
            exit(0);
        default:
            printf("invalid choice !!!!\n");
        }
        printf("\n");
    }
    return 0;
}
