#pragma once
#include <opencv2\opencv.hpp>
#include <vector>
#include <imhan.h>




class ImageManager {
public:
	ImageManager() {

	}

	void setMovieSize(int _movieSize);

	template < typename T >
	void setImages(T path);

	template < typename T, typename ... Types >
	void setImages(T head, Types ... tail);

	template < typename T >
	void setOffset(T nOffset);

	template < typename T, typename ... Types >
	void setOffset(T head, Types ... tail);

	void resize(int height, int width);

	void concat(int nRow, int nCol);

	void trim(int _movieSize);

	void view();

	int movieSize;
	std::vector<std::shared_ptr<imageHandler> > images;
	std::vector<int> offsetList;

};

