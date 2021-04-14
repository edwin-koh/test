#include <iostream>
#include <string>
#include <algorithm>
#include <set>

using namespace std;

struct custom_compare {
    bool operator() (string const& l, string const& r) const  {
                  return (l.length() != r.length()) ?
                      l.length() < r.length() : l<r;
    }
};

int main()
{
    cin.tie(NULL); 
    ios_base::sync_with_stdio(false);
    int n;
    std::set<string, custom_compare> words;
    std::cin >> n;

    string word;
    for (int i=0; i<n; i++) {
        std::cin >> word;
        words.insert(std::move(word));
    }
        
    for (std::string word : words)
        cout << word << endl;

    return 0;
}
