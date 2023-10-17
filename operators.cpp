#include<iostream>
using namespace std;
int main()
{
    int num1,num2,num3,num4,num5,num6,num7,num8,num9;
    num1=3;
    num2=4;
    num7=9;
    num3=num1+num2;
    num4=num2-num1;
    num5=num1*num2;
    num6=num1/num2;
    //arithmetic operators
    cout<<"the sum is"<<num3<<endl;
    cout<<"the difference is"<<num4<<endl;
    cout<<"the product is"<<num5<<endl;
    cout<<"the div is"<<num6<<endl;
    //assignment operators
    num1+=3;
    num2-=1;
    cout<<"the new num is"<<num1<<endl;
    cout<<"the new num 2 is"<<num2<<endl;
    num1*=2;
    cout<<"the new product is"<<num1<<endl;
    num2/=4;
    cout<<"the new division is"<<num2<<endl;
    //bitwise operators
    num8=num1&num7;
    cout<<"the new bitwise and is"<<num8<<endl;
    num9=12<<4;
    cout<<"the left shift right shift is"<<num9<<endl;
    

}