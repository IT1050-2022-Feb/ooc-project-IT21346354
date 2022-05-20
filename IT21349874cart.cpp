#include <iostream>

int main() {

  class Cart{
    private:
      int Cart_ID;
      int Customer_ID; 

    public:
      Cart();
      Cart(int Cart_id,  int  C_id);
  
      int  SetOrderDetails();
      void CalculateTotalPrice();
      void DisplayDetails();
  };
