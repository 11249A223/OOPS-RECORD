#include<iostream>
using namespace std;
class laptop{
    private:
        string brand;
        string processor;
        int ram;
    public:
        laptop(string b,string p,int r){
            brand = b;
            processor = p;
            ram = r;
        }
        void displayDetails(){
            cout<<"Laptop Details:\n";
            cout<<"Brand :"<<brand<<endl;
            cout<<"processor:"<<processor<<endl;
            cout<<"RAM:"<<ram<<endl;
        }
};
int main(){
    laptop l1("Dell","intel i6",8);
    laptop l2("HP","MD Rtzeen 5",16);
    l1.displayDetails();
    l2.displayDetails();
    return 0;
}
