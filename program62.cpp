#include<iostream>
using namespace std;
int main()
{
    int *p = new int;
    *p = 10;


    cout << " value stored at p: " << *p << endl;
    delete p;
    return 0;
}