#include <iostream>
using namespace std;

class manager{

 private:

 public:
  void readFeedback();

};
void manager::readFeedback(){
  cout<<"ReadFeedback"<<endl; 
}

class report{

private:
    int reportid;
public:
    void oderDetails();
    void itemDetails();
    void customerDetails();

};
void report::oderDetails(){
 cout<<reportid<<endl;
}
void report::itemDetails(){
  
}
void report::customerDetails(){
  
}
int main(){


  return 0;
}