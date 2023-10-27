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
    virtual void display() {}
};
class CWDVideo : public CWD
{
    float videoLength;

public:
    CWDVideo() {}
    CWDVideo(string title, float rating, float videoLength) : CWD(title, rating), videoLength(videoLength) {}
    void display()
    {
        cout << "THE VIDEO WITH TITLE " << title << ", IS OF LENGTH " << videoLength << "min, WITH THE RATING OF " << rating << endl;
    }
};
class CWDTextual : public CWD
{
    int totalWords;

public:
    CWDTextual() {}
    CWDTextual(string title, float rating, int totalWords) : CWD(title, rating), totalWords(totalWords) {}
    void display()
    {
        cout << "THE TEXTUAL CONTENT WITH TITLE " << title << ", HAS RATING " << rating << ", CONTAINING WORDS " << totalWords << endl;
    }
};
int main()
{
    CWD *cwd[2];
    CWDVideo CWDV;
    CWDV = CWDVideo("C++ Tutorial for beginners", 4.91, 30);
    CWDTextual CWDT;
    CWDT = CWDTextual("C++ Tutorial for beginners", 4.1, 300);
    cwd[0] = &CWDV;
    cwd[1] = &CWDT;
    cwd[0]->display();
    cwd[1]->display();
    return 0;
}