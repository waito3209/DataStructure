

//
// Created by User on 1/15/2023.
//
#include <malloc.h>
#include "stack.h"
#define LEN 10

typedef struct stackd{
    int leng;
    int data[LEN];
    stackp next;

}stackd;
stackp StackEmpty(){
   // printf("Emptying...\n");
    stackp temp = malloc(sizeof(stackd));
    temp->leng=0;
    temp->next=NULL;
    return temp;

}

void StackPush(stackp stackp1, int app)
{
    if (stackp1->leng< LEN )
	{
       		stackp1->data[stackp1->leng]=app;
    		
	}
    else {
		if (stackp1->next == NULL)
		{
//		printf("init %d",app);
		stackp1->next= StackEmpty();
		}
        StackPush(stackp1->next, app);

	}
	stackp1->leng++;


}
int StackPop(stackp stackp1){
    if (!StackIsEmpty(stackp1))
    {
    int temp;
	stackp1->leng--;
	if(stackp1->leng < LEN)
    {temp=    stackp1->data[stackp1->leng];
    //    if (stackp1->leng==0){free(stackp1);}

    }
	else
    {temp = StackPop(stackp1->next);}
    return temp;
     }
    else 
	return -9;
}
int StackIsEmpty(stackp stackp1){

    return ( stackp1->leng <1);

};
int Depth(stackp stackp1){
    return stackp1->leng;
};
