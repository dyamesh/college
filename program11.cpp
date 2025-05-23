#include<iostream>
using namespace std;
class student
{
    public:
    string name;
    int age;
    student(string n,int a)
    {
        name = n;
        age = a;
        cout<<"name"<<name<<"age"<<age<<endl;
    }

};
int main()
{
    student s1("amith",19);
    return 0;
}