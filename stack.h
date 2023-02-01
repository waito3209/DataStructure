//
// Created by User on 1/15/2023.
// stack implement by linked aray
//  warning ** memory leak ** not yet fixed
//

#ifndef REV_STACK_H
#define REV_STACK_H



typedef struct  stackd *stackp;
stackp Empty();
void Push(stackp stackp1,int app);
int Pop(stackp stackp1);
int IsEmpty(stackp stackp1);
int Depth(stackp stackp1);




#endif //REV_STACK_H
