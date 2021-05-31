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

  // ===================================>> MAPS <<==========================================

  // -----------------> Ordered Maps <-------------------
  /* Ordered maps use self balancing binary search trees like Red-Black trees in their internal implementation.
    They are used to store key-value pairs in a sorted order. So they behave like a hash table.  */

  map<int, string> m1;
  m1[4] = "Fourth";        // O(logn) :Note that insertion also depends on the type of key. Higher the value or size of key greater the TC.
  m1.insert({3, "third"}); // O(logn) :Insertion is logn as the insertion is in sorted order hence following binary search.
  m1[1] = "First";
  m1[5]; // Inserts Empty string in the place of string
  cout << "Size: " << m1.size() << endl;

  // map<int, string>::iterator it;

  for (auto it = m1.begin(); it != m1.end(); it++) // Note that maps(ordered) always store the data in sorted order
    cout << it->first << " " << it->second << endl;

  auto it = m1.find(7); // Returns the iterator to the found element otherwise returns the .end() iterator of the map.
  if (it != m1.end())
    cout << it->first << " " << it->second << endl;
  else
    cout << "Not Found!" << endl;

  m1.erase(3); // O(logn)

  for (auto pr : m1) // Copy of the actual values are made (Expensive Opeartion)
    cout << pr.first << " " << pr.second << endl;

  for (auto &pr : m1) // Actual values are taken  (Little better but accidental modificaion can take place)
    cout << pr.first << " " << pr.second << endl;

  for (const auto &pr : m1) // Actual values are taken  (Best for read only as prevents accidental modification)
    cout << pr.first << " " << pr.second << endl;

  // ---------------------> Un-Ordered Maps <-----------------------
  // Un-Ordered maps use Hash-Tables in their internal implementation.

  unordered_map<int, string> m2;

  m2[1] = "Hello"; // O(1) Avg-case, O(n) for worst case which is generally rare (same is for accessing and deletion)
  m2[4] = "There";
  m2[6] = "I'm";
  m2[2] = "here";
  m2.insert({3, "World!"});
  m2[7];

  for (auto &it : m2)
    cout << it.first << " " << it.second << endl;

  // -->> NOTE: If we dont want to store the elements in the sorted order then unordered_maps are best for storing the data as the average access time and insertion time is very less, hence it reduces the time complexiety greatly.

  return 0;
}
