#include <iostream>
#include <string>
#include <algorithm>
using namespace std;
int main()
{
  int t;
  cin >> t;
  while (t--)
  {
    int n;
    cin >> n;
    int m;
    cin >> m;
    string x;
    cin >> x;
    string s;
    cin >> s;
    if (x.find(s) != std::string::npos)
    {
      cout << 0 << '\n';
      
    }
    else
    {
      int i;
      for ( i = 0; i < 6; i++)
      {
        x.append(x);
        if (x.find(s) != std::string::npos)
        {
          cout << i + 1 << '\n';
          break;
        }
      }
      if(i==6){
        cout<<-1<<'\n';
      }
    }
  }
  return 0;
}