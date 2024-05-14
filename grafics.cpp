#include <graphics.h>

int main() {
    int gd = DETECT, gm;
    initgraph(&gd, &gm, "");

    // Draw a rectangle
    rectangle(100, 100, 300, 200);

    getch();
    closegraph();
    return 0;
}

