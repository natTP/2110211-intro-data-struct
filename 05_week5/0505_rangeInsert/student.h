#ifndef __STUDENT_H_
#define __STUDENT_H_


template <typename T>
void CP::vector<T>::insert(iterator position,iterator first,iterator last) {
  int insert_size = last - first;
  int pos = position - begin();
  ensureCapacity(mSize + insert_size);

  for (int i = mSize - 1; i >= pos; i--) {
    mData[i + insert_size] = mData[i];
  }
  for (auto it = first; it != last; it++) {
    mData[pos++] = *it;
  }
  mSize += insert_size;
}

#endif