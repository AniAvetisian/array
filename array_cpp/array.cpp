
#include "array.hpp"

#include <iostream>
#include <cassert>
template <typename T>
typename array<T>::size_type array<T>::size() const
{
	return m_size;
}
template<typename T>
array<T>::array()
{
    std::cout << "Default constructor" << std::endl;
	m_size = 0;
	m_start = nullptr;
}
template <typename T>
array<T>::array(const array& b)
{
    std::cout << "Copy Constructor" << std::endl;
    m_size = b.m_size;
    if (m_size == 0) {
        m_start = nullptr;
    } else {
        m_start = new element_type[m_size];
for (size_type i = 0; i < m_size; ++i) {
	m_start[i] = b.m_start[i];
}
}
}
template <typename T>
const array<T>& array<T>::operator=(const array<T>& c)
{
assert(c.m_size >= 0);
    if (this == &c) {
        return *this;
    }
    std::cout << "Assignment Operator" << std::endl;
    if (m_start != nullptr) {
        delete [] m_start;
        m_start = nullptr;
    }
    assert(m_start == nullptr);
    m_size = c.m_size;
    if (m_size > 0) {
        m_start = new element_type[m_size];
        for (size_type i = 0; i < m_size; ++i) {
            m_start[i] = c.m_start[i];
        }
    }
    return *this;
}
template <typename T>
array<T>::array(size_type n, const element_type& default_value)
{
    std::cout << "Constructor" << std::endl;
	m_size = 0;
	m_size = n;
	m_start = new element_type[n];
	for (size_type i = 0; i < m_size; ++i) {
		m_start[i] = default_value;
	}
}
template <typename T>
array<T>::~array()
{
    std::cout << "Destructor" << std::endl;
    if (m_start != nullptr) {
        delete [] m_start;
    }
}
template <typename T>
void array<T>::insert(size_type index, const element_type& value)
{
	assert(index >= 0);
	assert(index <= m_size);
	m_size = m_size + 1;
	element_type* tmp = new element_type[m_size];
	for (size_type i = 0; i < index; ++i) {
		tmp[i] = m_start[i];
	}
	tmp[index] = value;
for (size_type i = index + 1; i < m_size; ++i) {
tmp[i] = m_start[i - 1];
}
if (m_start != nullptr) {
delete [] m_start;
}
m_start = tmp;
}
template <typename T>
void array<T>::remove(array::size_type index)
{
// assert(index >= 0)
    assert(index < m_size);
    assert(m_start != nullptr);
    element_type* tmp = new element_type[m_size];
    for (size_type i = 0; i < index; ++i) {
        tmp[i] = m_start[i];
    }
    for (size_type i = index; i < m_size; ++i) {
        tmp[i] = m_start[i + 1];
    }
    m_size = m_size - 1;
    delete [] m_start;
    m_start = tmp;
}

template <typename T>
bool array<T>::empty() const
{
    assert(m_size >= 0);
	return m_size == 0;
}
template <typename T>
const typename array<T>::element_type& array<T>::operator[](array<T>::size_type index) const
{
	assert(index >= 0);
	assert(index < m_size);
    assert(m_start != nullptr);
	return m_start[index];
}
template <typename T>
typename array<T>::element_type& array<T>::operator[](size_type index)
{
	assert(index >= 0);
	assert(index < m_size);
    assert(m_start != nullptr);
	return m_start[index];
}
template <typename T>
bool array<T>::operator==(const array<T>& a) const
{
    if (this == &a) {
        return true;
    }
    if (m_size != a.m_size) {
        return false;
    }
    for (size_type i = 0; i < m_size; ++i) {
        if (m_start[i] != a.m_start[i]) {
            return false;
        }
    }
    return true;
}
template <typename T>
bool array<T>::operator!=(const array<T>& a) const
{
    return ! operator==(a);
}

//template <typename T>
std::ostream& operator<<(std::ostream& out, const array<int>& a)
{
    for (array<int>::size_type i = 0; i < a.size(); ++i)  {
        out << "a[" << i << "] = " << a.m_start[i] << "\n";
    }
    return out;
}

template class array<int>;
