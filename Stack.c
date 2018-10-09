// Java code for stack implementation
#include <stdio.h>
int stack[20];
int head = -1;
void push(int data){
head++;
stack[head] = data;
}
int pop(){
int data = stack[head];
head--;
return data;
}
void printstack(){
    printf("Data in your stack\n");
    for(int i=0;i<=head;i++){
            printf("%d ",stack[i]);
}
}
void main()
{
    push(10);//push any numbers
    pop(7);//pop any numbers
    push(5);
    printstack();
    int data = pop();
    printf("\nyour pop data %d \n",data);
    printstack();

}
