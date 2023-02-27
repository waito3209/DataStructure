#include <stdio.h>
#include <string.h>
#include "stack.h"
#include "StackLinklist.h"
#include "queue.h"
# include "LinkList.h"
#include "hashtable.h"
#include "List.h"
void t1() {
    printf("Hello, World!\n");
    int a = 0;
    printf("%d\n\n\n", a);
    char *str;
    str = "Hello World 123\\n3";
    printf("%c", str[4]);
    printf("%c", str[strlen(str) - 2]);

    printf("%c\n--------------\n", str[strlen(str) - 1]);
}
void stack1() {
    stackp stackp1 = StackEmpty();
    for (int i = 0; i < 35; i++) { StackPush(stackp1, i); }
    for (int i = 0; i < 34; i++) { printf("%d ", StackPop(stackp1)); }

    for (int i = 0; i < 12; i++) { StackPush(stackp1, i); }

    for (int i = 0; i < 13; i++) { printf("%d ", StackPop(stackp1)); }
    printf("\n");

}

void StackLinklist1() {
    StackLinklist t = EmptyStackLinklist();
//    for(int i = 0 ; i<4 ;i++){ StackLinklistPush(t,i);}
//    for(int i =0	 ; i<3 ;i++){printf("%d \n", StackLinklistPop(t));}
//    for(int i = 0 ; i<2 ;i++){ StackLinklistPush(t,i);}
//
//    for(int i =0	 ; i<6 ;i++){printf("R2::%d  \n", StackLinklistPop(t));}
//
    if (1) {

        StackLinklistArrPush(t, 3, 2, 3, 4);
        printf("%d \n", StackLinklistPop(t));
        printf("%d \n", StackLinklistPop(t));
        printf("%d \n", StackLinklistPop(t));

        StackLinklistArrPush(t, 6, 6, 5, 4, 3, 2, 1);
        printf("%d \n", StackLinklistPop(t));
        printf("%d \n", StackLinklistPop(t));
        printf("%d \n", StackLinklistPop(t));
        printf("%d \n", StackLinklistPop(t));
        printf("%d \n", StackLinklistPop(t));
        printf("%d \n", StackLinklistPop(t));
        StackLinklistPush(t, 8);
        StackLinklistPush(t, 7);
        printf("%d \n", StackLinklistPop(t));
        printf("%d \n", StackLinklistPop(t));

        //printf("%d \n", StackLinklistPop(t));
    }

}

void Queue1(){
    queuep t = EmptyQueue();
    printf("-----%d \n", QueueLength(t));
    QueueEnqueuelist(t, 5, 1, 2, 3, 4, 5);
    printf("-----%d \n", QueueLength(t));
    for (int i = 0; i < 3; i++)
    { printf("%d \n", QueueDequeue(t)); }
    printf("-----%d \n", QueueLength(t));
    for (int i = 0; i < 30; i++)
    { QueueEnqueue(t, i); }
    printf("-----%d \n", QueueLength(t));
    for (int i = 0; i < 32; i++)
    { printf("%d \n", QueueDequeue(t)); }

    printf("-----%d \n", QueueLength(t));


}
int comparestr(void* d1,void* d2)
{
    //printf("%s \n%s \n---\n",d1,d2);
    return strcmp(d1,d2);
}

void hastabel1(){
    HashTablef  t = HashtabelEmpty();
    char d[5][5] = {"key1","key2","key3","key4","key5"};
    HashtabelPut(t,d[0],"data0");
    HashtabelPut(t,d[1],"data1");
    HashtabelPut(t,d[2],"data2");

    HashtabelPut(t,d[3],"data3");
    HashtabelPut(t,d[1],"newdata1");

    HashtabelPut(t,d[2],"newdata2");

    HashtabelPut(t,"key7","data7");

    HashtabelPut(t,"key5","data7");

    HashtabelPut(t,"key6","data7");

    HashtabelPut(t,"key10","data10");

    HashtabelPut(t,"key13","data13");
    printf("%s \n",(char *) HashtableGet(t,d[0]));
    printf("%s \n",(char *) HashtableGet(t,d[1]));
    printf("%s \n",(char *) HashtableGet(t,d[2]));
    printf("%s \n",(char *) HashtableGet(t,d[3]));
    printf("%s \n",(char *) HashtableGet(t,d[4]));
    HashtableDEL(t,d[3]);
    HashtableDEL(t,"key13");
    HashtableDEL(t,"key7");
    HashtableDEL(t,"key1");
    HashtableDEL(t,"key3");
    HashtableDEL(t,"key5");
    HashtableDEL(t,"key10");
    HashtableDEL(t,d[1]); HashtableDEL(t,d[2]);
    printf("%s \n",(char *) HashtableGet(t,d[3]));

}
void linklist1(){
	printf("Link\n");
    char d[6][10] = {"key0","key1","key2","key3","key4","key5"};
    Linklistp t = LinkListEmpty();

    LinklistAdd(t,-1,d[0]);
    LinklistAdd(t,-1,d[1]);
    LinklistAdd(t,-1,d[2]);
    LinklistAdd(t,-1,d[3]);
    LinklistAdd(t,-1,d[4]);
    int (*tf)(void*,void* ) = &comparestr;
    for(int i = 0; i<5;i++)
    {
        printf("%d : %s \n",i, LinklistGet(t,i) );

    }
    printf("%d\t\n", LinklistFind(t,"key2",tf));

    printf("%d\t\n", LinklistFind(t,"key",tf));
    printf("\n\n\n");
    LinklistRemove(t, LinklistFind(t,"key5",tf));
    for(int i = 0; i<4;i++)
    {printf("%d : %s \n",i, LinklistGet(t,i) );}
    printf("\n\n\n");
    LinklistRemove(t, LinklistFind(t,"key0",tf));
    for(int i = 0; i<3;i++)
    {printf("%d : %s \n",i, LinklistGet(t,i) );}
    printf("\n\n\n");
    LinklistRemove(t, LinklistFind(t,"key2",tf));
    for(int i = 0; i<2;i++)
    {printf("%d : %s \n",i, LinklistGet(t,i) );}




}
void list1(){
    printf("List\n");
    char d[6][10] = {"key0","key1","key2","key3","key4","key5"};

    Listp t = Cons(d[0],EmptyList());



}
int search(int *a,int n,int key)
{
    int i;
    for(i=0; i<n; i++)
    {
        if(a[i]==key)
        {
            return i;
        }

    }

    return 0;

}
void Q219(){// Online C compiler to run C program online


        // Write C code here
        //int d[] = {1,3,5,7,2,6,4};
        //int d[] = {6,5,4,8,7,9,3,2,1};
        //int d[] = {4 ,11, 9, 12, 13, 10, 5, 7, 2, 6, 8, 3, 1};
        int d[]= {3 ,4 ,2, 1, 5 ,6, 10 ,8 ,11 ,16 ,18, 9, 17 ,7, 13, 15, 12, 14};
        int dlen = sizeof(d)/sizeof(int);
        int input_stack = 1;
        StackLinklist stack1 = EmptyStackLinklist();
        StackLinklist stack2 = EmptyStackLinklist();
        int LenSt1=0,LenSt2=0,Popindex1,Popindex2;
        for(int di = 0 ; (di< dlen);di++) {
            if (input_stack==d[di])
            {printf("Finding %d getting %d Complete imed  \n",d[di],input_stack);
                input_stack++;}
            else if (input_stack<d[di]){
                while (input_stack<d[di]) {
                        printf("Finding %d  getting %d Storing  \n", d[di], input_stack);
                        int input_stack_future_pos = search(d,dlen,input_stack);
                        printf("    stack 1  {LEN : %d} peek : %d\n",LenSt1,LenSt1>0?StackLinklistPeek(stack1):-1);
                        printf("    stack 2  {LEN : %d} peek : %d\n",LenSt2,LenSt2>0?StackLinklistPeek(stack2):-1);
                        if (LenSt1 ==0 && LenSt2==0){
                            //push stack 1
                            printf("        Pushing stack 1 ; %d \n",input_stack);
                            LenSt1++;
                            StackLinklistPush(stack1,input_stack);
                        }else if (LenSt1 !=0 &&LenSt2==0){
                            // check can push stack1
                            int st1_peek_future_pos = search(d,dlen,StackLinklistPeek(stack1));
                            printf("        Checking stack1 stack1 futurepos  :%d \n",st1_peek_future_pos);
                            if (input_stack_future_pos< st1_peek_future_pos){
                                //push stack 1
                                LenSt1++;
                                StackLinklistPush(stack1,input_stack);
                                printf("        Pushing stack1 \n");
                            }else{
                                //push stack 2
                                LenSt2++;
                                StackLinklistPush(stack2,input_stack);
                                printf("        Pushing stack2 \n");
                            }
                        }else if (LenSt1 ==0 &&LenSt2!=0){
                            int st2_peek_future_pos = search(d,dlen,StackLinklistPeek(stack2));
                            printf("        Checking stack2 stack2 futurepos  :%d \n",st2_peek_future_pos);
                            if (input_stack_future_pos< st2_peek_future_pos){
                                //push stack 2
                                LenSt2++;
                                StackLinklistPush(stack2,input_stack);
                                printf("        Pushing stack2 \n");

                            }else{
                                //push stack 1
                                LenSt1++;
                                StackLinklistPush(stack1,input_stack);
                                printf("        Pushing stack1 \n");
                            }

                        }else if (LenSt1 !=0 &&LenSt2!=0){
                            int st1_peek_future_pos = search(d,dlen,StackLinklistPeek(stack1));
                            int st2_peek_future_pos = search(d,dlen,StackLinklistPeek(stack2));
                            printf("        Checking stack1 stack1 futurepos  :%d \n",st1_peek_future_pos);
                            printf("        Checking stack1 stack2 futurepos  :%d \n",st2_peek_future_pos);
                            if ((input_stack_future_pos< st1_peek_future_pos)
                            && (input_stack_future_pos< st2_peek_future_pos)){
                                int diff_1= st1_peek_future_pos - input_stack;
                                int diff_2= st2_peek_future_pos - input_stack;
                                if (diff_1> diff_2){
                                    LenSt1++;
                                    StackLinklistPush(stack1,input_stack);
                                    printf("        Pushing stack1 \n");
                                }else{
                                    LenSt2++;
                                    StackLinklistPush(stack2,input_stack);
                                    printf("        Pushing stack2 \n");
                                }




                            }else if  (input_stack_future_pos< st1_peek_future_pos){
                                    //push stack 1
                                    LenSt1++;
                                    StackLinklistPush(stack1,input_stack);
                                    printf("        Pushing stack1\n");
                            }else if (input_stack_future_pos< st2_peek_future_pos){
                                //push stack 2
                                LenSt2++;
                                StackLinklistPush(stack2,input_stack);
                                printf("        Pushing stack2\n");

                            }else{
                                printf("[WARN][WARN][WARN][WARN][WARN][WARN][WARN][WARN]\n");
                            }

                        }
                        input_stack++;


                }
                printf("Finding %d getting %d Complete imed  \n",d[di],input_stack);
                input_stack++;


            }else if((input_stack>d[di])){
                printf("Finding %d  getting %d  >> finding in stack\n",d[di],input_stack);
                if (LenSt1>0?StackLinklistPeek(stack1):-1 == input_stack){
                    StackLinklistPop(stack1);
                    LenSt1--;
                    printf("Poping stack 1 \n");}
                else if (LenSt2>0?StackLinklistPeek(stack2):-1 == input_stack){
                    StackLinklistPop(stack2);
                    LenSt2--;
                    printf("Poping stack 2 \n");}
                else printf("[fatal][fatal][[fatal][[fatal][fatal]\n");
            }

            }


        }

int main(int argl, char *argd[]) {


    printf("%d\n", argl);
    printf("%s\n", argd[0]);
    if (argl != 1) {
        for (int i = 1; i < argl; i++) {

            printf("%s\n", argd[i]);
            if (!strcmp(argd[i], "t1")) { t1(); }
           if (!strcmp(argd[i], "stack1")) { stack1(); }

            if (!strcmp(argd[i], "StackLinklist")) { StackLinklist1(); }
            if (!strcmp(argd[i], "Queue1")) { Queue1(); }
            if (!strcmp(argd[i],"hastabel1")){hastabel1();}
	        if (!strcmp(argd[i],"linklist1")){linklist1();}
            if (!strcmp(argd[i],"List1")){list1();}
            printf("\n%s-----------END\n", argd[i]);

        }
    } else {
        //main
//
//        t1();
//        t2();
//        stack1();
//        StackLinklist1();
//        Queue1();
//        hastabel1();
//        int a[]={1,2,3,4};
//        int b[]={7,7,7,7};
//        for(int i =0; i<100;i++){printf(" %d\n",a[i]);}
//linklist1();
//list1();
Q219();
    }

    printf("END -------------\n");
    return 0;
}
