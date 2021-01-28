#ifndef __STUDENT_H_
#define __STUDENT_H_

#include <algorithm>

template <typename T>
void CP::list<T>::shift_left() {
    if (mSize <= 1) return;
    node* last = mHeader->prev;
    node* first = mHeader->next;

    mHeader->next = mHeader->next->next;
    mHeader->prev = first;

    last->next = first;

    first->prev = last;
    first->next = mHeader;

    mHeader->next->prev = mHeader;
}

#endif
