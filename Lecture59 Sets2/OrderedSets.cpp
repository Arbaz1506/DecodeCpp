#include <iostream>
#include <set> // This Means Ordered Sets
using namespace std;
int main()
{
   set<int> s; // Ordered set
   s.insert(1);
   s.insert(2);
   s.insert(8);
   s.insert(4);
   s.insert(5);
   s.insert(6);

   // Elements are Printed in Sorted Order
   for (int ele : s)
   {
      cout << ele << "  ";
   }
}