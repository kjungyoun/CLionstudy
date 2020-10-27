//
// Created by JungYoun_Kim on 2020/10/23.
//
#include <string.h>
#include <stdio.h>
#include "user.h"
user createUser(char *id, char *grade, char *position){
    user u;
    strcpy(u.id, id);
    strcpy(u.lank, grade);
    strcpy(u.position, position);
    return u;
}

void printRemainUser(user u){
    printf("[%s, %s, %s], ",u.id,u.lank,u.position);
};

void printMatch(user a, user b){
    printf("[%s, %s]      [%s, %s]\n",a.id,a.position,b.id,b.position);
}