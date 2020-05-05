#include <QCoreApplication>
#include <pluslanguage.h>
#include <sharplanguage.h>
#include <javalanguage.h>
#include <iostream>
using namespace std;

std::string generateProgram(AbstractLanguage* lang) {
     AbstractClassUnit* myClass = lang->createClassUnit("MyClass"/*, AbstractClassUnit::PUBLIC*/ );

     myClass->add(
         std::shared_ptr<AbstractMethodUnit>(lang->createMethodUnit( "testFunc1", "void", 0 )),
         AbstractClassUnit::PUBLIC
     );
     myClass->add(
         std::shared_ptr<AbstractMethodUnit>(lang->createMethodUnit( "testFunc2", "void", AbstractMethodUnit::STATIC )),
         AbstractClassUnit::PRIVATE
     );
     myClass->add(
         std::shared_ptr<AbstractMethodUnit>(lang->createMethodUnit( "testFunc2", "void", AbstractMethodUnit::STATIC )),
         AbstractClassUnit::PRIVATEPROTECTED
     );
     myClass->add(
                 std::shared_ptr<AbstractMethodUnit>(lang->createMethodUnit( "testFunc2", "void", AbstractMethodUnit::STATIC )),
                 AbstractClassUnit::ABSTRACT
             );
     myClass->add(
         std::shared_ptr<AbstractMethodUnit>(lang->createMethodUnit( "testFunc3", "void", AbstractMethodUnit::VIRTUAL | AbstractMethodUnit::CONST )),
         AbstractClassUnit::PUBLIC
     );
     auto method = std::shared_ptr<AbstractMethodUnit>(lang->createMethodUnit( "testFunc4", "void", AbstractMethodUnit::STATIC ));
     method->add(std::shared_ptr<AbstractPrintUnit>(lang->createPrintUnit( R"(Hello,world!\n)")),0 );
     myClass->add( method, AbstractClassUnit::PROTECTED );
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
