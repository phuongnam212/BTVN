SinglyLinkedListNode* insertNodeAtTail(SinglyLinkedListNode* head, int data) {
SinglyLinkedListNode* tmp = new SinglyLinkedListNode(data);
if (head==NULL){
    head=tmp;
}
else {
    SinglyLinkedListNode* p =head;
    while (p->next!=NULL){
        p=p->next;
    }
    p->next=tmp;
}
 return head;
}
