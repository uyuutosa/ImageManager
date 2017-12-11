#pragma once
#include <opencv2\opencv.hpp>
#include <vector>
#include <imhan.h>



class ImageManager {
public:
	ImageManager() {

	}


	void setImages(std::string path);

	std::vector<imageHandler> iamges;

};

