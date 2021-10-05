#include <stdio.h>
#include <stdlib.h>
//Global Variable
int size,choice,ele;


//Creating Stack
struct stack{
    int arr[100];//we can store 100 elements
    int top;//pointing to the top of the stack

}st;

//Inserting Element
void push()
{
    if((st.top)==size-1)
    {
        printf("\n Stack is Full");
    }
    else
    {
      
        printf("Enter the value to push\n");
        scanf("%d",&ele);
        st.arr[++st.top]=ele;
    }
}

//Removing Element
int pop()
{
    if((st.top)==-1)
    {
        printf("\nStack is Empty");
        return 0;
    }
    else
    {
        int out;
        out=st.arr[st.top];
        st.top--;//changed st.top++ to st.top--
        return out;
    }
}

//Peek(top element)
void peek()
{
    if(st.top>=0)
    {
        int display;
        display=st.arr[st.top];
        printf("Peek Element is %d \n",display);
    }
    else
    {
        printf("Stack is empty,so thers is no peek element in the stack\n");
    }
}

//Display Stack
void display()
{
    if((st.top)>=0)
    {
        printf("\n\nElements in the Stack");
        for(int i=st.top;i>=0;i--)//changed i++ to i--
        {
            printf("\n%d",st.arr[i]);
        }
    }
    else
    {
        printf("No elements to Display");
    }
}

int main()
{
    st.top=-1;
    printf("Enter a Stack size less than 100 : ");
    scanf("%d",&size);
    printf("\nStack Operations.....");
    printf("\n\t 1.PUSH\n\t 2.POP\n\t 3.PEEK\n\t 4.DISPLAY\n\t 5.EXIT");

    do{
        printf("\nEnter Your Choice  ");
        scanf("%d",&choice);
        switch(choice)
        {
        case 1:
            {
                push();
                break;
            }
        case 2:
            {
                printf("%d",pop());
                break;
            }
        case 3:
            {
                peek();
                break;
            }
        case 4:
            {
                display();
                break;
            }
        case 5:
            {
                printf("\n\t EXIT Point");
                break;
            }
        default:
            printf("\nEnter a correct choice (1,2,3,4,5)");
        }
    }while(choice!=5);
    return 0;
}