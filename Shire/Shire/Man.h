#pragma once
#include <iostream>

class Man {

private:
	int childCount;

public:
	Man()
	{

	}

	Man(int i)
	{
		setChildCount(i);
	}

	void setPyreToHigh()
	{
		std::cout << "Yolo" << std::endl << std::endl;
	}

	void sizzle()
	{
		std::cout << "Just like Mordor used to make!" << std::endl << std::endl;
	}

	void nervousChuckle()
	{
		std::cout << "I'm in danger." << std::endl << std::endl;
	}

	void setChildCount(int i)
	{
		childCount = i;
	}

	int getChildCount()
	{
		return childCount;
	}

};