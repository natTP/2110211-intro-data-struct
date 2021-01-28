#include "stack.h"
#include "queue.h"

namespace CP {
    template<typename T>
    void stack<T>::appendStack(stack<T> s) { //put s2 under s1 (front of vector)
        ensureCapacity(size() + s.mSize);
        for(int i = mSize - 1; i >= 0; i--) {
            mData[i + s.mSize] = mData[i];
        }
        for(int i = 0; i < s.mSize; i++) {
            mData[i] = s.mData[i];
        }
        mSize += s.mSize;
    }

    template<typename T>
    void stack<T>::appendQueue(queue<T> q) { //put a reversed s2 under s1 (front of vector)
        ensureCapacity(size() + q.mSize);
        for(int i = mSize - 1; i >= 0; i--) {
            mData[i + q.mSize] = mData[i];
        }
        for(int i = 0; i < q.size(); i++) {
            mData[i] = q.mData[q.mSize - 1 - i];
        }
        mSize += q.mSize;
    }

    template<typename T>
    void queue<T>::appendStack(stack<T> s) { //put a reversed s2 behind s1 (back of vector)
        ensureCapacity(size() + s.mSize);
        for(int i = 0; i < s.size(); i++) {
            mData[mSize + i] = s.mData[s.mSize - 1 - i];
        }
        mSize += s.mSize;
    }

    template<typename T>
    void queue<T>::appendQueue(queue<T> q) { //put s2 behind s1 (back of vector)
        ensureCapacity(size() + q.mSize);
        for(int i = 0; i < q.mSize; i++) {
            mData[mSize + i] = q.mData[i];
        }
        mSize += q.mSize;
    }
}
