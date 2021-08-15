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

	/*
	//����ָ������Mat��
	//3X3��double���;���
	Mat a = Mat_<double>(3, 3);
	//ͨ��opencv�������ʹ���Mat�� 
	//114X514��32λ(32)��������(F)3ͨ��(C3)����
	Mat b(114, 514, CV_32FC3);
	
	//Mat��Ĭ�Ϲ��캯�� ��ֵ��ʱ����Լ��ж����ͺʹ�С
	Mat::Mat();

	//��Щ����
	//�ߴ�����Ͳ���
	Mat::Mat(3, 3, CV_8UC2);
	//Size()�ṹ
	Mat c(Size(3, 3), CV_16UC3);
	//�������о��� ����������ͬ ����ֻ�Ǹ����˾���ͷ�����Ծ���ָ��ָ��ͬһ����ַ
	Mat::Mat(a);
	Mat p(a);
	//��������������� Range��ʾ��Χ��һ��Ϊ������Χ��һ����������Χ��������Χ���Բ�д��Ĭ�Ͻ�ȡȫ����
	Mat n(b, Range(10, 10), Range(12,12));
	*/

	/*
	//Mat�ำֵ
	//�ڹ���ʱ��ֵ Scalar()  
	Mat d(2, 2, CV_8UC3, Scalar(0, 0, 255));
	//ѭ��
	Mat a = Mat_<int>(3, 3);0
	for (int i = 0; i < a.rows; i++) {
		for (int j = 0; j < a.cols; j++) {
			a.at<int>(i, j) = i + j;
		}
	}

	//�෽��
	//eye() ����һ����λ���� ��������������������
	Mat b = cv::Mat::eye(3, 3, CV_8UC3);
	//diag() �����ԽǾ��� ������Matһά����
	Mat c = Mat::diag(b);
	//ones ����һ��ȫΪ1�ľ���
	Mat e = Mat::ones(12, 12, CV_16UC2); 
	//zeros ����һ��ȫΪ0�ľ��� 
	Mat f = Mat::zeros(114, 514, CV_16FC1);
	//��������
	float g[8] = { 1,1,4,5,1,4,1,9 };
	Mat h = Mat(2, 2, CV_32FC2, g);
	Mat k = Mat(2, 4, CV_32FC1, g);
	*/
	
	//Mat�������
	Mat a = (Mat_<int>(3, 3) << 1, 1, 3, 5, 1, 3, 1, 3);
	Mat b = (Mat_<double>(3, 3) << 1, 1, 3, 9, 1, 3, 8, 3);
	Mat f = (Mat_<double>(3, 3) << 1, 2.4, 3, 9.4, 1, 3, 8.5, 3);
	Mat c, d;
	double e;
	//ֱ����* ������ѧ�˻� ������˷�
	c = b * f;
	//dot()������������ڻ����������һ������
	e = b.dot(f);
	//mul()������Ӧλ�ĳ˻�
	d = b.mul(f);
	return 0;
} 