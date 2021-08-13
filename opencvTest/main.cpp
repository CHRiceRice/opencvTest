#include <opencv.hpp>
#include <iostream>

using namespace std;
using namespace cv;

int main() {
	/* 测试环境 显示图像
	//创建矩阵头
	Mat img;
	//赋值图像
	img = imread("../imgs/XD.jpg");
	imshow("test", img);
	waitKey(0);
	*/
	//声明指定类型Mat类
	//3X3的double类型矩阵
	cv::Mat a = Mat_<double>(3, 3);
	//通过opencv数据类型创建Mat类 
	//114X514的32位(32)浮点整数(F)3通道(C3)矩阵
	cv::Mat b(114, 514, CV_32FC3);
	
	//Mat类默认构造函数 赋值的时候会自己判断类型和大小
	cv::Mat::Mat();

	//加些东西
	//尺寸和类型参数
	cv::Mat::Mat(3, 3, CV_8UC2);
	//Size()结构
	cv::Mat c(Size(3, 3), CV_16UC3);
	//利用已有矩阵 储存内容相同 但是只是复制了矩阵头，所以矩阵指针指向同一个地址
	cv::Mat::Mat(a);
	cv::Mat p(a);
	//构造已有类的子类

	return 0;
} 