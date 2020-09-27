#include <iostream>
#include <windows.h>
#include <vector>
#include <algorithm>

using namespace std;

class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
      int i, border, temp, mid = 0;
      vector<int> two;
      two.push_back(-1);
      sort(nums.begin(),nums.end());
      for ( i = 0; i < nums.size(); i++ ) {
        if ( nums[i] >= target ) {
          border = i;
          break;
        }
      }
      if ( border == 0 ) {
        return two;
      }
      for ( i = 0; i <= border; i++) {
        if ( nums[i] >= (target%2 == 0? target/2 : target/2 + 1) ) {
          mid = i;
        }
      }
      if ( mid == 0 ) {
        return two;
      }
      i = mid;
      while ( i <= border ) {
        temp = target - nums[i];
        for ( mid; mid >= 0; mid--) {
          if ( mid < temp ) {
            break;
          }
          if ( mid = temp ) {
            two.clear();
            two.push_back(mid);
            two.push_back(i);
            return two;
          }
        }
        i++;
      }
      return two;
    }
};

int main () {
  vector<int> obj;
  int i, target;
  while( cin>>i ) {
    obj.push_back(i);
    char ch = getchar();
    if( ch == '\n' ) {
      break;
    };
  }
  cin >> target;
  Solution test;
  obj = test.twoSum(obj, target);
  if ( obj[0] == -1 ) {
    cout << "不存在这样的数";
  } else {
    cout << obj[0] << "\n" << obj[1];
  }
  Sleep(1000);
  return 0;
}
