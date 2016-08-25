// ConsoleApplication1.cpp : 定义控制台应用程序的入口点。
//

#include "stdafx.h"
#include<opencv2/opencv.hpp>
using namespace std;
using namespace cv;


int _tmain(int argc, _TCHAR* argv[])
{
	const char* imagename="lena.jpg";
	Mat img=imread(imagename);
	imshow("image",img);
	waitKey();
	return 0;
}

