#ifndef __STUDENT_H_
#define __STUDENT_H_


template <typename T>
void CP::stack<T>::multi_pop(size_t K) {
  mSize -= std::min(K, mSize);
}

template <typename T>
std::stack<T> CP::stack<T>::remove_top(size_t K) {
  std::stack<T> s;
  K = std::min(K, mSize);
  for(size_t i = mSize - K; i < mSize; i++ ) {
    s.push(mData[i]);
  }
  mSize -= K;
  return s;
}

#endif
