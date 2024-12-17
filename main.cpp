#include <algorithm>
#include <bit>
#include <chrono>
#include <cmath>
#include <cstdint>
#include <deque>
#include <iomanip>
#include <iostream>
#include <limits>
#include <map>
#include <numeric>
#include <queue>
#include <ranges>
#include <set>
#include <sstream>
#include <stack>
#include <string>
#include <tuple>
#include <utility>
#include <vector>

using namespace std;

using ll = int64_t;
using vl = vector<ll>;

ll N;

int main() {
  ios::sync_with_stdio(false);
  std::cin.tie(nullptr);

  cin >> N;
  while (0 < (N--)) {
    string s;
    cin >> s;

    const auto& f = s.find('+');
    if (f == s.npos) {
      cout << "skipped";
    } else {
      const auto& a = s.substr(0, f);
      const auto& b = s.substr(f + 1);

      auto ass = istringstream{a};
      ll va;
      ass >> va;

      auto bss = istringstream{b};
      ll vb;
      bss >> vb;

      cout << va + vb;
    }
    cout << '\n';
  }

  return 0;
}