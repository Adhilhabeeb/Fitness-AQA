#include<iostream>
#include<string.h>
using namespace std;
class car
{
    private:
    int car_id;
    char car_name;
    int car_number;
    public:
    static int static_member;
    car()
    {
        static_member++;
    }
    void inp()
    {
        cout<<"\n\nEnter the id of the car:"<<endl;
        cin>>car_id;
        cout<<"enter the name of the car:"<<endl;
        cin>>car_name;
        cout<<"number of the car(1-10):"<<endl;
        cin>>car_number;
    }
    void disp()
    {
        cout<<"\nId of the car:"<<car_id;
        cout<<"\nName of the car:"<<car_name;
        cout<<"\nNumber:"<<car_number;
    }
};int car::static_member=0;
int main()
{
    car c1;
    c1.inp();
    c1.disp();
    car c2;
    c2.inp();
    c2.disp();
    cout<<"\nNo of objects created in the class:"<<car::static_member<<endl;
    return 0;
}