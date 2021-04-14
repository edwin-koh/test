#include <iostream>
#include <set>
#include <string>
int main()
{
  std::ios::sync_with_stdio(false);
  std::cin.tie(NULL);

  int t;
  int n;

  std::cin >> t;
  for (int ncase=0; ncase<t; ncase++) {
  std::cin >> n;

  std::multiset<std::string> a1, a2;
  for (int i=0; i<n; i++) {
    std::string str;
    std::cin >> str;
    a1.insert(str);
  }
  for (int i=0; i<n; i++) {
    std::string str;
    std::cin >> str;
    a2.insert(str);
  }

  if (a1 == a2)
    std::cout << "NOT CHEATER";
  else
    std::cout << "CHEATER";

  std::cout << std::endl;
  }
  
  return 0;
}
