//Bresenham's Line Drawing Algo


#include<bits/stdc++.h>
#include<graphics.h>
#include<conio.h>
using namespace std;
main()
{
    int gd=DETECT, gm;
    initgraph(&gd, &gm, "C:\\TC\\BGI");
    float c, c2, k=0, x1, y1, x2, y2, dx, dy, p;
    cin>>x1>>y1>>x2>>y2;
    dx=x2-x1;
    dy=y2-y1;
    c=2*dy;
    c2=2*dy-2*dx;
    p=(2*dy)-dx;
    putpixel(x1, y1, WHITE);
    while(x1<x2)
    {
        if(p<0)
        {
            putpixel(x1+1, y1, WHITE);
            x1=x1+1;
            p=p+c;
        }
        else
        {
            putpixel(x1+1, y1+1, WHITE);
            x1=x1+1;
            y1=y1+1;
            p=p+c-c2;
        }
    }
    getch();
    closegraph();
    return 0;
}




