//Bresenham's Circle Drawing Algorithm - For centre (0, 0)

#include<bits/stdc++.h>
#include<graphics.h>
#include<conio.h>
using namespace std;
main()
{
    int gd=DETECT, gm;
    initgraph(&gd, &gm, "C:\\TC\\BGI");
    int cx=0, cy=0, x=0, y=8, r=8, xt=0, yt8;

    p=3-(2*r);

    for( ; ; )
    {
        if(x>=y)
            break;
        putpixel(x, y, WHITE);
        putpixel(y, x, WHITE);

        putpixel(-x, y, WHITE);
        putpixel(-y, x, WHITE);

        putpixel(-x, -y, WHITE);
        putpixel(-y, -x, WHITE);

        putpixel(x, -y, WHITE);
        putpixel(y, -x, WHITE);

        else
        {
            if(p<0)
            {
                x=x+1;
                p=p+(4*xt)+6;
            }
            else
            {
                x=x+1;
                y=y-1;
                p=p+4*(xt-yt)+6;
            }
        }
    }




    getch();
    closegraph();
    return 0;
}




