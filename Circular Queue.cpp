#include <bits/stdc++.h>
using namespace std;
const int size=5;
int a[size],front=1,rear=1;

void enqueue(int value)
{
    int next_rear=(rear+1)%size;
    cout<<"next_rear "<<next_rear<<endl;
    if(next_rear==front)
    {
        cout<<"The Queue is full"<<endl;
    }
    else
    {
        a[rear]=value;
        cout<<"rear "<<rear<<endl;
        rear=next_rear;
    }

}
void dequeue()
{
    if(front==rear)
    {
        cout<<"The Queue is empty"<<endl;
    }
    else
    {
        front=(front+1)%size;
        cout<<"Front "<<front<<endl;
    }

}
void display()
{
    cout<<"Current Queue:";
    for(int i=front;i!=rear;i=(i+1)%size)
    {
        cout<<a[i]<<" ";
    }
    cout<<endl;

}

int main()
{
    enqueue(5);
    display();
    enqueue(4);
    display();
    enqueue(7);
    display();
    enqueue(1);
    display();
    dequeue();
    display();
    enqueue(42);
    display();


}
