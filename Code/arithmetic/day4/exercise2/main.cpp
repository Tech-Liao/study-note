#include<iostream>

using namespace std;
const int N=10e6+10;
char S[N];
char P[N];
int main()
{
    int n,m;
    int ne[N];
    cin>>n>>P>>m>>S;
    ne[0]=-1;
    for(int i=1,j=-1;i<n;i++)
    {
        while(j!=-1&&P[i]!=P[j+1])
            j=ne[j];
        if(P[i]==P[j+1])
            j++;
        ne[i]=j;
    }
    
}