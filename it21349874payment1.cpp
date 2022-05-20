#include <iostream>
#include "Payment.h"
#include <cstring>
using namespace std;


Payment::Payment()
{
Customer_ID = 0;
Order_ID = 0;
strcpy(Payment_ID, "");

}

Payment::Payment(int C_ID, int O_ID, const char P_ID[])

{
Customer_ID = C_ID;
Order_ID=O_ID;
strcpy(Payment_ID, P_ID);
}

void Payment::DisplayAmount()
{

}
void Payment::setPaymentMethod()
{

}

void ConfirmPayment()
{
	
}
Payment::~Payment()
{
//Destructor 
}
