//
// Created by User on 1/19/2023.
//
#include <stdlib.h>
#include <malloc.h>
#include <stdio.h>
#include "hashtable.h"
#include "string.h"
#define LEN 3
#define hashMul 3

typedef struct item{
    char * key;
    void * d;
    itemp n;
}item;
typedef struct table{
    item * hasharr[LEN];
}table;
typedef item * itemp;
HashTablef EmptyHashtabel()
{
    HashTablef t = (HashTablef)malloc(sizeof(table));
    for(int i =0 ; i<LEN;i++)
    {
        t->hasharr[i]=NULL;
    }
    return t;
}

int hashf(char * inp){
    int r =0 ;
    for(int i = 0; inp[i] !='\0';i++){
        //r=r<<hashMul;
        r+=(int)inp[i];
    }
    return r%LEN;
}




void HashtabelPut(HashTablef t, char * str , void * app){
    int index = hashf(str);
    itemp newitemp = (itemp)malloc(sizeof (item));
    newitemp->key=str;
    newitemp->d=app;
    newitemp->n=NULL;
    if(t->hasharr[index]==NULL) {
        t->hasharr[index] = (itemp) newitemp;
        return;
    }
    itemp i =t->hasharr[index] ;
    while(i->n!=NULL && strcmp(i->key,str)!=0)
    {

        i = i->n;
    }
    if(strcmp(i->key,str)==0)
    {i->d=app;}
    else i->n = newitemp;
};
void * HashtableGet(HashTablef t, char * str)
{
    int index = hashf(str);
    if(t->hasharr[index]==NULL) {
        return NULL;
    }
    itemp i =t->hasharr[index] ;
    while(i->n!=NULL && strcmp(i->key,str)!=0)
    {

        i = i->n;
    }
    if(strcmp(i->key,str)==0)
    {return i->d;}
    else return NULL;


}
void * HashtableDEL(HashTablef t, char * str){
    int index = hashf(str);
    if(t->hasharr[index]==NULL) {
        return NULL;
    }
    itemp i =t->hasharr[index];
    if(strcmp(i->key,str)==0){
        itemp temp = t->hasharr[index];
        t->hasharr[index] = t->hasharr[index]->n;
        free(temp);
    }
    itemp in = t->hasharr[index]->n;
    while(i->n!=NULL && strcmp(in->key,str)!=0)
    {

        i = i->n;
    }
    if(strcmp(i->key,str)==0)
    {

        return i->d;



    }
    else return NULL;

}
