//QUESTION
/*
 *
Pattern Numbers & Stars - 1

Take as input N, a number. Print the pattern as given in output section for corresponding input.
Input Format:

Enter value of N
Constraints:
output format

All numbers and stars are Space separated
sample input

5

sample output

1 2 3 4 5
1 2 3 4 *
1 2 3 * * *
1 2 * * * * *
1 * * * * * * *


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
        for(j=1;j<=n-i+1;j++)
        {cout<<j<<" ";
        }
        if(i!=1)
        {
            for(j=1;j<=2*i-3;j++)
            {
                cout<<"* ";
            }
        }
        cout<<endl;
    }
    return 0;
}

