
#ifndef ARRAY_HPP
#define ARRAY_HPP

#include <ostream>
template <typename T>
class array
{
public:
    typedef T  element_type;
    typedef unsigned int size_type;

public:
    size_type size() const;
    bool empty() const;
    const element_type& operator[](size_type index) const;
    element_type& operator[](size_type index);
    void insert(size_type index, const element_type& value);
    void remove(size_type index);
    bool operator==(const array<T>& a) const;
    bool operator!=(const array<T>& a) const;

	friend std::ostream& operator<<(std::ostream& out, const array<int>& a);

private:
	element_type* m_start;
	size_type m_size;

public:
    array();
    array(size_type n,const element_type& default_value);
    array(const array<T>& b);
    const array<T>& operator=(const array<T>& c);
    ~array();
};

#endif
