#ifndef __STUDENT_H_
#define __STUDENT_H_


template <typename T,typename Comp >
bool CP::priority_queue<T,Comp>::operator==(const CP::priority_queue<T,Comp> &other) const {
  if(mSize != other.mSize) return false;
  
  priority_queue<T,Comp> a(*this);
  priority_queue<T,Comp> b(other);
  
  for(size_t i = 0; i < mSize; i++) {
    if(a.top() != b.top()) return false;
    a.pop();
    b.pop();
  }
  return true;
  
}

#endif
