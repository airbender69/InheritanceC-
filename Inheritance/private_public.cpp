#include<iostream>
using namespace std;

class Parent
{
private:
    int x;
    int y;
public:
    Parent (int a, int b):x(a),y(b){}
    void display()
    {
        cout<<"x="<<x<<endl<<"y="<<y<<endl;
    }
};
class Child:public Parent{
    int z;
public:
    Child(int a, int b, int c):Parent(a,b),z(c){}
};
 int main()
 {
    Child c(10,20,30);
    c.display();
    return 0;
 }

