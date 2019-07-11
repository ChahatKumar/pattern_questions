//QUESTION
/*
 *
Hollow Rhombus Pattern

Given number of rows N, you have to print a Hollow Rhombus. See the output for corresponding given input.
Input Format:

Single integer N.
Constraints:

N <= 20
output format

Print pattern.
sample input

5

sample output

    *****
   *   *
  *   *
 *   *
*****


 */
//CODE


#include<iostream>
using namespace std;
int main() {
    int n,i,j;
    cin>>n;
    int sp=n-1;
    for(i=1;i<=n;i++)
    {
        for(j=1;j<=sp;j++)
        {
            cout<<" ";
        }
        sp--;
        cout<<"*";
        for(j=2;j<n;j++)
        {
            if(i==1||i==n)
                cout<<"*";
            else
                cout<<" ";
        }
        cout<<"*";
        cout<<endl;
    }
    return 0;
}