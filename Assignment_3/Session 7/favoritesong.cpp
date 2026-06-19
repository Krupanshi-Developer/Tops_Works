//1.FavoriteSong

#include <iostream>
#include <fstream>
using namespace std;

int main()
{
    ofstream file("my_fav_songs.txt");

    file << "Sahiba\n";
    file << "Tu mileya\n";
    file << "Mann mera\n";
    file << "Tum se\n";
    file << "Tere bina\n";

    file.close();

    cout << "Songs saved";
}
