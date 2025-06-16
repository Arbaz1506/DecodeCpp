#include <iostream>
#include <vector>
#include <climits>
using namespace std;

class Heap
{
public:
    vector<int> hp;
    int i;

    Heap(vector<int> &v)
    {
        hp = v;
        int n = hp.size();
         i = n-1;
        for (int j = n / 2-1; j >=0; j--)
        {
            downheapify(j, i);
        }
    }
    int peek()
    {
        if (hp.size() == 0)
            return INT_MIN;
        return hp[0];
    }
    void downheapify(int idx, int bound)
    {
        while (idx < bound)
        {
            int lc = 2 * idx + 1;
            int rc = 2 * idx + 2;
            if (lc >= bound)
                break;
            int maxEl = idx;
            if (hp[lc] > hp[maxEl])
            {
                maxEl = lc;
            }
            if (rc < bound && hp[rc] > hp[maxEl])
            {
                maxEl = rc;
            }

            if (maxEl != idx)
            {
                swap(hp[idx], hp[maxEl]);
                idx = maxEl;
            }

            else
                break;
        }
    }

    void heapsort()
    {
        int sz = hp.size();
        while (sz > 1)
        {
            int el = 0;
            swap(hp[el], hp[sz-1]);
            sz--;
            downheapify(0, sz);
        }
        for (int j = 0; j <hp.size(); j++)
        {
            cout << hp[j] << " ";
        }
    }
};

void heapsort(vector<int> &v)
{
    Heap hp(v);
    hp.heapsort();
}

int main()
{
    vector<int> v = {3, 8, 25, 62, 1, 19, 6};
    heapsort(v);
}