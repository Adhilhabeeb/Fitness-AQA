#include<iostream>
using namespace std;
int main()
{
    int choice,sum,i,n;
    char ch;
    do
    {
        cout<<"----------------MAIN MENU-----------------"<<endl;
        cout<<"1:print alphabet from ato z"<<endl;
        cout<<"2:print number in reverse order"<<endl;
        cout<<"3:sum of first n natural numbers"<<endl;
        cout<<"4:exit"<<endl;
        cout<<"enter the choice"<<endl;
        cin>>choice;
        switch(choice)
        {
            case1:cout<<"alphabets from a to z"<<endl;
            ch='a';
            cout<<"\t";
            while(ch<='z')
            {
                cout<<ch<<"\t";
                ch++;
            }
            cout<<"\n";
            break;
            case2:cout<<"enter the limits:"<<endl;
            cout<<"number in reverse order"<<endl;
            i=n;
            cout<<"\t";
            while(i>=1)
            {
                cout<<"i"<<"\t";
                i--;
            }
            cout<<"\n";
            break;
            case3:cout<<"enter the limits"<<endl;
            cin>>n;
            sum=0;
            for(int i=1;i<=n;i++)
            {
                sum=sum+i;
            }
            cout<<"sum of natural number is:"<<sum<<endl;
            cout<<endl;
            break;
            case4:
            break;
            default:cout<<"invalid choice"<<endl;
            break;

        }
    }while(choice!=4);
    return 0;
}