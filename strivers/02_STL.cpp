#include <bits/stdc++.h>
// #include <iostream>
// #include <utility>

using namespace std;

// Pairs
void explainPairs()
{
    pair<int, int> p = {1, 2};
    cout << p.first << endl;

    // pair can be nested
    pair<int, pair<int, int>> a = {1, {3, 4}};

    // also an array can be a pair data type
    pair<int, int> arr[] = {
        {1, 2},
        {3, 4},
        {5, 6},
        {7, 8},
    };
    cout << arr[3].first << endl;
}

// Vector
void explainVector()
{
    vector<int> v;

    // to add element
    v.push_back(1);
    v.emplace_back(2);

    vector<pair<int, int>> vec;
    // // to add element in pair form
    vec.push_back({11, 2});
    vec.emplace_back(1, 2);

    // vector<int> v(5, 100);

    // vector<int> v(5);

    vector<int> v1(5, 20);
    vector<int> v2(v1);

    cout << v1[3] << endl;
}

void explainVectorIterator()
{
    vector<int> v(5, 20);
    vector<int>::iterator it = v.begin();

    it++;
    cout << *(it) << " ";

    it = it + 2;
    cout << *(it) << " ";

    vector<int>::iterator it = v.end();
    // vector<int>::iterator it = v.rend();
    // vector<int>::iterator it = v.rbegin();
}

void explainSets()
{
    set<int> st;


 
}
int main()
{
    // explainPairs();
    // explainVector();
    explainVectorIterator();
    return 0;
}