//
// Created by Jungyoun_Kim on 2020/10/15.
//

#ifndef UNTITLED3_CHICKEN_H
#define UNTITLED3_CHICKEN_H

typedef struct {
    int id;
    char *name;
} chicken;

chicken create_chicken(int id, char *name);
void print(chicken c);

#endif //UNTITLED3_CHICKEN_H
