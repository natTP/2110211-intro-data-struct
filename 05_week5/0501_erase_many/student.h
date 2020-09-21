#ifndef __STUDENT_H_
#define __STUDENT_H_


template <typename T>
void CP::vector<T>::erase_many(const std::vector<int> &pos) {
  int cap = mSize - pos.size();
  T *data = new T[cap];

  int erase_i = 0;
  for (size_t i = 0; i < mSize; i++) {
    if (pos[erase_i] == i && erase_i < pos.size()) {
      erase_i++;
    }
    else {
      data[i - erase_i] = mData[i];
    }
  }

  delete [] mData;
  mData = data;
  mCap = cap;
  mSize = cap;

}

#endif
