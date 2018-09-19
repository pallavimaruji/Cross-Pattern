#include <iostream>

using namespace std;

int main()
{
    int n,i,j,c=1;
    cout << "Enter no of terms" << endl;
    cin>> n;
    for(i=n;i>=1;i--)
    {
        for(j=n;j>i;j--)
            cout<<" ";
            cout<<c;
            for(j=1;j<2*(i-1);j++)
                cout<<" ";
                if(i!=1)
                    cout<<c;
                c++;
                cout<<endl;
    }
    n=n-1;
    c=c-2;
    for(i=1;i<=n;i++)
    {
        for(j=n;j>i;j--)
            cout<<" ";
        cout<<c;
        for(j=1;j<=2*i-1;j++)
            cout<<" ";
            cout<<c;
            cout<<endl;
            c--;
            }
    return 0;
}
