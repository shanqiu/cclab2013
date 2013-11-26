//
//  Ball.h
//  inClass_objects_01
//
//  Created by Joseph Saavedra on 11/21/13.
//
//

#pragma once
#include "ofMain.h"

class Ball{
  
public:
    
    Ball(int x, int y, int r);
    void update();
    void draw();
    
    int ballX;
    int ballY;
    int ballRadius;
    int ballSpeed;
    int ballSpeedY;
    
    int ballRed, ballGreen, ballBlue, ballAlpha;
};

