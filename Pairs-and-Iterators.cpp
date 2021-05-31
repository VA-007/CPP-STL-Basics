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

  // =================================>> PAIRS <<========================================
  // pair<datatype, datatype>

  pair<int, char> PAIR1;
  pair<int, pair<int, int>> PAIR1;

  PAIR1.first = 100;
  PAIR1.second = {10, 20};

  cout << PAIR1.first << " " << PAIR1.second.first << " " << PAIR1.second.second << endl;

  // ==================================>> ITERATORS <<=======================================
  // datatype::iterator it;

  // vector<int>::iterator it;

  // vector<int> a{1, 2, 3, 4, 5};

  // it = a.begin();
  // cout << *it << " ";
  // it = a.end() - 1;
  // cout << *it << endl;

  // for (auto it1 = a.begin(); it1 != a.end(); it1++)
  //   cout << *it1 << " ";

  /* -->> NOTE:  When we do (it++) then the iterator moves to the next iterator in the memory, but when we do (it = it + 1), then the iterator moves to the next element in the memory. Both of them work good in the case of vectors where the elements are stored continously in the memory. However in case of maps, sets, unordered_maps , (it = it+1) dosent work as the elements in case of maps are not stored continiously and hence randomly in the memory. So doing (it = it+1) will give error. Hence we always do it++ in the case of maps, sets and unordered_maps.
  */

  return 0;
}
