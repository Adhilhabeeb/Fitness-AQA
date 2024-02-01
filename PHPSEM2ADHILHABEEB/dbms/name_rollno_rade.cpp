#include<iostream>
using namespace std;
class student_info{
    int roll_number;
    char student_name[50],grade[2];
    public:
    void read_data(int count){
        cout<<"\n\n-------------enter student"<<count+1<<"information------------\n";
        cout<<"name of the student(max.50 characters only):";
        cin>>student_name;
        cout<<"roll number:";
        cin>>roll_number;
        cout<<"grade(o,A+,A,B+,B,C,D,F):";
        cin>>grade;
        cout<<"\nstudent information with roll number"<<roll_number<<"has saved!";
    }
    void display_data(int count){
        cout<<"\n\n*********student"<<count+1<<"information***********";
        cout<<"\nname of the student:"<<student_name;
        cout<<"\nroll number:"<<roll_number;
        cout<<"\ngrade scored:"<<grade;
        cout<<"\n-------------------------------------\n";
    }
};
int main(){
    student_info stud[10];
    int i,n;
    cout<<"enter the number of students"<<endl;
    cin>>n;
    for(i=0;i<n;i++)
    {
        stud[i].read_data(n);
    }
    cout<<"\n\n+++++++++++++++++++++++++++++++++++++++++++++++++\n";
    cout<<"the information of 3 students have been saved.";
    cout<<"\n++++++++++++++++++++++++++++++++++++++++++++++++++++\n";
    for(i=0;i<n;i++)
    {
        stud[i].display_data(n);
    }
    return 0;
}