/*
            1
          1   1
        1   2   1
      1   3   3   1
    1   4   6   4   1
  1   5   10   10   5   1

*/

#include <iostream>
using namespace std;

int main()
{
    int i,j,k,n,c=1;

    cout<<"Enter the number of rows : ";
    cin>>n;

    for(i=0; i<n; i++)
    {
        for(j=1; j<=n-i; j++)
        {
            cout<<"  ";
        }
        for(k=0; k<=i; k++)
        {
            if(k==0 || i==0)
            {
                c=1;
            }
            else
            {
                c = c * (i-k+1)/k;
            }
            cout<<c<<"   ";
        }
        cout<<endl;
    }
}
