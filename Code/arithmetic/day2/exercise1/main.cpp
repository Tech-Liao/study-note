#include <iostream>
#include<string>
using namespace std;
const int N=100010;
int a[N],top=0;
void push(int x)
{
    a[top++]=x;
}

bool empty1()
{
    if(top==0)
        return true;
    return false;
}

int query()
{
    if(empty1())
        return 10e9+1;
    
    return a[top-1];
}
int pop()
{
    if(empty1())
        return 10e9+1;
    
    int res=a[--top];
    return res;
}
int main(int argc, char** argv)
{
    int m;
    scanf("%d",&m);
    while(m--)
    {
        string s;
        int x;
        cin>>s;
        if(s=="push")
        {
            cin>>x;
            push(x);
        }
        else if(s=="pop")
        {
            int res=pop();
        }
        else if(s=="empty")
        {
            if(empty1())
                cout<<"YES"<<endl;
            else 
                cout<<"NO"<<endl;
        }
        else
            cout<<query()<<endl;
    }
    

}
