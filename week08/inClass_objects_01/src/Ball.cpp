//
//  Ball.cpp
//  inClass_objects_01
//
//  Created by Joseph Saavedra on 11/21/13.
//
//

#include "Ball.h"

Ball::Ball(int x, int y, int r){
    //the constructor
    //this code runs ONLY when this Ball is CREATED
    //we'll initialize our variables here.
    ballX = x;
    ballY = y;
    ballRadius = r;
    ballSpeed = ofRandom(10)+1;
    ballSpeedY = ofRandom(10)+1;
    ballRed = ofRandom(255);
    ballGreen = ofRandom(255);
    ballBlue = ofRandom(255);
    ballAlpha = ofRandom(255);
}
//---------------------------------------
void Ball::update(){
    
    if(ballX >= ofGetWidth() || ballX <=0){
        ballSpeed *= -1;
    }
    
    if(ballY >= ofGetHeight() || ballY <=0){
        ballSpeedY *= -1;
    }
    
    ballY += ballSpeedY;
    ballX += ballSpeed;
}
//---------------------------------------
void Ball::draw(){
    
    ofSetColor(ballRed, ballGreen, ballBlue, ballAlpha);
    ofCircle(ballX, ballY, ballRadius);
}

