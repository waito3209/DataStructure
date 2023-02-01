//
// Created by User on 1/18/2023.
// stack implement by linklist
//

#ifndef REV_STACKLINKLIST_H
#define REV_STACKLINKLIST_H
typedef struct data * StackLinklist;
StackLinklist EmptyStackLinklist();
void PushStackLinklist(StackLinklist data, int app);
void PushStackLinklistArr(StackLinklist data, int app,...);

int PopStackLinklist(StackLinklist input);
int StackLinklistLength(StackLinklist input);
#endif //REV_STACKLINKLIST_H
