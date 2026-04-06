#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main()
{
  int t;
  cin >> t;
  while (t--)
  {
    long long n;
    cin >> n;
    vector<long long> arr(n);
    for (long long i = 0; i < n; i++)
    {
      cin >> arr[i];
    }
    sort(arr.begin(), arr.end());
    vector<long long> b;
    vector<long long> c;
    long long index = 0;
    while (index < n && arr[index] == arr[0])
    {
      b.push_back(arr[index]);
      index++;
    }
    while(index < n)
    {
      c.push_back(arr[index]);
      index++;
    }
    if (c.size() == 0)
    {
      cout << -1 << "\n";
    }
    else
    {
      cout << b.size() << " " << c.size() << "\n";
      for (auto i : b)
      {
        cout << i << " ";
      }
      cout << "\n";
      for (auto i : c)
      {
        cout << i << " ";
      }
      cout<<"\n";
    }
  }
  return 0;
}