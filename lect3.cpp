#include <iostream>
using namespace std;
class youtubeChannel
{
private:
    string name;
    int subscriberCount;

protected:
    int contentQuality;
    string ownerName;

public:
    youtubeChannel(string name, string ownerName)
    {
        this->name = name;
        this->ownerName = ownerName;
        subscriberCount = 0;
        contentQuality = 0;
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
    void getInfo()
    {
        cout << "Name       : " << name << endl;
        cout << "OwnerName  : " << ownerName << endl;
        cout << "Subscriber : " << subscriberCount << endl;
    }
    void status()
    {
        if (contentQuality > 4)
            cout << ownerName << " channel's has good content quality" << endl;
        else
            cout << ownerName << " channel's has bad content quality " << endl;
    }
};
class cookingChannel : public youtubeChannel
{
public:
    cookingChannel(string name, string ownerName) : youtubeChannel(name, ownerName) {}
    void practice()
    {
        cout << ownerName << " is practicing how to cook " << endl;
        contentQuality++;
    }
};
class singingChannel : public youtubeChannel
{
public:
    singingChannel(string name, string ownerName) : youtubeChannel(name, ownerName) {}
    void practice()
    {
        cout << ownerName << " is practicing how to sing" << endl;
        contentQuality++;
    }
};
int main()
{
    youtubeChannel *yt;
    cookingChannel cC("mohsinCooks", "Mohsin");
    cC.practice();
    cC.practice();
    cC.practice();
    cC.practice();
    cC.practice();
    singingChannel sC("jawadSings", "Jawad");
    sC.practice();
    sC.practice();
    yt = &cC;
    yt->status();
    yt = &sC;
    yt->status();
    return 0;
}