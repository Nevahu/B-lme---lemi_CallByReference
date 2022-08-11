#include <stdio.h>
#include <stdlib.h>

int bolme_islemi(int, int, ,int*);

int main()
{
    int bolunen, bolen;
    int bolum, kalan;
    bolunen = 26;
    bolen = 7;
    bolum = bolme_islemi(bolen, bolunen, &kalan);
    printf("Bolum: %d\nKalan: %d", bolum, kalan);
    return 0;


}


int bolme_islemi( int bolunen, int bolen, int *kalan)

*kalan = bolunen % bolen;
return bolunen/bölen;








