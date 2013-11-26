#include "testApp.h"

//--------------------------------------------------------------
void testApp::setup(){
    
    //initialize all variables
    myX = 50;
    myY = 250;
    
    myWidth = 122.6;
    myHeight = 90.2;
    
    myVelocity = 5;
    
    bR = 0;
    bG = 0;
    bB = 255;
    
    ofSetCircleResolution(50);
}

//--------------------------------------------------------------
void testApp::update(){

    //increase x-coordinate
    myX += myVelocity; //myX = myX+myVelocity;
    
    if( myX > ofGetWidth()-myWidth || myX < 0 ){
        myVelocity = myVelocity * -1;
    }
    
}

//--------------------------------------------------------------
void testApp::draw(){
    
    ofBackground(bR, bG, bB);
    
    ofSetColor(200, 100, 50); //set color to orange
    ofEllipse(myX, myY, myWidth, myHeight); //draw ellipse

    ofSetColor(255); //set the color of anything drawn after this to white
    
    string mySentence = "current bR: " + ofToString(bR); //create string
    ofDrawBitmapString(mySentence, 50, 50); //draw string
    
    mySentence = "current bG: " + ofToString(bG); //update string
    ofDrawBitmapString(mySentence, 50, 80); //draw string
    
    mySentence = "current bB: " + ofToString(bB); //update string
    ofDrawBitmapString(mySentence, 50, 110); //draw string
}

//--------------------------------------------------------------
void testApp::keyPressed(int key){

}

//--------------------------------------------------------------
void testApp::keyReleased(int key){

}

//--------------------------------------------------------------
void testApp::mouseMoved(int x, int y){
    
    
    if(x > ofGetWidth()){
        x = 800;
    }
    if(y > ofGetHeight()){
        y = 800;
    }
    
    bR = ofMap(x, 0, ofGetWidth(), 0, 255);
    bG = ofMap(y, 0, ofGetHeight(), 0, 255);
    bB = ofMap(x, 0, ofGetWidth(), 255, 0);
    
    cout << x << endl;
}

//--------------------------------------------------------------
void testApp::mouseDragged(int x, int y, int button){

}

//--------------------------------------------------------------
void testApp::mousePressed(int x, int y, int button){

}

//--------------------------------------------------------------
void testApp::mouseReleased(int x, int y, int button){

}

//--------------------------------------------------------------
void testApp::windowResized(int w, int h){

}

//--------------------------------------------------------------
void testApp::gotMessage(ofMessage msg){

}

//--------------------------------------------------------------
void testApp::dragEvent(ofDragInfo dragInfo){ 

}