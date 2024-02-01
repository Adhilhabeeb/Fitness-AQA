#include<iostream>
using namespace std;
int main()
{
    char ch;
    float num1,num2,result=0.0;
    cout<<"enter the choice(+,-,*,/):";
    cin>>ch;
    cout<<"enter the two numbers:";
    cin>>num1>>num2;
    switch(ch)
    {
        case '+':result=num1+num2;
        cout<<"sum is:"<<result<<endl;
        break;
        case '-':result=num1-num2;
        cout<<"differene is:"<<result<<endl;
        break;
        case '*':result=num1*num2;
        cout<<"product is:"<<result<<endl;
        break;
        case '/':result=num1/num2;
        cout<<"quotient is:"<<result<<endl;
        break;
        default:cout<<"wrong choice"<<endl;
        break;
    }
    return 0;
}