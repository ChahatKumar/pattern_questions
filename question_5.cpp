//QUESTION
/*
 * Pattern with Zeros

Take N (number of rows), print the following pattern (for N = 5)
1
2 2
3 0 3
4 0 0 4
5 0 0 0 5
Input Format:
Constraints:

0 < N < 100
output format
sample input

5

sample output

1
2	2
3	0	3
4	0	0	4
5	0	0	0	5
 */
//CODE
#include<iostream>
using namespace std;
int main() {
    int n;
    cin>>n;
    int i;

    for(i=1;i<=n;i++)
    {  if(i==1)
            cout<<1<<endl;

        else
        { cout<<i<<"\t";

            for(int j=1;j<=i-2;j++)
            {cout<<0<<"\t";
            }
            cout<<i<<endl;
        }

    }

    return 0;
}