//
// Created by User on 2/16/2023.
//

#include <malloc.h>
#include "List.h"

struct List{Listp T; void * D;};
Listp EmptyList(void){
    Listp  t = malloc(sizeof(List));
    t->D=NULL;
    t->T=NULL;
    return t;
}
Listp Tail(Listp t){
    return t->T;
}
Listp Cons(void * d ,Listp l){
    Listp t = EmptyList();
    t->D=d;
    t->T=l;
    return t;
}
void * Head(Listp l)
{
    return l->D;
}

int ListIsEmpty(Listp l ){
    return l->D==NULL && l->T==NULL;
}