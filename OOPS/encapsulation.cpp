#include <iostream>
#include <list>
using namespace std;

//Object Oriented prgramming allows you to represent real life objects in real life
//fruit class - banana, apple
//car class - ford, mercedes

//Encapsulation - using method to get the class attributes

//class is a user defined data type
class YoutubeChannel
{
    //access modifiers - Private, Public
private:
    //attributes
    string Name;
    string OwnerName;
    double SubscribersCount;
    list<string> PublishedVideoTitles;

public:
    //Constructor - assign initial value to the created object
    YoutubeChannel(string name, string ownerName)
    {
        Name = name;
        OwnerName = ownerName;
        SubscribersCount = 0;
    }

    //Modifier Methods 
    //increase subscribers counter
    void subscribe()
    {
        SubscribersCount++;
    }

    //decrease subscribers counter
    void unsubscribe()
    {
        if (SubscribersCount > 0)
            SubscribersCount--;
    }

    //publish video
    void publishVideo(string title)
    {
        PublishedVideoTitles.push_back(title);
    }

    //Getter Methods
    //get channel's info
    void getInfo()
    {
        cout << "Name: " << Name << endl;
        cout << "OwnerName: " << OwnerName << endl;
        cout << "Subscriber Count: " << SubscribersCount << endl;
        cout << "Videos:" << endl;
        for (string videoTitle : PublishedVideoTitles)
        {
            cout << videoTitle << endl;
        }
    }

    //get the channel name
    void getChannelName()
    {
        cout << Name;
    }

    //get the channel's owner name
    void getChannelOwnerName()
    {
        cout << OwnerName;
    }

    //get channel's subscriber's count
    void getChannelSubscriberCount()
    {
        cout << SubscribersCount;
    }

};

//creating many objects of same type would require repeating same code many times
//To resolve this issue we use class constructor
//Constructor is a method that is called at construction of each object
int main()
{
    YoutubeChannel channel1("MrBeast", "Jake");
    channel1.publishVideo("Icecream most expensive"); //Push Back - Method for adding element  to the list

    YoutubeChannel channel2("Pewdiepie", "No leg Felix");

    channel1.getInfo();
    channel2.getInfo();
}