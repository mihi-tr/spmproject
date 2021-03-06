#pragma once

#include "ofMain.h"
#include "buttonBoard.h"
#include "Samples.h"
#include "genePool.h"
#include "Individual.h"
#include "Slider.h"

class ofApp : public ofBaseApp{
	public:
		void setup();
		void update();
		void draw();

		void keyPressed(int key);
		void keyReleased(int key);
		void mouseMoved(int x, int y);
		void mouseDragged(int x, int y, int button);
		void mousePressed(int x, int y, int button);
		void mouseReleased(int x, int y, int button);
		void windowResized(int w, int h);
		void dragEvent(ofDragInfo dragInfo);
		void gotMessage(ofMessage msg);
		void setNewSample(Individual in);

		float framerate;
		buttonBoard bb;
		Samples s;
		genePool gp;
		ofTrueTypeFont font;
		Slider slider;
		Individual in;
};
