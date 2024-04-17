#include <iostream>

using namespace std;

int main1()
{
    int n = 0;
    cin >> n;
    int i = 1;
    int sum = 1;
    while (i <= n)
    {
        int j = 1;
        while (j <= n)
        {
            cout << sum;
            sum++;
            j++;
        }
        cout << endl;

        i++;
    }
}

int main2()
{
    int n = 0;
    cin >> n;
    int i = 1;
    int sum = 0;
    int a = 'A';
    while (i <= n)
    {
        int j = 1;
        while (j <= n)
        {
            char ch = 'A' + sum;
            cout << ch << " ";
            sum++;
            j++;
        }
        cout << endl;

        i++;
        // cout << a+1;
    }
}

int main3()
{
    int n = 0;
    cin >> n;
    int i = 1;
    while (i <= n)
    {
        char ch = 'A' + n - i;
        int j = 1;
        while (j <= i)
        {
            cout << ch << " ";
            ch++;
            j++;
        }

        cout << endl;

        i++;
    }
}

/*
    *
   **
  ***
 ****
*****
*/
int main4()
{
    int n = 0;
    cin >> n;
    int i = 1;
    while (i <= n)
    {
        int j = 1;
        int k = n - i;
        while (k)
        {
            cout << " ";
            k--;
        }
        while (i >= j)
        {
            cout << "*";
            j++;
        }

        cout << endl;

        i++;
    }
}

/*
      1
     121
    12321
   1234321
*/
int main5()
{

    int n = 0;
    cin >> n;
    int i = 1;
    while (i <= n)
    {
        int space = n - i;
        while (space)
        {
            cout << " ";
            space--;
        }

        int j = 1;
        while (j < i)
        {
            cout << j;
            j++;
        }
        int k = j;
        while (k)
        {
            cout << k;
            k--;
        }

        cout << endl;
        i++;
    }
}

/*
    1234554321
    1234**4321
    123****321
    12******21
    1********1
*/
int main()
{

    int n = 0;
    cin >> n;
    int i = 1;
    while (i <= n)
    {
        int sum = 0;
        int j = n - i + 1;
        while (j >= 1)
        {
            sum++;
            cout << sum;
            j--;
        }
        int star = i - 1;
        while (star)
        {
            cout << "**";
            star--;
        }

        while (sum)
        {
            cout << sum;
            sum--;
        }

        cout << endl;
        i++;
    }
}