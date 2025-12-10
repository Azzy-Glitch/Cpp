#include <iostream>
using namespace std;
class shop
{
public:
    int s_no_of_workers;
    int s_no_of_items;
    float s_sale;

    void input_shop_info()
    {
        cout << "Enter number of shop workers" << endl;
        cin >> s_no_of_workers;
        cout << "Enter no of shop items" << endl;
        cin >> s_no_of_items;
        cout << "Enter shop daily sale" << endl;
        cin >> s_sale;
    }
    void output_shop_info()
    {
        cout << "******Shop info******" << endl;
        cout << "shop workers is:" << s_no_of_workers << endl;
        cout << "no of shop items is:" << s_no_of_items << endl;
        cout << "shop sale is:" << s_sale << endl;
    }
    shop()
    {
        input_shop_info();
        output_shop_info();
    }
};

int main()
{
    shop s;
    return 0;
}