#pragma once

#include "ofMain.h"
#include "svgtiny.h"

class ofxSVGTiny
{
public:
	
	~ofxSVGTiny();
	
	void load(string path);
	void draw();
	
	float getWidth() const { return width; }
	float getHeight() const { return height; }
	int getNumPath() { return paths.size(); }
	ofPath& getPathAt(int n) { return *paths[n]; }

private:
	float width, height;

	typedef ofPtr<ofPath> ofPathRef;
	vector<ofPathRef> paths;

	void setupDiagram(struct svgtiny_diagram *diagram);
	void setupShape(struct svgtiny_shape *shape);

};