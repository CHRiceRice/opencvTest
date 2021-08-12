#include <opencv.hpp>
#include <iostream>

using namespace std;
using namespace cv;

int main() {
	Mat img;
	img = imread("../imgs/XD.jpg");
	imshow("test", img);
	waitKey(0);
	return 0;
}