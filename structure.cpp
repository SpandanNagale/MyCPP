#include <iostream> 
#include<string>
 using namespace std ;
 struct  SYITbooks
 { 
    string title;
    int pages;
    int edition;
    string Author;

 } ;

 
 int main(){
    struct SYITbooks b1,b2,b3,b4;
    b1.title="Object Oriented Programming" ;
    b1.pages= 500;
    b1.Author= "Baleguru Swami";
    b1.edition=13;
   b2.title="Data structure and algorithm";
   b2.Author="Seymour Lipschutz";
   b2.pages=300;
   b2.edition=9;
b3.title="Computer Architecture and Organisation";
b3.Author="";
b3.pages=363;
b3.edition=4;
b4.title="Mathematics 3";
b4.Author="B.B.Singh";
b4.pages=287;
b4.edition=8;


    
 cout<<"the page of of b1"<<b1.pages;
return 0;
}