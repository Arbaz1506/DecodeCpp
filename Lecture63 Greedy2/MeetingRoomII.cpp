/*
    Given an array of meeting time intervals consisting of start and end times,
    find the minimum number of conference rooms required to hold all meetings.

    Example:

    Input:
    intervals = {{0, 30}, {5, 10}, {15, 20}}

    Output:
    2

    Explanation:
    - You need two meeting rooms because:
      1. The first meeting starts at time 0 and ends at time 30.
      2. The second meeting starts at time 5 and ends at time 10, overlapping with the first.
      3. The third meeting starts at time 15 and ends at time 20, overlapping with the first meeting.
*/
//    Premium question
#include <vector>
#include <algorithm>

using namespace std;

class Solution
{
public:
    int minMeetingRooms(vector<vector<int>> &intervals)
    {
        vector<int> start, ending;

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

        return ans;
    }
};

int main()
{
    return 0;
}
