//merge
#include <stdio.h>
#include <stdlib.h>

struct node{
    int data;
    struct node* next;
};

struct node* merge(struct node* l1, struct node* l2){

    struct node dummy;
    struct node* tail=&dummy;
    dummy.next=NULL;

    while(l1 && l2){
        if(l1->data < l2->data){
            tail->next=l1;
            l1=l1->next;
        }
        else{
            tail->next=l2;
            l2=l2->next;
        }
        tail=tail->next;
    }

    if(l1) tail->next=l1;
    else tail->next=l2;

    return dummy.next;
}