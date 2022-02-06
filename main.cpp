#include <iostream>

using namespace std;

int main()
{
    int a[100][100],i,j,n;
    cin>>n;
    for(i=1 ; i<=n ; i++)
    {
        for(j=1 ; j<=n ; j++)
        {
            if(i+j<=n+1)
                a[i][j]=n+1-i-j;
            else
                a[i][j]=a[i][j-1]+1;
        }
    }
    for(i=1 ; i<=n ; i++)
    {
        for(j=1 ; j<=n ; j++)
        cout<<a[i][j]<<" ";
        cout<<endl;
    }
    return 0;
}
