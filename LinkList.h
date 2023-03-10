//
// Created by User on 2/2/2023.
//

#ifndef REV_LINKLIST_H
#define REV_LINKLIST_H
typedef struct Linklistnode Linklistnode;
typedef Linklistnode * Linklistnodep ;
typedef struct Linklist Linklist;
typedef Linklist * Linklistp;
void LinklistAdd(Linklistp l, int index, void * data );
void LinklistRemove(Linklistp l, int index);// linklist index > len , del last
void * LinklistGet(Linklistp l, int index);
int LinklistFind(Linklistp l, void * data,int (*f)(void*,void* ) );
Linklistp LinkListEmpty();
Linklistnodep LinklistnodeEmpty();
Linklistp CopyLinkList(Linklist l, int index);

#endif //REV_LINKLIST_H
