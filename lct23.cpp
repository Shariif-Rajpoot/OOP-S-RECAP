#include <iostream>
#include <string>
using namespace std;
class plaza
{
    int shop_no;
    string shop_name;
    string owner_name;

public:
    void getData(int shop_no, string shop_name, string owner_name)
    {
        this->shop_no = shop_no;
        this->shop_name = shop_name;
        this->owner_name = owner_name;
    }
    void display();
};
void plaza ::display()
{
    cout << "The number of the shop is ==> " << shop_no << endl;
    cout << "The name of the shop is   ==> " << shop_name << endl;
    cout << "The owner name of shop is ==> " << owner_name << endl;
}
int main()
{
    int size = 3;
    plaza *plazas = new plaza[size];
    string on, sn;
    int si;
    for (int i = 0; i < size; i++)
    {
        cout << "Enter the id or number of the shop " << i + 1 << " ==> " << endl;
        cin >> si;
        cout << "Enter the name of the shop         " << i + 1 << " ==> " << endl;
        cin >> sn;
        cout << "Enter the owner name of the shop   " << i + 1 << " ==> " << endl;
        cin >> on;
        (*(plazas + i)).getData(si, sn, on);
    }
    for (int i = 0; i < size; i++)
    {
        (*(plazas + i)).display();
    }
    return 0;
}