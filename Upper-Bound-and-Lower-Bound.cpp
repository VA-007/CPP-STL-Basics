#include <bits/stdc++.h>
#include <iostream>
#include <algorithm>
#include <string>
#include <vector>
#include <cmath>

#define ll long long
#define MOD 1000000007

using namespace std;

main()
{
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);

  // ===============================>> UPPER BOUND AND LOWER BOUND <<=================================

  // lower_bound --> returns the first occurance of given element if present. If not present then finds the element greater than that given element.

  // upper_bound --> Always finds the element just greater than that given element.

  /* EXAMPLE : for the array   4 5 5 7 8 25 1    
    lower_bound of 5 = 5, lower_bound of 4 = 4, lower_bound of 6 = 7, lower_bound of 9 = 25
    lower_bound of 26 = 1 --> Gives the pointer to the next element of the greatest element

  -->> RETURNS THE LOCATION OF THE ELEMENT. POINTER IN CASE OF ARRAYS AND ITERATOR IN CASE OF VECTORS */

  // In order to use upper and lower bound with maps and sets we should do
  //    mp.upper/lower_bound(value) and
  //    st.upper/lower_bound(value)
  //  Because this will be a O(logn) operation if we do it like this however if we do  auto it = upper/lower_bound(mp.begin(), mp.end(), value); then this will be a O(n) operation and also may give TLE in some cases.

  vector<int> arr{1, 2, 3, 5, 9, 9, 9, 13};

  auto it = upper_bound(arr.begin(), arr.end(), 9);
  cout << *it << endl;
  it = upper_bound(arr.begin(), arr.end(), 4);
  cout << *it << endl;
  it = upper_bound(arr.begin(), arr.end(), 14);
  cout << *it << endl;

  it = lower_bound(arr.begin(), arr.end(), 9);
  cout << *it << endl;
  it = lower_bound(arr.begin(), arr.end(), 4);
  cout << *it << endl;
  it = lower_bound(arr.begin(), arr.end(), 10);
  cout << *it << endl;

    return 0;
}
