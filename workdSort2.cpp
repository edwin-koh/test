#include <iostream>
#include <string>
#include <vector>
#include <algorithm>

using namespace std;

int main()
{
    int n;
    std::vector<std::string> words;
    std::cin >> n;

    for (int i=0; i<n; i++) {
        string word;
        std::cin >> word;
        words.push_back(word);
    }

    std::sort(std::begin(words), std::end(words),
              [](auto const& l, auto const& r){
                  return (l.length() != r.length()) ?
                      l.length() < r.length() : l<r;
              });

    for (std::string word : words)
        cout << word << endl;

    return 0;
}
