#include "ImageManager.h"

template < typename T >
void ImageManager::setImages(T path) {
	images.push_back(imhan(path));
}

template < typename T, typename ... Types >
void ImageManager::setImages(T head, Types ... tail) {
	images.push_back(imhan(head));
	setImages(tail...);
}

void ImageManager::setMovieSize(int _movieSize){
	movieSize = _movieSize;
}

void ImageManager::resize(int height, int width){
	for (int i = 0; i < images.size(); i++) {
		images[i] = images[i]->resize(height, width);
	}
}

template < typename T >
void ImageManager::setOffset(T nOffset) {
	offsetList.push_back(nOffset);
}

template < typename T, typename ... Types >
void ImageManager::setOffset(T head, Types ... tail) {
	offsetList.push_back(head);
	setOffset(tail...);
}

void ImageManager::concat(int nRow, int nCol)
{
	//int size(images.size());
	//for (int i = 0 ; i < ; i++)
	//for (int i = 0 ; i < nRow; i++)
	//	for (int j = 0; j < nCol; j++) {
	//		images[i * nCol + j];

	//	}
}

void ImageManager::trim(int _movieSize){
	if (!_movieSize)
		movieSize = _movieSize;

	for (int i = 0; i < movieSize; i++) {
		auto& tmp = images[i]->m_lst;
		images[i]->m_lst = std::deque<std::shared_ptr<imageHandler> >(&tmp[offsetList[i]], &tmp[offsetList[i]+movieSize]);
	}

}

void ImageManager::view()
{
	
}

int main() {
	ImageManager im;
	im.setImages("testMov.mp4", "testMov.mp4");
	im.setOffset(0, 0);
	im.resize(100, 100);
	im.concat(1, 2);
	im.view();

	
	//auto a = imhan("testMov.mp4", false);
	//a->gridImage(3,3)->view("obj", 1, true);
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

