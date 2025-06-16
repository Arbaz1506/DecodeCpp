#include <iostream>
#include<vector>
#include<algorithm>
using namespace std;
//  Primum Question write meettingrooms Lintcode
class Solution
{
public:
    bool canAttendMeetings(vector<int> &intervals)
    {
        vector<int> start, ending;
        if (intervals.size() == 0)
            return true;
        // Populate start and end vectors
        for (auto &el : intervals)
        {
            start.push_back(el[0]);
            ending.push_back(el[1]);
        }

        // Sort both start and end times
        sort(ending.begin(), ending.end());
        sort(start.begin(), start.end());

        int ans = 0;
        int room = 0;
        int i = 0, j = 0;

        // Traverse through the meetings
        while (i < start.size() && j < ending.size())
        {
            if (start[i] < ending[j])
            {
                room++;
                i++;
                ans = max(ans, room);
            }
            else if (start[i] > ending[j])
            {
                j++;
                room--;
            }
            else
            {
                i++;
                j++;
            }
        }

        return ans == 1;
    }
};
int main()
{
    cout << "Leetcode252";
}