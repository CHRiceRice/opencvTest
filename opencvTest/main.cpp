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

	/*
	//声明指定类型Mat类
	//3X3的double类型矩阵
	Mat a = Mat_<double>(3, 3);
	//通过opencv数据类型创建Mat类 
	//114X514的32位(32)浮点整数(F)3通道(C3)矩阵
	Mat b(114, 514, CV_32FC3);
	
	//Mat类默认构造函数 赋值的时候会自己判断类型和大小
	Mat::Mat();

	//加些东西
	//尺寸和类型参数
	Mat::Mat(3, 3, CV_8UC2);
	//Size()结构
	Mat c(Size(3, 3), CV_16UC3);
	//利用已有矩阵 储存内容相同 但是只是复制了矩阵头，所以矩阵指针指向同一个地址
	Mat::Mat(a);
	Mat p(a);
	//构造已有类的子类 Range表示范围，一个为行数范围，一个是列数范围，列数范围可以不写，默认截取全部列
	Mat n(b, Range(10, 10), Range(12,12));
	*/

	/*
	//Mat类赋值
	//在构造时赋值 Scalar()  
	Mat d(2, 2, CV_8UC3, Scalar(0, 0, 255));
	//循环
	Mat a = Mat_<int>(3, 3);0
	for (int i = 0; i < a.rows; i++) {
		for (int j = 0; j < a.cols; j++) {
			a.at<int>(i, j) = i + j;
		}
	}

	//类方法
	//eye() 创建一个单位矩阵 行数，列数，数据类型
	Mat b = cv::Mat::eye(3, 3, CV_8UC3);
	//diag() 构建对角矩阵 参数是Mat一维变量
	Mat c = Mat::diag(b);
	//ones 构建一个全为1的矩阵
	Mat e = Mat::ones(12, 12, CV_16UC2); 
	//zeros 构建一个全为0的矩阵 
	Mat f = Mat::zeros(114, 514, CV_16FC1);
	//利用数组
	float g[8] = { 1,1,4,5,1,4,1,9 };
	Mat h = Mat(2, 2, CV_32FC2, g);
	Mat k = Mat(2, 4, CV_32FC1, g);
	*/
	
	//Mat类的运算
	Mat a = (Mat_<int>(3, 3) << 1, 1, 3, 5, 1, 3, 1, 3);
	Mat b = (Mat_<double>(3, 3) << 1, 1, 3, 9, 1, 3, 8, 3);
	Mat f = (Mat_<double>(3, 3) << 1, 2.4, 3, 9.4, 1, 3, 8.5, 3);
	Mat c, d;
	double e;
	//直接用* 运算数学乘积 即矩阵乘法
	c = b * f;
	//dot()求两个矩阵的内积，结果存在一个变量
	e = b.dot(f);
	//mul()求矩阵对应位的乘积
	d = b.mul(f);
	return 0;
} 