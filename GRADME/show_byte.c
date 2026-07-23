#include <unistd.h>

void show_bits(unsigned char byte)
{   
    int i = 7;
    int b;
    while(i >= 0)
    {
        b = (byte >> i) & 1;
        if( b == 1)
        {
            write(1,"1",1);
        }
        else if (b == 0)
        {
            write(1,"0",1);
        }

        i--;
    }
    
}
