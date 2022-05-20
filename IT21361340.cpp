#include<iostream>
using namespace std;

class Feedback
{
    private:
      string description;
      int  rate;

    public:
      void setFeedbackDetails(string fDescription, int fRate){
        description=fDescription;
        rate=fRate;
        }
      void displayFeedbackDetails(){
        cout<<"The Description: "<<description<<endl;
        cout<<"The Rate: "<<rate<<endl;
        }
};

int main(){
Feedback myObj;
myObj.setFeedbackDetails("This was a great book. I enjoyed reading it",8);
myObj.displayFeedbackDetails();
return 0;
} 
