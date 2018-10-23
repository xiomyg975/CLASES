#ifndef POINT_H
#define POINT_H


class point
{
    public:
        point();
        point(point &o);
        point(int,int);
        void offset(int,int);
        void print();


    private:
        double x,y;
};

#endif // POINT_H
