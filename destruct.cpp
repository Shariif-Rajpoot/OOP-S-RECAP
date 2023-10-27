#include <iostream>
using namespace std;
/*
    IN SIMPLE WORD WE CAN SAY SO SOON AS COMPILER COME
    TO KNOW THAT THERE IS NO NEED OF OBJECT THE DESTRUCTOR IS CALLED
*/
class test
{
    static int count;

public:
    test()
    {
        count++;
        cout << "This is the time when constructor is called for the  object ==> " << count << endl;
    }
    ~test()
    {
        cout << "This is the time when destructor is called for the object ==> " << count << endl;
        count--;
    }
};
int test ::count = 0;
int main()
{
    cout << "I am in the main function " << endl;
    cout << "I am going to creating the first constructor " << endl;
    test n1;
    {
        cout << endl
             << endl;
        cout << "Now i am inside the block " << endl;
        cout << "Now i am going to create the two more constructor " << endl;
        test n2, n3;
        cout << "After this i am going to exit the block " << endl;
    }
    cout << endl;
    cout << "So i am back to the main function " << endl;
    return 0;
}