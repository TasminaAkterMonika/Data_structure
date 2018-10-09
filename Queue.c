#include<stdio.h>
#define SIZE 20
int queue[SIZE], head = -1, tail = 0;
void enQueue(int value){
if(head == SIZE-1)
printf("\nQueue is Full!!!");
else{
head++;
queue[head] = value;
}
}
void deQueue(){
if(head == -1)
printf("\nQueue is Empty!!! ");
else{
printf("\nDeleted : %d", queue[tail]);
tail++;
}
}
void display(){
if(head == -1)
printf("\nQueue is Empty!!!");
else{
int i;
printf("\nQueue elements are:\n");
for(i=tail; i<=head; i++)
printf("%d\t",queue[i]);
}
}
void main()
{
enQueue(60);
deQueue(30);
enQueue(45);
display();
enQueue(40);

}

