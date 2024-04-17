#include<iostream>

using namespace std;
const int N=100010;
int a[N],top=0;
int zhan[N];
int main()
{
    int n;
    scanf("%d",&n);
    for(int i=0;i<n;i++)
        scanf("%d",&a[i]);
    
    for(int i=0;i<n;i++)
    {
        if(top==0)
        {
            cout<<"-1"<<" ";
            zhan[top++]=a[i];
        }
        else
        {
            while(top>0&&a[i]<=zhan[top-1])
                top--;
            if(top>0)
                cout<<zhan[top-1]<<" ";
            else
                cout<<"-1"<<" ";
            zhan[top++]=a[i];
        }
    }
    
    return 0;
}