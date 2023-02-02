//
// Created by User on 1/19/2023.
//

#include <malloc.h>
#include <stdarg.h>
#include "queue.h"
#include <stdlib.h>
typedef struct celld{
    int d;
    cellp n;

}celld;

typedef struct queue {
    cellp F,E;


}queue;

queuep EmptyQueue(){
    queuep t = (queuep) malloc(sizeof(queue));
    t->E=NULL;
    t->F=NULL;


    return t;
}
cellp CellEmpty(){
    cellp t = (cellp)malloc(sizeof (celld));
    t->n=NULL;
    return t;


}
void QueueEnqueue(queuep t, int app){
    cellp newcell = CellEmpty();
    if (t->E!=NULL)
        t->E->n=newcell;
    if (t->F==NULL)
        t->F=newcell;
    t->E=newcell;
    newcell->d=app;


}
void QueueEnqueuelist(queuep t , int l , ...){

    va_list valist;
    va_start(valist,l);

    for(int i=0;i<l;i++)
    { QueueEnqueue(t, va_arg(valist, int));}


}
int QueueDequeue(queuep t){
    if (t->F==NULL)exit(87);
    int  r = t->F->d;
    cellp bin = t->F;
    t->F=t->F->n;
    free(bin);
    return r;
}
int QueueLength(queuep t){

    int i=1;
    if (t->F==NULL)
        return 0;
        cellp count =t->F;
    for(;count->n!=NULL;count = count->n){i++;}
    return i;
}