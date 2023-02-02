//
// Created by User on 1/19/2023.
//

#ifndef REV_QUEUE_H
#define REV_QUEUE_H

typedef  struct celld * cellp;
typedef  struct queue * queuep;
queuep EmptyQueue();
void QueueEnqueue(queuep t, int app);
void QueueEnqueuelist(queuep t , int l , ...);
int QueueDequeue(queuep t);
int QueueLength(queuep t);
cellp CellEmpty();





#endif //REV_QUEUE_H
