#include <unistd.h>

int main (void)
{
    char c ;
    char upper;

    c = 'z';
    while(c >= 'a')
    {
        if((c - 'z')%2 == 0)
        {
            write(1,&c,1);
        }
        else
        {
            upper = c - 32 ;
            write(1,&upper,1);
        }
      c--;  
    }
    write(1, "\n", 1);
    return (0);
}