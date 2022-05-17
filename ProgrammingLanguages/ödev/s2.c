#include<stdio.h>
#include<stdlib.h>
 

struct dugum
{
    int veri;
    struct dugum *sonra;
};
 

void moveToFront(struct dugum **bas_ref)
{

    if (*bas_ref == NULL || (*bas_ref)->sonra == NULL)
        return;
 
    struct dugum *son1 = NULL;
    struct dugum *son = *bas_ref;
 

    while (son->sonra != NULL)
    {
        son1 = son;
        son = son->sonra;
    }
 
    
    son1->sonra = NULL;
 
  
    son->sonra = *bas_ref;
 
   
    *bas_ref = son;
}
 

void p(struct dugum ** bas_ref, int yeni_veri)
{
  
    struct dugum* yeni_dugum =
        (struct dugum*) malloc(sizeof(struct dugum));
 
   
    yeni_dugum->veri  = yeni_veri;
 
  
   yeni_dugum->sonra = (*bas_ref);
 
    
    (*bas_ref)    = yeni_dugum;
}
 
 

void yazdir(struct dugum *dgm)
{
    while(dgm != NULL)
    {
        printf("%d ", dgm->veri);
        dgm = dgm->sonra;
    }
}
 

int main()
{
    struct dugum *basla = NULL;
 

    p(&basla, 5);
    p(&basla, 4);
    p(&basla, 3);
    p(&basla, 2);
    p(&basla, 1);
 
    printf("\n Listenin ilk hali\n");
    yazdir(basla);
 
    moveToFront(&basla);
 
    printf("Listenin son hali \n");
    yazdir(basla);
 
    return 0;
}
