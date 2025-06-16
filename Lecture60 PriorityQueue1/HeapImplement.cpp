#include <iostream>
#include <vector>
#include <climits>

using namespace std;

class MaxHeap
{
    vector<int> hp;

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

    void pop()
    {
        if (empty())
            return;
        swap(hp[0], hp[hp.size() - 1]);
        hp.pop_back();
        if (!empty())
            downheapify(0);
    }

    bool empty()
    {

        return hp.size() == 0;
    }
    int peak()
    {
        if (hp.size() == 0)
            return INT_MIN;
        return hp[0];
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
};
int main()
{

    MaxHeap hp;
    hp.push(3);
    hp.push(4);
    hp.push(11);
    hp.push(9);
    hp.push(14);
    hp.push(-1);
    hp.push(30);
    hp.push(44);
    hp.push(50);
    hp.display();
    cout << hp.peak() << endl;
    hp.pop();
    hp.display();
    hp.pop();
    hp.display();
    hp.pop();
    hp.display();
    hp.pop();
    hp.display();
    hp.pop();
    hp.display();
}