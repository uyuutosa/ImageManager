#include "ImageManager.h"


void ImageManager::setImages(std::string path)
{
	//images.push_back(imhan(path));
}



int main() {

	cv::VideoCapture cap("testMov.mp4");
	std::vector<cv::Mat> mlst;
	for (bool isContinue = true; isContinue;) {
		cv::Mat m;
		if (!cap.read(m))
			break;

		mlst.push_back(m);
		cv::imshow("mov", m);
		
		cv::waitKey(1);
	}
	for (auto m:mlst){

		cv::imshow("mov2", m);
		
		cv::waitKey(1);
	}
	//std::string hello("asdf.");
	//std::string hello2("hel.lo.hl");
	//std::string hello3("hel.lo.hlo");
	//int n(hello.rfind("."));
	//int n2(hello2.rfind("."));
	//int n3(hello3.rfind("."));
	//std::cout << hello.size() - n << std::endl;
	//std::cout << hello.substr(n+1, hello.size()-n) << std::endl;
	//std::cout << hello2.substr(n+1, hello2.size()-n) << std::endl;
	//std::cout << hello3.substr(n+1, hello3.size()-n) << std::endl;
//	imhan(mlst)->view();
//	std::cout << "end";
//	cv::Mat m = cv::imread("dog.jpg");
//	auto a = imhan(m);
//	a->view();
}

