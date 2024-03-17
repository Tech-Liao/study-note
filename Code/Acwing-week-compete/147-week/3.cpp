#include<iostream>
#include<cstring>
#include<algorithm>
#include<vector>

using namespace std;

const int N=1e5+10;
int n,m;
int p[N];
bool st[N];
int find(int x)
{
    if(p[x]!=x)
        p[x]=find(p[x]);
    return p[x];
}

int main()
{
    cin>>n>>m;
    for(int i=1;i<=n;i++)
        p[i]=i;
    while(m--)
    {
        int a,b;
        cin>>a>>b;
        a=find(a),b=find(b);
        if(a==b)
            st[a]=true;
        else
            p[a]=b,st[b] |=st[a];
    }
    int ans=0;
    for(int i=1;i<=n;i++)
    {
        if(p[i]==i && !st[i])
            ans++;
    }
    cout<<ans<<endl;
    return 0;
}