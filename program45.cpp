#include<iostream>
using namespace std;
class banckaccount
{
    protected:
    double balance ;
    public:
    void setbalance(double b)
    {
        balance=b;
    }
};
class savingaccount : public banckaccount
{
    public:
    void showbalance()
    {
        cout << " balance is = $ " << balance << endl;
    }
};
int main()
{
    savingaccount acc;
    acc.setbalance(1000);
    acc.showbalance();

    return 0;
}