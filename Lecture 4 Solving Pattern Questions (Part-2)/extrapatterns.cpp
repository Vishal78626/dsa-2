#include <iostream>
using namespace std;

/*
 * * * * *
 * * * * *
 * * * * *
 * * * * *
 * * * * *
 */
void pattern1(int n)
{
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cout << "* ";
        }
        cout << endl;
    }
}

/*
 *
 * *
 * * *
 * * * *
 * * * * *
 */
void pattern2(int n)
{
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j <= i; j++)
        {
            cout << "* ";
        }
        cout << endl;
    }
}

/*
1
12
123
1234
12345
*/
void pattern3(int n)
{
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            cout << j;
        }
        cout << endl;
    }
}

/*
1
22
333
4444
55555
*/
void pattern4(int n)
{
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            cout << i;
        }
        cout << endl;
    }
}

/*
*****
****
***
**
*
*/
void pattern5(int n)
{
    for (int i = n; i >= 1; i--)
    {
        for (int j = 1; j <= i; j++)
        {
            cout << "*";
        }
        cout << endl;
    }
}

/*
12345
1234
123
12
1
*/
void pattern6(int n)
{
    for (int i = 0; i < n; i++)
    {
        for (int j = 1; j <= n - i; j++)
        {
            cout << j;
        }
        cout << endl;
    }
}

/*
    *
   ***
  *****
 *******
*********
 */
void pattern7(int n)
{
    for (int i = 0; i < n; i++)
    {
        // space
        for (int j = 1; j <= n - i - 1; j++)
        {
            cout << " ";
        }

        // star
        for (int j = 1; j <= 2 * i + 1; j++)
        {
            cout << "*";
        }

        // space
        for (int j = 1; j <= n - i - 1; j++)
        {
            cout << "";
        }
        cout << endl;
    }
}

/*
*********
 ******* 
  *****  
   ***   
    * 
*/
void pattern8(int n)
{
    for (int i = 0; i < n; i++)
    {
        // space
        for (int j = 0; j < i; j++)
        {
            cout << " ";
        }

        // star
        for (int j = 1; j <= (2 * (n - i)) - 1; j++)
        {
            cout << "*";
        }

        // space
        for (int j = 0; j < i; j++)
        {
            cout << " ";
        }
        cout << endl;
    }
}

/*
    *
   ***
  *****
 *******
*********
*********
 ******* 
  *****  
   ***   
    *  
 */

void pattern9(int n)
{
    pattern7(n);
    pattern8(n);
}

/*
 *
 **
 ***
 ****
 *****
 ****
 ***
 **
 *
 */
void pattern10(int n)
{
    for (int i = 1; i <= 2 * n - 1; i++)
    {
        int star = i;

        if (i > n)
        {
            star = 2 * n - i;
        }
        // star
        for (int j = 1; j <= star; j++)
        {
            cout << "*";
        }
        cout << endl;
    }
}

/*
1
01
101
0101
10101
*/
void pattern11(int n)
{
    int start;
    for (int i = 0; i < n; i++)
    {
        if (i % 2 == 0)
        {
            start = 1;
        }
        else
        {
            start = 0;
        }
        for (int j = 0; j <= i; j++)
        {
            cout << start;
            start = !start;
        }
        cout << endl;
    }
}

/*
1      1
12    21
123  321
12344321
*/
void pattern12(int n)
{
    for (int i = 1; i < n; i++)
    {
        int space = 2 * ((n - 1) - i);
        for (int j = 1; j <= i; j++)
        {
            cout << j;
        }
        for (int j = 1; j <= space; j++)
        {
            cout << " ";
        }
        for (int j = i; j >= 1; j--)
        {
            cout << j;
        }
        cout << endl;
    }
}

/*
1
2 3
4 5 6
7 8 9 10
11 12 13 14 15
*/
void pattern13(int n)
{
    int count = 1;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j <= i; j++)
        {
            cout << count++ << " ";
        }
        cout << endl;
    }
}

/*
A
AB
ABC
ABCD
ABCDE
*/
void pattern14(int n)
{
    for (int i = 0; i < n; i++)
    {
        char alphabet = 'A';
        for (int j = 0; j <= i; j++)
        {
            cout << alphabet;
            alphabet++;
        }
        cout << endl;
    }
}

/*
ABCDE
ABCD
ABC
AB
A
*/
void pattern15(int n)
{
    for (int i = n; i >= 1; i--)
    {
        for (char j = 'A'; j <= 'A' + i - 1; j++)
        {
            cout << j;
        }
        cout << endl;
    }
}

/*
A
BB
CCC
DDDD
EEEEE
*/
void pattern16(int n)
{
    char alphabet = 'A';
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j <= i; j++)
        {
            cout << alphabet;
        }
        alphabet++;
        cout << endl;
    }
}

/*
    A
   ABA
  ABCBA
 ABCDCBA
ABCDEDCBA
*/
void pattern17(int n)
{

    for (int i = 0; i < n; i++)
    {
        // space
        for (int j = 0; j < n - i - 1; j++)
        {
            cout << " ";
        }

        // star
        char ch = 'A';

        int breakPoint = (2 * i + 1) / 2;
        for (int j = 0; j < 2 * i + 1; j++)
        {
            cout << ch;
            if (j < breakPoint)
            {
                ch++;
            }
            else
            {
                ch--;
            }
        }

        // space
        for (int j = 0; j < n - i - 1; j++)
        {
            cout << " ";
        }
        cout << endl;
    }
}

/**
E
DE
CDE
BCDE
ABCDE
 */
void pattern18(int n)
{
    for (int i = 0; i < n; i++)
    {
        for (char j = ('A' + n - 1) - i; j <= ('A' + n - 1); j++)
        {
            cout << j;
        }
        cout << endl;
    }
}

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
*/
void pattern19(int n)
{
    for (int i = n; i >= 1; i--)
    {
        // star
        for (int j = 0; j < i; j++)
        {
            cout << "*";
        }

        for (int j = 0; j < (2 * n) - (i + i); j++)
        {
            cout << " ";
        }

        // star
        for (int j = 0; j < i; j++)
        {
            cout << "*";
        }
        cout << endl;
    }

    for (int i = 0; i < n; i++)
    {
        // star
        for (int j = 0; j <= i; j++)
        {
            cout << "*";
        }

        for (int j = 0; j < 2 * (n - i) - 2; j++)
        {
            cout << " ";
        }

        // star
        for (int j = 0; j <= i; j++)
        {
            cout << "*";
        }
        cout << endl;
    }
}

/*
 *        *
 **      **
 ***    ***
 ****  ****
 **********
 ****  ****
 ***    ***
 **      **
 *        *
 */
void pattern20(int n)
{
    for (int i = 0; i < n; i++)
    {
        // star
        for (int j = 0; j <= i; j++)
        {
            cout << "*";
        }

        // space
        for (int j = 0; j < 2 * (n - i) - 2; j++)
        {
            cout << " ";
        }

        // star
        for (int j = 0; j <= i; j++)
        {
            cout << "*";
        }
        cout << endl;
    }

    for (int i = 0; i < n - 1; i++)
    {
        // star
        for (int j = 0; j < n - i - 1; j++)
        {
            cout << "*";
        }

        // space
        for (int j = 0; j < 2 * i + 2; j++)
        {
            cout << " ";
        }

        // star
        for (int j = 0; j < n - i - 1; j++)
        {
            cout << "*";
        }
        cout << endl;
    }
}

/*
*****
*   *
*   *
*   *
*****
*/
void pattern21(int n)
{
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if (i == 0 || j == 0 || i == n - 1 || j == n - 1)
            {

                cout << "*";
            }
            else
            {
                cout << " ";
            }
        }
        cout << endl;
    }
}

/*
555555555
544444445
543333345
543222345
543212345
543222345
543333345
544444445
555555555
*/
void pattern22(int n)
{
    for (int i = 0; i < 2 * n - 1; i++)
    {
        for (int j = 0; j < 2 * n - 1; j++)
        {
            int top = i;
            int left = j;
            int right = (2 * n - 2) - j;
            int down = (2 * n - 2) - i;

            cout << (n - min(min(top, down), min(left, right)));
        }

        cout << endl;
    }
}

int main()
{
    cout << "pattern 1" << endl;
    pattern1(5);
    cout << "pattern 2" << endl;
    pattern2(5);
    cout << "pattern 3" << endl;
    pattern3(5);
    cout << "pattern 4" << endl;
    pattern4(5);
    cout << "pattern 5" << endl;
    pattern5(5);
    cout << "pattern 6" << endl;
    pattern6(5);
    cout << "pattern 7" << endl;
    pattern7(5);
    cout << "pattern 8" << endl;
    pattern8(5);
    cout << "pattern 9" << endl;
    pattern9(5);
    cout << "pattern 10" << endl;
    pattern10(5);
    cout << "pattern 11" << endl;
    pattern11(5);
    cout << "pattern 12" << endl;
    pattern12(5);
    cout << "pattern 13" << endl;
    pattern13(5);
    cout << "pattern 14" << endl;
    pattern14(5);
    cout << "pattern 15" << endl;
    pattern15(5);
    cout << "pattern 16" << endl;
    pattern16(5);
    cout << "pattern 17" << endl;
    pattern17(5);
    cout << "pattern 18" << endl;
    pattern18(5);
    cout << "pattern 19" << endl;
    pattern19(5);
    cout << "pattern 20" << endl;
    pattern20(5);
    cout << "pattern 21" << endl;
    pattern21(5);
    cout << "pattern 22" << endl;
    pattern22(5);
    return 0;
}