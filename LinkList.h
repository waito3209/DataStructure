//
// Created by User on 2/2/2023.
//

#ifndef REV_LINKLIST_H
#define REV_LINKLIST_H
typedef struct Linklistnode Linklistnode;
typedef Linklistnode * Linklistnodep ;
typedef struct Linklist Linklist;
typedef Linklist * LinkListp;
void LinklistAdd(LinkListp l,int index, void * data );
void LinklistRemove(LinkListp l,int index, void * data);
void * LinklistGet(LinkListp l,int index, void * data);
int LinklistFind(LinkListp l,int index, void * data);


#endif //REV_LINKLIST_H
