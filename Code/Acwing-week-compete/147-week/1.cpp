#include<iostream>

#define N 110

using namespace std;

int Arr[N];
int main()
{
    int n;
    int odd=0,even=0;
    cin>>n;
    for(int i=0;i<n;i++)
        cin>>Arr[i];
    for(int i=0;i<n;i++)
    {
        if(Arr[i]%2)
            odd+=1;
        else
            even+=1;
    }
    if(odd!=even)
        cout<<"No"<<endl;
    else
        cout<<"Yes"<<endl;

    return 0;
}