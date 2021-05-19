/*
    A
    B B
    C C C
    D D D D
    E E E E E
*/

#include <iostream>
using namespace std;

int main()
{
    int i,j,n;
    char c='A';
    cout<<"Enter the number of rows : ";
    cin>>n;

    for(i=1; i<=n; i++)
    {
        for(j=1; j<=i; j++)
        {
            cout<<c<<" ";
        }
        c++;
        cout<<endl;
    }
}
