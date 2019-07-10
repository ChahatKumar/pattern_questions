//QUESTION
/*Fibonacci Pattern

Take N (number of rows), print the following pattern (for N = 4)
0
1 1
2 3 5
8 13 21 34
Input Format:
Constraints:
0 < N < 100
output format
sample input
4
sample output
0
1    1
2    3     5
8   13    21    34
 */
//CODE
#include<iostream>
using namespace std;
int main() {
    int N;
    cin>>N;
    int a=0,b=1,c=1;
    for(int i = 1;i<=N;i++)
    {

        if(i==1)
            cout<<a<<endl;
        else if (i==2)
            cout<<b<<"  "<<c<<endl;
        else{
            for(int j=1;j<=i;j++)
            { a=b;
                b=c;
                c=a+b;
                cout<<c<<"  ";
            }
            cout<<endl;
        }
    }
    return 0;
}