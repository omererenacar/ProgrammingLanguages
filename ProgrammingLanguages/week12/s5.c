#include <stdio.h>
#include <stdlib.h>
 

struct dugum {
    int veri;
    struct dugum* gosterici;
}; 

void sonaEkle(struct dugum** bas_ref)
{

    if (*bas_ref == NULL || (*bas_ref)->gosterici == NULL)
        return;
 
    
    struct dugum* ilk = *bas_ref;
    struct dugum* son = *bas_ref;
 

    while (son->gosterici != NULL) {
        son = son->gosterici;
    }
 

    *bas_ref = ilk->gosterici;
 
   
    ilk->gosterici = NULL;
 
    
    son->gosterici = ilk;
}
 

void p(struct dugum** bas_ref, int yeni_veri)
{
    struct dugum* yeni_dugum ;
    yeni_dugum->veri = yeni_veri;
    yeni_dugum->gosterici = (*bas_ref);
    (*bas_ref) = yeni_dugum;
}
 

void yazdir(struct dugum* dgm)
{
    while (dgm != NULL) {
        printf("%d ", dgm->veri);
        dgm = dgm->gosterici;
    }
}
 
int main()
{
    struct dugum* basla = NULL;
 
   
    p(&basla, 5);
    p(&basla, 4);
    p(&basla, 3);
    p(&basla, 2);
    p(&basla, 1);
 
    printf("\n Linked list before moving first to end\n");
    yazdir(basla);
 
    sonaEkle(&basla);
 
    printf("\n Linked list after moving first to end\n");
    yazdir(basla);
 
    return 0;
}
