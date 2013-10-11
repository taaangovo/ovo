#include "testApp.h"

//--------------------------------------------------------------
void testApp::setup(){
    
    ofSetVerticalSync(TRUE);
    ofEnableAlphaBlending();
    ofBackground(225,106,11);

    a1.loadImage("bg.png");
    a2.setFromPixels(a1);
    
    //b1.loadImage("bottom-left-arrow.png.png");
    //b2.setFromPixels(b1);
  
    c1.loadImage("cable-bottom.png");
    c2.setFromPixels(c1);
    d1.loadImage("cable-top.png");
    
    e1.loadImage("eye.png");
    e2.setFromPixels(e1);
    f1.loadImage("head.png");
    
    g1.loadImage("thunder-bottom.png");
    //g2.setFromPixels(g1);
    
    h1.loadImage("thunder-top.png");
    //h2.setFromPixels(h1);
    
    //i1.loadImage("top-left-arrow.png");
    //i2.setFromPixels(i1);
    
    //j1.loadImage("top-right-arrow.png");
    //j2.setFromPixels(j1);
    
    
    x2=x9=x10=0;
    
    x1=600;
    y1=0;
    
    y2=20;
    
    x3=800;
    y3=174;
    
    x4=0-d1.getWidth();
    y4=150;
    
    x5=165;
    y5=238;
    
    x6=100;
    y6=100;
    
    x7=750;
    y7=150;
    
    x8=700;
    y8=50;
    
    y9=450;
    
    y10=550;
    
    incre1=0;
    incre2=0;

}

//--------------------------------------------------------------
void testApp::update(){
    
    x2+=0.5;
    x2=fmod(x2, ofGetWidth());
    
    //x7-=1;
    //x7=fmod(x7, ofGetWidth());
    
    //x8+=4;
    //x8=fmod(x4, ofGetWidth());
    
    x9+=1;
    x9=fmod(x3, ofGetWidth());
    
    x10+=4;
    x10=fmod(x4, ofGetWidth());
    
    
    


}

//--------------------------------------------------------------
void testApp::draw(){


    b1.draw(x2, y2);
    //b2.draw(x2-b1.getWidth(), y2);
    
    d1.draw(x4, y4);
    //d2.draw(x4-d1.getWidth(), y4);
    
    f1.draw(x6, y6);
    //f2.draw(x6-f1.getWidth(), y6);
    
    
    //g2.draw(x7-g1.getWidth(), y7);
    
    i1.draw(x9, y9);
    //i2.draw(x9-i1.getWidth(), y9);
    
    j1.draw(x10, y10);
    //j2.draw(x10-j1.getWidth(), y10);
    
    if (x4 > 200) {
        x4+=0;
        y4+=ofRandom(-2,2);
        y4=ofClamp(y4,148,152);
    }else{
        x4+=3;
    }
    

    if (y1 > 130) {
        y1+=0;
        a1.clear();
        a2.draw(x1+ofNoise(ofRandom(ofGetWidth()))*5, y1+ofNoise(ofRandom(ofGetHeight()))*5);
        incre2 +=1;
        if(incre2 % 35 == 0 || incre2 % 36 == 0 || incre2 % 37 == 0 || incre2 % 38 == 0){
           h1.draw(x8, y8);
        } else if(incre2 % 23 == 0 ||incre2 % 24 == 0 ||incre2 % 25 == 0){
            g1.draw(x7, y7);
        }
        
        
    }else{
        y1+=0.8;
        a1.draw(x1, y1);

    }
    
    if (x3<369) {
        x3 +=ofRandom(0,5);
        y3 +=ofRandom(-2,2);
        y3 =ofClamp(y3,172,174);
        
    }else{
        x3 +=-2.5;
    }
    c1.draw(x3, y3);
    
    
    if(x5>163 && x5<180){
        incre1 +=0.05;
        
    }else if (x5<163 || x5>180){
        incre1 -=0.05;
    }
    x5+=incre1;
    e1.draw(x5, y5);
    e2.draw(x5+85, y5);
    
    
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