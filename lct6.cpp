#include <iostream>
using namespace std;
class user
{
    string fName;
    string lName;
    string eMail;
    int age;
    friend void getInfoUser(user);

public:
    // default constructor
    user()
    {
        fName = "No Name";
        lName = "NO Name";
        eMail = "No Email";
        age = 0;
    }
    user(string fName, string lName, int age)
    {
        this->fName = fName;
        this->lName = lName;
        this->age = age;
        this->eMail = fName + lName + "@gmail.com";
    }
};
void getInfoUser(user u)
{
    cout << "\t\tUser Information " << endl;
    cout << "First Name ==> " << u.fName << endl;
    cout << "Last Name  ==> " << u.lName << endl;
    cout << "Age        ==> " << u.age << endl;
    cout << "Email      ==> " << u.eMail << endl;
    cout << endl
         << endl;
}
int main()
{
    user u1, u2, u3;
    u1 = user("Muhammad", "Mohsin", 20);
    u2 = user("Muhammad", "Jawad", 18);
    getInfoUser(u1);
    getInfoUser(u2);
    // getInfoUser(u3);
    return 0;
}