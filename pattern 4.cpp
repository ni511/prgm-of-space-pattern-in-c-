//The number system pattern in C++
#include<iostream>
using namespace std;
int main()
{
    int n,i,j;
    cout<<"Enter the no. of layers of triangles needed:\n";
    cin>>n;
    cout<<"____________________________________________\n";
    for(i=1;i<=n;i++)
    {
        for(j=1;j<=i;j++)
        {
            cout<<j;
        }
        cout<<endl;
    }
}