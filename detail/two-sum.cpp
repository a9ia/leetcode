#include <iostream>
#include <windows.h>
#include <vector>
#include <algorithm>

using namespace std;

class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
      int i, border = 0, temp, mid = 0;
      vector<int> two;
      two.push_back(-1);
      for ( i = 0; i < nums.size()-1; i++ ) {
        temp = target - nums[i];
        for( border = i+1; border < nums.size(); border++ ) {
          if ( border == i ) {
            continue;
          }
          if( nums[border] == temp ) {
            two.clear();
            two.push_back(i);
            two.push_back(border);
          }
        }
      }
      // sort(nums.begin(),nums.end());
      // for ( i = 0; i < nums.size(); i++ ) {
      //   if ( nums[i] >= target ) {
      //     border = i;
      //     break;
      //   }
      //   border++;
      // }
      // if ( border == 0 ) {
      //   return two;
      // }
      // for ( i = 0; i <= border; i++) {
      //   if ( nums[i] >= (target%2 == 0? target/2 : (target/2 + 1)) ) {
      //     mid = i-1;
      //   }
      // }
      // if ( mid == 0 ) {
      //   return two;
      // }
      // i = mid;
      // mid--;
      // while ( i <= border ) {
      //   temp = target - nums[i];
      //   for ( mid; mid >= 0; mid--) {
      //     // cout << "mid=" << mid << "\n------\n" << "i=" << i << "\n------\n";
      //     if ( nums[mid] < temp ) {
      //       break;
      //     }
      //     if ( nums[mid] == temp ) {
      //       two.clear();
      //       two.push_back(mid);
      //       two.push_back(i);
      //       return two;
      //     }
      //   }
      //   if( mid == 0 && nums[mid] > temp ) {
      //     break;
      //   } 
      //   i++;
      // }
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
  cin >> target;
  return 0;
}
