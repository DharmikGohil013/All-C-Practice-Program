#include <iostream>
#include <graphics.h>
#include <ctime> // For time()

void drawLoadingCircle(int centerX, int centerY, int radius, int angle) {
    int x = centerX + radius * cos(angle * 3.14 / 180);
    int y = centerY + radius * sin(angle * 3.14 / 180);
    circle(centerX, centerY, radius);
    line(centerX, centerY, x, y);
}

int main() {
    int gd = DETECT, gm;
    initgraph(&gd, &gm, "");

    int centerX = getmaxx() / 2;
    int centerY = getmaxy() / 2;
    int radius = 50;
    int angle = 0;

    clock_t startTime = clock();
    while ((clock() - startTime) / CLOCKS_PER_SEC < 5) {
        cleardevice();
        drawLoadingCircle(centerX, centerY, radius, angle);
        angle += 5; // Adjust the speed of rotation
        delay(50); // Adjust the delay to control the speed of rotation
    }

    closegraph();
    return 0;
}

