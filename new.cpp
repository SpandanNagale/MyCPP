#include <iostream> 
#include <string>
 using namespace std ;

class student

{
private:
     int PRN ;
    
public:
 string name;
    
     void setdata(int PRN,string name);
     void getdata (){
        cout<<"enter Name:"<<name;
        
        cout<<"enter PRN"<<PRN;
        
     }
    
    
};
 void student::setdata(string nameST,int PRN_no){
    name=nameST;
    PRN=PRN_no;
 }
int main(){
    student spandan;
    spandan.setdata("Spandan",3546547);
    spandan.getdata();
     
}



    
