/*
 * main.cpp
 *
 *  Created on: 2015年6月27日
 *      Author: root
 */

//#define ABSTRACT_FACTORY
//#define BUILDER
//#define FACTORY_METHOD
#define PROTOTYPE

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

#ifdef PROTOTYPE
#include "Prototype/ConcretePrototype1.h"
#include "Prototype/ConcretePrototype2.h"
using namespace NS_PROTOTYPE;
int main(void)
{
	ConcretePrototype1 *p1 = new ConcretePrototype1();
	ConcretePrototype2 *p2 = new ConcretePrototype2();
	p1->setIndex(10);
	p2->setIndex("ten");

	Prototype *cp1 = p1->clone();
	Prototype *cp2 = p2->clone();

	p1->printSelf();
	p2->printSelf();
	cp1->printSelf();
	cp2->printSelf();

	delete p1;
	delete p2;
	delete cp1;
	delete cp2;
}
#endif
