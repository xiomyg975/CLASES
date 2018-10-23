#include <iostream>
#include "point.h"

using namespace std;
void swap(point &p,point &q){
        point temp =p;
        p=q;
        q=temp;
    }
void swap(point *p,point *q){
        point temp =*p;
        *p=*q;
        *q=temp;
    }
int main()
{   point p(4,3);
    point q(6,7);

    swap(&p,&q);

    point *ptr1=&p;
    point *ptr2=&q;


    //temp=*ptr1;

    ptr1->print();//==  (*ptr1).print();
    (*ptr2).print(); // == ptr1->print();
    point *easy=new point(4,4); //CONSTRUCTOR
    easy->print();
    easy->offset(10,10);
    easy->print();
    delete easy ;
    return 0;
    //point z=q;
    //p.print();
    //p.print();
    //z.print();

    return 0;
}
