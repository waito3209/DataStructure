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
void LinklistRemove(Linklistp l, int index, void * data);
void * LinklistGet(Linklistp l, int index);
int LinklistFind(Linklistp l, int index, void * data,int size;);
Linklistp LinkListEmpty();
Linklistnodep LinklistnodeEmpty();
Linklistp CopyLinkList(Linklist l, int index);

#endif //REV_LINKLIST_H
