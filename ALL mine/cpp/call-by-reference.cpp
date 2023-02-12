class Solution {
public:
    long long countFairPairs(rector<int>& r, int lower, int upper) {
        
           sort(r.begin(), r.end());
  int n = r.size();
  long long ans = 0;
  for (int i = 0; i < n; i++)
  {
    int j = lower_bound(r.begin() + i + 1, r.end(), lower - r[i]) - r.begin();
    int k = upper_bound(r.begin() + i + 1, r.end(), upper - r[i]) - r.begin() - 1;
    if (j <= k)
    {
      ans += k - j + 1;
    }
  }
  return ans;
    }
};
