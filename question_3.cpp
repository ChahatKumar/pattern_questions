//QUESTION
/*
 *
Manmohan Loves Patterns- II

Help Manmohan to print pattern of a given number. See the output pattern for given input n = 5.
Input Format:

Single integer N denoting number of lines of the pattern.
Constraints:

N<=1000
output format

Pattern.
sample input

5

sample output

1
11
202
3003
40004
 */
//CODE
#include<iostream>
using namespace std;
int main() {
    int n;
    cin>>n;
    if(n==1)
        cout<<1;
    else
    { cout<<1<<endl;
        for(int i=1;i<=n-1;i++)
        {

            cout<<i;
            for(int k=2;k<=i;k++)
            { cout<<0;}
            cout<<i;


            cout<<endl;
        }
    }
    return 0;
}