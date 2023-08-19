#include <stdio.h>
#include <conio.h>
#include <stdlib.h>

struct SimpleLLNode;
struct DoublyLLNode;

// ***********    Simple Linked List    *********************************

void sLLcreate();
void sLLdisplay();
void sLLinsert_begin();
void sLLinsert_position();
void sLLinsert_end();
void sLLdelete_begin();
void sLLdelete_position();
void sLLdelete_end();
void sLLreverse();
void sLLsorting();
void sLLsearching();

// ***********    Circular Linked List    *********************************
void cLLcreate();
void cLLdisplay();
void cLLinsert_begin();
void cLLinsert_position();
void cLLinsert_end();
void cLLdelete_begin();
void cLLdelete_position();
void cLLdelete_end();
void cLLreverse();
void cLLsorting();
void cLLsearching();

// ***********    Doubly Linked List    *********************************
void dLLcreate();
void dLLdisplay();
void dLLinsert_begin();
void dLLinsert_position();
void dLLinsert_end();
void dLLdelete_begin();
void dLLdelete_position();
void dLLdelete_end();
void dLLreverse();
void dLLsorting();
void dLLsearching();

// ***********    Doubly Circular Linked List    *********************************
void dCLLcreate();
void dCLLdisplay();
void dCLLinsert_begin();
void dCLLinsert_position();
void dCLLinsert_end();
void dCLLdelete_begin();
void dCLLdelete_position();
void dCLLdelete_end();
void dCLLreverse();
void dCLLsorting();
void dCLLsearching();

// ***********   Simple Stack using Array    *********************************
void popSSA();
void displaySSA();
void pushSSA();

// // ***********   Simple Stack using Link list    *********************************
// void displayCSL();
// void popCSL();
// void pushCSL();

// ***********    Circular Queue using Array    ***
void displayCQA();
void enQueueCQA();
void deQueueCQA();

// ***********    Simple Queue using Link list
// void displaySQL();
void pushSQL();
// void popSQL();

// ***********   Simple Stack using Array
int StackSSA[10], sizeSSA = 10, topSSA = -1;

// ***********    Simple Stack using Link list
struct StackSSL
{
    int data;
    struct StackSSL *next;
};
struct StackSSL * top = NULL;

void pushSQL()
{
    
}

// ***********   Circular Stack using Array
//int StackSSA[10], sizeCSA = 10, topSSA = -1;

// ***********    Circular Stack using Link list
// int StackSSL[10], sizeCSL = 10, topSSL = -1;

// ***********    Simple Queue using Array
// int QueueCQA[10], sizeCQA = 10, rearCQA = -1, frontCQA = -1;

// ***********    Simple Queue using Link list
// int QueueSQL[10], sizeQL =10, rearQL=-1, frontQL=-1;
// struct QueueSQL
// {
//     int data;
//     struct QueueSQL* frontCQL;
//     struct QueueSQL* rearCQL;

// };

// ***********    Circular Queue using Array
int QueueCQA[10], sizeCQA = 10, rearCQA = -1, frontCQA = -1;

// ***********    Circular Queue using Link list
// int QueueQL[10], sizeQL =10, rearQL=-1, frontQL=-1;
// void displayQL();
// void popQL();
// void pushQL();

// ***********    Tree    *********************************

// ***********    Simple Linked List Structure    *********************************
struct SimpleLLNode
{
    int data;
    struct SimpleLLNode *next;
};
struct SimpleLLNode *s = NULL;
struct SimpleLLNode *cll = NULL;

// ***********   Doubly Linked List Structure    *********************************
struct DoublyLLNode
{
    int data;
    struct DoublyLLNode *next;
};

struct DoublyLLNode *dll = NULL;
struct DoublyLLNode *dcll = NULL;

// ***********    Main function    *********************************
int main()
{

    int choice;

    while (1)
    {
    dsa:
        printf("\n**********************\n");
        printf("1. Linked List \n");
        printf("2. Stack \n");
        printf("3. Queue \n");
        printf("4. Tree \n");
        printf("0. Exit \n");
        scanf("%d", &choice);
        switch (choice)
        {
            // *************************************    Linked List    ****************
        case 1:
            while (1)
            {
            link_list:
                printf("\n**********************\nLINK LIST\n**********************\n");
                printf("1. Simple link list \n");
                printf("2. Circular link list \n");
                printf("3. Doubly link list \n");
                printf("4. Circular Doubly link list \n");
                printf("0. Exit \n");
                printf("-1. Back \n");
                scanf("%d", &choice);
                switch (choice)
                {
                case -1:
                    goto dsa;
                    break;

                case 1:
                    printf("\n**********************\nSIMPLE LINK LIST");

                    while (1)
                    {
                    simple_ll:
                        printf("\n**********************\n");
                        printf("1. create \n");
                        printf("2. display \n");
                        printf("3. Inset Linked List \n");
                        printf("4. Delete Linked List \n");
                        printf("5. Reverse \n");
                        printf("6. Sorting \n");
                        printf("7. Searching \n");
                        printf("0. Exit \n");
                        printf("-1. Back \n");
                        scanf("%d", &choice);

                        switch (choice)
                        {
                        case -1:
                            goto link_list;
                            break;

                        case 1:
                            sLLcreate();
                            break;

                        case 2:
                            sLLdisplay();
                            break;

                        case 3:
                            while (1)
                            {
                                // ***********************************    Insertion Linked List    *****************
                                printf("\n**********************\n");
                                printf("1. insert_begin \n");
                                printf("2. insert_position \n");
                                printf("3. insert_end \n");
                                printf("4. display \n");
                                printf("0. Exit \n");
                                printf("-1. Back \n");
                                scanf("%d", &choice);

                                switch (choice)
                                {
                                case -1:
                                    goto simple_ll;
                                    break;

                                case 1:
                                    sLLinsert_begin();
                                    break;

                                case 2:
                                    sLLinsert_position();
                                    break;
                                case 3:

                                    sLLinsert_end();
                                    break;
                                case 4:
                                    sLLdisplay();
                                    break;

                                case 0:
                                    exit(0);
                                    break;

                                default:
                                    printf("Enter wrong choice \n");
                                }
                            }
                            break;
                        case 4:
                            while (1)
                            {
                                // ***********************************    Deletion Linked List    ****************
                                printf("\n**********************\n");

                                printf("1. delete_begin \n");
                                printf("2. delete_position \n");
                                printf("3. delete_end \n");
                                printf("4. display \n");
                                printf("0. Exit \n");
                                printf("-1. Back \n");
                                scanf("%d", &choice);

                                switch (choice)
                                {
                                case -1:
                                    goto simple_ll;
                                    break;

                                case 1:

                                    sLLdelete_begin();
                                    break;

                                case 2:
                                    sLLdelete_position();
                                    break;
                                case 3:

                                    sLLdelete_end();

                                    break;
                                case 4:
                                    sLLdisplay();
                                    break;

                                case 0:
                                    exit(0);
                                    break;

                                default:
                                    printf("Enter wrong choice \n");
                                }
                            }
                            break;
                        case 5:
                            sLLreverse();
                            break;

                        case 6:
                            sLLsorting();
                            break;

                        case 7:
                            sLLsearching();
                            break;

                        case 0:
                            exit(0);
                            break;

                        default:
                            printf("Enter wrong choice \n");
                        }
                    }
                    break;

                case 2:
                    printf("\n**********************\nCIRCULAR LINK LIST");
                    while (1)
                    {
                    circular_ll:
                        printf("\n**********************\n");
                        printf("1. create \n");
                        printf("2. display \n");
                        printf("3. Inset Linked List \n");
                        printf("4. Delete Linked List \n");
                        printf("5. Reverse \n");
                        printf("6. Sorting \n");
                        printf("7. Searching \n");
                        printf("0. Exit \n");
                        printf("-1. Back \n");
                        scanf("%d", &choice);

                        switch (choice)
                        {
                        case -1:
                            goto link_list;
                            break;
                        case 1:
                            cLLcreate();
                            break;

                        case 2:
                            cLLdisplay();
                            break;

                        case 3:
                            while (1)
                            {
                                // ***********************************    Insertion Linked List    *****************
                                printf("\n**********************\n");
                                printf("1. insert_begin \n");
                                printf("2. insert_position \n");
                                printf("3. insert_end \n");
                                printf("4. display \n");
                                printf("0. Exit \n");
                                printf("-1. Back \n");
                                scanf("%d", &choice);

                                switch (choice)
                                {
                                case -1:
                                    goto circular_ll;
                                    break;

                                case 1:
                                    cLLinsert_begin();
                                    break;

                                case 2:
                                    cLLinsert_position();
                                    break;

                                case 3:

                                    cLLinsert_end();
                                    break;
                                case 4:
                                    cLLdisplay();
                                    break;

                                case 0:
                                    exit(0);
                                    break;

                                default:
                                    printf("Enter wrong choice \n");
                                }
                            }
                            break;
                        case 4:
                            while (1)
                            {
                                // ***********************************    Deletion Linked List    ****************
                                printf("\n**********************\n");

                                printf("1. delete_begin \n");
                                printf("2. delete_position \n");
                                printf("3. delete_end \n");
                                printf("4. display \n");
                                printf("0. Exit \n");
                                printf("-1. Back \n");
                                scanf("%d", &choice);

                                switch (choice)
                                {
                                case -1:
                                    goto circular_ll;
                                    break;

                                case 1:

                                    cLLdelete_begin();
                                    break;

                                case 2:
                                    cLLdelete_position();
                                    break;
                                case 3:

                                    cLLdelete_end();

                                    break;
                                case 4:
                                    cLLdisplay();
                                    break;

                                case 0:
                                    exit(0);
                                    break;

                                default:
                                    printf("Enter wrong choice \n");
                                }
                            }
                            break;
                        case 5:
                            cLLreverse();
                            break;

                        case 6:
                            cLLsorting();
                            break;

                        case 7:
                            cLLsearching();
                            break;

                        case 0:
                            exit(0);
                            break;

                        default:
                            printf("Enter wrong choice \n");
                        }
                    }
                    break;

                case 3:
                    printf("\n**********************\nDOUBLY LINK LIST");
                    while (1)
                    {
                    doubly_ll:
                        printf("\n**********************\n");
                        printf("1. create \n");
                        printf("2. display \n");
                        printf("3. Inset Linked List \n");
                        printf("4. Delete Linked List \n");
                        printf("5. Reverse \n");
                        printf("6. Sorting \n");
                        printf("7. Searching \n");
                        printf("0. Exit \n");
                        printf("-1. Back \n");
                        scanf("%d", &choice);

                        switch (choice)
                        {
                        case -1:
                            goto link_list;
                            break;

                        case 1:
                            dLLcreate();
                            break;

                        case 2:
                            dLLdisplay();
                            break;

                        case 3:
                            while (1)
                            {
                                // ***********************************    Insertion Linked List    *****************
                                printf("\n**********************\n");
                                printf("1. insert_begin \n");
                                printf("2. insert_position \n");
                                printf("3. insert_end \n");
                                printf("4. display \n");
                                printf("0. Exit \n");
                                printf("-1. Back \n");
                                scanf("%d", &choice);

                                switch (choice)
                                {
                                case -1:
                                    goto doubly_ll;
                                    break;
                                case 1:
                                    dLLinsert_begin();

                                    break;

                                case 2:
                                    dLLinsert_position();
                                    break;
                                case 3:

                                    dLLinsert_end();
                                    break;
                                case 4:
                                    dLLdisplay();
                                    break;

                                case 0:
                                    exit(0);
                                    break;

                                default:
                                    printf("Enter wrong choice \n");
                                }
                            }
                            break;
                        case 4:
                            while (1)
                            {
                                // ***********************************    Deletion Linked List    ****************
                                printf("\n**********************\n");

                                printf("1. delete_begin \n");
                                printf("2. delete_position \n");
                                printf("3. delete_end \n");
                                printf("4. display \n");
                                printf("0. Exit \n");
                                printf("-1. Back \n");
                                scanf("%d", &choice);

                                switch (choice)
                                {
                                case -1:
                                    goto doubly_ll;
                                    break;

                                case 1:

                                    dLLdelete_begin();
                                    break;

                                case 2:
                                    dLLdelete_position();
                                    break;
                                case 3:

                                    dLLdelete_end();
                                    break;
                                case 4:
                                    dLLdisplay();
                                    break;

                                case 0:
                                    exit(0);
                                    break;

                                default:
                                    printf("Enter wrong choice \n");
                                }
                            }
                            break;

                        case 5:
                            dLLreverse();

                        case 6:
                            dLLsorting();
                            break;

                        case 7:
                            dLLsearching();
                            break;

                        case 0:
                            exit(0);
                            break;

                        default:
                            printf("Enter wrong choice \n");
                        }
                    }
                    break;

                case 4:
                    printf("\n**********************\nDOUBLY CIRCULAR LINK LIST");
                    while (1)
                    {
                    doubly_cll:
                        printf("\n**********************\n");
                        printf("1. create \n");
                        printf("2. display \n");
                        printf("3. Inset Linked List \n");
                        printf("4. Delete Linked List \n");
                        printf("5. Reverse \n");
                        printf("6. Sorting \n");
                        printf("7. Searching \n");
                        printf("0. Exit \n");
                        printf("-1. Back \n");
                        scanf("%d", &choice);

                        switch (choice)
                        {
                        case -1:
                            goto link_list;
                            break;

                        case 1:
                            dCLLcreate();
                            break;

                        case 2:
                            dCLLdisplay();
                            break;

                        case 3:
                            while (1)
                            {
                                // ***********************************    Insertion Linked List    *****************
                                printf("\n**********************\n");
                                printf("1. insert_begin \n");
                                printf("2. insert_position \n");
                                printf("3. insert_end \n");
                                printf("4. display \n");
                                printf("0. Exit \n");
                                printf("-1. Back \n");
                                scanf("%d", &choice);

                                switch (choice)
                                {
                                case -1:
                                    goto doubly_cll;
                                    break;

                                case 1:
                                    dCLLinsert_begin();

                                    break;

                                case 2:
                                    dCLLinsert_position();
                                    break;
                                case 3:

                                    dCLLinsert_end();
                                    break;
                                case 4:
                                    dCLLdisplay();
                                    break;

                                case 0:
                                    exit(0);
                                    break;

                                default:
                                    printf("Enter wrong choice \n");
                                }
                            }
                            break;

                        case 4:
                            while (1)
                            {
                                // ***********************************    Deletion Linked List    ****************
                                printf("\n**********************\n");

                                printf("1. delete_begin \n");
                                printf("2. delete_position \n");
                                printf("3. delete_end \n");
                                printf("4. display \n");
                                printf("0. Exit \n");
                                printf("-1. Back \n");
                                scanf("%d", &choice);

                                switch (choice)
                                {
                                case -1:
                                    goto doubly_cll;
                                    break;

                                case 1:

                                    dCLLdelete_begin();
                                    break;

                                case 2:
                                    dCLLdelete_position();
                                    break;
                                case 3:

                                    dCLLdelete_end();

                                    break;
                                case 4:
                                    dCLLdisplay();
                                    break;

                                case 0:
                                    exit(0);
                                    break;

                                default:
                                    printf("Enter wrong choice \n");
                                }
                            }
                            break;
                        case 5:
                            dCLLreverse();
                            break;

                        case 6:
                            dCLLsorting();
                            break;

                        case 7:
                            dCLLsearching();
                            break;

                        case 0:
                            exit(0);
                            break;

                        default:
                            printf("Enter wrong choice \n");
                        }
                    }
                    break;

                case 0:
                    exit(0);
                    break;

                default:
                    printf("Enter wrong choice \n");
                }
            }
        case 2:
            printf("\n**********************\n Stack");
            while (1)
            {
                printf("\n**********************\n");
                printf("1. Stack using array \n");
                printf("2. Stack using link list \n");
                scanf("%d", &choice);
                switch (choice)
                {
                case 1:
                    while (1)
                    {
                        printf("1. Simple Stack\n");
                        printf("2. Circular Stack\n");
                        switch (choice)
                        {
                        case 1:
                            while (1)
                            {
                                printf("\n**********************\n");
                                printf("1. Push\n");
                                printf("2. Pop\n");
                                printf("3. Display\n");
                                printf("0. Exit\n");
                                scanf("%d", &choice);
                                switch (choice)
                                {
                                case 1:
                                    pushSSA();
                                    break;

                                case 2:
                                    popSSA();
                                    break;

                                case 3:
                                    displaySSA();
                                    break;

                                case 0:
                                    exit(0);

                                default:
                                    printf("Enter wrong choice \n");
                                    break;
                                }
                            }
                            break;

                        case 2:
                            switch (choice)
                            {
                            case 1:
                                while (1)
                                {
                                    printf("\n**********************\n");
                                    printf("1. Push\n");
                                    printf("2. Pop\n");
                                    printf("3. Display\n");
                                    printf("0. Exit\n");
                                    switch (choice)
                                    {
                                    case 1:
                                        // pushSSL();
                                        break;

                                    case 2:
                                        // popSSL();
                                        break;

                                    case 0:
                                        exit(0);

                                    default:
                                        printf("Enter wrong choice \n");
                                        break;
                                    }
                                }
                                break;

                            default:
                                printf("Enter wrong choice \n");
                                break;
                            }
                        }
                        break;

                    case 0:
                        exit(0);

                    default:
                        printf("Enter wrong choice \n");
                        break;
                    }
                }
                break;

            case 3:
                printf("\n**********************\n Queue");
                while (1)
                {
                    printf("\n**********************\n");
                    printf("1. Queue using array \n");
                    printf("2. Queue using link list \n");
                    printf("0. Exit\n");
                    scanf("%d", &choice);
                    switch (choice)
                    {
                    case 1:
                        while (1)
                        {
                            printf("\n**********************\n");
                            printf("1. Simple Queue \n");
                            printf("2. Circular Queue \n");
                            printf("0. Exit\n");
                            scanf("%d", &choice);

                            switch (choice)
                            {
                            case 1:
                                while (1)
                                {
                                    printf("\n**********************\n");
                                    printf("1. enQueue \n");
                                    printf("2. deQueue \n");
                                    printf("3. Display \n");
                                    printf("0. Exit\n");
                                    scanf("%d", &choice);
                                    switch (choice)
                                    {
                                    case 1:
                                        // enQueueCQA();
                                        break;

                                    case 2:
                                        // enQueueCQA();
                                        break;

                                    case 0:
                                        exit(0);

                                    default:
                                        printf("Enter wrong choice \n");
                                        break;
                                    }
                                }
                                break;

                            case 2:
                                while (1)
                                {
                                    printf("\n**********************\n");
                                    printf("1. enQueue \n");
                                    printf("2. deQueue \n");
                                    printf("3. Display \n");
                                    printf("0. Exit\n");
                                    scanf("%d", &choice);

                                    switch (choice)
                                    {
                                    case 1:
                                        enQueueCQA();
                                        break;

                                    case 2:
                                        deQueueCQA();
                                        break;

                                    case 3:
                                        displayCQA();
                                        break;

                                    case 0:
                                        exit(0);

                                    default:
                                        printf("Enter wrong choice \n");
                                        break;
                                    }
                                }
                                break;
                            
                            case 0:
                            exit(0);

                            default:
                                printf("Enter wrong choice \n");
                                break;
                            }
                        }

                        break;
                    case 2:
                        /* code */
                        break;

                    case 0:
                        exit(0);

                    default:
                        printf("Enter wrong choice \n");
                        break;
                    }
                }
                break;

            case 4:
                printf("\n**********************\n Tree");
                while (1)
                {
                    printf("\n**********************\n");
                    scanf("%d", &choice);

                    switch (choice)
                    {
                    case 1:
                        /* code */
                        break;

                    default:
                        printf("Enter wrong choice \n");
                        break;
                    }
                }
                break;

            case 0:
                exit(0);

            default:
                printf("Enter wrong choice \n");
            }
        }
    }
    return 0;
}
// ***********    Simple Linked List    *********************************

void sLLcreate()
{

    struct SimpleLLNode *p, *sl;
    p = (struct SimpleLLNode *)malloc(sizeof(struct SimpleLLNode));
    printf("Enter the element ");
    scanf("%d", &p->data);
    p->next = NULL;

    if (s == NULL)
    {
        s = p;
    }
    else
    {
        sl = s;
        while (sl->next != NULL)
        {
            sl = sl->next;
        }
        sl->next = p;
    }
}

void sLLdisplay()
{
    struct SimpleLLNode *sl;
    if (s == NULL)
    {
        printf("Link list is empty \n");
        return;
    }
    else
    {
        sl = s;
        while (sl != NULL)
        {
            printf("%d ", sl->data);
            sl = sl->next;
        }
        printf("\n");
    }
}

//**********    Reverse Simple Linked List   *****************************************
void sLLreverse()
{
    struct SimpleLLNode *sl, *prev = NULL, *next = NULL;
    sl = s;
    while (sl != NULL)
    {
        next = sl->next;
        sl->next = prev;
        prev = sl;
        sl = next;
    }
    s = prev;

    printf("Reverse linked list is \n");

    while (prev != NULL)
    {
        printf("%d ", prev->data);
        prev = prev->next;
    }
    printf("\n");
}
//**********    Sorting Simple Linked List   *****************************************
void sLLsorting()
{
    struct SimpleLLNode *sl = NULL, *s2 = NULL;
    int temp;
    if (s == NULL)
    {
        printf("Linked List is Empty \n");
    }
    else
    {
        sl = s;
        while (sl != NULL)
        {
            s2 = sl->next;
            while (s2 != NULL)
            {
                if (sl->data > s2->data)
                {
                    temp = sl->data;
                    sl->data = s2->data;
                    s2->data = temp;
                }
                s2 = s2->next;
            }
            sl = sl->next;
        }

        printf("After the Sorting \n");
        sl = s;
        while (s != NULL)
        {
            printf("%d ", s->data);
            s = s->next;
        }
        printf("\n");
    }
}

//**********    Searching Simple Linked List   *****************************************
void sLLsearching()
{
    struct SimpleLLNode *sl;
    sl = s;
    int value, flag = 0;
    if (s == NULL)
    {
        printf("Linked List is Impty ");
    }
    else
    {
        printf("Enter element which you want to find ");
        scanf("%d", &value);

        while (sl != NULL)
        {
            if (sl->data == value)
            {
                flag = 1;
                break;
            }
            else
            {
                sl = sl->next;
            }
        }
        if (flag)
        {
            printf("Element %d is found ", value);
        }
        else
        {
            printf("Element is not found \n");
        }
    }
}

//**********    Insertion Simple Link List    ***************************************

void sLLinsert_begin()
{
    struct SimpleLLNode *p;
    p = (struct SimpleLLNode *)malloc(sizeof(struct SimpleLLNode));
    printf("Enter the element ");
    scanf("%d", &p->data);
    p->next = NULL;

    if (s == NULL)
    {
        s = p;
    }
    else
    {
        p->next = s;
        s = p;
    }
}

void sLLinsert_position()
{
    struct SimpleLLNode *sl, *p;
    int pos;
    p = (struct SimpleLLNode *)malloc(sizeof(struct SimpleLLNode));
    p->next = NULL;

    printf("Etner the positin and element ");
    scanf("%d %d", &pos, &p->data);

    if (s == 0)
    {
        p->next = s;
        s = p;
        printf("Cann't insert at this position ");
    }
    else
    {
        sl = s;
        for (int i = 0; i < pos - 1 && sl->next != NULL; i++)
        {
            sl = sl->next;
        }
        p->next = sl->next;
        sl->next = p;
    }
}

void sLLinsert_end()
{
    struct SimpleLLNode *p, *sl;
    p = (struct SimpleLLNode *)malloc(sizeof(struct SimpleLLNode));
    printf("Enter the element ");
    scanf("%d", &p->data);
    p->next = NULL;

    if (s == NULL)
    {
        s = p;
    }
    else
    {
        sl = s;
        while (sl->next != NULL)
        {
            sl = sl->next;
        }
        sl->next = p;
    }
}
//**********    Simple Linked List Deletion    *****************************************
void sLLdelete_begin()
{

    struct SimpleLLNode *sl, *temp;
    sl = s;

    if (s == NULL)
    {
        printf("Linked list is empty \n");
        exit(0);
    }

    else
    {
        temp = s;
        s = s->next;
        free(temp);
    }
}

void sLLdelete_position()
{
    struct SimpleLLNode *sl = NULL, *temp = NULL;
    int pos;

    if (s == NULL)
    {
        printf("stack is Empty \n");
    }
    else
    {
        printf("Enter the position \n");
        scanf("%d", &pos);

        if (pos == 0)
        {
            sl = s;
            s = s->next;
            free(sl);
            sl = NULL;
        }
        else
        {
            sl = s;
            for (int i = 0; i < pos - 1 && sl != NULL; i++)
            {
                temp = sl;
                sl = sl->next;
            }
            temp->next = sl->next;
            free(sl);
            sl = NULL;
        }
    }
}

void sLLdelete_end()
{

    struct SimpleLLNode *sl, *temp;
    sl = s;

    if (s == NULL)
    {
        printf("Linked list is empty \n");
    }

    else
    {
        while (sl->next != NULL)
        {
            temp = sl;
            sl = sl->next;
        }

        sl->next = NULL;
        free(sl);
    }
}

// ***********    Circular Linked List    *********************************

void cLLcreate()
{

    struct SimpleLLNode *p, *sl;
    p = (struct SimpleLLNode *)malloc(sizeof(struct SimpleLLNode));
    printf("Enter the element ");
    scanf("%d", &p->data);
    p->next = NULL;

    if (cll == NULL)
    {
        cll = p;
    }
    else
    {
        sl = cll;
        while (sl->next != NULL)
        {
            sl = sl->next;
        }
        sl->next = p;
    }
}

void cLLdisplay()
{
    struct SimpleLLNode *sl;
    if (cll == NULL)
    {
        printf("Link list is empty \n");
        return;
    }
    else
    {
        sl = cll;
        while (sl != NULL)
        {
            printf("%d ", sl->data);
            sl = sl->next;
        }
        printf("\n");
    }
}

//**********    Reverse Circular Linked List   *****************************************
void cLLreverse()
{
    struct SimpleLLNode *sl, *prev = NULL, *next = NULL;
    sl = cll;
    while (sl != NULL)
    {
        next = sl->next;
        sl->next = prev;
        prev = sl;
        sl = next;
    }
    cll = prev;

    printf("Reverse linked list is \n");

    while (prev != NULL)
    {
        printf("%d ", prev->data);
        prev = prev->next;
    }
    printf("\n");
}
//**********    Sorting Circular Linked List   *****************************************
void cLLsorting()
{
    struct SimpleLLNode *sl = NULL, *s2 = NULL;
    int temp;
    if (cll == NULL)
    {
        printf("Linked List is Empty \n");
    }
    else
    {
        sl = cll;
        while (sl != NULL)
        {
            s2 = sl->next;
            while (s2 != NULL)
            {
                if (sl->data > s2->data)
                {
                    temp = sl->data;
                    sl->data = s2->data;
                    s2->data = temp;
                }
                s2 = s2->next;
            }
            sl = sl->next;
        }

        printf("After the Sorting \n");
        sl = cll;
        while (cll != NULL)
        {
            printf("%d ", cll->data);
            cll = cll->next;
        }
        printf("\n");
    }
}

//**********    Searching Circular Linked List   *****************************************
void cLLsearching()
{
    struct SimpleLLNode *sl;
    sl = cll;
    int value, flag = 0;
    if (cll == NULL)
    {
        printf("Linked List is Impty ");
    }
    else
    {
        printf("Enter element which you want to find ");
        scanf("%d", &value);

        while (sl != NULL)
        {
            if (sl->data == value)
            {
                flag = 1;
                break;
            }
            else
            {
                sl = sl->next;
            }
        }
        if (flag)
        {
            printf("Element %d is found ", value);
        }
        else
        {
            printf("Element is not found \n");
        }
    }
}

//**********    Insertion Circular Link List    ***************************************

void cLLinsert_begin()
{
    struct SimpleLLNode *p;
    p = (struct SimpleLLNode *)malloc(sizeof(struct SimpleLLNode));
    printf("Enter the element ");
    scanf("%d", &p->data);
    p->next = NULL;

    if (cll == NULL)
    {
        cll = p;
    }
    else
    {
        p->next = cll;
        cll = p;
    }
}

void cLLinsert_position()
{
    struct SimpleLLNode *sl, *p;
    int pos;
    p = (struct SimpleLLNode *)malloc(sizeof(struct SimpleLLNode));
    p->next = NULL;

    printf("Etner the positin and element ");
    scanf("%d %d", &pos, &p->data);

    if (cll == 0)
    {
        p->next = cll;
        cll = p;
        printf("Cann't insert at this position ");
    }
    else
    {
        sl = cll;
        for (int i = 0; i < pos - 1 && sl->next != NULL; i++)
        {
            sl = sl->next;
        }
        p->next = sl->next;
        sl->next = p;
    }
}

void cLLinsert_end()
{
    struct SimpleLLNode *p, *sl;
    p = (struct SimpleLLNode *)malloc(sizeof(struct SimpleLLNode));
    printf("Enter the element ");
    scanf("%d", &p->data);
    p->next = NULL;

    if (cll == NULL)
    {
        cll = p;
    }
    else
    {
        sl = cll;
        while (sl->next != NULL)
        {
            sl = sl->next;
        }
        sl->next = p;
    }
}
//**********    Circular Linked List Deletion    *****************************************
void cLLdelete_begin()
{

    struct SimpleLLNode *sl, *temp;
    sl = cll;

    if (cll == NULL)
    {
        printf("Linked list is empty \n");
        exit(0);
    }

    else
    {
        temp = cll;
        cll = cll->next;
        free(temp);
    }
}

void cLLdelete_position()
{
    struct SimpleLLNode *sl = NULL, *temp = NULL;
    int pos;

    if (cll == NULL)
    {
        printf("stack is Empty \n");
    }
    else
    {
        printf("Enter the position \n");
        scanf("%d", &pos);

        if (pos == 0)
        {
            sl = cll;
            cll = cll->next;
            free(sl);
            sl = NULL;
        }
        else
        {
            sl = cll;
            for (int i = 0; i < pos - 1 && sl != NULL; i++)
            {
                temp = sl;
                sl = sl->next;
            }
            temp->next = sl->next;
            free(sl);
            sl = NULL;
        }
    }
}

void cLLdelete_end()
{

    struct SimpleLLNode *sl, *temp;
    sl = cll;

    if (cll == NULL)
    {
        printf("Linked list is empty \n");
    }

    else
    {
        while (sl->next != NULL)
        {
            temp = sl;
            sl = sl->next;
        }

        sl->next = NULL;
        free(sl);
    }
}

// ***********    Doubly Linked List    *********************************

void dLLcreate()
{

    struct DoublyLLNode *p, *sl;
    p = (struct DoublyLLNode *)malloc(sizeof(struct DoublyLLNode));
    printf("Enter the element ");
    scanf("%d", &p->data);
    p->next = NULL;

    if (dll == NULL)
    {
        dll = p;
    }
    else
    {
        sl = dll;
        while (sl->next != NULL)
        {
            sl = sl->next;
        }
        sl->next = p;
    }
}

void dLLdisplay()
{
    struct DoublyLLNode *sl;
    if (dll == NULL)
    {
        printf("Link list is empty \n");
        return;
    }
    else
    {
        sl = dll;
        while (sl != NULL)
        {
            printf("%d ", sl->data);
            sl = sl->next;
        }
        printf("\n");
    }
}

//**********    Reverse Doubly Linked List   *****************************************
void dLLreverse()
{
    struct DoublyLLNode *sl, *prev = NULL, *next = NULL;
    sl = dll;
    while (sl != NULL)
    {
        next = sl->next;
        sl->next = prev;
        prev = sl;
        sl = next;
    }
    dll = prev;

    printf("Reverse linked list is \n");

    while (prev != NULL)
    {
        printf("%d ", prev->data);
        prev = prev->next;
    }
    printf("\n");
}
//**********    Sorting Doubly Linked List   *****************************************
void dLLsorting()
{
    struct DoublyLLNode *sl = NULL, *s2 = NULL;
    int temp;
    if (dll == NULL)
    {
        printf("Linked List is Empty \n");
    }
    else
    {
        sl = dll;
        while (sl != NULL)
        {
            s2 = sl->next;
            while (s2 != NULL)
            {
                if (sl->data > s2->data)
                {
                    temp = sl->data;
                    sl->data = s2->data;
                    s2->data = temp;
                }
                s2 = s2->next;
            }
            sl = sl->next;
        }

        printf("After the Sorting \n");
        sl = dll;
        while (dll != NULL)
        {
            printf("%d ", dll->data);
            dll = dll->next;
        }
        printf("\n");
    }
}

//**********    Searching Doubly Linked List   *****************************************
void dLLsearching()
{
    struct DoublyLLNode *sl;
    sl = dll;
    int value, flag = 0;
    if (dll == NULL)
    {
        printf("Linked List is Impty ");
    }
    else
    {
        printf("Enter element which you want to find ");
        scanf("%d", &value);

        while (sl != NULL)
        {
            if (sl->data == value)
            {
                flag = 1;
                break;
            }
            else
            {
                sl = sl->next;
            }
        }
        if (flag)
        {
            printf("Element %d is found ", value);
        }
        else
        {
            printf("Element is not found \n");
        }
    }
}

//**********    Insertion Doubly Link List    ***************************************

void dLLinsert_begin()
{
    struct DoublyLLNode *p;
    p = (struct DoublyLLNode *)malloc(sizeof(struct DoublyLLNode));
    printf("Enter the element ");
    scanf("%d", &p->data);
    p->next = NULL;

    if (dll == NULL)
    {
        dll = p;
    }
    else
    {
        p->next = dll;
        dll = p;
    }
}

void dLLinsert_position()
{
    struct DoublyLLNode *sl, *p;
    int pos;
    p = (struct DoublyLLNode *)malloc(sizeof(struct DoublyLLNode));
    p->next = NULL;

    printf("Etner the positin and element ");
    scanf("%d %d", &pos, &p->data);

    if (dll == 0)
    {
        p->next = dll;
        dll = p;
        printf("Cann't insert at this position ");
    }
    else
    {
        sl = dll;
        for (int i = 0; i < pos - 1 && sl->next != NULL; i++)
        {
            sl = sl->next;
        }
        p->next = sl->next;
        sl->next = p;
    }
}

void dLLinsert_end()
{
    struct DoublyLLNode *p, *sl;
    p = (struct DoublyLLNode *)malloc(sizeof(struct DoublyLLNode));
    printf("Enter the element ");
    scanf("%d", &p->data);
    p->next = NULL;

    if (dll == NULL)
    {
        dll = p;
    }
    else
    {
        sl = dll;
        while (sl->next != NULL)
        {
            sl = sl->next;
        }
        sl->next = p;
    }
}
//**********    Doubly Linked List Deletion    *****************************************
void dLLdelete_begin()
{

    struct DoublyLLNode *sl, *temp;
    sl = dll;

    if (dll == NULL)
    {
        printf("Linked list is empty \n");
        exit(0);
    }

    else
    {
        temp = dll;
        dll = dll->next;
        free(temp);
    }
}

void dLLdelete_position()
{
    struct DoublyLLNode *sl = NULL, *temp = NULL;
    int pos;

    if (dll == NULL)
    {
        printf("stack is Empty \n");
    }
    else
    {
        printf("Enter the position \n");
        scanf("%d", &pos);

        if (pos == 0)
        {
            sl = dll;
            dll = dll->next;
            free(sl);
            sl = NULL;
        }
        else
        {
            sl = dll;
            for (int i = 0; i < pos - 1 && sl != NULL; i++)
            {
                temp = sl;
                sl = sl->next;
            }
            temp->next = sl->next;
            free(sl);
            sl = NULL;
        }
    }
}

void dLLdelete_end()
{

    struct DoublyLLNode *sl, *temp;
    sl = dll;

    if (dll == NULL)
    {
        printf("Linked list is empty \n");
    }

    else
    {
        while (sl->next != NULL)
        {
            temp = sl;
            sl = sl->next;
        }

        sl->next = NULL;
        free(sl);
    }
}

// ***********    Doubly Circular Linked List    *********************************

void dCLLcreate()
{

    struct DoublyLLNode *p, *sl;
    p = (struct DoublyLLNode *)malloc(sizeof(struct DoublyLLNode));
    printf("Enter the element ");
    scanf("%d", &p->data);
    p->next = NULL;

    if (dll == NULL)
    {
        dll = p;
    }
    else
    {
        sl = dll;
        while (sl->next != NULL)
        {
            sl = sl->next;
        }
        sl->next = p;
    }
}

void dCLLdisplay()
{
    struct DoublyLLNode *sl;
    if (dll == NULL)
    {
        printf("Link list is empty \n");
        return;
    }
    else
    {
        sl = dll;
        while (sl != NULL)
        {
            printf("%d ", sl->data);
            sl = sl->next;
        }
        printf("\n");
    }
}

//**********    Reverse Doubly Circular Linked List   *****************************************
void dCLLreverse()
{
    struct DoublyLLNode *sl, *prev = NULL, *next = NULL;
    sl = dll;
    while (sl != NULL)
    {
        next = sl->next;
        sl->next = prev;
        prev = sl;
        sl = next;
    }
    dll = prev;

    printf("Reverse linked list is \n");

    while (prev != NULL)
    {
        printf("%d ", prev->data);
        prev = prev->next;
    }
    printf("\n");
}
//**********    Sorting Doubly Circular Linked List   *****************************************
void dCLLsorting()
{
    struct DoublyLLNode *sl = NULL, *s2 = NULL;
    int temp;
    if (dll == NULL)
    {
        printf("Linked List is Empty \n");
    }
    else
    {
        sl = dll;
        while (sl != NULL)
        {
            s2 = sl->next;
            while (s2 != NULL)
            {
                if (sl->data > s2->data)
                {
                    temp = sl->data;
                    sl->data = s2->data;
                    s2->data = temp;
                }
                s2 = s2->next;
            }
            sl = sl->next;
        }

        printf("After the Sorting \n");
        sl = dll;
        while (dll != NULL)
        {
            printf("%d ", dll->data);
            dll = dll->next;
        }
        printf("\n");
    }
}

//**********    Searching Doubly Circular Linked List   *****************************************
void dCLLsearching()
{
    struct DoublyLLNode *sl;
    sl = dll;
    int value, flag = 0;
    if (dll == NULL)
    {
        printf("Linked List is Impty ");
    }
    else
    {
        printf("Enter element which you want to find ");
        scanf("%d", &value);

        while (sl != NULL)
        {
            if (sl->data == value)
            {
                flag = 1;
                break;
            }
            else
            {
                sl = sl->next;
            }
        }
        if (flag)
        {
            printf("Element %d is found ", value);
        }
        else
        {
            printf("Element is not found \n");
        }
    }
}

//**********    Insertion Doubly Circular Link List    ***************************************

void dCLLinsert_begin()
{
    struct DoublyLLNode *p;
    p = (struct DoublyLLNode *)malloc(sizeof(struct DoublyLLNode));
    printf("Enter the element ");
    scanf("%d", &p->data);
    p->next = NULL;

    if (dll == NULL)
    {
        dll = p;
    }
    else
    {
        p->next = dll;
        dll = p;
    }
}

void dCLLinsert_position()
{
    struct DoublyLLNode *sl, *p;
    int pos;
    p = (struct DoublyLLNode *)malloc(sizeof(struct DoublyLLNode));
    p->next = NULL;

    printf("Etner the positin and element ");
    scanf("%d %d", &pos, &p->data);

    if (dll == 0)
    {
        p->next = dll;
        dll = p;
        printf("Cann't insert at this position ");
    }
    else
    {
        sl = dll;
        for (int i = 0; i < pos - 1 && sl->next != NULL; i++)
        {
            sl = sl->next;
        }
        p->next = sl->next;
        sl->next = p;
    }
}

void dCLLinsert_end()
{
    struct DoublyLLNode *p, *sl;
    p = (struct DoublyLLNode *)malloc(sizeof(struct DoublyLLNode));
    printf("Enter the element ");
    scanf("%d", &p->data);
    p->next = NULL;

    if (dll == NULL)
    {
        dll = p;
    }
    else
    {
        sl = dll;
        while (sl->next != NULL)
        {
            sl = sl->next;
        }
        sl->next = p;
    }
}
//**********    Doubly Circular Linked List Deletion    *****************************************
void dCLLdelete_begin()
{

    struct DoublyLLNode *sl, *temp;
    sl = dll;

    if (dll == NULL)
    {
        printf("Linked list is empty \n");
        exit(0);
    }

    else
    {
        temp = dll;
        dll = dll->next;
        free(temp);
    }
}

void dCLLdelete_position()
{
    struct DoublyLLNode *sl = NULL, *temp = NULL;
    int pos;

    if (dll == NULL)
    {
        printf("stack is Empty \n");
    }
    else
    {
        printf("Enter the position \n");
        scanf("%d", &pos);

        if (pos == 0)
        {
            sl = dll;
            dll = dll->next;
            free(sl);
            sl = NULL;
        }
        else
        {
            sl = dll;
            for (int i = 0; i < pos - 1 && sl != NULL; i++)
            {
                temp = sl;
                sl = sl->next;
            }
            temp->next = sl->next;
            free(sl);
            sl = NULL;
        }
    }
}

void dCLLdelete_end()
{

    struct DoublyLLNode *sl, *temp;
    sl = dll;

    if (dll == NULL)
    {
        printf("Linked list is empty \n");
    }

    else
    {
        while (sl->next != NULL)
        {
            temp = sl;
            sl = sl->next;
        }

        sl->next = NULL;
        free(sl);
    }
}
//**********    Simple Stack    *****************************************
void pushSSA()
{
    if (topSSA == sizeSSA - 1)
    {
        printf("Stack is overflow \n");
        return;
    }
    int elem;
    printf("Enter element ");
    scanf("%d", &elem);
    topSSA++;
    StackSSA[topSSA] = elem;
}

void popSSA()
{
    if (topSSA < 0)
    {
        printf("Stack is Empty \n");
        return;
    }

    int temp;
    printf("Pop element is %d ", StackSSA[topSSA]);

    temp = StackSSA[topSSA];
    topSSA--;
}

void displaySSA()
{
    if (topSSA < 0)
    {
        printf("Stack is Empty\n");
        return;
    }
    printf("Elements are\n");
    for (int i = 0; i <= topSSA; i++)
    {
        printf("%d ", StackSSA[i]);
    }
    printf("\n");
}

//**********    Circular Queue    *****************************************

void enQueueCQA()
{
    int elem;

    if (frontCQA == -1 && rearCQA == -1)
    {
        frontCQA = 0;
        rearCQA = 0;
        printf("Enter the element \n");
        scanf("%d", &elem);
        QueueCQA[rearCQA] = elem;
    }

    else if ((rearCQA + 1) % sizeCQA == frontCQA)
    {
        printf("Queue is overflow \n");
    }

    else
    {
        printf("Enter the element ");
        scanf("%d", &elem);

        rearCQA = (rearCQA + 1) % sizeCQA;
        QueueCQA[rearCQA] = elem;
    }
}

void deQueueCQA()
{
    if ((frontCQA == -1) && (rearCQA == -1))
    {
        printf("Queue is empty \n");
    }

    else if (frontCQA == rearCQA)
    {
        printf("The deQueue element is %d \n", QueueCQA[frontCQA]);
        // QueueCQA[frontCQA] = 0;
        frontCQA = -1;
        rearCQA = -1;
    }

    else
    {
        printf("The deQueue element is %d \n", QueueCQA[frontCQA]);
        // QueueCQA[frontCQA] = 0;
        frontCQA = (frontCQA +1 )% sizeCQA;
    }
}

void displayCQA()
{
    if (frontCQA == -1 && rearCQA == -1)
    {
        printf("Queue is empty\n");
        return;
    }

    printf("Element of Queue is \n");
    int i = frontCQA;

    if(frontCQA == rearCQA){
        
        printf("%d ", QueueCQA[frontCQA]);
    }

    else if (frontCQA > rearCQA)
    {

        while (i <= sizeCQA)
        {
            printf("%d ", QueueCQA[i]);
            i = (i + 1) % sizeCQA;
            if (i == 0)
            {
                break;
            }
        
        }
    
        while (i <= rearCQA)
        {
            printf("%d ", QueueCQA[i]);
            i = (i + 1) % sizeCQA;
        }
    }
    else
    {
        while (i <= rearCQA)
        {
            printf("%d ", QueueCQA[i]);
            i = (i + 1) % sizeCQA;
            if(i==0 && rearCQA==(sizeCQA-1))
            {
                return;
            }
        }
    
    }
}