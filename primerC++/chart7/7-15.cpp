#include<iostream>
#include<string>

using namespace std;
struct Person;

istream &read(istream &is,Person &item);

struct Person
{
    Person() = default;
    Person(const string &s1,const string &s2):name(s1),address(s2){}
    Person(istream &is) { read(is,*this); }
    string get_name()const {return name;};
    string get_address() const {return address;};

    string name;
    string address;
};

ostream &print(ostream &os,const Person &item);

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
    Person P1(cin);
    print(cout,P1);
    return 0;
}