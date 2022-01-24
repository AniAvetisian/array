
#include "list.hpp"

#include <cassert>
#include <iostream>

class list::node
{
public:
    value_type m_value;
    node* m_next;

public:
    node(value_type v, node* n)
        : m_value(v)
        , m_next(n)
    {
    }

    ~node()
    {
    }
};

std::ostream& operator<<(std::ostream& out, const list& l)
{
    list::node* current = l.m_head;
    while (current != nullptr) {
        out << current->m_value << " ";
        current = current->m_next;
    }
    return out;
}

list::size_type list::size() const
{
    node* current = m_head;
    size_type count = 0;
    while (current != nullptr) {
        current = current->m_next;
        ++count;
    }
    return count;
}

bool list::empty() const
{
    return (m_head == nullptr);
}

void list::push_front(const value_type& value)
{
    node* new_node = new node(value, m_head);
    m_head = new_node;
}

void list::push_back(const value_type& value)
{
    /* TODO
	if(m_head == nullptr){
	node * new_node = new node (value,nullptr);
	m_head = new_node;
	}

	node* current = m_head;
    while (1) { 
	if (current !=nullptr)
		
        current = current->m_next;
		node* new_node = new node (value,nullptr);
		
    }*/

}

void list::pop_front()
{
    // TODO
}

void list::pop_back()
{
    // TODO
}

list::list()
    : m_head(nullptr)
{	
}

list::list(size_type n, const value_type& default_value)
    : m_head(nullptr)
{
    node* current = nullptr;
    for (size_type i = 0; i < n; ++i) {
        node* new_node = new node(default_value, nullptr);
        if (current != nullptr) {
            current->m_next = new_node;
        } else {
            assert(m_head == nullptr);
            m_head = new_node;
        }
        current = new_node;
    }
}

list::list(const list& b)

{
	/*list::node* current=m_head;
	node* ban;
	while (current!=nullptr)
		{
		
        node* new_node = new node(current->m_value, m_head);
        node* ban=new_node;    
		current = current->m_next;
   		}
//	std::cout<<list::node::m_value << std::endl; // cout
	if(current ==nullptr){
       m_head = ban;
    	}
		else{
		 current = ban;	
		}*/
}

const list& list::operator=(const list& c)
{
    // TODO
	
    list::node* current = c.m_head;
    while (current != nullptr) {
        current = current->m_next;
    }
    return *this;

}

list::~list()
{
    // TODO
}
