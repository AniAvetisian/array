#include "array.hpp"

#include <iostream>
#include <cassert>

void test_1()
{
    array<float> a(4, 3.3);
    assert(a.size() == 4);
    assert(! a.empty());
    assert(a[0] == 3.3);
    assert(a[1] == 3.3);
    assert(a[2] == 3.3);
    assert(a[3] == 3.3);
	a.insert(a.size(), 6.6);
	a.insert(a.size(), 7.7);
    assert(a.size() == 6);
    assert(a[0] == 3.3);
    assert(a[1] == 3.3);
    assert(a[2] == 3.3);
    assert(a[3] == 3.3);
    assert(a[4] == 6.6);
    assert(a[5] == 7.7);
	a.insert(0, 9.9);
    assert(a.size() == 7);
    assert(a[0] == 9.9);
    assert(a[1] == 3.3);
    assert(a[2] == 3.3);
    assert(a[3] == 3.3);
    assert(a[4] == 3.3);
    assert(a[5] == 6.6);
    assert(a[6] == 7.7);
	a.insert(5, 2.2);
    assert(a.size() == 8);
    assert(a[0] == 9.9);
    assert(a[1] == 3.3);
    assert(a[2] == 3.3);
    assert(a[3] == 3.3);
    assert(a[4] == 3.3);
    assert(a[5] == 2.2);
    assert(a[6] == 6.6);
    assert(a[7] == 7.7);
    std::cout << a << std::flush;
}

/*void test_2()
{
	array b;
    assert(b.size() == 0);
    assert(b.empty());
}

void test_3()
{
	array* c = new array(5, "j");
    assert(c->size() == 5);
    assert((*c).size() == 5);
    assert(! c->empty());
	delete c;
}

void test_4()
{
	array* d = new array[5];
    assert(d[0].size() == 0);
    assert(d[1].size() == 0);
    assert(d[2].size() == 0);
    assert(d[3].size() == 0);
    assert(d[4].size() == 0);
    for (int i = 0; i < 5; ++i) {
        assert(d[i].empty());
    }
	delete [] d;
}

void test_copy()
{
	array b(5, 0);
    assert(b.size() == 5);
    for (array::size_type i = 0; i < b.size(); ++i) {
        b[i] = 2 * i;
    }
    assert(b[0] == 0);
    assert(b[1] == 2);
    assert(b[2] == 4);
    assert(b[3] == 6);
    assert(b[4] == 8);
    array c(b);
    assert(c.size() == 5);
    assert(c[0] == 0);
    assert(c[1] == 2);
    assert(c[2] == 4);
    assert(c[3] == 6);
    assert(c[4] == 8);
}

void test_copy_on_empty()
{
	array b;
    assert(b.size() == 0);
    assert(b.empty());
    array c(b);
    assert(c.size() == 0);
    assert(c.empty());
}

void test_assignment_on_empty()
{
	array b;
    assert(b.empty());
    array c(4, 0);
    assert(c.size() == 4);
    b = c; // b.operator=(c);
    assert(b.size() == 4);
    assert(b[0] == 0);
    assert(b[1] == 0);
    assert(b[2] == 0);
    assert(b[3] == 0);
}

void test_assignment()
{
	array b(16, 1);
    assert(b.size() == 16);
    array c(4, 0);
    assert(c.size() == 4);
    b = c; // b.operator=(c);
    assert(b.size() == 4);
    assert(b[0] == 0);
    assert(b[1] == 0);
    assert(b[2] == 0);
    assert(b[3] == 0);
}

void test_multiple_assignemnts()
{
	array a(1, 1);
    assert(a.size() == 1);
	array b(2, 2);
    assert(b.size() == 2);
	array c(3, 3);
    assert(c.size() == 3);
    a = b = c;
    assert(b.size() == 3);
    assert(b[0] == 3);
    assert(b[1] == 3);
    assert(b[2] == 3);
    assert(a.size() == 3);
    assert(a[0] == 3);
    assert(a[1] == 3);
    assert(a[2] == 3);
    assert(c.size() == 3);
    assert(c[0] == 3);
    assert(c[1] == 3);
    assert(c[2] == 3);
}

void test_equlity()
{
	array a(2, 2);
    assert(a.size() == 2);
	array b(2, 2);
    assert(b.size() == 2);
	array c(3, 3);
    assert(c.size() == 3);
    assert(a == b);
    assert(b != c);
    array d;
    array f(1, 0);
    f.remove(0);
    assert(d == f);
}

void test_big_data()
{
    std::cout << "1M elements array" << std::endl;
    array a(1000000, 0);
    for (array::size_type i = 0; i < a.size(); ++i) {
        a[i] = i;
    }
    std::cout << "1M elements array with insert" << std::endl;
    array b;
    for (array::size_type i = 0; i < 1000000; ++i) {
        b.insert(i, i);
    }
}*/

int main()
{
    test_1();
    /*test_2();
    test_3();
    test_4();
    test_copy();
    test_copy_on_empty();
    test_assignment();
    test_assignment_on_empty();
    test_multiple_assignemnts();
    test_big_data();*/
	return 0;
}
