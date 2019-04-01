// https://helloacm.com/how-to-find-out-whether-a-machine-is-big-endian-or-little-endian-in-cc/
/*
First, we declare a 16-bit integer (short int),
which has the value 0x0001, 
then we gets its pointer and deference it. 
If the MSB is stored at lower address 
(e.g. the value that pointer points to), 
then it is little endian.
*/
#include <stdio.h>
 
#define BIG_ENDIAN 0
#define LITTLE_ENDIAN 1
 
int TestByteOrder() {
        short int word = 0x0001;
        char *b = (char *)&word;
        return (b[0] ? LITTLE_ENDIAN : BIG_ENDIAN);
}
 
int main() {
        int r = TestByteOrder();
        printf("%s\n", r == LITTLE_ENDIAN ? "Little Endian" : "Big Endian");
        return r;
}
