/*
 * Singleton.h
 *
 *  Created on: 2015年6月26日
 *      Author: root
 */

#ifndef SINGLETON_H_
#define SINGLETON_H_

#include <iostream>
using namespace std;

namespace NS_SINGLETON {

class Singleton {
public:
	virtual ~Singleton() {cout << "hello world." << endl;}
	static Singleton *getInstance(void)
	{
		if (_instance == 0)
			_instance = new Singleton();

		return _instance;
	}

	void Print(void)
	{

	}

protected:
	Singleton() {}

private:
	static Singleton *_instance;
};

Singleton *Singleton::_instance = 0;

} /* namespace NS_PROTOTYPE */

#endif /* SINGLETON_H_ */
