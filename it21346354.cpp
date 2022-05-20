#include <iostream>
#include<cstring>
using namespace std;

class Customer
{
	private:
		int customerID;
		string firstName;
		string lastName;
		string password;
		string email;
		string phoneNo;

	public: 
		Customer(int CustomerID, string cfirstName, string clastName, string cemail, string Phone_No);
		void setPhone_No(string phoneNo);
		void setPassword(string password);
		int getCoustomerID();
		string getFirst_Name();
		string getLast_Name();
		string getPassword();
		string getEmail();
		string getPhone_NO();

};

Customer::Customer(int CustomerID, string cfirstName, string clastName, string cemail, string Phone_No)
{
	customerID = CustomerID;
	firstName = cfirstName;
	lastName = clastName;
	email = cemail;
  phoneNo = Phone_No
}
void Customer::setPhone_No(string phoneNo){}
void Customer::setPassword(string password){}
int Customer::getCoustomerID() { return 0; }
string Customer::getFirst_Name() { return ""; }
string Customer::getLast_Name() { return ""; }
int Customer::getPhone_NO() { return 0; }
string Customer::getPassword() { return ""; }

int main()
{
	Customer* cus1;
	Customer* cus2;
	cus1 = new Customer(0001, "Ravi", "Heshan","raviheshan123@gmail.com", "0779868865");
	cus2 = new Customer(0002, "Namal", "Kumara","namalkumara111@gmail.com", "0779868865");

	return 0;
}