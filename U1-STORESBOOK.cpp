#include<iostream>
using namespace std;
class Book{
    public:
       string title;
       string author;
       int price;
    void display()
    {
        cout<<"Title:"<<title<<endl;
        cout<<"Author:"<<author<<endl;
        cout<<"Price:"<<price<<endl;
    }
};
int main()
{
    Book b1,b2;
    b1.title = "c++ programming";
    b1.author = "Bjarne stroustrup";
    b1.price = 750.50;
    b2.title = "Data Structures";
    b2.author = "Mark allen weiss";
    b2.price = 600.75;
    b1.display();
    b2.display();
    return 0;
}
