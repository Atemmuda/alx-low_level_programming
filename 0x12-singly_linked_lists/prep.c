#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    /**
     * struct numbers - linked list of numbers
     * @num: number data to store
     * @ref: reference pointer to the next data
     * 
     * Description: singly linked list node structure
    */
    typedef struct numbers
    {
        int num;
        struct numbers *ref;
    } number_s;


    number_s *first, *second, *third;


    first = malloc(sizeof(number_s));
    second = malloc(sizeof(number_s));
    third = malloc(sizeof(number_s));

    first->num = 10;
    first->ref = second;
    second->num = 15;
    second->ref = third;
    third->num = 30;
    third->ref = NULL;

    printf("%d is first element\n", first->num);
    printf("%d is second element\n", second->num);
    printf("%d is third element\n", third->num);

    return (0);
}
