#include <stdio.h>
#include <string.h>
#include "stack.h"
#include "StackLinklist.h"
#include "queue.h"
#include "hashtable.h"
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
    stackp stackp1 = Empty();
    for (int i = 0; i < 35; i++) { Push(stackp1, i); }
    for (int i = 0; i < 34; i++) { printf("%d ", Pop(stackp1)); }

    for (int i = 0; i < 12; i++) { Push(stackp1, i); }

    for (int i = 0; i < 13; i++) { printf("%d ", Pop(stackp1)); }
    printf("\n");

}

void StackLinklist1() {
    StackLinklist t = EmptyStackLinklist();
//    for(int i = 0 ; i<4 ;i++){ PushStackLinklist(t,i);}
//    for(int i =0	 ; i<3 ;i++){printf("%d \n", PopStackLinklist(t));}
//    for(int i = 0 ; i<2 ;i++){ PushStackLinklist(t,i);}
//
//    for(int i =0	 ; i<6 ;i++){printf("R2::%d  \n", PopStackLinklist(t));}
//
    if (1) {

        PushStackLinklistArr(t, 3, 2, 3, 4);
        printf("%d \n", PopStackLinklist(t));
        printf("%d \n", PopStackLinklist(t));
        printf("%d \n", PopStackLinklist(t));
        PushStackLinklistArr(t, 6, 6, 5, 4, 3, 2, 1);
        printf("%d \n", PopStackLinklist(t));
        printf("%d \n", PopStackLinklist(t));
        printf("%d \n", PopStackLinklist(t));
        PushStackLinklist(t, 8);
        PushStackLinklist(t, 7);
        printf("%d \n", PopStackLinklist(t));
        printf("%d \n", PopStackLinklist(t));
        printf("%d \n", PopStackLinklist(t));
        printf("%d \n", PopStackLinklist(t));
        printf("%d \n", PopStackLinklist(t));
        //printf("%d \n", PopStackLinklist(t));
    }

}

void Queue1(){
    queuep t = EmptyQueue();
    printf("-----%d \n", LengthQueue(t));
    Enqueuelist(t,5,1,2,3,4,5);
    printf("-----%d \n", LengthQueue(t));
    for (int i = 0; i < 3; i++)
    { printf("%d \n", Dequeue(t)); }
    printf("-----%d \n", LengthQueue(t));
    for (int i = 0; i < 30; i++)
    { Enqueue(t,i); }
    printf("-----%d \n", LengthQueue(t));
    for (int i = 0; i < 32; i++)
    { printf("%d \n", Dequeue(t)); }

    printf("-----%d \n", LengthQueue(t));


}

void hastabel1(){
    HashTablef  t = EmptyHashtabel();
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
    printf("%s \n", HashtableGet(t,d[0]));
    printf("%s \n", HashtableGet(t,d[1]));
    printf("%s \n", HashtableGet(t,d[2]));
    printf("%s \n", HashtableGet(t,d[3]));
    printf("%s \n", HashtableGet(t,d[4]));
    HashtableDEL(t,d[3]);
    HashtableDEL(t,"key13");

    HashtableDEL(t,"key7");

    HashtableDEL(t,"key1");

    HashtableDEL(t,"key3");

    HashtableDEL(t,"key5");
    HashtableDEL(t,"key10");
    HashtableDEL(t,d[1]); HashtableDEL(t,d[2]);
    printf("%s \n", HashtableGet(t,d[3]));

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
//
        hastabel1();
//        int a[]={1,2,3,4};
//        int b[]={7,7,7,7};
//        for(int i =0; i<100;i++){printf(" %d\n",a[i]);}


    }

    printf("END -------------\n");
    return 0;
}
