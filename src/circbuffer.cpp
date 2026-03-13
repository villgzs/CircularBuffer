#include "circbuffer.hpp"

CircularBuffer::CircularBuffer() : head(0), tail(0), count(0) {}

bool CircularBuffer::write( char value) 
{
        if (count == SIZE)
            return false;

        buffer[head] = value;
        head = (head + 1) % SIZE;
        count++;

        return true;
}

bool CircularBuffer::read( char &value) 
{
        if (count == 0)
            return false;

        value = buffer[tail];
        tail = (tail + 1) % SIZE;
        count--;

        return true;
}
