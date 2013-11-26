#include "testApp.h"

//--------------------------------------------------------------
void testApp::setup(){
    myball = new Ball(-100, 400, 50);
    
    ofSetCircleResolution(60);
    ofEnableAlphaBlending();
}

//--------------------------------------------------------------
void testApp::update(){
    myball->update();
    
    for(int i=0; i<yourballs.size(); i++){
        yourballs[i].update();
    }
}

//--------------------------------------------------------------
void testApp::draw(){
    ofBackground(255);
    myball->draw();
    
    for(int i=0; i<yourballs.size(); i++){
        yourballs[i].draw();
    }
    
    string myCountMessage = "number of balls: "+ofToString(yourballs.size());
    ofSetColor(0);
    ofDrawBitmapString(myCountMessage, 50, 50);
}

//--------------------------------------------------------------
void testApp::keyPressed(int key){

}

//--------------------------------------------------------------
void testApp::keyReleased(int key){

}

//--------------------------------------------------------------
void testApp::mouseMoved(int x, int y ){

}

//--------------------------------------------------------------
void testApp::mouseDragged(int x, int y, int button){

}

//--------------------------------------------------------------
void testApp::mousePressed(int x, int y, int button){
    
    for(int i=0; i<25; i++){
        int newRadius = ofRandom(100);
        Ball newBall = *new Ball( x, y+ofRandom(45), newRadius);
        yourballs.push_back(newBall);
    }
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
