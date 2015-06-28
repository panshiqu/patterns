/*
 * main.cpp
 *
 *  Created on: 2015年6月27日
 *      Author: root
 */

#define ABSTRACT_FACTORY
//#define BUILDER
//#define FACTORY_METHOD

#ifdef ABSTRACT_FACTORY
#include "AbstractFactory/AbstractFactory.h"
#include "AbstractFactory/AbstractProductA.h"
#include "AbstractFactory/AbstractProductB.h"
using namespace NS_ABSTRACT_FACTORY;
int main(void)
{
	AbstractFactory *factory = AbstractFactory::getFactory(AbstractFactory::FACTORY_TWO);
	AbstractProductA *producta = factory->createProductA();
	AbstractProductB *productb = factory->createProductB();
	producta->printSelf();
	productb->printSelf();

	delete factory;
	delete producta;
	delete productb;
}
#endif

#ifdef BUILDER
#include "Builder/Director.h"
#include "Builder/ConcreteBuilderA.h"
#include "Builder/ConcreteBuilderB.h"
#include "Builder/Product.h"
using namespace NS_BUILDER;
int main(void)
{
	ConcreteBuilderB *builder = new ConcreteBuilderB();
	Director *director = new Director(builder);
	director->Build();

	Product *product = builder->getCareColorProduct();
	product->printSelf();

	delete builder;
	delete director;
	delete product;
}
#endif

#ifdef FACTORY_METHOD
#include "FactoryMethod/ConcreteProduct.h"
using namespace NS_FACTORY_METHOD;
int main(void)
{
	Product *product = ConcreteCreator.createProduct();
	product->printSelf();
	delete product;
}
#endif
