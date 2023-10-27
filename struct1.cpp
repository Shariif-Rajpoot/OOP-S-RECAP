#include <iostream>
using namespace std;
struct date
{
    string day;
    string month;
    string year;
};
struct phoneBook
{
    string name;
    string city;
    int telephone;
    date myDate;
};
int main()
{
    phoneBook pb;
    // pb.city = "Kahuta";
    cout << "Enter the day ";
    cin >> pb.myDate.day;
    cout << "Enter the month ";
    cin >> pb.myDate.month;
    cout << "Enter the year ";
    cin >> pb.myDate.year;
    cout << "Enter the city ";
    cin >> pb.city;
    cout << "Enter the telephone number ";
    cin >> pb.telephone;
    cout << pb.myDate.day << ":" << pb.myDate.month << ":" << pb.myDate.year << " ==> " << pb.city << " ===> " << pb.telephone << endl;
    cout << "Enter the name ";
    cin >> pb.name;
    cout << "\t\tWith Name => " << pb.name << endl;
    return 0;
}