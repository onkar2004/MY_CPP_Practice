#include <iostream>

using namespace std;

int main()
{
    // upper
    int n ; 
    cout<<"Enter number : "<<endl;
    cin>>n;
   int number = 1;

    // loop for rows
    for(int i =1;i<=n;i++)
    {
        // print spaces
        for(int j =1;j<=(n-i);j++)
        {
            cout<<" "<<" ";
        }
        // print charecter
        for(int j =1;j<=(2*i)-1;j++)
        {
            cout<<number<<" ";
            number = number+2;
        }
        cout<<endl;
    }
    // lower part
    // loop for rows
    for(int i =1;i<=n;i++)
    {
        // print spaces
        for(int j =1;j<=(i-1);j++)
        {
            cout<<" "<<" ";
        }
        // print charecter
        for(int j =1;j<=(2*(n-i))+1;j++)
        {
            cout<<number<<" ";
            number = number +2;
        }
        cout<<endl;
    }
}