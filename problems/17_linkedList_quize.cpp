#include <bits/stdc++.h>

using namespace std;

class Node
{
public:
    int data;
    Node *next;

    // Default constructor
    Node()
    {
        data = 0;
        next = NULL;
    }

    // Parameterised Constructor
    Node(int data)
    {
        this->data = data;
        this->next = NULL;
    }
};

class Solution
{
public:
    Node *constructLL(vector<int> &arr)
    {
        // code here
        Node *head = new Node;
        Node *last = new Node;
        int n = arr.size();
        if (n == 0)
            return head;

        head->data = arr[0];
        head->next = NULL;
        last = head;

        for (int i = 1; i < n; i++)
        {
            Node *t = new Node;

            t->data = arr[i];
            last->next = t;
            last = t;
        }

        return head;
    }
};

int main()
{
    int t = 1;
    while (t--)
    {
        vector<int> arr({1, 2, 3, 4, 5});
        Solution obj;
        Node *ans = obj.constructLL(arr);
        while (ans)
        {
            cout << ans->data << " ";
            ans = ans->next;
        }
        cout << "\n";
    }
    return 0;
}