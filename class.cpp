#include<iostream>
using namespace std;
 class student{
 
   int PRN;
   char Name[50];
   char emailid[50];
   float CGPA;
   char Address[60];
 
  public:
  void getdetails(void);
  void putdetails(void);
  };
  void student::getdetails(void)
  {
    cout<<"Enter PRN"<<endl;
    cin >> PRN;
    cout << "Enter Name "<<endl;
    cin >> Name;
    cout << "Enter email"<<endl;
    cin >> emailid;
    cout << "Enter CGP"<<endl;
    cin >> CGPA;
    cout << "Enter Add"<<endl;
    cin >> Address;
   }
   void student::putdetails(void)
   {
    cout << "PRN";
    cout << "Name";
    cout << "emailid";
    cout << "CGPA";
    cout << "Address";
    }
    
   int main()
   {
    
    student s1;
    s1.getdetails();
    s1.putdetails();
   
   
   student s2;
    s2.getdetails();
    s2.putdetails();
   
    student s3;
    s3.getdetails();
    s3.putdetails();
   
   student s4;
    s4.getdetails();
    s4.putdetails();
   
   student s5;
    s5.getdetails();
    s5.putdetails();
    
   }