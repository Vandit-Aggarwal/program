#include <graphics.h>

int main()
{
    int gd = DETECT, gm;

    initigraph(&gd, &gm "");

    circle(200, 320,250);

    getch();

    closegraph();
    return 0;
}

