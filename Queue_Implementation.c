/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>
#define max 4

int main()
{
    
    int queue[max], front=-1, rear=-1, op, i, val;
    do {
        printf("\nQueue Implementation\n1. Insert\n2. Delete\n 3. Display\n4. Exit\nEnter your choice: ");
        scanf("%d", &op);
        switch(op) {
            case 1:
                if (rear>=max-1)
                    printf("\nQueue Overflow");
                else {
                    if (front == -1 && rear == -1)
                        front = rear = 0;
                    else
                        rear++;
                        
                    printf("\nEnter Number: ");
                    scanf("%d", &queue[rear]);
                }
                break;
            case 2: //Delete
                if (front == -1 || front > rear)
                    printf("\nQueue Underflow");
                else {
                    printf("%d is Deleted.",queue[front]);
                    front++;
                }
                break;
            case 3: //Display
                printf("\nYour Queue till now is:");
                if (rear>=max-1 || rear == -1)
                    printf("\nQueue Empty");
                else{
                    for(i=front; i<=rear; i++)   
                    printf("\n%d", queue[i]);
                }
                break;
        }
    }while(op != 4);
    return 0;
    
}
