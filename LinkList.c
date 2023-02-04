//
// Created by User on 2/2/2023.
//

#include "LinkList.h"
typedef struct Linklistnode{
    Linklistnodep n;
    void * d;
} Linklistnode;
typedef Linklistnode * Linklistnodep ;
typedef struct Linklist{
    int len;
    Linklistnode first;

}; Linklist;
typedef Linklist * LinkListp;
void LinklistAdd(LinkListp l,int index, void * data );
void LinklistRemove(LinkListp l,int index, void * data);
void * LinklistGet(LinkListp l,int index, void * data);
int LinklistFind(LinkListp l,int index, void * data);
Linklist EmptyLinkList();
Linklist CopyLinkList(Linklist l,int index);

