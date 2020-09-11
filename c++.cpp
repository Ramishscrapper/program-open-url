#include "iostream"
#include "string"

using namespace std;

int main()
{
    string l;

    // you can add many more website as you want 

    cout << "Press y to open YOUTUBE => ";
    cout << "\nPress i to open INSTAGRAM => ";
    cout << "\nPress t to open TWITTER => \n";

    getline(cin,l);

    // write any website url you want this program will open it for you 

    if (l=="y")
    {
        system("start http://www.youtube.com/");
    }
    else if (l=="i")
    {
        system("start http://www.instagram.com/");
    }
    else if (l=="t")
    {
        system("start http://www.twitter.com/");
    }
    else
    {
        cout << "\nInvalid Entry! ";
    }
   
    return 0;
}