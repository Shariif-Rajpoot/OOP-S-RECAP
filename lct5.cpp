#include <iostream>
using namespace std;
class OS
{
public:
    virtual void osRunning() = 0;
};
class window : public OS
{
    void osRunning()
    {
        cout << "Window is running " << endl;
    }
};
class mac : public OS
{
    void osRunning()
    {
        cout << "Mac is running " << endl;
    }
};
class Linux : public OS
{
    void osRunning()
    {
        cout << "Linux is running " << endl;
    }
};

int main()
{
    OS *operatingSystem1 = new window;
    OS *operatingSystem2 = new mac;
    OS *operatingSystem3 = new Linux;
    OS *osRunning[3] = {operatingSystem1, operatingSystem2, operatingSystem3};
    for (int i = 0; i < 3; i++)
        osRunning[i]->osRunning();
    return 0;
}