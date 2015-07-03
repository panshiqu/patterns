/*
 * Subject.h
 *
 *  Created on: 2015年7月3日
 *      Author: root
 */

#ifndef PROXY_SUBJECT_H_
#define PROXY_SUBJECT_H_

namespace NS_PROXY {

class Subject {
public:
	Subject() {}
	virtual ~Subject() {}
	virtual void Request(void) = 0;
};

} /* namespace NS_PROXY */

#endif /* PROXY_SUBJECT_H_ */
