/*
 * Director.h
 *
 *  Created on: 2015年6月27日
 *      Author: root
 */

#ifndef BUILDER_DIRECTOR_H_
#define BUILDER_DIRECTOR_H_

class Builder;
class Director {
public:
	Director(Builder *builder) : _builder(builder) {}
	virtual ~Director() {}
	void Build(void);

private:
	Builder *_builder;
};

#endif /* BUILDER_DIRECTOR_H_ */
