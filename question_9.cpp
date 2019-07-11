//QUESTION
/*
 *
卐 Ganesha's Pattern

Take as input N, an odd number (>=5) . Print the following pattern as given below for N = 7.

*  ****
*  *
*  *
*******
   *  *
   *  *
****  *

Input Format:

Enter value of N ( >=5 )
Constraints:

N >= 5
output format
sample input

7

sample output

*  ****
*  *
*  *
*******
   *  *
   *  *
****  *

 */
//CODE

#include<iostream>
using namespace std;
int main() {
    int n;
    cin>>n;
    int k=(n+1)/2,i,j;
    for(i=1;i<=n;i++)
    {
        for(j=1;j<=n;j++)
        {
            if(i==1)
            {
                if(j==1|| j>=k)
                    cout<<'*';
                else
                    cout<<" ";
            }
            else if(i<k)
            { if(j==1||j==k)
                    cout<<'*';
                else
                    cout<<" ";
            }
            else if (i==k)
            {
                cout<<'*';
            }
            else if(i>k && i !=n)
            {
                if(j==k|| j==n)
                {
                    cout<<'*';
                }
                else
                    cout<<" ";
            }
            else if(i==n)
            {
                if(j<=k || j==n)
                    cout<<'*';
                else
                    cout<<" ";
            }
        }
        cout<<endl;
    }
    return 0;
}
