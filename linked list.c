#include <stdio.h>
struct Node
{
int data;
struct Node *next;
};
struct Node *head = NULL;
void insertAtBeginning(int value)
{
struct Node *newNode;
//create a link
newNode = (struct Node*)malloc(sizeof(struct Node));
newNode->data = value;
newNode->next = NULL;
if(head == NULL)
{
head = newNode;
}
else
{
newNode->next = head;
head = newNode;
}
}
void display()
{
if(head == NULL)
{
printf("\nList is Empty\n");
}
else
{
struct Node *temp = head;
printf("\n\nList elements are - \n");
while(temp->next != NULL)
{
printf("%d ",temp->data);
temp = temp->next;
}
printf("%d ",temp->data);
}
}
void insertAtEnd(int value)
{
struct Node *newNode;
newNode = (struct Node*)malloc(sizeof(struct Node));
newNode->data = value;
newNode->next = NULL;
if(head == NULL)
head = newNode;
else
{
struct Node *temp = head;
while(temp->next != NULL){
temp = temp->next;
}
temp->next = newNode;
}
}
void removeBeginning()
{
if(head == NULL)
printf("\n\nList is Empty!!!");
else
{
struct Node *temp = head;
if(head->next == NULL)
{
head = NULL;
free(temp);
}
else
{
head = temp->next;
free(temp);
}
}
}
void removeEnd()
{
if(head == NULL)
{
printf("\nList is Empty!!!\n");
}
else
{
struct Node *temp1 = head,*temp2;
if(head->next == NULL)
{
head = NULL;
}
else
{
while(temp1->next != NULL)
{
temp2 = temp1;
temp1 = temp1->next;
}
temp2->next = NULL;
}   free(temp1);
}
}
int main()
{
insertAtEnd(20);// 20
insertAtEnd(60); // 10 60
insertAtBeginning(80); // 80 10 20
insertAtBeginning(70); // 70 40 10 20
insertAtEnd(120); // 50 40 10 20 120
display();
removeBeginning(); // 40 10 20 120
display();
removeEnd(); // 40 10 20
display();
return 0;
}

