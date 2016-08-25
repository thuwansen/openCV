// 2Property.cpp : 定义控制台应用程序的入口点。
//

#include "stdafx.h"
#include<opencv2/opencv.hpp>
using namespace std;
using namespace cv;
int _tmain(int argc, _TCHAR* argv[])
{
	char* imgName="lena.jpg";
	Mat img=imread(imgName);
	imshow("lean",img);
	waitKey();
	return 0;
}

