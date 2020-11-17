#include <stdio.h>
#include "bmpDrawing.h"

int main() {
    create("open.bmp",200,200);
    //openImage("open.bmp");
    drawLine(10,10,190,20,5,RED);
    drawLine(10,10,190,20,5,RED);
    drawCircle(10,10,5,RED);
    writeFile();
    return 0;
}
