//
// Created by JungYoun_Kim on 2020/10/08.
//

#include "chicken.h"
chicken create_chicken(char *name, unsigned int price) {
    chicken c;
    strcpy(c.name, name);
    c.price = price;
    return c;
}