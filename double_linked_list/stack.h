//
// Created by JungYoun_Kim on 2020/10/08.
//

#ifndef DOUBLELIST_STACK_H
#define DOUBLELIST_STACK_H

#include "double_linked_list.h"

typedef dlist stack;

void push(stack *s, element item);

element pop(stack *s);

#endif //DOUBLELIST_STACK_H
