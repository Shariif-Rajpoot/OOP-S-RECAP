#include <iostream>
using namespace std;
class Book
{
    string title;
    string author;
    float *rates;
    int ratesCounter;
    friend void display(const Book &);

public:
    Book();
    Book(string, string);
    Book(Book &);
    ~Book();
};
Book::Book() {}
Book::Book(string title, string author) : title(title), author(author)
{
    ratesCounter = 2;
    rates = new float[ratesCounter];
    rates[0] = 4.5;
    rates[1] = 4.6;
}
Book::Book(Book &book)
{
    cout << "Copy Constructor Invoked" << endl;
    title = book.title;
    author = book.author;
    ratesCounter = book.ratesCounter;
    rates = new float[ratesCounter];
    for (int i = 0; i < ratesCounter; i++)
    {
        rates[i] = book.rates[i];
    }
}
Book::~Book()
{
    delete[] rates;
    rates = nullptr;
}
void display(const Book &book)
{
    cout << endl
         << endl;
    cout << "Book Title  => " << book.title << endl;
    cout << "Book Author => " << book.author << endl;
    float sum = 0;
    for (int i = 0; i < book.ratesCounter; i++)
    {
        cout << "Rate " << i + 1 << " => " << book.rates[i] << endl;
        sum += book.rates[i];
    }
    cout << "The average rate is => " << sum / book.ratesCounter << endl;
}
int main()
{
    Book book_1 = Book("C++ Lamda Story", "Unknown");
    display(book_1);
    Book book_2(book_1); // deep copy;
    display(book_2);
    return 0;
}