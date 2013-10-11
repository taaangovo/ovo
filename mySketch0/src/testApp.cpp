#include "testApp.h"


//--------------------------------------------------------------
void testApp::setup(){
    ofBackground(255, 255, 255);
    ofSetFrameRate(100);
    ofSetBackgroundAuto(false);

    for (int i = 0; i < NUM; i++){
     time[i]= ofRandom(20);
    }

}

//--------------------------------------------------------------
void testApp::update(){

}

//--------------------------------------------------------------
void testApp::draw(){

    ofEnableAlphaBlending();
    ofFill();
    for(int i=0; i<NUM; i++){
      
        time[i]+=0.01;
        radius = ofNoise(time[i])*20;
        pos.x =ofNoise(time[i])*1024;
        pos.y =ofNoise(time[i]+1000)*768;
        ofSetColor(ofNoise(time[i])*255,0,0,100);
        ofCircle(pos.x, pos.y, radius);
        }
    ofDisableAlphaBlending();
  
    ofNoFill();
    ofSetLineWidth(1);
    ofSetColor(0,255,0,30);
    for(int i=0; i<NUM; i++){
        
        time[i]+=0.01;
        pos.x =ofNoise(time[i])*1024;
        pos.y =ofNoise(time[i]+1000)*768;
        ofCircle(pos.x, pos.y, 10);
    }
    
    
    
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