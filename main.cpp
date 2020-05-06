#include <QCoreApplication>
#include <pluslanguage.h>
#include <sharplanguage.h>
#include <javalanguage.h>
#include <iostream>
using namespace std;

std::string generateProgram(AbstractLanguage* lang) {
     AbstractClassUnit* myClass = lang->createClassUnit("MyClass", AbstractClassUnit::PUBLIC);

     myClass->add(
         std::shared_ptr<AbstractMethodUnit>(lang->createMethodUnit( "testFunc1", "void",  AbstractMethodUnit::VIRTUAL)),
         AbstractClassUnit::PUBLIC
     );
     myClass->add(
         std::shared_ptr<AbstractMethodUnit>(lang->createMethodUnit( "testFunc2", "void", AbstractMethodUnit::STATIC | AbstractMethodUnit::FINAL)),
         AbstractClassUnit::PRIVATE
     );
     myClass->add(
         std::shared_ptr<AbstractMethodUnit>(lang->createMethodUnit( "testFunc3", "void", AbstractMethodUnit::CONST | AbstractMethodUnit::OVERRIDE)),
         AbstractClassUnit::PUBLIC
     );
     auto method = std::shared_ptr<AbstractMethodUnit>(lang->createMethodUnit( "testFunc4", "void", AbstractMethodUnit::STATIC | AbstractMethodUnit::FINAL));
     method->add(std::shared_ptr<AbstractPrintUnit>(lang->createPrintUnit( R"(Hello,world!\n)")),0 );
     myClass->add( method, AbstractClassUnit::PROTECTED );
     myClass->add(std::shared_ptr<AbstractMethodUnit>(lang->createMethodUnit( "testFunc5", "void", AbstractMethodUnit::FINAL | AbstractMethodUnit::ABSTRACT)));
     myClass->add(
         std::shared_ptr<AbstractMethodUnit>(lang->createMethodUnit( "testFunc6", "void", AbstractMethodUnit::STATIC )),
         AbstractClassUnit::PRIVATEPROTECTED
     );
     return myClass->compile();
}


int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);
    cout << AbstractClassUnit::PUBLIC  << endl;
    PlusLanguage p;
    SharpLanguage s;
    JavaLanguage j;
    cout <<"C++:\n" << generateProgram(&p) << endl;
    cout <<"C#:\n" << generateProgram(&s) << endl;
    cout <<"JAVA:\n" << generateProgram(&j) << endl;
    return a.exec();
}
