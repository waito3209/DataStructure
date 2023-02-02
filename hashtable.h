//
// Created by User on 1/19/2023.
//

#ifndef REV_HASHTABLE_H
#define REV_HASHTABLE_H
typedef struct table * HashTablef;
typedef struct item * itemp;
HashTablef HashtabelEmpty();
void HashtabelPut(HashTablef t, char * str , void * app);
void * HashtableGet(HashTablef t, char * str);
int  HashtableDEL(HashTablef t, char * str);

#endif //REV_HASHTABLE_H
