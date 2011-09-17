#pragma once

#include "ofMain.h"

extern "C"
{
#include "svgtiny.h"
};

class ofxSVGTiny
{
public:
	
	~ofxSVGTiny();
	
	void load(string path);
	void draw();
	
	int getNumPath() { return paths.size(); }
	ofPath& getPathAt(int n) { return *paths[n]; }

private:

	typedef ofPtr<ofPath> ofPathRef;
	vector<ofPathRef> paths;

	void setupDiagram(struct svgtiny_diagram *diagram);
	void setupShape(struct svgtiny_shape *shape);

};