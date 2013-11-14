#pragma once
#include "opencv2/highgui/highgui.hpp"
#include "opencv2/imgproc/imgproc.hpp"
#include <iostream>
#include <stdio.h>
#include <stdlib.h>
#include <algorithm>
#include "myShape.hpp"
using namespace std;
using namespace cv;

class Div {
public:
	int row;
	int col;
	int id;
	int width;
	int height;
	int divType;
	vector<Div> children;
	Div();
	Div(int row, int col, int width, int height, vector<Div>children, int divType, int divID);
	Div(Div *div);
	Div(myShape * ms);
	void setId(int divID);
	string printDiv() const;
	bool match(Div div2) const;
	bool similar(Div div2) const;
	void printDivWithChildren(int level);
};