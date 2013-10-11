
#include "testApp.h"

//--------------------------------------------------------------
void testApp::setup(){

    ofBackground(255);
    ofEnableAlphaBlending();
    ofSetVerticalSync(true);

	sequence.loadSequence("se/Comp 1_00", "png", 0, 533, 3);
	sequence.preloadAllFrames();
	sequence.setFrameRate(2);
    
	
	playing = false;
    
    percent=0;
}

//--------------------------------------------------------------
void testApp::update(){
    
}

//--------------------------------------------------------------
void testApp::draw(){
      for(int i=0; i<8; i++){
        for (int j=0;j<10;j++){
            sequence.getFrameAtPercent(percent)->draw(i*102,j*58);
            }

        }
    
    mou=mouseX*0.000005;
    percent+=0.0005+mou;
    
    /*
     int distance= (pos[i] - mouse).length()/6;
     distance=ofClamp(distance, 0, ofRandom(5,100));
     ofCircle(pos[i], distance);
     */
}

//--------------------------------------------------------------
void testApp::keyPressed(int key){

    playing = true;
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
	playing = true;
}

//--------------------------------------------------------------
void testApp::mouseReleased(int x, int y, int button){

}

//--------------------------------------------------------------
void testApp::windowResized(int w, int h){

}

