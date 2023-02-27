//
// Created by User on 1/18/2023.
// stack implement by linklist
//

#ifndef REV_STACKLINKLIST_H
#define REV_STACKLINKLIST_H
typedef struct data * StackLinklist;
StackLinklist EmptyStackLinklist();
void StackLinklistPush(StackLinklist data, int app);
void StackLinklistArrPush(StackLinklist data, int app, ...);

int StackLinklistPop(StackLinklist input);

int StackLinklistPeek(StackLinklist input);
int StackLinklistLength(StackLinklist input);
#endif //REV_STACKLINKLIST_H
