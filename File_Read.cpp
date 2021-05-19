#include <iostream>
#include <fstream>
#include <string>
using namespace std;

int main()
{
    string s;
    ifstream file("bgc.txt");

    while(getline(file,s))
    {
        cout<<s<<endl;
    }
    file.close();
}
