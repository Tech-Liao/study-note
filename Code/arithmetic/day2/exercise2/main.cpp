#include <unordered_map>
#include <iostream>
#include <string>

using namespace std;
const int N = 100010;
char op[N];
int top1 = 0;
int para[N], top2 = 0;

void eval()
{
    int b = para[top2 - 1];
    top2--;
    int a = para[top2 - 1];
    top2--;
    char opt = op[top1 - 1];
    top1--;
    int x;
    if (opt == '+')
        x = a + b;
    else if (opt == '-')
        x = a - b;
    else if (opt == '*')
        x = a * b;
    else
        x = a / b;
    para[top2++] = x;
}

int main()
{
    unordered_map<char,int> pr{{'+',1},{'-',1},{'*',2},{'/',2}};
    string s;
    cin >> s;
    int x1, x2;
    for (int i = 0; i < s.size(); i++)
    {
        if (isdigit(s[i]))
        {
            int x = 0, j = i;
            while (j < s.size() && isdigit(s[j]))
                x = x * 10 + s[j++] - '0';
            i = j - 1;
            para[top2++] = x;
        }
        else if (s[i] == '(')
            op[top1++] = s[i];
        else if (s[i] == ')')
        {
            while (op[top1 - 1] != '(')
                eval();
            top1--;
        }
        else
        {
            while (top1 != 0 && op[top1 - 1] != '(' && pr[op[top1 - 1]] >= pr[s[i]])
                eval();
            op[top1++] = s[i];
        }
    }
    while (top1 > 0)
    {
        eval();
    }
    cout << para[top2 - 1] << endl;
    return 0;
}