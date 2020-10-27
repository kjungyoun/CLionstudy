//
// Created by JungYoun_Kim on 2020/10/23.
//

#ifndef MIDDLETEST_USER_H
#define MIDDLETEST_USER_H

typedef struct user{
    char id[500];
    char lank[50];
    char position[50];
}user;

user createUser(char *id, char *grade, char *position);
void printRemainUser(user u);
void printMatch(user a, user b);

#endif //MIDDLETEST_USER_H
