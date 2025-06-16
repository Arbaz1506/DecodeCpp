#include <iostream>
#include <queue>
using namespace std;
int main()
{
    priority_queue<int> Maxhp;
    //  the default priority queue implementation uses max heap
    // to use min heap we have to pass a comparator function

    priority_queue<int, vector<int>, greater<int>> hp;
    hp.push(3);
    hp.push(4);
    hp.push(11);
    hp.push(9);
    hp.push(14);
    hp.push(-1);
    hp.push(30);
    hp.push(44);
    hp.push(50);

    //  for making priority queue of the vector
    vector<int> v = {9, 6, 1, 19, 3, 2, 8, 12, 5};
    priority_queue<int, vector<int>, greater<int>> minhpvector(v.begin(), v.end());
    cout << endl;
    cout << minhpvector.top();

    //  for making priority queue of the array
    int arr[] = {9, 6, 1, 19, 3, 2, 8, 12, 5};
    priority_queue<int> maxhparray(arr, arr + 9);
    cout << maxhparray.top();
}