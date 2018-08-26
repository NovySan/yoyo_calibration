#include "ofApp.h"

//--------------------------------------------------------------
void ofApp::setup(){
    ofSetFrameRate(24);
    ofSetVerticalSync(true);
    ofBackground(0, 0, 0, 255);

    ofTrueTypeFont::setGlobalDpi(72);
    verdana30.loadFont("verdana.ttf", 128, true, true);
	verdana30.setLineHeight(34.0f);//34
	verdana30.setLetterSpacing(1.035);





}

//--------------------------------------------------------------
void ofApp::update(){

}

//--------------------------------------------------------------
void ofApp::draw(){
    int w = 1920/2;
    int normalView = 1920;
    //int lowRange = 0;
    //int highRange = lowRange + 1920;

    for (int i = 0; i < N_CAMERAS; i++){

        ofSetColor(255,0,0,255);
        ofRect(w-35,500-125,150,150);
        ofSetColor(225);
        verdana30.drawString(ofToString(i+1), w, 500);
        ofNoFill();
        ofSetLineWidth(10);
        ofSetColor(0,255,0,255);
        ofRect(normalView,0,1920,1080);
        ofFill();
        ofSetLineWidth(1);
        w = w + 1920;
        normalView = normalView+1920;
	}


}

//--------------------------------------------------------------
void ofApp::keyPressed(int key){

}

//--------------------------------------------------------------
void ofApp::keyReleased(int key){

}

//--------------------------------------------------------------
void ofApp::mouseMoved(int x, int y ){

}

//--------------------------------------------------------------
void ofApp::mouseDragged(int x, int y, int button){

}

//--------------------------------------------------------------
void ofApp::mousePressed(int x, int y, int button){

}

//--------------------------------------------------------------
void ofApp::mouseReleased(int x, int y, int button){

}

//--------------------------------------------------------------
void ofApp::windowResized(int w, int h){

}

//--------------------------------------------------------------
void ofApp::gotMessage(ofMessage msg){

}

//--------------------------------------------------------------
void ofApp::dragEvent(ofDragInfo dragInfo){

}
