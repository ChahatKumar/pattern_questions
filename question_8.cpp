//QUESTION
/*
 *
Pattern InvertedHourGlass

Take N as input. For a value of N=5, we wish to draw the following pattern :

5                   5
5 4               4 5
5 4 3           3 4 5
5 4 3 2       2 3 4 5
5 4 3 2 1   1 2 3 4 5
5 4 3 2 1 0 1 2 3 4 5
5 4 3 2 1   1 2 3 4 5
5 4 3 2       2 3 4 5
5 4 3           3 4 5
5 4               4 5
5                   5

Input Format:

Take N as input.
Constraints:
output format

Pattern should be printed with a space between every two values.
sample input

5

sample output

5                   5
5 4               4 5
5 4 3           3 4 5
5 4 3 2       2 3 4 5
5 4 3 2 1   1 2 3 4 5
5 4 3 2 1 0 1 2 3 4 5
5 4 3 2 1   1 2 3 4 5
5 4 3 2       2 3 4 5
5 4 3           3 4 5
5 4               4 5
5                   5


 */
//CODE
#include<iostream>
using namespace std;
int main() {
    int i,j,n,k=4*n-1;
    cin>>n;
    for(i=n;i>=1;i--)
    {
        for(j=n;j>=i;j--)
        {
            cout<<j<<" ";
        }
        for(j=4*i-2;j>=1;j--)
        {
            cout<<" ";
        }
        for(j=i;j<=n;j++)
        {
            cout<<j<<" ";
        }
        cout<<endl;
    }
    for(i=n;i>=0;i--)
    {
        cout<<i<<" ";
    }
    for(i=1;i<=n;i++)
    {
        cout<<i<<" ";
    }
    cout<<endl;
    for(i=1;i<=n;i++)
    {
        for(j=n;j>=i;j--)
        {
            cout<<j<<" ";
        }
        for(j=1;j<=4*i-2;j++)
        {
            cout<<" ";
        }
        for(j=i;j<=n;j++)
        {
            cout<<j<<" ";
        }
        cout<<endl;
    }
    return 0;
}