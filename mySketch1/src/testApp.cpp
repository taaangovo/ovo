#include "testApp.h"

//--------------------------------------------------------------
void testApp::setup(){
    
    ofSetVerticalSync(TRUE);
    ofEnableAlphaBlending();
    ofSetBackgroundAuto(false);
    ofBackground(255,255,255,50);
    speed=0.05;
    
    color.set(201,255,92);
    color.getHsb(h,s,b);
    


}

//--------------------------------------------------------------
void testApp::update(){
    
    float xorig = ofGetWidth()/2;
    float yorig = ofGetHeight()/2;
    
    float radius = 100;
    
    time+=speed;
    
    pos.x = xorig + radius * cos(time);
	pos.y = yorig + radius * -sin(time);
    
    float dx = pos.x - prevPos.x;
    float dy = pos.y - prevPos.y;
    angle = atan2(dy, dx);
    prevPos=pos;
    
    s += ofNoise(time)*50;
    ran =ofNoise(time)*20;

}

//--------------------------------------------------------------
void testApp::draw(){
    
    ofPushMatrix();
    ofTranslate(pos.x,pos.y);
    
    ofFill();
    ofSetColor(255, 255, 255, 3);
    ofRect(-1000, -1000, 2000, 2000);
    
    for(int i=0; i<NUM; i++){
        
        ofFill();
        ofSetColor(color);
        ofCircle(mouseX-500-ran*time/12, mouseY-500-ran*time/3, ran);
        
        ofNoFill();
        ofSetColor(h,s,b);
        ofCircle(mouseX-500-ran*time/12, mouseY-500-ran*time/3, ran);
    }
    


    
    ofPopMatrix();

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
