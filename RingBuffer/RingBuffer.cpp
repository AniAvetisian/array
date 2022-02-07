#include "RingBuffer.hpp"
#include <cassert>

RingBuffer::RingBuffer() {
	int size = 0;
	int *buffer = nullptr;
	int offset = 0;
}

RingBuffer::RingBuffer(int m_size) {
	size=m_size;
	buffer=new int[size];
}
RingBuffer::~RingBuffer() {
	delete [] buffer;
}

void RingBuffer::push(int val) {
	if (head_i==tail_i) {
		buffer[tail_i]=val;
	} else {

		buffer[tail_i]=val;
	}
	tail_i++;
	if (tail_i > size){
		tail_i = 0;
		RingBuffer::push(val);
	}
	
	   
}


int RingBuffer::get(int offset){
	//assert(offset > size);
	//assert(head_i != tail_i);

	if (head_i + offset > size){
		return buffer[head_i + offset - size];
	}

	return buffer[head_i + offset];
}
