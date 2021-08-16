#include <stdio.h>

int stack1[1000];
int stack2[1000];
int top1 = 0;
int top2 = 0;

int pop1() {
    int element = -100;
    if (top1 > 0) {
        element = stack1[top1-1];
        top1 -= 1;
    }
    return element;
}

int pop2() {
    int element = -100;
    if (top2 > 0) {
        element = stack2[top2-1];
        top2 -= 1;
    }
    return element;
}

void push1(int element) {
    stack1[top1] = element;
    top1 += 1;
}

void push2(int element) {
    stack2[top2] = element;
    top2 += 1;
}

int enqueue(int element) {
    push1(element);
}

int dequeue() {
    while (top1 > 0) {
        int x = pop1();
        push2(x);
    }
    int element = pop2();
    while (top2 > 0) {
        int x = pop2();
        push1(x);
    }
    return element;
}

void display () {
    printf("221810305050_Umakanth: Elements in the queue are\n");
    if (top1 == 0) {
        printf("221810305050_ Umakanth: The queue is empty");
    } else {
        for (int i = 0; i < top1; i++) {
            printf("%d\t", stack1[i]);
        }
    }
    printf("\n");
}

int main () {
    int option;
    int element;
    while(1) {
        printf("\n\n221810305050_ Umakanth\t: Select an option");
        printf("\n1.ENQUEUE\n2.DEQUEUE\n3.EXIT\n");
        scanf("%d", &option);
        switch (option)
        {
        case 1:
            printf("221810305050_ Umakanth\t:Enter the element\n");
            scanf("%d", &element);
            enqueue(element);
            display();
            break;
        case 2:
            element = dequeue();
            if (element == -100) {
                printf("221810305050_ Umakanth\t:The queue is empty\n");
            }
            else {
                printf("221810305050_ Umakanth\t:The dequeued element is :\t %d\n", element);
                display();
            }
            
            break;
        case 3:
            exit(0);
            break;
        default:
            exit(0);
            break;
        }
    }
    return 0;
}
