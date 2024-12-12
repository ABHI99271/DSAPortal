/* Pattern:

      A B C D
      A B C
      A B
      A
*/
#include<iostream>
using namespace std;

int main()
{
    int row, col;

    for(row=4; row>0; row--)
    {
        for(col=0; col<row; col++)
        {
            char name = 'A'+col;
            cout<<name<<" ";
        }
        cout<<endl;
    }
}