#include <iostream>
#define N 100
using namespace std;
class shop
{
    int shopItem[N];
    int itemPrice[N];
    int counter; // to control loop
    string itemName[N];
    static int count;

public:
    void setCounter(void);
    void incrementCounter(void);
    void getData(void);
    void displayData(void);
    static void displayCount(void);
};
int shop ::count; // By default initialize to 0
// function or methods definitions.
void shop ::setCounter()
{
    counter = 0;
}
void shop ::incrementCounter()
{
    counter += 1;
}
void shop ::getData(void)
{
    cout << "Enter the Id of an item no    " << counter + 1 << " :==> ";
    cin >> shopItem[counter];
    cout << "Enter the Name of an item no  " << counter + 1 << " :==> ";
    cin >> itemName[counter];
    cout << "Enter the Price of an item no " << counter + 1 << " :==> ";
    cin >> itemPrice[counter];
    count++; // take count for all items
    incrementCounter();
}
void shop ::displayData(void)
{
    for (int i = 0; i < counter; i++)
    {
        cout << "Name : " << itemName[i] << " with id " << shopItem[i] << " is of price Rs." << itemPrice[i] << endl;
    }
}
void shop ::displayCount()
{
    cout << "The total items are " << count << endl
         << "\t\tThat you entered now" << endl;
}
int main()
{
    int c;
    shop s1;
    s1.setCounter();
    // s1.getData();just for testing purpose
    bool choice = true;
    while (choice)
    {
        s1.getData();
        cout << "To stop press 1 ==> ";
        cin >> c;
        if (c == 1)
            choice = false;
    }
    cout << endl
         << endl;
    s1.displayData();
    cout << endl
         << endl;
    shop::displayCount();
    return 0;
}