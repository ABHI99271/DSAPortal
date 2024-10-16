#include <iostream>
using namespace std;

int main ()
{
    int n, i,sum ;
    cout<<"enter the number : ";
    cin>>n;
    sum=0;
    for(i=1; i<=n; i++)
    {
        sum=sum + i*i*i;
    }
    cout<<"sum of cube of "<<n<<" is : "<<sum;
    
}