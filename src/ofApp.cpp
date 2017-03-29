#include "ofApp.h"
#include <random>
#include <vector>
using namespace std;
//--------------------------------------------------------------
void ofApp::setup(){
jewel.load("diamond.png");// image to use (must be stored in "random/bin/data" folder)

/*Uniform Distribution
int xmin = 0, xmax = 1200, ymin = 0, ymax = 970;
std::random_device rd;
std::mt19937 en(rd());
std::uniform_int_distribution<int> x_dist(xmin,xmax);
std::uniform_int_distribution<int> y_dist(ymin,ymax);*/

//Normal Distribution
float xmean = 800.0f, xsd = 100.0f, ymean = 600.0f, ysd = 80.0f;
std::random_device rd;
std::mt19937 eng(rd());
std::normal_distribution<float> x_dist(xmean,xsd);
std::normal_distribution<float> y_dist(ymean,ysd);
for (int i=0; i<20; ++i) {
	X.push_back(x_dist(eng));
	Y.push_back(y_dist(eng));
}

}

//--------------------------------------------------------------
void ofApp::update(){

}

//--------------------------------------------------------------
void ofApp::draw(){
ofBackground(0);

for(auto i = 0u; i < X.size(); i++)
 {
   jewel.draw(X[i], Y[i]);
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
void ofApp::mouseEntered(int x, int y){

}

//--------------------------------------------------------------
void ofApp::mouseExited(int x, int y){

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
