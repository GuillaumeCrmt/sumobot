#ifndef Motor_h
#define Motor_h

#include "arduino.h"

class Motor
{
public:
	Motor(const unsigned char &input1, const unsigned char &input2, const unsigned char &enable);

	void setValue(const unsigned char &value);
	void setDirection(const bool &direction);

	unsigned char getValue() const {return mValue;}
	bool getDirection() const {return mDirection;}

private:
	unsigned char mInput1;
	unsigned char mInput2;
	unsigned char mEnable;

	unsigned char mValue;
	bool mDirection;
};

#endif