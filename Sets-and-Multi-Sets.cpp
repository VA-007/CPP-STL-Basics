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

  // ===============================>> SETS and MULTISETS <<=================================
  // Set stores the elements in sorted order and only unique elements are maintained. Internally implemented using RB-Trees

  // set<datatype> set_name;

  set<string> s;     // Note there is no subscript operator in sets hence we search an element using the .find() method
  s.insert("Hello"); // O(logn)
  s.insert("World");
  s.insert("I'm");
  s.insert("Here");

  // TC of  find = insert = erase = O(logn)

  for (auto &it : s)
    cout << it << " ";

  // ---------------------> Unordered sets <-----------------------
  // unordered_set<int> set_name;   -->> TC of  find = delete = erase = O(1)

  // ---------------------> Multi-sets <-----------------------
  // multiset<string> st; can store the elements multiple times.
  st.erase(it)        // will only erase the value from the set where that iterator is currently pointing to.
  st.erase("abc") // will only erase all the instances of "abc" from the set.

      return 0;
}
