#include <iostream>
#include <math.h>
using namespace std;
int main()
{
    int n;
    // Pattern 1
    /*****
     *****
     *****

       cout<<"please enter number of rows and coloumns"<<endl;
       int rows,coloumns;
       cin>>rows>>coloumns;
       for(int i=0;i<coloumns;i++){
        for(int j=0;j<rows;j++){
            cout<<"*";
        }
        cout<<endl;
       }
       */

    // Pattern 2
    /* *
       **
       ***
       ****

    cout<<"please enter number of coloumns"<<endl;

    cin>>n;
    for(int i=0;i<n;i++){
        for(int j=0;j<=i;j++){
            cout<<"* ";
        }
        cout<<endl;
    }
    */

    // Pattern 3
    /*   1
        12
        123
        1234
     cout<<"enter no. of coloumns";
     cin>>n;
     for(int i=1;i<=n;i++){
         for(int j=1;j<=i;j++){
             cout<<j<<" " ;
         }
         cout<<endl;
         }
         */

    // Pattern 4
    /* 1
       22
       333
       444

    cout<<"enter no. of coloumns";
    cin>>n;
    for(int i=1;i<=n;i++){
        for(int j=1;j<=i;j++){
            cout<<i<<" " ;

        }
        cout<<endl;
        }
    */

    // Pattern 5
    /*
     *****
     ****
     ***
     **
     *

    cout<<"enter no. of coloumns"<<endl;
    cin>>n;
    for(int i=0;i<n;i++){
        for(int j=0;j<n-i;j++){
            cout<<"* ";
        }
        cout<<endl;
    }
     */

    // Pattern 6
    /*
      12345
      1234
      123
      12
      1

    cout<<"enter no. of coloumns"<<endl;
    cin>>n;
    for(int i=0;i<n;i++){
        for(int j=1;j<=n-i;j++){
            cout<<j;
        }
        cout<<endl;
    }
    */

    // Pattern 7
    /*    *
         ***
        *****
       *******

      cout<<"enter no. of coloumns"<<endl;
    cin>>n;
    for(int i=0;i<n;i++){
        for(int j=0;j<=n-i;j++){
            cout<<" ";
        }
        for(int k=0;k<2*i+1;k++){
            cout<<"*";
        }
        cout<<endl;
    }
    */

    // Pattern 8
    /*
    //     * * * * * * *
    //       * * * * *
    //         * * *
    //           *



     cout<<"enter no. of coloumns"<<endl;
     cin>>n;
     for(int i=0;i<n;i++){
        for(int j=0;j<i;j++){
             cout<<" ";
        }
        for(int k=0;k<2*n-(2*i+1);k++){
            cout<<"*";
        }
        cout<<endl;
    }
   */

    // Pattern 9
    /*
    *
    * *
    * * *
    * * * *
    * * *
    * *
    *
    cout<<"enter maximum number of stars"<<endl;
     cin>>n;
     for(int i=0;i<n;i++){
        for(int j=0;j<=i;j++){
            cout<<"* ";
        }
        cout<<endl;
    }
    for(int i=0;i<n-1;i++){
        for(int j=0;j<n-i-1;j++){
            cout<<"* ";
        }
        cout<<endl;
    }
    */

    // Pattern 10
    /*          *
              * * *
            * * * * *
          * * * * * * *
            * * * * *
              * * *
                *
       cout<<"enter no. of coloumns"<<endl;
      cin>>n;
      for(int i=0;i<n;i++){
          for(int j=0;j<n-i;j++){
              cout<<" ";
          }
          for(int k=0;k<2*i+1;k++){
              cout<<"*";
          }
          cout<<endl;
      }
       for(int i=0;i<n-1;i++){
          cout<<" ";
          for(int j=0;j<=i;j++){
               cout<<" ";
          }
          for(int k=0;k<2*(n-1)-(2*i+1);k++){
              cout<<"*";
          }
          cout<<endl;
      }
       */

    // Pattern 11
    /*
    1
    0 1
    1 0 1
    0 1 0 1

    cout<<"enter no. of coloumns"<<endl;
    int start;
    cin>>n;
    for(int i=0;i<n;i++){
         if( i%2 ==0 ){
            start = 1;
         }
         else{
            start= 0;
         }
         for(int j=0;j<=i;j++){
            cout<<start<<" ";
            start=1-start;
         }
         cout<<endl;
    }
    */

    // Pattern 12
    /*
    1      1
    12    21
    123  321
    12344321

    cout << "enter no. of coloumns";
    cin >> n;
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            cout << j;
        }
        for (int k = 0; k < 2*n -(2*i+1); k++)
        {
            cout << " ";
        }
        for (int l = i; l >= 1; l--)
        {
            cout << l;
        }
        cout << endl;
    }
    */

    // Pattern 13
    /*  1
        2 3
        4 5 6
    cout<<"Please enter number of coloumns"<<endl;
    cin>>n;
    int a =1;
     for (int i = 1; i <= n; i++)
        {
            for(int j =1;j<=i;j++){
               cout<<a<<" ";
               a++;
            }
            cout<<endl;
            }
            */

    // Pattern 14
    /* A
       AB
       ABC
       ABCD

    cout<<"Please enter number of coloumns"<<endl;
    cin>>n;
    int k=65;
     for (int i = 1; i <= n; i++)
        {
            for(int j =1;j<=i;j++){
               cout<<char(k);
               k++;
            }
            k=65;
            cout<<endl;
            }
    */

    // Pattern 15
    /*
    ABCDEF
    ABCDE
    ABCD
    ABC
    A
     cout<<"enter no. of coloumns"<<endl;
    cin>>n;
    int k=65;
    for(int i=0;i<n;i++){
        for(int j=0;j<n-i;j++){
            cout<<char(k);
            k++;
        }
        k=65;
        cout<<endl;
    }
    */

    // Pattern 16
    /*A
      BB
      CCC
      DDDD

    cout<<"enter no. of coloumns"<<endl;
        cin>>n;
        int k=65;
        for(int i=1;i<=n;i++){
            for(int j=1;j<=i;j++){
                cout<<char(k) ;
            }
            k++;
            cout<<endl;
            }
    */

    // Pattern 17
    /*   A
        ABA
       ABCBA

    cout << "enter no. of coloumns" << endl;
    cin >> n;
    int k = 64;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n - i; j++)
        {
            cout << " ";
        }
        for (int j = -i; j <= i; j++)
        {

            if (j <= 0)
                k++;
            else
            {
                k--;
            }
            cout << char(k);
        }
         cout << endl;
         k=64;
    }
   */

    // Pattern 18
    /* E
       D E
       C D E
       B C D E
       A B C D E

   cout << "enter no. of coloumns" << endl;
    cin >> n;
   for (int i = 0; i < n; i++){
      for(char ch='E'-i;ch<='E';ch++)  {
        cout<<ch<<" ";
    }
    cout<<endl;
}
*/

    // Pattern 19
    /*
      **********
      ****  ****
      ***    ***
      **      **
      *        *
      *        *
      **      **
      ***    ***
      ****  ****
      **********

    cout<<"enter no. of coloumns"<<endl;
    cin>>n;
    for(int i=0;i<n;i++){
        for(int j=0;j<n-i;j++){
            cout<<"*";
        }
        for(int k=1;k<2*i+1;k++){
            cout<<" ";
        }
        for(int j=0;j<n-i;j++){
            cout<<"*";
        }
        cout<<endl;
    }
     for(int i=0;i<n;i++){
        for(int j=0;j<=i;j++){
             cout<<"*";
        }
        for(int k=0;k<2*n-(2*i+1)-1;k++){
            cout<<" ";
        }
        for(int j=0;j<=i;j++){
             cout<<"*";
        }
        cout<<endl;
    }
    */

    // Pattern 20
    /*
        *      *
        **    **
        ***  ***
        ********
        ***  ***
        **    **
        *      *

   cout<<"enter no. of coloumns"<<endl;
    cin>>n;
     for(int i=0;i<n;i++){
        for(int j=0;j<=i;j++){
             cout<<"*";
        }
        for(int k=0;k<2*n-(2*i+1)-1;k++){
            cout<<" ";
        }
        for(int j=0;j<=i;j++){
             cout<<"*";
        }
        cout<<endl;
    }
    for(int i=0;i<n-1;i++){
        for(int j=0;j<n-i-1;j++){
            cout<<"*";
        }
        cout<<" ";
        for(int k=0;k<2*i+1;k++){
            cout<<" ";
        }
        for(int j=0;j<n-i-1;j++){
            cout<<"*";
        }
        cout<<endl;
    }
    */

    // Pattern 21
    /*

    ****
    *  *
    *  *
    ****
   cout<<"please enter number of rows "<<endl;
       int rows;
       cin>>rows;
       for(int i=0;i<rows;i++){
        for(int j=0;j<rows;j++){
           if(i==0 ||i==rows-1||j==0||j==(rows-1))
            cout<<"*";
            else{
                cout<<" ";
            }
        }
        cout<<endl;
       }
       */

    // Pattern 22
    /*
         *
         *
         *
   * * * * * * *
         *
         *
         *
      cout<<"please enter number of rows "<<endl;
       int rows;
       cin>>rows;
       for(int i=1;i<=rows;i++){
        for(int j=1;j<=rows;j++){
           //rows should be odd
                if(j==(rows/2)+1 || i==(rows/2) +1  )
                cout<<"*";
                else{
                    cout<<" ";

            }
        }
        cout<<endl;
       }
       */

    // Pattern 23
    /*
       4 4 4 4 4 4 4
       4 3 3 3 3 3 4
       4 3 2 2 2 3 4
       4 3 2 1 2 3 4
       4 3 2 2 2 3 4
       4 3 3 3 3 3 4
       4 4 4 4 4 4 4

 cout<<"enter max no. of pattern"<<endl;
        cin>>n;
         for(int i=0;i<2*n-1;i++){
            for(int j=0;j<2*n-1;j++){
            int top=i;
            int left=j;
            int right=(2*n-2)-j;
            int down=(2*n-2)-i;
            cout<<(n- min(min(top,down),min(left,right)));
            }
            cout<<endl;
}
*/
}