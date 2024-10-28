#include <stdio.h>
#include <stdlib.h>
#define SIZE 20
int top = -1, a[SIZE];
void push();
void pop();
void display();
int main()
{
    int choice;
    while(1){
        printf("\n 1.push\n 2.pop\n 3.display\n 4.exit\n");
        printf("enter your choice: ");
        scanf("%d",&choice);
        switch(choice){
        case 1: push();
            break;
        case 2: pop();
            break;
        case 3: display();
            break;
        case 4: exit(0);

        default: printf("invalid choice\n");
        }
    }
    return 0;
}
    void push(){
        int x;
        if(top == SIZE-1){
            printf("stack overflow\n");
        }
        else{
            printf("enter the element:");
            scanf("%d",&x);
            top = top+1;
            a[top]=x;
        }
    }
    void pop(){
        if(top == -1){
            printf("empty stack");
        }
        else{
            printf("popped element : %d",a[top]);
            top = top -1;
        }
    }
    void display(){
        if(top == -1){
            printf("empty stack");
        }
        else{
            printf("elements in the stack: \n");
            for(int i=top;i>=0;i--)
                printf("%d\n",a[i]);
        }
    }

