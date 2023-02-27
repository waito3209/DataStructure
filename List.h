//
// Created by User on 2/16/2023.
//
#ifndef REV_LIST_H
#define REV_LIST_H
typedef struct List *Listp;
typedef struct  List List;
Listp EmptyList(void);
Listp Cons(void *,Listp);
void * Head(Listp);
Listp Tail(Listp);
int ListIsEmpty(Listp);





#endif //REV_LIST_H
