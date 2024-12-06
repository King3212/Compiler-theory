/**
 * @file IndexedSet.h
 * @brief 定义了一个带索引的集合
 * 
 * @version 1.0
 * @date 2024-6-30
 * @auther 20222131044
 *  
 * @history
 * 版本 日期 作者 说明
 * ------|------|------|------
 * 1.0 | 2024-6-30 | 20222131044 | 初始版本
 * 
 * 
 */

#pragma execution_character_set("utf-8")
#include <vector>
#include <unordered_map>
#include <stdexcept>
#include <iterator>
#pragma once
template <typename T>
class IndexedSet
{
public:
    // 插入元素并返回其索引
    size_t insert(const T &element)
    {
        auto it = elementIndexMap.find(element);
        if (it != elementIndexMap.end())
        {
            return it->second;
        }
        size_t index = elements.size();
        elements.push_back(element);
        elementIndexMap.emplace(element, index);
        return index;
    }

    // 通过索引获取元素
    const T &getElement(size_t index) const
    {
        if (index >= elements.size())
        {
            return T();
        }
        return elements[index];
    }

    // 获取元素数量
    size_t getSize() const
    {
        return elements.size();
    }

    // 通过值移除元素
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

    // 清除所有元素
    void clear()
    {
        elements.clear();
        elementIndexMap.clear();
    }

    // 查找元素索引
    size_t find(const T &element) const
    {
        auto it = elementIndexMap.find(element);
        if (it != elementIndexMap.end())
        {
            return it->second;
        }
        return -1;
    }

    // 插入元素
    void push_back(const T &element)
    {
        insert(element);
    }

    // 获取元素数量
    size_t size() const
    {
        return elements.size();
    }

    // 检查元素是否存在
    bool contains(const T &element) const
    {
        return elementIndexMap.find(element) != elementIndexMap.end();
    }

    // 合并元素（如果存在返回索引，否则插入）
    size_t Union(const T &element)
    {
        if (contains(element))
        {
            return find(element);
        }
        else
        {
            return insert(element);
        }
    }

    // 迭代器支持
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

    bool empty(){
        return this->elements.empty();
    }

    // 重载 == 运算符
    bool operator==(const IndexedSet &other) const
    {
        return elements.size() == other.elements.size() &&
               std::equal(elements.begin(), elements.end(), other.elements.begin(), [](const T &a, const T &b)
                          { return a == b; });
    }

    bool operator<(const IndexedSet &other) const
    {
        return elements < other.elements;
    }

    // 重载 != 运算符
    bool operator!=(const IndexedSet &other) const
    {
        return !(*this == other);
    }

    IndexedSet() {
        elements = std::vector<T>();
        elementIndexMap = std::unordered_map<T, size_t>();
    }


    std::vector<T> elements; // 存储元素的向量
private : 
    
    std::unordered_map<T, size_t> elementIndexMap; // 元素到索引的映射
    
};


#pragma once