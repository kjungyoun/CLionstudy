//
// Created by JungYoun_Kim on 2020/10/17.
//

#ifndef LINKED_LIST_TASK_BARBELL_H
#define LINKED_LIST_TASK_BARBELL_H

typedef struct barbell{
    char name[100];
    unsigned int weight;
}barbell;

barbell create_barbell(char *name, unsigned int weigth);
void print_barbell(barbell b);

#endif //LINKED_LIST_TASK_BARBELL_H
