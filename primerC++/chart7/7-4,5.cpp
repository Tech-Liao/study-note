#include<iostream>
#include<string>

using namespace std;

struct Person
{

    string get_name()const {return name;};
    string get_address() const {return address;};

    string name;
    string address;
};

int main()
{
    Person P1;
    cin>>P1.name>>P1.address;
    cout<<P1.get_address()<<" "<<P1.get_name()<<endl;
    return 0;
}