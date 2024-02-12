#include<iostream>
using namespace std;
int add(int x,float y)
{
    return x+y;
}
int sub(int a,int b)
{
    return a-b;
}
int mul(int a,int b)
{
    return a*b;
}
float by(int a,int b)
{
    return a/b;
}
int main()
{
    int x,y,num;
    cout << "\t" << "------Calculator------" << endl;
    go:
    cout << "\t" << "Enter first number : ";
    cin >> x;
    cout << "\t" << "Enter second number : ";
    cin >> y;
    cout << endl;
    cout << "\t" << "-----Menu-----"<< endl << endl;
    cout << "\t" << "1. Addition" << endl;
    cout << "\t" << "2. Subtraction" << endl;
    cout << "\t" << "3. Multiplication" << endl;
    cout << "\t" << "4. Division" << endl;
    cout << "Enter the operation you want to perform : ";
    cin >> num;
    switch (num)
    {
        case 1:
        {
            cout << "Addition of two numbers is : " << add(x,y) << endl;
            break;
        }
        case 2:
        {
            cout << "Subtraction of two numbers is : " << sub(x,y) << endl;
            break;
        }
        case 3:
        {
            cout << "Multiplication of two numbers is : " << mul(x,y) << endl;
            break;
        }
        case 4:
        {
            cout << "Division of two numbers is : " << by(x,y) << endl;
            break;
        }
        default:
        {
            cout << "Enter valid operation" << endl;
        }
    }

        cout << "If you want to return press '1' else enter '0' : ";
        int c;
        cin >> c;
        if(c == 1){
            goto go;
        }
        else{
            goto end;
        }
    
    end :
    cout << endl;
    // cout << "\t" << "Thank for using calculator ";
    return 0;
}