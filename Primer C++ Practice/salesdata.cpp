#include <stdio.h>
#include <iostream>
#include <string>
using std::cout;using std::endl;using std::string;


class Sales_data {
friend Sales_data add(const Sales_data&, const Sales_data&);
friend std::ostream &print(std::ostream&, const Sales_data&);
friend std::istream &read(std::istream&, Sales_data&);
public:
	// constructors
	Sales_data(): units_sold(0), revenue(0.0) { }
	Sales_data(const std::string &s): 
	           bookNo(s), units_sold(0), revenue(0.0) { }
	Sales_data(const std::string &s, unsigned n, double p):
	           bookNo(s), units_sold(n), revenue(p*n) { }
	Sales_data(std::istream &);

	// operations on Sales_data objects
	std::string isbn() const { return bookNo; }
	Sales_data& combine(const Sales_data&);
	double avg_price() const;
private:
	std::string bookNo;
	unsigned units_sold;
	double revenue;
};

int main(){
    const Sales_data a1("OOP book");
    cout<<a1.isbn();
    return 0;
}
