#include <stdio.h>
#include <stdlib.h>


struct Node {
    int data;
    struct Node* next;
};

int main() {
    struct Node *head = NULL;
    struct Node *newNode ,*secondNode;

    newNode = (struct Node*)malloc(sizeof(struct Node));

    newNode->data = 10;
    newNode->next = NULL; 

        printf("newNode data addr->%p\n",&newNode->data);
        printf("newNode next addr->%p\n",&newNode->next);
        head =newNode;
        printf("head-> %p\n",head);
        secondNode = (struct Node*)malloc(sizeof(struct Node));
        secondNode->data = 20;
        secondNode->next = NULL;
        printf("secondNode data addr->%p\n",&secondNode->data);
        printf("secondNode next addr->%p\n",&secondNode->next);
        newNode->next = secondNode ; 
         printf("newnodenext ->%p\n",&newNode->next);
         struct Node *temp=head;
         while (temp!=NULL){
         	printf("%d->",temp->data);
         	temp=temp->next;
		 }
		 printf("NULL\n");
		 return 0;
}
   