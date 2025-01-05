#include<bits/stdc++.h>
#include<graphics.h>
#include<conio.h>
using namespace std;
main()
{
    int gd=DETECT, gm;
    initgraph(&gd, &gm, "C:\\TC\\BGI");

    line(100, 100, 50, 150);
    line(50, 150, 150, 150);

    line(50, 150, 50, 250);

    line(150, 150, 150, 250);

    line(50, 250, 150, 250);




    getch();
    closegraph();
    return 0;
}
