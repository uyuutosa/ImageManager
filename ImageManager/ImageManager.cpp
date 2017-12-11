#include "ImageManager.h"


void ImageManager::setImages(std::string path)
{
	images.push_back(imhan(path));
}



int main() {


	cv::Mat m = cv::imread("dog.jpg");
	auto a = imhan(m);
	a->view();
}

