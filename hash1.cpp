#include <bits/stdc++.h>
using namespace std;

// since our max input can be 10^4 for this problem, we can solve it using arr (cause we can do it for 10^6 inside main, and 10^7 outside)

int max_repeat(int arr[], int n, int max)
{
    int vis[max] = {0}; // just traverse the array to find the max number(time), or take the length of visited as 10^4, either choose space or time complexity. (this is bad time complexity)
    int max_count = 0;
    int element = -1;

    for (int i = 0; i < n; i++)
    {
        int count = 0;
        if (vis[arr[i]] == 0)
        {
            vis[arr[i]] = 1;
            for (int j = 0; j < n; j++)
            {
                if (arr[i] == arr[j])
                    count++;
            }

            if (count > max_count)
            {
                max_count = count;
                element = arr[i];
            }
            else if (count == max_count)
            {
                if (element > arr[i])
                    element = arr[i];
            }
        }
    }

    return element;
}

// this was the brute force, with worst time complexity

int main()
{
    int n;
    cout << "Enter the number of elements in array: ";
    cin >> n;
    int arr[n];
    cout << "Enter the element in the array: ";
    int max = 0;
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
        if (max < arr[i])
            max = arr[i];
    }

    int x = max_repeat(arr, n, max);

    cout << "The element that occured maximum times in the array is " << x;
}