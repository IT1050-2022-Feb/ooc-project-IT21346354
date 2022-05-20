#include <iostream>
#include "RegisteredUser.h"
#include<cstring>
using namespace std;

class Payment
{
	private:
	int Customer_ID;
	int Order_ID;
	char Payment_ID[20];

public:
	Payment();
	Payment(int C_ID,int  O_ID, const char P_ID[]);
	void DisplayAmount();
	void setPaymentMethod();
	void ConfirmPayment();

	~Payment();
};
