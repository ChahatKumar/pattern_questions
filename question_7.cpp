//QUESTION
/*
 *
Pattern DoubleSidedArrow

Take N as input. For a value of N=7, we wish to draw the following pattern :

            1
        2 1   1 2
    3 2 1       1 2 3
4 3 2 1           1 2 3 4
    3 2 1       1 2 3
        2 1   1 2
            1

Input Format:

Take N as input.
Constraints:

N is odd number.
output format

Pattern should be printed with a space between every two values.
sample input

7

sample output

            1
        2 1   1 2
    3 2 1       1 2 3
4 3 2 1           1 2 3 4
    3 2 1       1 2 3
        2 1   1 2
            1


 */
//CODE
#include<iostream>
using namespace std;
int main() {
    int n;
    cin>>n;
    int c=2;
    int i,j,k=2*(n-1);
    for(i=1;i<=(n+1)/2;i++)
    {
        for(j=1;j<=k;j++)
        {
            cout<<" ";
        }
        k=k-4;
        for(j=i;j>0;j--)
        {
            cout<<j<<" ";
        }

        if(i>=2)
        {
            for(j=1;j<=c;j++)
            {
                cout<<" ";
            }

            c=c+4;
            for(j=1;j<=i;j++)
            {
                cout<<j<<" ";
            }
        }
        cout<<endl;
    }
    int r=k+8;
    for(int k=i;k<=n;k++)
    {
        for(j=1;j<=r;j++)
        {
            cout<<" ";
        }
        r=r+4;
        for(j=n-k+1;j>0;j--)
        {
            cout<<j<<" ";
        }
        for(j=1;j<=c-8;j++)
        {
            cout<<" ";
        }
        c=c-4;
        if( k!= n)
        {for(j=1;j<=n-k+1;j++)
            {
                cout<<j<<" ";
            }
        }
        cout<<endl;
    }

    return 0;
}
