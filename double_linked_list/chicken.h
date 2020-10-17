//
// Created by 김동훈 on 2020/10/08.
//

#ifndef DOUBLELIST_CHICKEN_H
#define DOUBLELIST_CHICKEN_H

#include <string.h>

typedef struct chicken {
    char name[32];
    unsigned int price;
} chicken;

chicken create_chicken(char *name, unsigned int price);

#endif //DOUBLELIST_CHICKEN_H
