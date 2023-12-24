#include <iostream>
using namespace std;
class CWD
{
protected:
    string title;
    float rating;

public:
    CWD() {}
    CWD(string title, float rating) : title(title), rating(rating) {}
    virtual void display() = 0; // pure virtual function
};
class CWDVideo : public CWD
{
    float videoLength;

public:
    CWDVideo() {}
    CWDVideo(string title, float rating, float videoLength) : CWD(title, rating), videoLength(videoLength) {}
    void display()
    {
        cout << "The title of the video is " << title << endl;
        cout << "The length of the video is " << videoLength << " mins " << endl;
        cout << "The rating of this is " << rating << endl;
    }
};
class CWDTextual : public CWD
{
    float wordsCount;

public:
    CWDTextual() {}
    CWDTextual(string title, float rating, float wordsCount) : CWD(title, rating), wordsCount(wordsCount) {}
    void display()
    {
        cout << "The title of the textual tutorial is " << title << endl;
        cout << "The total words of the textual tutorial is " << wordsCount << " words " << endl;
        cout << "The rating of this is " << rating << endl;
    }
};
int main()
{
    CWD *cwd[2];
    CWDTextual cwdT;
    cwdT = CWDTextual("JavaScript Textual Tutorials", 4.94, 500);
    CWDVideo cwdv;
    cwdv = CWDVideo("JavaScript Video Tutorials", 4.99, 30);
    cwd[0] = &cwdT;
    cwd[1] = &cwdv;
    for (int i = 0; i < 2; i++)
    {
        cwd[i]->display();
        cout << endl
             << endl;
    }
    return 0;
}