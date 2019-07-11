//QUESTION
/*
 *
Pascal Triangle 1

Given an integer N, print Pascal Triangle upto N rows.
Input Format:

Single integer N.
Constraints:

N <= 10
output format

Print pascal triangle.
sample input

4

sample output

           1
         1   1
       1   2   1
     1   3   3   1


 */
//CODE


#include<iostream>
using namespace std;

int fact(int x)
{
    int fac=1;
    for(int i=x;i>0;i--)
    {
        fac = fac *i;
    }
    return fac;
}
int main() {
    int n,j,c,k;
    cin>>n;

    for(int i=1;i<=n;i++)
    {
        for(k=1;k<=2*(n-i);k++)
        {
            cout<<" ";
        }
        for(j=1;j<=i;j++)
        {
            if(j==1||j==i)
                cout<<1<<"   ";

            else
            {
                c= fact(i-1)/(fact(j-1)*fact(i-j));
                cout<<c<<"   ";
            }

        }
        cout<<endl;
    }
    return 0;
}
