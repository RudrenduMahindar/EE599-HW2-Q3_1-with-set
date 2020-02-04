#include "solution.h"
#include <vector>
#include <set>
using namespace std;

void Solution::removeduplicate(vector<int>& v) { 
  
  set<int> s;
  
  for(auto it=v.begin();it!=v.end();it++)
  {
    s.insert(*it);
  }
  v.clear();
  for(auto it=s.begin();it!=s.end();it++)
  {
    v.push_back(*it);
  } 
}

