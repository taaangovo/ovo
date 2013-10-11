#include "testApp.h"

//--------------------------------------------------------------
void testApp::setup(){
    
    //ofBackground(255);
    //237,254,8
    ofBackground(201,255,92);
    ofSetBackgroundAuto(false);
    ofSetCircleResolution(100);
    ofSetFrameRate(100);
    ofSetVerticalSync(TRUE);
    
    noiseTimeX = ofRandom(100);
    noiseTimeY = ofRandom(600);
    noiseIncre = 0.002;

    for(int i=0; i<NUM; i++){
        pos[i].set(250,250);
        
    }
    
    time = 0;

}

//--------------------------------------------------------------
void testApp::update(){

}

//--------------------------------------------------------------
void testApp::draw(){
    ofEnableAlphaBlending();
    ofEnableSmoothing();
    
    
    for(int i=0; i<NUM; i++){
        pos[i].set(ofNoise(noiseTimeX+100*i)*ofGetWidth(),ofNoise(noiseTimeY+100*i)*ofGetHeight());
    }
    
    
    for(int i=0; i<NUM; i++){

        distanceA= (pos[i] - pos[i-1]).length();
        distanceB= (pos[i] - pos[i-2]).length();
        distanceC= (pos[i-1] - pos[i-2]).length();
        //distance=ofClamp(distance, 0, ofRandom(5,100));

        if ( distanceA < 30 && distanceB < 50 && distanceC < 50){
            
            ofNoFill();
            ofSetColor(91,0,213,100);
            ofSetLineWidth(1);
            ofTriangle(pos[i],pos[i-1], pos[i-2]);
            ofFill();
            ofSetColor(98,255,190,100);
            ofTriangle(pos[i],pos[i-1], pos[i-2]);
            
            time +=1;
        }
        
        if (time == 10) {
            
            ofFill();
            ofSetColor(201,255,92, 1);
            ofRect(0, 0, 500, 500);
            time = 0;
        }
    }
    
    noiseTimeX += noiseIncre;
    noiseTimeY += noiseIncre;

    
    
}

//--------------------------------------------------------------
void testApp::keyPressed(int key){

}

//--------------------------------------------------------------
void testApp::keyReleased(int key){

}

//--------------------------------------------------------------
void testApp::mouseMoved(int x, int y){

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