#ifndef INDEXEDSET_H
#define INDEXEDSET_H

#include <vector>
#include <unordered_map>
#include <stdexcept>

namespace MyNamespace {

template<typename T>
class IndexedSet {
public:
    IndexedSet() = default;
    ~IndexedSet() = default;

    // Insert element and return its index
    size_t insert(const T& element);

    // Get element by index
    const T& getElement(size_t index) const;

    // Get the number of elements
    size_t getSize() const;

private:
    std::vector<T> elements;
    std::unordered_map<T, size_t> elementIndexMap;
};

} // namespace MyNamespace

#include "IndexedSet.tpp"

#endif // INDEXEDSET_H
