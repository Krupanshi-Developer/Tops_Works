//1. SocialMediaUser

#include-<iostream>
using namespace std;

class SocialMediaUser
{
public:
    string username;
    int followers;

    SocialMediaUser(string u, int f)
    {
        username = u;
        followers = f;
    }

    void displayProfile()
    {
        cout << "Username: " << username << endl;
        cout << "Followers: " << followers << endl;
    }
};

int main()
{
    SocialMediaUser s("Krupanshi",1000);
    s.displayProfile();
}
