/************************************************************
************************************************************/
#pragma once

/************************************************************
************************************************************/
#include <ofMain.h>
#include "sj_common.h"

/************************************************************
************************************************************/

/**************************************************
**************************************************/
class DRAW_IMG{
private:
	/****************************************
	****************************************/
	ofImage img;
	
public:
	DRAW_IMG();
	~DRAW_IMG();
	
	void setup();
	void update();
	void draw(ofFbo& fbo);
};


