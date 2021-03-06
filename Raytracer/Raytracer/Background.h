/*
 *  Background.h
 *  Raytracer
 *
 *  Created by Ben Mabey on 1/27/07.
 *
 */


#ifndef _BACKGROUND_H_
#define _BACKGROUND_H_ 1

class Color;
class Ray;
class RenderContext;

class Background
{

public:
	
	//Background() {};
  virtual void preprocess() {}; 
	virtual void getBackgroundColor(Color& result, const RenderContext& context, const Ray& ray) = 0;  

	
};


#endif


