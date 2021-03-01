#include <opencv2/core.hpp>
#include <opencv2/imgcodecs.hpp>
#include <opencv2/highgui.hpp>
//#define OPENCV_SAMPLES_DATA_PATH D:\Workspace\ImageProcessing\opencv\sources\samples\data

#include <iostream>

using namespace cv;
using namespace std;

int main()
{
	//samples::addSamplesDataSearchPath("D:\Workspace\ImageProcessing\opencv\sources\samples\data");
	string img_path = samples::findFile("starry_night.jpg");
	Mat img = imread(img_path, IMREAD_COLOR);

	if (img.empty())
	{
		cout << "Could not read the image: " << img_path << "\n";
		return 1;
	}
	imshow("image", img);
	int k = waitKey(0);

	if (k == 's') imwrite("starry_night.png", img);

	return 0;
}