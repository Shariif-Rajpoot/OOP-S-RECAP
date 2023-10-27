#include <iostream>
using namespace std;
class book
{
    string title;
    string author;
    float *rate;
    int rateCounter;
    friend void display(book);

public:
    book() {}
    book(string title, string author) : title(title), author(author)
    {
        rateCounter = 2;
        rate = new float[2];
        rate[0] = 4;
        rate[1] = 5;
    }
    ~book()
    {
        delete[] rate;
        rate = nullptr;
    }
    book(const book &original)
    {
        author = original.author;
        title = original.title;
        rateCounter = original.rateCounter;
        rate = new float[rateCounter];
        for (int i = 0; i < rateCounter; i++)
        {
            rate[i] = original.rate[i];
        }
    }
};
void display(book b)
{
    cout << "Author => " << b.author << endl;
    cout << "Title  => " << b.title << endl;
    cout << "Rating average is ==> " << endl;
    float sum = 0;
    for (int i = 0; i < b.rateCounter; i++)
    {
        cout << b.rate[i] << endl;
        sum += b.rate[i];
    }
    cout << sum / b.rateCounter << endl;
}
int main()
{
    book book1("C++", "James");
    display(book1);
    cout << endl;
    book book2(book1);
    display(book2);

    return 0;
}