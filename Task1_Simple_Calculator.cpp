#include <iostream>
using namespace std;

int main(){
    int a,b;
    char op;
    cout<<"Input First number: ";
    cin>>a;
    cout<<"Input operation: ";
    cin>>op;
    cout<<"Input Second number: ";
    cin>>b;

    switch(op){
        case '+':
            cout<<"The addition of the numbers is: "<<a + b;
            break;
        case '-':
            cout<<"The subtraction of the numbers is: "<<a - b;
            break;
        case '*':
            cout<<"The multiplication of the numbers is: "<<a * b;
            break;
        case '/':
            if(b!=0){
                cout<<"The division of the numbers is: "<<(float)a / b<<endl<<"The remainder of these numbers is: "<<a % b;
                break;
            }else{
                cout<<"Division by zero is not possible.";
            }
        default:
            cout<<"Please enter a valid operator!!";
            break;
    }
}