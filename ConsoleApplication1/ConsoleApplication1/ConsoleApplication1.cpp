// ConsoleApplication1.cpp : �������̨Ӧ�ó������ڵ㡣
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

