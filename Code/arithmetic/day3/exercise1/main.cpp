#include <iostream>
#include<string>
using namespace std;
const int N=100010;
int a[N];
int front=0,rear=0;

bool empty()
{
    if(front == rear)
        return true;
    return false;
}

void push(int x)
{
    a[rear++]=x;
}

void pop()
{
    if(empty())
        cout<<"queue is empty"<<endl;
    else
        front++;
}
int query()
{
    if(empty())
    {
        cout<<"queue is empty"<<endl;
        return -1;
    }
    return a[front];

}

int main(int argc, char** argv)
{
    int m;
    scanf("%d",&m);
    while(m--)
    {
        int x;
        string s;
        cin>>s;
        if(s=="push")
        {
            cin>>x;
            push(x);
        }
        else if(s=="pop")
            pop();
        else if(s=="empty")
        {
            if(empty())
                cout<<"YES"<<endl;
            else
                cout<<"NO"<<endl;
        }
        else
            cout<<query()<<endl;

    }
    return 0;
}
