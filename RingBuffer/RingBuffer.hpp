#ifndef RingBuffer_hpp
#define RingBuffer_hpp

class RingBuffer {
private:
    int size;
    int *buffer;
    int head_i;
    int tail_i;
public:
	
    RingBuffer();
    RingBuffer(int size);
	~RingBuffer();

public:	
    void push(int val);
    int get(int off_size);
    //void clear(int count);
    
};

#endif
