//
// Created by JungYoun_Kim on 2020/10/17.
//
#include <string.h>
#include <stdio.h>
#include "barbell.h"
barbell create_barbell(char *name, unsigned int weigth){
    barbell b;
    strcpy(b.name,name);
    b.weight = weigth;
    return b;
};

void print_barbell(barbell b){
    printf("%s(%d)-",b.name,b.weight);
};