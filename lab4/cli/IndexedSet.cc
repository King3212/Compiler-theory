#include "IndexedSet.hh"

template <typename T>
size_t IndexedSet<T>::insert(const T &element)
{
    auto it = elementIndexMap.find(element);
    if (it != elementIndexMap.end())
    {
        return it->second;
    }
    size_t index = elements.size();
    elements.push_back(element);
    elementIndexMap[element] = index;
    return index;
}

template <typename T>
const T &IndexedSet<T>::getElement(size_t index) const
{
    if (index >= elements.size())
    {
        throw std::out_of_range("Index out of range");
    }
    return elements[index];
}

template <typename T>
size_t IndexedSet<T>::getSize() const
{
    return elements.size();
}

template <typename T>
void IndexedSet<T>::remove(const T &element)
{
    auto it = elementIndexMap.find(element);
    if (it == elementIndexMap.end())
    {
        throw std::invalid_argument("Element not found");
    }
    size_t index = it->second;
    elementIndexMap.erase(it);
    if (index != elements.size() - 1)
    {
        elements[index] = std::move(elements.back());
        elementIndexMap[elements[index]] = index;
    }
    elements.pop_back();
}

template <typename T>
void IndexedSet<T>::clear()
{
    elements.clear();
    elementIndexMap.clear();
}

template <typename T>
size_t IndexedSet<T>::find(const T &element) const
{
    auto it = elementIndexMap.find(element);
    if (it != elementIndexMap.end())
    {
        return it->second;
    }
    throw std::invalid_argument("Element not found");
}

template <typename T>
typename IndexedSet<T>::iterator IndexedSet<T>::begin()
{
    return elements.begin();
}

template <typename T>
typename IndexedSet<T>::const_iterator IndexedSet<T>::begin() const
{
    return elements.begin();
}

template <typename T>
typename IndexedSet<T>::iterator IndexedSet<T>::end()
{
    return elements.end();
}

template <typename T>
typename IndexedSet<T>::const_iterator IndexedSet<T>::end() const
{
    return elements.end();
}
