//
// Created by User on 1/19/2023.
//

#ifndef REV_QUEUE_H
#define REV_QUEUE_H

typedef  struct celld * cellp;
typedef  struct queue * queuep;
queuep EmptyQueue();
void Enqueue(queuep t,int app);
void Enqueuelist(queuep t ,int l , ...);
int Dequeue(queuep t);
int LengthQueue(queuep t);
cellp Emptycell();





#endif //REV_QUEUE_H
