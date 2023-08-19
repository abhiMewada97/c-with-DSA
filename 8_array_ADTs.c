#include <stdio.h>
#include <stdlib.h>
struct myArray
{
    int total_size;
    int used_size;
    int *ptr;
};

// The Dot(.) operator is used to normally access members of a structure or union. 
//The Arrow(->) operator exists to access the members of the structure or the unions using pointers.

void creatArray(struct myArray * a, int tsize, int usize)
{
    // (*a).total_size=tsize;
    // (*a).used_size=usize;
    // (*a).ptr=(int *)malloc(tsize * sizeof(int));

    a->total_size=tsize;  //we can use like this also
    a->used_size=usize;
    a->ptr=(int *)malloc(tsize * sizeof(int));
}

void setValue(struct myArray *a)
{
    for(int i=0; i < a->used_size; i++)
    {   
        printf("Enter the element %d : ",i);   
        scanf("%d",&(a->ptr)[i]);
    }
}

void show(struct myArray *a )
{
    for(int i=0; i < a->used_size;i++)
    {
        printf("%d\n",(a->ptr)[i]);
    }
}


int main()
{
    struct myArray marks;
    int usize = 2;
    creatArray(&marks,10,usize);
    setValue(&marks);
    printf("The running element is \n");
    show(&marks);

    return 0;
}