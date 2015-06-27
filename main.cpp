/*
 * main.cpp
 *
 *  Created on: 2015年6月27日
 *      Author: root
 */

//#define ABSTRACT_FACTORY
//#define BUILDER
#define FACTORY_METHOD

#ifdef ABSTRACT_FACTORY
#include "AbstractFactory/AbstractFactory.h"
#include "AbstractFactory/AbstractProductA.h"
#include "AbstractFactory/AbstractProductB.h"

int main(void)
{
	AbstractFactory *factory = AbstractFactory::getFactory(AbstractFactory::FACTORY_TWO);
	AbstractProductA *producta = factory->createProductA();
	AbstractProductB *productb = factory->createProductB();
	producta->printSelf();
	productb->printSelf();
}
#endif

#ifdef BUILDER
#include "Builder/Director.h"
#include "Builder/ConcreteBuilderA.h"
#include "Builder/ConcreteBuilderB.h"
#include "Builder/Product.h"

int main(void)
{
	ConcreteBuilderB *builder = new ConcreteBuilderB();
	Director *director = new Director(builder);
	director->Build();

	Product *product = builder->getCareColorProduct();
	product->printSelf();
}
#endif

int main(void)
{

}
