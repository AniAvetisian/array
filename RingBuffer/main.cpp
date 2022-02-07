#include <iostream>
#include <cassert>
#include "RingBuffer.cpp"


using namespace std;

int main() {
    
    RingBuffer buf(3);
    for (int i = 0; i<6; i++){
    	buf.push(i);
	}
    assert(buf.get(0) == 3);
   	assert(buf.get(1) == 4);
	assert(buf.get(2) == 5);

    
    
    cout << "buffer works!" << endl;
    
    return 0;
}
