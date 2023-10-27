#include <list>
#include <iostream>
using namespace std;
class youTubeChannel
{
public:
    string name;
    string ownerName;
    int subscriberCount;
    list<string> videosTopic;
    youTubeChannel(string name, string ownerName)
    {
        this->name = name;
        this->ownerName = ownerName;
        subscriberCount = 0;
    }
    void get_info()
    {
        cout << "Name : " << name << endl;
        cout << "OwnerName : " << ownerName << endl;
        cout << "Subscriber's : " << subscriberCount << endl;
        // list<string>::iterator it;
        // for (it = videosTopic.begin(); it != videosTopic.end(); it++)
        // {
        //     cout << *it << endl;
        // }
        cout << "Topic's related to videos" << endl;
        for (string topic : videosTopic)
        {
            cout << topic << endl;
        }
    }
};
int main()
{
    youTubeChannel youtubeChannel("Jonas.io", "Jonas");
    youTubeChannel youtubeChannel1("CWD", "Harry");
    youtubeChannel.videosTopic =
        {
            "JavaScript Tutorials",
            " HTML & CSS ",
            " Advance SASS & CSS "};
    youtubeChannel1.videosTopic =
        {
            "JavaScript Tutorials",
            " HTML & CSS ",
            " C++ Tutorials "};
    youtubeChannel.get_info();
    cout << endl
         << endl;
    youtubeChannel1.get_info();
    return 0;
}