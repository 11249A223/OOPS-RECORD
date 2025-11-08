#include<iostream>
using namespace std;
class car{
    public:
       string model;
       string company;
       int price;
    void display()
    {
        cout<<"Company:"<<company<<endl;
        cout<<"Model:"<<model<<endl;
        cout<<"Price:"<<price<<endl;
    }
};
int main()
{
    car c1,c2,c3;
    c1.company="Toyota";
    c1.model="Innova";
    c1.price=2000;
    c2.company="Honda";
    c2.model="City";
    c2.price=1200;
    c3.company="Hyundai";
    c3.model="i20";
    c3.price=8000;
    c1.display();
    c2.display();
    c3.display();
    return 0;
}
