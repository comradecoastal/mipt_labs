//
//  rad.cpp
//  
//
//  Created by Георгий Андреев on 02.10.2020.
//

#include <stdlib.h>
#include <stdio.h>
#include <math.h>
#include <iostream>

double side(double x1, double x2, double y1, double y2)
{
    double kek;
    kek = sqrt((x1-x2)*(x1-x2) + (y1 - y2)*(y1 - y2));
    return(kek);
    
}

int main()
{
    double a[3], p, s, rad;
    double x[3], y[3];
    int j;
    //input data
    x[0] = 420;
    x[1] = 480;
    x[2] = 530;
    y[0] = 500;
    y[1] = 550;
    y[2] = 520;
    
    //calculations
    a[0] = side(x[0], x[1], y[0], y[1]);
    a[1] = side(x[1], x[2], y[1], y[2]);
    a[2] = side(x[0], x[2], y[0], y[2]);
    
    p = (a[0] + a[1] + a[2])/2;
    s = sqrt(p*(p-a[0])*(p-a[1])*(p-a[2]));
    rad = a[0] * a[1] * a[2] / (4*s);
    std::cout<<rad<<" - it's radius approx lol"<<std::endl;
    return 0;
}
