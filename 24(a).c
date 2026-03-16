//delete first
#include <stdio.h>
#include <stdlib.h>

struct node{
    int data;
    struct node* next;
};

struct node* deleteKey(struct node* head,int key){

    struct node *temp=head,*prev=NULL;

    if(head!=NULL && head->data==key){
        head=head->next;
        free(temp);
        return head;
    }

    while(temp!=NULL && temp->data!=key){
        prev=temp;
        temp=temp->next;
    }

    if(temp==NULL)
        return head;

    prev->next=temp->next;
    free(temp);

    return head;
}