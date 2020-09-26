#ifndef __STUDENT_H_
#define __STUDENT_H_


template <typename T>
std::vector<T> CP::queue<T>::to_vector(int k) const {
  std::vector<T> res;
  size_t i = mFront;
  for(int j = 0; j < k && j < mSize; j++) {
    res.push_back(mData[i]);
    i++;
  }
  return res;
}

template <typename T>
CP::queue<T>::queue(iterator from, iterator to) {
  int cap = to - from;
  mData = new T[cap];
  int i = 0;
  for (auto it = from; it != to; it++) {
    mData[i++] = *it;
  }
  mSize = cap;
  mCap = cap;
  mFront = 0;
}

#endif
