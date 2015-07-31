#include <opencv2/highgui/highgui.hpp>

using namespace cv;

int main(int argc, char* argv[])
{
	// To load an image from file:
	//Mat image = imread("bloom-screenshot.jpg");
	// To create an image manually:
	// Mat image = 255*Mat::ones(500, 1000, CV_8UC1);//, Scalar(0,0, 100));
	uchar imageArray[255*255];
	for(int i = 0; i<255; i++)
		for(int j = 0; j<255; j++)
			imageArray[255*i+j] = (uchar)j;
	Mat image = Mat(255, 255, CV_8UC1, imageArray);
	imshow("Bloom", image);
	waitKey();
}
