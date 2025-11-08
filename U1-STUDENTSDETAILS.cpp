#include<iostream>
using namespace std;
class student {
    private:
        string name;
        int rollnumber;
        float marks;
    public:
        student(string n , int r, float m)
        {
            name = n;
            rollnumber=r;
            marks =m;
        }
        void display()
        {
            cout<<"Name:"<<name<<endl;
            cout<<"Roll number:"<<rollnumber<<endl;
            cout<<"Marks:"<<marks<<endl;
        }
};
int main()
{
    student s1("Raju",01,95);
    student s2("Ramu",02,96);
    student s3("Rohan",03,97);
    cout<<"Student details"<<endl;
    s1.display();
    s2.display();
    s3.display();
    return 0;
}
