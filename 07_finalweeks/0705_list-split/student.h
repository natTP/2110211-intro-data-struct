#ifndef __STUDENT_H_
#define __STUDENT_H_

template <typename T>
CP::list<T> CP::list<T>::split(iterator it, size_t pos) {
    CP::list<T> result;
    if (it == end()) return result;

    node* newFirst = it.ptr;
    node* last = this->mHeader->prev;
    node* newLast = newFirst->prev;

    newLast->next = this->mHeader;
    this->mHeader->prev = newLast;

    result.mHeader->next = newFirst;
    result.mHeader->prev = last;
    newFirst->prev = result.mHeader;
    last->next = result.mHeader;

    result.mSize = size() - pos;
    this->mSize = pos;

    return result;
}

#endif
