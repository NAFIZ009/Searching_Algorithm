#include <bits/stdc++.h>
using namespace std;
int linear_search(int arr[], int el)
{
    int found = 0;
    int pos;
    for (int i = 0; i < sizeof(arr) - 1; i++)
    {
        if (arr[i] == el)
        {
            found = 1;
            pos = i;
            break;
        }
    }
    return found ? pos : 0;
}
int main()
{
    int n;
    cout << "How many elements?" << endl;
    cin >> n;
    int arr[n];
    cout << "Give the elements one by one" << endl;
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    int search;
    cout << "How element do you want to search?" << endl;
    cin >> search;
    int result = linear_search(arr, search);
    if (!result)
    {
        cout << "not found" << endl;
    }
    else
    {
        cout << search << " is found in postion: " << result + 1 << endl;
    }
    return 0;
}