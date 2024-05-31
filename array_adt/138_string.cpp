#include <bits/stdc++.h>

using namespace std;

void PrintDuplicates(char s[]) // Using Bitwise Operations.....Merging and Masking
{
    long int H = 0;
    long int x = 0;

    for (int i = 0; s[i] != '\0'; i++)
    {
        x = 1;
        x = x << (s[i] - 97); // Masking
        if ((x & H) > 0)
        {
            printf("%c is present\n", s[i]);
        }
        else
        {
            H = H | x; // Merging
        }
    }
}

int main()
{
    char s[] = "finding";
    PrintDuplicates(s);
    // int H[26] = {0};

    // for (int i = 0; s[i] != '\0'; i++)
    // {

    //     H[s[i] - 97] += 1;
    // }

    // for (int i = 0; i < 26; i++)
    // {
    //     if (H[i] > 1)
    //     {
    //         printf("%c", i + 97);
    //         printf("%d", H[i]);
    //     }
    // }
    return 0;
}