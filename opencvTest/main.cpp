#include <opencv.hpp>
#include <iostream>

using namespace std;
using namespace cv;

int main() {
	/* ���Ի��� ��ʾͼ��
	//��������ͷ
	Mat img;
	//��ֵͼ��
	img = imread("../imgs/XD.jpg");
	imshow("test", img);
	waitKey(0);
	*/
	//����ָ������Mat��
	//3X3��double���;���
	cv::Mat a = Mat_<double>(3, 3);
	//ͨ��opencv�������ʹ���Mat�� 
	//114X514��32λ(32)��������(F)3ͨ��(C3)����
	cv::Mat b(114, 514, CV_32FC3);
	
	//Mat��Ĭ�Ϲ��캯�� ��ֵ��ʱ����Լ��ж����ͺʹ�С
	cv::Mat::Mat();

	//��Щ����
	//�ߴ�����Ͳ���
	cv::Mat::Mat(3, 3, CV_8UC2);
	//Size()�ṹ
	cv::Mat c(Size(3, 3), CV_16UC3);
	//�������о��� ����������ͬ ����ֻ�Ǹ����˾���ͷ�����Ծ���ָ��ָ��ͬһ����ַ
	cv::Mat::Mat(a);
	cv::Mat p(a);
	//���������������

	return 0;
} 