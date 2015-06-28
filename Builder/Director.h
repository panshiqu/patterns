/*
 * Director.h
 *
 *  Created on: 2015年6月27日
 *      Author: root
 */

#ifndef BUILDER_DIRECTOR_H_
#define BUILDER_DIRECTOR_H_

namespace NS_BUILDER {

class Builder;
class Director {
public:
	Director(Builder *builder) : _builder(builder) {}
	virtual ~Director() {}
	void Build(void);

private:
	Builder *_builder;
};

} /* namespace NS_BUILDER */

#endif /* BUILDER_DIRECTOR_H_ */
