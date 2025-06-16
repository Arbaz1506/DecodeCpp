#include <iostream>
#include <vector>
#include <climits>

using namespace std;

class MaxHeap
{
    vector<int> hp;
    // int i ; [0,i]-> max heap

    void upheapify(int ci)
    {
        while (ci > 0)
        {
            int pi = (ci - 1) / 2;
            if (hp[pi] < hp[ci])
            {
                // swap
                swap(hp[pi], hp[ci]);
                ci = pi;
            }
            else
                break;
        }
    }

    void downheapify(int idx)
    {
        while (idx < hp.size())
        {
            int lc = 2 * idx + 1;
            int rc = 2 * idx + 2;
            if (lc >= hp.size())
                break;
            int maxEL = idx;
            if (hp[lc] > hp[maxEL])
            {
                maxEL = lc;
            }
            if (rc < hp.size() and hp[rc] > hp[maxEL])
            {
                maxEL = rc;
            }
            if (maxEL != idx)
            {
                swap(hp[idx], hp[maxEL]);
                idx = maxEL;
            }
            else
                break;
        }
    }

public:
    void push(int element)
    {
        hp.push_back(element);

        upheapify(hp.size() - 1);
    }

    void display()
    {
        cout << "[";
        for (int i = 0; i < hp.size(); i++)
        {
            cout << hp[i] << "  ";
        }
        cout << "]" << endl;
    }

    MaxHeap(vector<int> v)
    {
        hp = v;
        int n = hp.size();

        for (int i = n/2; i >=0; i--)
        {
            downheapify(i);
        }
    }
};
int main()
{
    // optimised using downheapify
    // time complexity O(n);
    // in upheapify me O(nlogn)
    vector<int> v = {9, 6, 1, 19, 3, 2, 8, 12, 5};
    MaxHeap hp(v);
    hp.display();
    return 0;
}