#include <iostream>
using namespace std;
class Book
{
    string name;
    string author;
    float *rates;
    int ratesCounter;

public:
    friend void display(Book &);
    Book() {}
    Book(string name, string author) : name(name), author(author)
    {
        ratesCounter = 2;
        rates = new float[ratesCounter];
        rates[0] = 4.5;
        rates[1] = 4.6;
    }
    Book(Book &book)
    {
        name = book.name;
        author = book.author;
        ratesCounter = book.ratesCounter;
        rates = new float[ratesCounter];
        for (int i = 0; i < ratesCounter; i++)
        {
            rates[i] = book.rates[i];
        }
    }
    ~Book()
    {
        delete[] rates;
        rates = nullptr;
    }
};
void display(Book &book)
{
    cout << "Title  = " << book.name << endl;
    cout << "Author = " << book.author << endl;
    float sum = 0;
    for (int i = 0; i < book.ratesCounter; i++)
    {
        cout << "Rating " << i + 1 << " => " << book.rates[i] << endl;
        sum += book.rates[i];
    }
    cout << "Average => " << sum / book.ratesCounter << endl;
}
int main()
{
    Book book1 = Book("C++ Lamsastory ", "Mohas");
    Book book2;
    book2 = book1;
    display(book2);
    return 0;
}