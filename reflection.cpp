// triangle reflection
#include <bits/stdc++.h>
#include <graphics.h>
#include <math.h>

int main()
{
    int gd = DETECT, gm;
    initgraph(&gd, &gm, "C:\\TC\\BGI");

    int x1 = 200, y1 = 300;
    int x2 = 500, y2 = 300;
    int x3 = 350, y3 = 400;


    line(x1, y1, x2, y2);
    line(x2, y2, x3, y3);
    line(x3, y3, x1, y1);


    int maxY = getmaxy();
    y1 = maxY - y1;
    y2 = maxY - y2;
    y3 = maxY - y3;

    setcolor(RED);
    line(x1, y1, x2, y2);
    line(x2, y2, x3, y3);
    line(x3, y3, x1, y1);

    getch();
    closegraph();
    return 0;
}
