#ifndef __STUDENT_H_
#define __STUDENT_H_

#include <set>

template <typename T>
void CP::vector<T>::uniq() {
  std::set<T> s;
  size_t i = 0;
  for (size_t j = 0; j < mSize; j++) {
    if (s.find(mData[j]) == s.end()) {
      s.insert(mData[j]);
      mData[i++] = mData[j];
      //i <= j always so editing & iterating vector is fine
    }
  }
  mSize = i;
}

#endif
