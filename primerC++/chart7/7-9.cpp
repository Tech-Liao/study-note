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

ostream &print(ostream &os,const Person &item);
istream &read(istream &is,Person &item);

ostream &print(ostream &os,const Person &item)
{
    os<<item.address<<" "<<item.name<<endl;
    return os;
}
istream &read(istream &is,Person &item)
{
    is>>item.name>>item.address;
    return is;
}

int main()
{
    Person P1;
    read(cin,P1);
    print(cout,P1);
    return 0;
}