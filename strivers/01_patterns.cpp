#include <bits/stdc++.h>
using namespace std;

void pattern_2(int n)
{
    int i = 1;
    while (i <= n)
    {
        int j = 1;
        while (j <= i)
        {
            cout << "*";
            j++;
        }
        cout << endl;
        i++;
    }

    // for (int i = 1; i <= n; i++)
    // {
    //     for (int j = 1; j <= i; j++)
    //     {
    //         cout << "*";
    //     }
    //     cout << endl;
    // }
}

void pattern_3(int n)
{
    int i = 1;
    while (i <= n)
    {
        int j = 1;
        while (j <= i)
        {
            cout << j;
            j++;
        }
        cout << endl;
        i++;
    }

    // for (int i = 1; i <= n; i++)
    // {
    //     for (int j = 1; j <= i; j++)
    //     {
    //         cout << j;
    //     }
    //     cout << endl;
    // }
}

void pattern_4(int n)
{
    // int i = 1;
    // while (i <= n)
    // {
    //     int j = 1;
    //     while (j <= i)
    //     {
    //         cout << i;
    //         j++;
    //     }
    //     cout << endl;
    //     i++;
    // }

    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            cout << "*";
        }
        cout << endl;
    }
}

void pattern_56(int n)
{
    // int i = n;
    // while (i >= 1)
    // {
    //     int j = 1;
    //     while (j <= i)
    //     {
    //         cout << i;
    //         j++;
    //     }
    //     cout << endl;
    //     i--;
    // }

    for (int i = n; i >= 1; i--)
    {
        for (int j = 1; j <= i; j++)
        {
            cout << "*";
        }
        cout << endl;
    }
}

void pattern_7(int n)
{
    int i = 0;
    while (i < n)
    {
        int space = 0;
        while (space < n - i - 1)
        {
            cout << " ";
            space++;
        }

        int j = 0;
        while (j < (2 * i) + 1)
        {
            cout << "*";
            j++;
        }

        int space2 = 0;
        while (space2 < n - i - 1)
        {
            cout << " ";
            space2++;
        }

        cout << endl;
        i++;
    }

    for (int i = 0; i < n; i++)
    {
        // space
        for (int j = 0; j < (n - i - 1); j++)
        {
            cout << " ";
        }

        // star
        for (int j = 0; j < (2 * i) + 1; j++)
        {
            cout << "*";
        }

        // space
        for (int j = 0; j < (n - i - 1); j++)
        {
            cout << " ";
        }
        cout << endl;
    }
}

void pattern_8(int n)
{
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < i; j++)
        {
            cout << " ";
        }

        for (int j = 0; j < (2 * (n - i)) - 1; j++)
        {
            cout << "*";
        }

        for (int j = 0; j < i; j++)
        {
            cout << " ";
        }

        cout << endl;
    }
}

void pattern_10(int n)
{
    // othe option is you can combine the two patterns

    for (int i = 1; i <= (2 * n) - 1; i++)
    {
        int star = i;
        if (i > n)
            star = (2 * n) - i;
        for (int j = 0; j < star; j++)
        {
            cout << "*";
        }
        cout << endl;
    }
}

void pattern_11(int n)
{
    /*
        1
        0 1
        1 0 1
        0 1 0 1
    */

    int start = 1;

    for (int i = 1; i <= n; i++)
    {
        if (i % 2 == 0)
            start = 0;
        else
            start = 1;

        for (int j = 1; j <= i; j++)
        {
            cout << start << " ";
            start = 1 - start;
        }

        cout << endl;
    }
}

void pattern_12(int n)
{
    /*
        1             1
        1 2         2 1
        1 2 3     3 2 1
        1 2 3 4 4 3 2 1
    */

    int space = 2 * (n - 1);
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            cout << j << " ";
        }
        for (int j = 1; j <= space; j++)
        {
            cout << "  ";
        }
        for (int j = i; j >= 1; j--)
        {
            cout << j << " ";
        }

        cout << endl;
        space -= 2;
    }
}

void pattern_13(int n)
{
    /*
        1
        2 3
        4 5 6
        7 8 9 10
    */

    int sum = 1;
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            cout << sum << " ";
            sum++;
        }
        cout << endl;
    }
}

void pattern_14(int n)
{
    /*
        A
        A B
        A B C
        A B C D
        A B C D E
        A B C D E F
        A B C D E F G
    */

    for (int i = 1; i <= n; i++)
    {
        for (char ch = 'A'; ch <= 'A' + i - 1; ch++)
        {
            cout << ch << " ";
        }
        cout << endl;
    }
}

void pattern_15(int n)
{
    /*
        A B C D E
        A B C D
        A B C
        A B
        A
    */

    for (int i = n; i >= 1; i--)
    {
        for (char ch = 'A'; ch <= 'A' + i - 1; ch++)
        {
            cout << ch << " ";
        }
        cout << endl;
    }
}

void pattern_16(int n)
{
    /*
        A
        B B
        C C C
        D D D D
        E E E E E
        F F F F F F
        G G G G G G G
    */

    for (int i = 1; i <= n; i++)
    {
        char ch = 'A' + i - 1;
        for (int j = 1; j <= i; j++)
        {
            cout << ch << " ";
        }
        cout << endl;
    }
}

int main()
{
    int n = 4;
    cin >> n;
    pattern_16(n);

    return 0;
}