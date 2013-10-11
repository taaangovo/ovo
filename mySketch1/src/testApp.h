#pragma once

#include "ofMain.h"

#define NUM 5

class testApp : public ofBaseApp{

	public:
		void setup();
		void update();
		void draw();

		void keyPressed(int key);
		void keyReleased(int key);
		void mouseMoved(int x, int y );
		void mouseDragged(int x, int y, int button);
		void mousePressed(int x, int y, int button);
		void mouseReleased(int x, int y, int button);
		void windowResized(int w, int h);
		void dragEvent(ofDragInfo dragInfo);
		void gotMessage(ofMessage msg);
		
    float angle;
    float time, speed;
    float ran;
    float h,s,b;
    
    ofImage fly;
    ofPoint pos, prevPos;
    ofPoint velocity;
    ofColor color;
    
    float t[NUM];
    
    
};
