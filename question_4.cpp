//QUESTION
/*
 * Pattern Mountain

Take N (number of rows), print the following pattern (for N = 4).

1           1
1 2       2 1
1 2 3   3 2 1
1 2 3 4 3 2 1

Input Format:
Constraints:

0 < N < 10
output format
sample input

4

sample output

1						1
1	2				2	1
1	2	3		3	2	1
1	2	3	4	3	2	1
 */
//CODE


#include<iostream>
using namespace std;
int main() {
    int n;
    cin>>n;
    int x= 2*(n-2) +1;
    int p,j,k;

    for(int i=1;i<=n;i++)
    {
        for(int j=1;j<=i;j++)
        {
            cout<<j<<"\t";
        }
        for( int p =1;p<=x;p++)
        {
            cout<<"\t";
        }
        x=x-2;

        if( i != n)
        {

            for(int k=i;k>0;k--)
            {
                cout<<k<<"\t";
            }
        }
        else
        {
            for(int k=i-1;k>0;k--)
            {
                cout<<k<<"\t";
            }
        }
        cout<<endl;

    }

    return 0;
}

