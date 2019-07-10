//QUESTION
/*
 *
Pattern Triangle

Take N (number of rows), print the following pattern (for N = 4).
      1
    2 3 2
  3 4 5 4 3
4 5 6 7 6 5 4

Input Format:
Constraints:

0 < N < 10
output format
sample input

4

sample output
            1
		2	3	2
	3	4	5	4	3
4	5	6	7	6	5	4

 */
//CODE
#include<iostream>
using namespace std;
int main() {
    int n;
    cin>>n;
    int i,j;
    for(i=1;i<=n;i++)
    {
        for(int p=1;p<=n-i;p++)
        {
            cout<<"\t";
        }
        for( j=i; j<= 2*i-1;j++)
        {
            cout<<j<<"\t";
        }
        for(int k = j-2;k>=i;k--)
        {
            cout<<k<<"\t";

        }
        cout<<endl;

    }
    return 0;
}
