#include<iostream>
#include<string>

using namespace std;

struct Sales_data
{
    string isbn() const {return bookNo;}
    Sales_data & combine(const Sales_data &);
    double avg_price()const;

    string bookNo;
    unsigned units_sold=0;
    double revenue = 0.0;
};

Sales_data add(const Sales_data &, const Sales_data &);
ostream &print(ostream &, const Sales_data&);
istream &read(istream &,Sales_data&);


double Sales_data::avg_price() const
{
    if(units_sold)
        return revenue / units_sold;
    else
        return 0;
}

Sales_data &Sales_data::combine(const Sales_data &rhs)
{
    units_sold +=rhs.units_sold;
    revenue +=rhs.revenue;
    return *this;
}
//NoMemberFunction
ostream &print(ostream & os,const Sales_data & item)
{
    os<<item.bookNo<<" "<<item.units_sold<<" "
      <<item.revenue<<" "<<item.avg_price()<<endl;
    return os;
}

istream &read(istream &is,Sales_data &item)
{
    double price=0;
    is>>item.bookNo>>item.units_sold>>price;
    item.revenue = item.units_sold*price;
    return is;
}
Sales_data add(const Sales_data &lhs,const Sales_data &rhs)
{
    Sales_data sum=lhs;
    sum.combine(rhs);
    return sum;
}

int main()
{
    Sales_data total;
    if(read(cin,total))
    {
        Sales_data trans;
        while(read(cin,trans))
        {
            if(total.bookNo == trans.bookNo)
                total.combine(trans);
            else
            {
                print(cout,total);
                total = trans;
            }
        }
        print(cout,total);
    }
    else
    {
        cerr<<"No data?!"<<endl;
        return -1;
    }
    return 0;
}