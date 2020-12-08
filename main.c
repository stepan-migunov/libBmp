#include <stdio.h>
#include "bmpDrawing.h"


void fractal(int x1, int y1, int x2, int y2, int level)
{
    if (level == 0)
        drawLine(x1,y1,x2,y2,4,RED);
    else
    {
        int m1=(2*x1+x2)/3,n1=(2*y1+y2)/3,
            m2,n2,
            m3=(2*x2+x1)/3,n3=(2*y2+y1)/3;
        m2 = m1 + ((m3-m1)*0.5 + (n3-n1)*(-0.866));
        n2 = n1 + ((m3-m1)*(0.866)+(n3-n1)*0.5);
        fractal(x1,y1,m1,n1,level-1);
        fractal(m1,n1,m2,n2,level-1);
        fractal(m2,n2,m3,n3,level-1);
        fractal(m3,n3,x2,y2,level-1);
    }
}

int main() {
    create("frac.bmp",800,400);

    //drawCircle(1,1,10,RED);
    fractal(0,2,800,2,4);
    writeFile();
    return 0;
}
