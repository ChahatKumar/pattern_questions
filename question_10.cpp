//QUESTION
/*
 *
Hollow Diamond Pattern(Pattern 6)

Take N (number of rows), print the following pattern (for N = 5).

     * * * * *
     * *   * *
     *       *
     * *   * *
     * * * * *

Input Format:
Constraints:

0 < N < 10 (where N is an odd number)
output format
sample input

5

sample output

*	*	*   *    *
*	*	    *    *
* 	             *
* 	*       *    *
* 	*   *   *    *


 */
//CODE



#include<iostream>
using namespace std;
int main() {
    int i,n,j;
    cin>>n;
    for(i=1;i<=n;i++)
    {
        cout<<"*"<<"\t";
    }
    cout<<endl;
    int k=n/2;
    int c=1;
    for(i=2;i<=n-1;i++)
    {
        for(j=1;j<=k;j++)
        {
            cout<<"*"<<"\t";
        }
        for(j=1;j<=c;j++)
        {
            cout<<"\t";
        }
        for(j=1;j<=k;j++)
        {
            cout<<"*"<<"\t";
        }
        if(i<=n/2)
        {
            k--;
            c+=2;
        }
        else
        {
            k++;
            c-=2;
        }
        cout<<endl;
    }
    for(i=1;i<=n;i++)
    {
        cout<<"*"<<"\t";
    }
    return 0;
}



