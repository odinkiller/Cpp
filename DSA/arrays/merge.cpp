#include<iostream>
#include<vector>
using namespace std;

void entry(vector<int>& a)
{
    int s;
    cout << "Enter size of elements: ";
    cin >> s;
    cout << "Enter the elements (sorted): ";
    for (int i = 0; i < s; i++)
    {
        int x;
        cin >> x;
        a.push_back(x);
    }
}

int main()
{
    vector<int> a1, a2;
    entry(a1);
    entry(a2);

    int m = a1.size();
    int n = a2.size();
    vector<int> a3(m + n);

    int i = 0, j = 0, k = 0;

    // Merge both arrays
    while (i < m && j < n)
    {
        if (a1[i] < a2[j])
        {
            a3[k++] = a1[i++];
        }
        else
        {
            a3[k++] = a2[j++];
        }
    }

    // Copy remaining elements from a1
    while (i < m)
    {
        a3[k++] = a1[i++];
    }

    // Copy remaining elements from a2
    while (j < n)
    {
        a3[k++] = a2[j++];
    }

    // Print merged array
    cout << "Merged sorted array: ";
    for (int x : a3)
    {
        cout << x << " ";
    }
    cout << endl;

    return 0;
}
