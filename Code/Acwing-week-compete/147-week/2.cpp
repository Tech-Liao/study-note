#include <iostream>
#include<set>
#include <string>
#include <vector>
#include <algorithm>
#define N 10010
using namespace std;
bool f[N];
int main()
{
    string s;
    cin>>s;
    unsigned int n=s.length();
    f[n-1]=true;
    set<string> res;
    for(int i=n-2;i>=4;i--)
    {
        for(int j=2;j<=3;j++)
        {
            if(f[i+j])
            {
                string a=s.substr(i+1,j);
                string b =s.substr(i+j+1,j);
                if(a!=b || f[i+5])
                {
                    f[i]=true;
                    res.insert(a);
                }
            }
        }
        
    }
    cout<<res.size()<<endl;
    for(auto &it:res)
        cout<<it<<endl;
    return 0;
}