#include<iostream>
using namespace std;
class invoice
{
    public:
    void generateInvoice(int product)
    {
        cout <<" genarating invoice fro product ID: " << endl;
        cout << "defult quantity: 1 ! No discount applied." << endl;
    }
    void generateInvoice(int productId,int quantity)
    {
        cout <<" genarating invoice fro product ID: " << productId << endl;
        cout <<" Quantity: " << quantity << " ! No Discount applied." << endl; 
    }
    void generateInvoice(int productId,int quantity,float discount)
    {
         cout <<" genarating invoice fro product ID: " << productId << endl;
         cout <<" defult quantity "<<quantity<<"discount applied" << discount << endl;
    }
};
int main()
{
    invoice i;
    i.generateInvoice(101);
    i.generateInvoice(102,3);
    i.generateInvoice(103,5,10.5);
    return 0;
}