SinglyLinkedListNode* insertNodeAtHead(SinglyLinkedListNode* llist, int data) {
 SinglyLinkedListNode*tmp=new SinglyLinkedListNode(data);
 if (llist==NULL){
     llist=tmp;
 }
 else {
     tmp->next=llist;
     llist=tmp;
 }
return llist;
}
