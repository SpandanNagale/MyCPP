#include <iostream>
using namespace std;
class classcal
{
private:
public:
   int a, b;
   int input(int a, int b);
   int add(int a, int b);
   int subtract(int a, int b);
   int multiply(int a, int b);
   int div(int a, int b);
};


int classcal::add(int a, int b)
{
   cout << a + b;
};
int classcal::subtract(int a, int b)
{
   cout << a - b;
};
int classcal::multiply(int a, int b)
{
   cout << a * b;
};
int classcal::div(int a, int b)
{
   cout << a / b;
};

int main()
{

   int x, y;
   char z;
   int n;
   cout << "enter first number" << endl;
   cin >> x;
   cout << "enter second number" << endl;
   cin >> y;
   classcal c;
   cout << "enter the opertaion code";
   cin >> n;
   switch (n)
   {
   case 1:
      c.add(x, y);

      break;

 

   case 2:

      c.subtract(x, y);

      break;

   case 3:

      c.multiply(x, y);

      break;
   case 4:

      c.div(x, y);

      break;

   default:
      break;
   }

  
   return 0;
}