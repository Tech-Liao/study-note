#include<iostream>
#include<vector>

using namespace std;
typedef pair<int,int> PII;
const int N=100010;
vector<PII> arr,res;

int main()
{
    int st=-2e9,ed=-2e9;    //开始时,从一个区间长度为0的序列,保证st和ed都能更新,因此采用-2e9

    int n;
    cin>>n;
    while(n--)
    {
        int l,r;
        cin>>l>>r;
        arr.push_back({l,r});
    }
    sort(arr.begin(),arr.end());    //sort对pair类型排序,先从左后右
    for(auto item:arr)
    {
        if(ed<item.first)
        {
            if(ed!=-2e9)    //对初始值判断
            {
                res.push_back({st,ed});
                st=item.first;
                ed=item.second;
            }
        }
        else if(ed<item.second)
            ed=item.second;
    }
    res.push_back({st,ed});
    cout<<res.size()<<endl;
    return 0;

    return 0;
}