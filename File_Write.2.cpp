#include <iostream>
#include <fstream>
#include <string>
using namespace std;

int main()
{
    ofstream file;
    string s;

    getline(cin,s);
    file.open("bgc.txt");

    file<<s;
    file.close();
}
