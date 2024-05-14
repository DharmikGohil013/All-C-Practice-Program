#include <iostream>
#include <graphics.h>

int main() {
    // Initialize graphics mode
    int gd = DETECT, gm;
    initgraph(&gd, &gm, "");

    // Set color to white
    setcolor(WHITE);

    // Draw letter D
    line(100, 100, 100, 300);
    line(100, 100, 200, 100);
    line(100, 300, 200, 300);
    line(200, 100, 200, 300);

    // Draw letter G
    arc(250, 200, 0, 180, 50);
    line(250, 200, 250, 250);
    line(250, 250, 300, 250);

    // Draw letter F
    line(350, 100, 350, 300);
    line(350, 100, 450, 100);
    line(350, 200, 400, 200);

    // Close the graphics
    getch();
    closegraph();
    return 0;
}

