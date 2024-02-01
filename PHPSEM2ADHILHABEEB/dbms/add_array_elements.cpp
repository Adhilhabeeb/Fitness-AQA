#include<iostream>
using namespace std;
void display(int,int[]);
int addition(int,int[]);
int main()
{
      int arr[10],limit,sum=0;
      cout<<"enter the arrray limit:"<<endl;
      cin>>limit;
      cout<<"enter the array elements:"<<endl;
      for(int i=0;i<limit;i++)
      {
        cin>>arr[i];
      }
      display(limit,arr);
      sum=addition(limit,arr); 
      cout<<"sum of array elements is:"<<sum<<endl;
      return 0; 
}   
   void display(int limit,int a[])
   {
    cout<<"array elements are:"<<endl;
    for(int i=0;i<limit;i++)
    {
      cout<<a[i]<<"\n";
    }
   } 
      int addition(int limit,int a[])
      {
        int sum=0;
        for(int i=0;i<limit;i++)
        {
          sum=sum+a[i];
        }
        return sum;
      }