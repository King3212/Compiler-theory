#include <vector>
#include <unordered_map>
#include <stdexcept>
#include <iterator>

template <typename T>
class IndexedSet
{
public:
    // Insert element and return its index
    size_t insert(const T &element)
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

    // Get element by index
    const T &getElement(size_t index) const
    {
        if (index >= elements.size())
        {
            throw std::out_of_range("Index out of range");
        }
        return elements[index];
    }

    // Get the number of elements
    size_t getSize() const
    {
        return elements.size();
    }

    // Remove element by value
    void remove(const T &element)
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

    // Clear all elements
    void clear()
    {
        elements.clear();
        elementIndexMap.clear();
    }

    // Find index of an element
    size_t find(const T &element) const
    {
        auto it = elementIndexMap.find(element);
        if (it != elementIndexMap.end())
        {
            return it->second;
        }
        throw std::invalid_argument("Element not found");
    }

    // Push element to back
    void push_back(const T &element)
    {
        insert(element);
    }

    // Get size
    size_t size(){
        return elements.size()
    }

    // Check if an element exists
    bool contains(const T &element) const
    {
        return elementIndexMap.find(element) != elementIndexMap.end();
    }

    // Iterator support
    using iterator = typename std::vector<T>::iterator;
    using const_iterator = typename std::vector<T>::const_iterator;

    iterator begin()
    {
        return elements.begin();
    }

    const_iterator begin() const
    {
        return elements.begin();
    }

    iterator end()
    {
        return elements.end();
    }

    const_iterator end() const
    {
        return elements.end();
    }

private:
    std::vector<T> elements;
    std::unordered_map<T, size_t> elementIndexMap;
};
