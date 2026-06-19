//2. Protected Access Modifier

#include <iostream>
using namespace std;

class InstaStory
{
protected:
    int storyViews;

public:
    InstaStory()
    {
        storyViews = 1000;
    }
};

class SponsoredStory : public InstaStory
{
public:
    void showViews()
    {
        cout << "Views: " << storyViews << endl;
    }
};

int main()
{
    SponsoredStory s;
    s.showViews();
}


