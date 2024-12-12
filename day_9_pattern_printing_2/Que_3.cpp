/*Pattern:
     
       10
       10 11
       10 11 12
       10 11 12 13
       10 11 12 13 14
       10 11 12 13 14 15
*/
#include<iostream>
using namespace std;

int main()
{
    int row, col;

    for(row=1; row<=6; row++)
    {
        for(col=1; col<=row; col++)
        {
            int sum=10;
            sum = sum+(col-1);
            cout<<sum<<" ";
        }
        cout<<endl;
    }
}