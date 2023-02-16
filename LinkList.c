//
// Created by User on 2/2/2023.
//

#include <malloc.h>
#include "LinkList.h"
typedef struct Linklistnode{
    Linklistnodep n;
    void * d;
} Linklistnode;
typedef Linklistnode * Linklistnodep ;
typedef struct Linklist{
    Linklistnodep first;
    int length;

}; Linklist;
typedef Linklist * Linklistp;
Linklistnodep LinkListGetNode(Linklistnodep t ,int index){
    if (index == 0 ){return t;}else {return LinkListGetNode(t->n,index-1);}
}
void LinklistAdd(Linklistp l, int index, void * data ){
    if (index < 0 || index > l->length){
        LinklistAdd(l,l->length, data);
        return;
    }
    if (index == 0) {
        Linklistnodep t = LinklistnodeEmpty();
        t->n = l->first;
        t->d = data;
        l->first = t;
        l->length++;

    }else{
        Linklistnodep tempbefor = LinkListGetNode(l->first,index-1);
        Linklistnodep t = LinklistnodeEmpty();
        t->n=tempbefor->n;
        t->d=data;
        tempbefor->n=t;
        l->length++;

    }
}
void LinklistRemove(Linklistp l, int index){
    if (index < 0 || index > l->length){
        LinklistRemove(l,l->length-1);
        return;
    }
    if (index == 0) {
        Linklistnodep  t ;
        t=l->first;
        l->first=t->n;
        free(t);
        l->length--;
    }else{

        Linklistnodep tempbefor = LinkListGetNode(l->first,index-1);
        Linklistnodep  t = tempbefor->n ;
        tempbefor->n = t ->n;
        free(t);
        l->length--;

    }
}
void * LinklistGet(Linklistp l, int index){

    if (index >= l->length|| index <0 ){return NULL;}
    else{
        return LinkListGetNode(l->first,index)->d;

    }
}
int LinklistFind(Linklistp l, void * data,int (*f)(void*,void* ) ){
    int c = 0;
    for(Linklistnodep i = l->first; i!=NULL; i=i->n,c ++) {
        if (!f(data, i->d)) {
            return c;

        }
    }
    return -1;


}
Linklistp LinkListEmpty(){
    Linklistp t  = malloc(sizeof(Linklist));
    t->first=NULL;
    t->length=0;
}

Linklistnodep LinklistnodeEmpty(){
    Linklistnodep t = malloc(sizeof(Linklistnode));
    t->d=NULL;
    t->n=NULL;
    return t;
}
Linklistp CopyLinkList(Linklist l, int index){return NULL;}