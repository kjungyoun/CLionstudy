//
// Created by Jungyoun_Kim on 2020/10/15.
//

#include <stdio.h>
#include "chicken.h"

void print(chicken c) {
    printf("[%d] %s", c.id, c.name);
}

chicken create_chicken(int id, char *name) {
    chicken c = {id, name};
    return c;
}
