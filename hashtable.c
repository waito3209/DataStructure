//
// Created by User on 1/19/2023.
//
#include <stdlib.h>
#include <malloc.h>
#include "hashtable.h"
#define LEN 26
typedef struct table{
    itemp* hasharr[LEN];
}table;
typedef struct item{
    char * key;
    void * d;
    itemp n;
}item;
HashTablef EmptyHashtabel()
{
    HashTablef t = (HashTablef)malloc(sizeof(table));
    for(int i =0 ; i<LEN;i++){t->hasharr[i]=NULL;}
    return t;


}
