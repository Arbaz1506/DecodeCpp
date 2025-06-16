#include <iostream>
#include <climits>
using namespace std;
void slidingWindowTechnique()
{
    cout << "THIS IS SLIDING WINDOW TECHNIQUE: " << endl;
    int n;
    cout << "ENTER THE NUMBER OF ELEMENT IN THE ARRAY: ";
    cin >> n;
    int arr[n];
    cout << "ENTER THE ELEMENT IN THE ARRAY: ";
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    int maxSum = INT_MIN;
    int k;
    cout << "ENTER THE SIZE OF SUBARRAY: ";
    cin >> k;

    int maxIdx = -1;
    int prevSum = 0;
    for (int i = 0; i < k; i++)
    {
        prevSum += arr[i];
    }
    int i = 1;
    int j = k;

    while (j < n)
    {
        int currentSum = prevSum + arr[j] - arr[i - 1];
        if (maxSum < currentSum)
        {
            maxSum = currentSum;
            maxIdx = i;
        }
        prevSum = currentSum;
        i++;
        j++;
    }
    cout << "Maximum sum of sub array: " << maxSum << endl;
    cout << "From Index: " << maxIdx;
}
void bruteForce()
{
    cout << "BRUTE FORCR TECHNIQUE: " << endl;

    int n;
    cout << "ENTER THE NUMBER OF ELEMENT IN THE ARRAY: ";
    cin >> n;
    int arr[n];
    int count = 0;
    int ans = 0;
    cout << "ENTER THE ELEMENT IN THE ARRAY: ";
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    int Maxsum = INT_MIN;
    int k;
    cout << "ENTER THE SIZE OF SUBARRAY: ";
    cin >> k;
    for (int i = 0; i < n - k; i++)
    {
        int sum = 0;
        for (int j = i; j < i + k; j++)
        {
            sum += arr[j];
        }
        Maxsum = max(Maxsum, sum);
    }
    cout << "MAXIMUM SUM OF SUBBARRAY: " << Maxsum << endl;
    ;
}
int main()
{
    bruteForce();
    cout << endl;
    slidingWindowTechnique();
}