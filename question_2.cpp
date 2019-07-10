//QUESTION
/*
Manmohan Loves Patterns - I

Given N, help Manmohan to print pattern upto N lines. For eg For N=6 , following pattern will be printed.

1
11
111
1001
11111

100001
Input Format:

Single number N.
Constraints:

N<=1000
output format

Pattern corresponding to N.
sample input

6

sample output

1
11
111
1001
11111
100001
*/
//CODE

#include<iostream>
using namespace std;
int main() {

    int n;
    cin>>n;
    for(int i=1;i<=n;i++)
    {
        for(int j=1;j<=i;j++)
        {
            if(i%2 != 0)
                cout<<1;

            else
            {
                cout<<1;
                for(int k=2;k<=i-1;k++)
                {cout<<0;
                }
                cout<<1;
                break;
            }

        }
        cout<<endl;
    }
    return 0;
}