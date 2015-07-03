/*
 * main.cpp
 *
 *  Created on: 2015年6月27日
 *      Author: root
 */

//#define ABSTRACT_FACTORY
//#define BUILDER
//#define FACTORY_METHOD
//#define PROTOTYPE
//#define SINGLETON
//#define ADAPTER
//#define BRIDGE
//#define COMPOSITE
//#define DECORATOR
//#define FACADE
//#define FLYWEIGHT
//#define PROXY
//#define CHAINOFRESPONSIBILITY
//#define COMMAND
#define INTERPRETER

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

#ifdef SINGLETON
#include "Singleton/Singleton.h"
using namespace NS_SINGLETON;
int main(void)
{
	Singleton::getInstance()->Print();
}
#endif

#ifdef ADAPTER
#include "Adapter/AdapterA.h"
#include "Adapter/AdapterB.h"
using namespace NS_ADAPTER;
int main(void)
{
	// 类适配器
	AdapterA aa;
	aa.Request();

	// 对象适配器
	Adaptee ada;
	AdapterB ab(&ada);
	ab.Request();
}
#endif

#ifdef BRIDGE
#include "Bridge/Abstraction.h"
#include "Bridge/ConcreteImplementorA.h"
#include "Bridge/ConcreteImplementorB.h"
using namespace NS_BRIDGE;
int main(void)
{
	// 可以使用Abstract Factory创建实现
	// 如此以来这段代码将不依赖或需要知道任何实现
	ConcreteImplementorA ia;
	Abstraction abs(&ia);
	abs.operation();
}
#endif

#ifdef COMPOSITE
#include "Composite/Composite.h"
#include "Composite/Leaf.h"
using namespace NS_COMPOSITE;
int main(void)
{
	Composite c1("c1");
	Leaf l1("l1");
	Composite c2("c2");
	c1.add(&l1);
	c1.add(&c2);
	Leaf l2("l2");
	c2.add(&l2);
	c1.operation();
}
#endif

#ifdef DECORATOR
#include "Decorator/ConcreteComponent.h"
#include "Decorator/ConcreteDecoratorA.h"
#include "Decorator/ConcreteDecoratorB.h"
using namespace NS_DECORATOR;
using namespace std;
int main(void)
{
	ConcreteComponent cc;
	cc.operation();

	cout << "----------" << endl;

	ConcreteDecoratorA cda(&cc);
	cda.operation();

	cout << "----------" << endl;

	ConcreteDecoratorB cdb(&cda);
	cdb.operation();
}
#endif

#ifdef FACADE
#include "Facade/Facade.h"
using namespace NS_FACADE;
int main(void)
{
	Facade facade;
	facade.inputAndOutput();
}
#endif

#ifdef FLYWEIGHT
#include "Flyweight/FlyweightFactory.h"
#include "Flyweight/UnsharedConcreteFlyweight.h"
using namespace NS_FLYWEIGHT;
int main(void)
{
	FlyweightFactory ff;
	UnsharedConcreteFlyweight ucf;
	Flyweight *f1 = ff.getFlyweight(1);
	ucf.add(f1, "red");
	Flyweight *f2 = ff.getFlyweight(1);
	ucf.add(f2, "black");
	ucf.operation();
}
#endif

#ifdef PROXY
#include "Proxy/Proxy.h"
using namespace NS_PROXY;
int main(void)
{
	Proxy p;
	p.Request();
}
#endif

#ifdef CHAINOFRESPONSIBILITY
#include "ChainOfResponsibility/ConcreteHandle1.h"
#include "ChainOfResponsibility/ConcreteHandle2.h"
using namespace NS_CHAINOFRESPONSIBILITY;
int main(void)
{
	ConcreteHandle1 ch1(0);
	ConcreteHandle2 ch2(&ch1);
	ch2.HandleRequest(100);
	ch2.HandleRequest(0);
}
#endif

#ifdef COMMAND
#include "Command/Command.h"
#include "Command/Receiver.h"
#include "Command/ConcreteCommand.h"
using namespace NS_COMMAND;
int main(void)
{
	Receiver r;
	ConcreteCommand cc(&r);
	cc.execute();

	// 使用模板创建简单命令
	SimpleCommand<Receiver> sc(&r, &Receiver::action);
	sc.execute();
}
#endif

#ifdef INTERPRETER
#include <iostream>
#include "Interpreter/ConcreteExpression.h"
using namespace NS_INTERPRETER;
using namespace std;
int main(void)
{
	ConcreteExpression ce;
	std::cout << ce.interpret(false) << std::endl;
}
#endif
