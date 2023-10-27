#include <iostream>
#include <list>
using namespace std;

class youtubeChannel
{
private:
    string name;
    string ownerName;
    int subscriberCount;
    list<string> videoTopic;

public:
    youtubeChannel() {}
    youtubeChannel(string name, string ownerName)
    {
        this->name = name;
        this->ownerName = ownerName;
        subscriberCount = 0;
    }
    void subscriber()
    {
        subscriberCount++;
    }
    void unSubscriber()
    {
        if (subscriberCount > 0)
            subscriberCount--;
    }
    void getTopic(string topic)
    {
        videoTopic.push_back(topic);
    }
    void getInfo()
    {
        cout << endl
             << endl;
        cout << "Name        : " << name << endl;
        cout << "Owner Name  : " << ownerName << endl;
        cout << "Subscriber  : " << subscriberCount << endl;
        cout << "Videos " << endl;
        cout << endl;
        for (string Topic : videoTopic)
        {
            cout << Topic << endl;
        }
    }
};
int main()
{
    youtubeChannel youtubechannel;
    youtubechannel = youtubeChannel("CWD", "Harry");
    youtubechannel.subscriber();
    youtubechannel.getTopic("C++ tutorials");
    youtubechannel.getInfo();
    youtubechannel.subscriber();
    youtubechannel.subscriber();
    youtubechannel.subscriber();
    youtubechannel.getTopic("Java tutorials");
    youtubechannel.getInfo();
    youtubechannel.subscriber();
    youtubechannel.subscriber();
    youtubechannel.getTopic("HTML & CSS tutorials");
    youtubechannel.unSubscriber();
    youtubechannel.unSubscriber();
    youtubechannel.unSubscriber();
    youtubechannel.unSubscriber();
    youtubechannel.getInfo();
    youtubechannel.getTopic("Javascript tutorials");
    youtubechannel.subscriber();
    youtubechannel.subscriber();
    youtubechannel.subscriber();
    youtubechannel.subscriber();
    youtubechannel.subscriber();
    youtubechannel.subscriber();
    youtubechannel.subscriber();
    youtubechannel.subscriber();
    youtubechannel.getInfo();
    return 0;
}