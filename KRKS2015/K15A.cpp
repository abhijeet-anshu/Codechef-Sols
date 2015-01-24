#include <stdio.h>
#include <set>
using namespace std;
int main() {
  set<int> myset, cheats;
  set<int>::iterator it;
  int t, a, n, count;
  scanf("%d", &t);
  while(t--) {
    myset.clear();
    cheats.clear();
    scanf("%d", &n);
    count = 0;
    while(n--) {
      scanf("%d", &a);
      it = myset.find(a);
      if(it!=myset.end()) {
        if(cheats.find(a)==cheats.end()) { cheats.insert(a); count++;}
      }
      else myset.insert(a);
    }
    printf("%d\n", count);
  }
  return 0;
}

//   // set some initial values:
//   for (int i=1; i<=5; i++) myset.insert(i*10);    // set: 10 20 30 40 50

//   it=myset.find(20);
//   myset.erase (it);
//   myset.erase (myset.find(40));

//   myset.clear();

//   cout << "myset contains:";
//   for (it=myset.begin(); it!=myset.end(); ++it)
//     cout << ' ' << *it;
//   cout << '\n';

//   return 0;
// }