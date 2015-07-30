#include <opencv2/opencv.hpp>
#include <opencv2/contrib/contrib.hpp>

using namespace cv;

int main(int argc, char* argv[])
{
	Mat image = imread("bloom-screenshot.jpg");
	imshow("Bloom", image);
	waitKey();
}
