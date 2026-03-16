//remove linkedlist element
struct ListNode* removeElements(struct ListNode* head, int val) {
    while(head && head->val==val)
        head=head->next;

    struct ListNode* curr=head;

    while(curr && curr->next){
        if(curr->next->val==val)
            curr->next=curr->next->next;
        else
            curr=curr->next;
    }

    return head;
}