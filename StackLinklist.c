//
// Created by User on 1/18/2023.
//
#include <stdlib.h>
#include <stdio.h>
#include <stdarg.h>
#include "StackLinklist.h"
typedef struct data{
    int val;
    StackLinklist n;
    int active;
}data;

StackLinklist EmptyStackLinklist(){
    StackLinklist t = (StackLinklist)malloc(sizeof (StackLinklist));
    t->n=NULL;
    t->active=0;
    return t;
}
void StackLinklistPush(StackLinklist data, int app){
    if (data->active){

        if (data->n==NULL)data->n=EmptyStackLinklist();
        StackLinklistPush(data->n, app);
    }else {data->val=app;data->active=1;}

}
void StackLinklistArrPush(StackLinklist data, int app, ...)
{
    va_list valist;
    va_start(valist, app);

    for(int i=0; i < app; i++)
    { StackLinklistPush(data, va_arg(valist, int));}



}
int StackLinklistPop(StackLinklist input) {
    if (input->n != NULL)
    {

            if (input->n->active)
                return StackLinklistPop(input->n);
            else {
                if(input->active)
                {input->active = 0;
                return input->val;}
                else  exit(87);
            }


    }else{
        if (input->active)
        {input->active = 0;
        return input->val;}
        else exit(87);


    }
}




int StackLinklistLengthLow(StackLinklist input){
    if(input->n==NULL){return 1;}
    else return 1+StackLinklistLengthLow(input->n);
}
int StackLinklistLength(StackLinklist input){
    StackLinklistLengthLow(input);
};
