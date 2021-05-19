#include <iostream>
#include <fstream>
using namespace std;

int main()
{
    ofstream file;

    file.open("bgc.txt");

    file<<"Hello BGC.";
    file.close();
}
