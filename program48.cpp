#include<iostream>
using namespace std;
class print
{
    public:
    void display(int num)
     {
        cout <<"printing num:" << num << endl;
     }
     void display(string name)
     {
        cout << "printing name: " << name << endl;
     }

};
int main()
{
    print p;
    p.display(10);
    p.display("alice");
    return 0;
}