/*
        1
      2 3 2
    3 4 5 4 3
  4 5 6 7 6 5 4
5 6 7 8 9 8 7 6 5

*/

#include <iostream>
using namespace std;

int main()
{
    int i,j,k=0,n,c1=0,c2=0;

    cout<<"Enter the number of rows : ";
    cin>>n;

    for(i=1; i<=n; i++)
    {
        for(j=1; j<=n-i; j++)
        {
            cout<<"  ";
            c1++;
        }
        while(k!= 2*i - 1)
        {
            if(c1<=n-1)
            {
                cout<<i+k<<" ";
                c1++;
            }
            else
            {
                ++c2;
                cout<<i+k-2*c2<<" ";
            }
            k++;
        }
        c1=c2=k=0;
        cout<<endl;
    }
}
