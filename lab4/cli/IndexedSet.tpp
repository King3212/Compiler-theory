#ifndef INDEXEDSET_TPP
#define INDEXEDSET_TPP

#include "IndexedSet.h"

namespace MyNamespace {

template<typename T>
size_t IndexedSet<T>::insert(const T& element) {
    auto it = elementIndexMap.find(element);
    if (it != elementIndexMap.end()) {
        return it->second;
    } else {
        size_t index = elements.size();
        elements.push_back(element);
        elementIndexMap[element] = index;
        return index;
    }
}

template<typename T>
const T& IndexedSet<T>::getElement(size_t index) const {
    if (index >= elements.size()) {
        throw std::out_of_range("Index out of range");
    }
    return elements[index];
}

template<typename T>
size_t IndexedSet<T>::getSize() const {
    return elements.size();
}

} // namespace MyNamespace

#endif // INDEXEDSET_TPP
