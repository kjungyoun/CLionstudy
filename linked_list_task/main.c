#include <stdio.h>
#include "bar_linked_list.h"
#include "weight_stack.h"

int main() {
    stack s;
    init_stack(&s);

    push(&s,create_barbell("원판",30));
    push(&s,create_barbell("원판",20));
    push(&s,create_barbell("원판",15));
    push(&s,create_barbell("원판",10));
    push(&s,create_barbell("원판",5));

    list l;
    init_list(&l);

    insert_first(&l,create_barbell("바",20));
    insert_last(&l,pop(&s));
    insert_first(&l,pop(&s));
    insert_last(&l,pop(&s));
    insert_last(&l,pop(&s));
    insert_first(&l,pop(&s));

    print_list(&l);
}
