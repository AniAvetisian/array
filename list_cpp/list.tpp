
//#include "algorithm.hpp"

#include <cassert>
#include <stdexcept>

template <typename J>
class node
{
public:
    J m_value;
    node<J>* m_next;
    node<J>* m_prev;
public:
    node(const J& v, node<J>* n, node<J>* p)
        : m_value(v)
        , m_next(n)
        , m_prev(p)
    {
    }

    ~node()
    {
    }
};

template <typename T>
std::ostream& operator<<(std::ostream& out, const list<T>& l)
{
    node<T>* current = l.m_head;
    while (current != nullptr) {
        out << current->m_value << " ";
        current = current->m_next;
    }
    return out;
}

/*template <typename T>
void list<T>::swap(list<T>& l)
{
    using node_p = node<T>*;
    itc::algorithm::swap<node_p>(m_head, l.m_head);
    itc::algorithm::swap<node_p>(m_tail, l.m_tail);
}*/

template <typename T>
template <typename F>
void list<T>::for_each(F& f)
{
    node<T>* current = m_head;
    while (current != nullptr) {
        f(current->m_value);
        current = current->m_next;
    }
}

template <typename T>
bool list<T>::exist(const value_type& v) const
{
    node<T>* current = m_head;
    while (current != nullptr) {
        if (current->m_value == v) {
            return true;
        }
        current = current->m_next;
    }
    return false;
}

template <typename T>
template <typename F>
bool list<T>::exist_if(F f) const
{
    node<T>* current = m_head;
    while (current != nullptr) {
        if (f(current->m_value)) {
            return true;
        }
        current = current->m_next;
    }
    return false;
}

template <typename T>
typename list<T>::size_type list<T>::size() const noexcept
{
    node<T>* current = m_head;
    size_type count = 0;
    while (current != nullptr) {
        current = current->m_next;
        ++count;
    }
    return count;
}

template <typename T>
bool list<T>::empty() const noexcept
{
    assert(m_head != nullptr || m_tail == nullptr);
    return (m_head == nullptr);
}

template <typename T>
void list<T>::push_front(const value_type& value) noexcept// O(1)
{
    assert(m_head != nullptr || m_tail == nullptr);
    assert(size() != 1 || m_head == m_tail);
    node<T>* new_node = new node<T>(value, m_head, nullptr);
    if (nullptr == m_head) {
        assert(nullptr == m_tail);
        m_tail = new_node;
    } else {
        assert(m_head->m_prev == nullptr);
        m_head->m_prev = new_node;
    }
    m_head = new_node;
    assert(nullptr != m_tail);
    assert(nullptr != m_head);
}

template <typename T>
void list<T>::push_back(const value_type& value) noexcept// O(n)
{
    assert(m_head != nullptr || m_tail == nullptr);
    assert(size() != 1 || m_head == m_tail);
    node<T>* new_node = new node<T>(value, nullptr, m_tail);
    if (m_tail == nullptr) {
        assert(nullptr == m_head);
        m_head = new_node;
    } else {
        assert(m_tail->m_next == nullptr);
        m_tail->m_next = new_node;
    }
    m_tail = new_node;
    assert(nullptr != m_tail);
    assert(nullptr != m_head);
}

template <typename T>
void list<T>::insert(const size_type& index, const value_type& value) noexcept
{
    assert(index >= 0);
    assert(index <= size());
    if (index == 0) {
        push_front(value);
    } else if (index == size()) {
        push_back(value);
    } else {
        node<T>* new_node = new node<T>(value, nullptr, nullptr);
        assert(index >= 1);
        node<T>* current = access_helper(index);
        assert(current != nullptr);
        new_node->m_prev = current->m_prev;
        assert(new_node->m_prev != nullptr);
        new_node->m_prev->m_next = new_node;
        new_node->m_next = current;
        current->m_prev = new_node;
    }
}

template <typename T>
void list<T>::pop_front() noexcept
{
    assert(m_head != nullptr);
    assert(m_tail != nullptr);
    node<T>* n = m_head;
    m_head = m_head->m_next;
    if (m_head != nullptr) {
        assert(n == m_head->m_prev);
        m_head->m_prev = nullptr;
    } else {
        assert(n == m_tail);
        m_tail = nullptr;
    }
    delete n;
}

template <typename T>
void list<T>::pop_back() noexcept
{
    assert(m_tail != nullptr);
    node<T>* n = m_tail;
    m_tail = m_tail->m_prev;
    if (m_tail != nullptr) {
        assert(m_tail->m_next == n);
        m_tail->m_next = nullptr;
    } else {
        assert(m_head == n);
        m_head = nullptr;
    }
    delete n;
}

template <typename T>
node<T>* list<T>::access_helper(const size_type& index) const noexcept
{
    assert(index >= 0);
    assert(index < size());
	node<T>* current = m_head;
    for (size_type i = 0; i < index; ++i) {
        assert(current != nullptr);
        current = current->m_next;
	}
    assert(current != nullptr);
	return current;
}

template <typename T>
const typename list<T>::value_type&
list<T>::at(const size_type& index) const noexcept(false)
{
    if (index >= size()) {
        throw std::out_of_range("hello my name is");
    }
    node<T>* n = access_helper(index);
    assert(n != nullptr);
	return n->m_value;
}

template <typename T>
typename list<T>::value_type&
list<T>::at(const size_type& index) noexcept(false)
{
    if (index >= size()) {
        throw std::out_of_range("hello my name is");
    }
    node<T>* n = access_helper(index);
    assert(n != nullptr);
	return n->m_value;
}

template <typename T>
list<T>::list()
    : m_head(nullptr)
    , m_tail(nullptr)
{
}

template <typename T>
list<T>::list(size_type n, const value_type& default_value)
    : m_head(nullptr)
    , m_tail(nullptr)
{
    node<T>* current = nullptr;
    for (size_type i = 0; i < n; ++i) {
        node<T>* new_node = new node<T>(default_value, nullptr, nullptr);
        if (current != nullptr) {
            current->m_next = new_node;
            new_node->m_prev = current;
        } else {
            assert(m_head == nullptr);
            m_head = new_node;
        }
        current = new_node;
    }
    m_tail = current;
    assert(m_head == nullptr || m_head->m_prev == nullptr);
    assert(m_tail == nullptr || m_tail->m_next == nullptr);
}

template <typename T>
void list<T>::clear()
{
	while (! empty()) {
		pop_front();
	}
    assert(m_head == nullptr);
}

template <typename T>
list<T>::list(const list<T>& b)
    : m_head(nullptr)
    , m_tail(nullptr)
{
 	node<T>* bcurrent = b.m_head;
    node<T>* acurrent = nullptr;
	while (bcurrent != nullptr) {
	   	node<T>* new_node = new node<T>(bcurrent->m_value, nullptr, nullptr);
        if (m_head == nullptr) {
            m_head = new_node;
            assert(acurrent == nullptr);
        } else {
            assert(acurrent != nullptr);
            acurrent->m_next = new_node;
            new_node->m_prev = acurrent;
        }
        acurrent = new_node;
		bcurrent = bcurrent->m_next;
	}
    m_tail = acurrent;
}

template <typename T>
const list<T>& list<T>::operator=(const list<T>& c)
{
    // TODO
    return *this;
}
template <typename T>

void list<T>::swap_data(node<T> *m_next, node<T> *m_prev)
	{
		int value = m_next->m_value;
		m_next->m_value = m_prev->m_value;
		m_prev->m_value = value;
	}



template <typename T>
void list<T>::bubble_sort()
{
if (m_head == nullptr){
	return;
}
bool task = true;
// Get first node
node<T> *start = this->m_head;
while (task == true){
task = false;
while (start != nullptr && start->m_next != nullptr){
		if (start->m_value > start->m_next->m_value) {
			this->swap_data(start, start->m_next);
			// Active the next iteration
			task = true;
		}
		// Visit to next node
		start = start->m_next;
}
// Get first node
start = this->m_head;
}
}

template <typename T>
void list<T>::insertion_sort()
{
	node<T> *front = m_head;
	node<T> *back = nullptr;
	while (front != nullptr)
	{
		back = front->m_next;
		while (back != nullptr &&
              back->m_prev != nullptr &&
              back->m_value < back->m_prev->m_value)
			{
				this->swap_data(back, back->m_prev);
				back = back->m_prev;
			}
		front = front->m_next;
	}
}

template <typename T>
list<T>::~list()
{
    clear();
}

