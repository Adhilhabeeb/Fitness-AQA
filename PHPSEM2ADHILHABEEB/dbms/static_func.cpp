#include<iostream>
using namespace std;
class note
{
    static int num;
    public:
    static int func()
    {
        return num;
    }
};
int note::num=5;
int main()
{
    cout<<"The value of the num is:"<<note::func()<<endl;
    return 0;
}