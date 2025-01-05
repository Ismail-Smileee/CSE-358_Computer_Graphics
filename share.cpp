


//Shearing (X-Axis)


#include<bits/stdc++.h>
#include<graphics.h>
#include<conio.h>
using namespace std;
main()
{
    int gd=DETECT, gm;
    initgraph(&gd, &gm, "C:\\TC\\BGI");

     int x1, y1, x2, y2, x3, y3, sx, sy;

    cout<<"Original Triangle: "<<endl;
    cout<<"1st point:  "<<endl;
    cin>>x1>>y1;
     cout<<"2nd point:  "<<endl;
    cin>>x2>>y2;
     cout<<"3rd point:  "<<endl;
    cin>>x3>>y3;
    cout<<"Shearing Cons:  "<<endl;
    cin>>sx>>sy;


    line(x1,y1,x2,y2);
    line(x2,y2,x3,y3);
    line(x1,y1,x3,y3);

    x1=x1+sx*y1;
    x2=x2+sx*y2;
    x3=x3+sx*y3;

    line(x1,y1,x2,y2);
    line(x2,y2,x3,y3);
    line(x1,y1,x3,y3);


    getch();
    closegraph();
    return 0;
}


