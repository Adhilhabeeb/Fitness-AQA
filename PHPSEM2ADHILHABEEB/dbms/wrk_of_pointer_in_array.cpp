#include<iostream>
using namespace std;
int main()
{
    int*ptr,n;
    int marks[10];
    cout<<"enter the size of the array:"<<endl;
    cin>>n;
    cout<<"enter the elements of an array:"<<endl;
    for(int i=0;i<n;i++)
    {
        cin>>marks[i];
    }
    ptr=marks;
    cout<<"the value of * ptr is:"<<*ptr<<endl;
    cout<<"the volume of * marks is:"<<*marks<<endl;
    cout<<"array elements are:"<<endl;
    for(int i=0;i<n;i++)
    {
        cout<<*ptr<<endl;
        ptr=ptr+1;
    }
    return 0;
}