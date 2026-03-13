#ifndef __CIRCBUFFER_H
#define __CIRCBUFFER_H

class CircularBuffer {
private:
    static const int SIZE = 64;
    char buffer[SIZE];

    int head;
    int tail;
    int count;

public:
    CircularBuffer(); 

    bool write( char value);

    bool read( char &value);
};

#endif