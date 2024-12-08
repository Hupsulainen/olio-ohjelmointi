#include <iostream>
#include "classb.h"
#include "assosiationa.h"
#include "aggregationa.h"
#include <string>

using namespace std;

int main()
{
    int a = 5;
    int* myPointer1 =&a;
    int b = 10;
    int* myPointer2 =&b;
    int& refA = b;

    cout<<"a:n arvo on: "<< a << " ja osoite on: "<< &a <<endl;
    cout<<"b:n arvo on: "<< b << " ja osoite on: "<< &b <<endl;

    cout<<"Pointterin1 osoittama muistipaikan osoite: "<< myPointer1 <<endl;
    cout<<"Pointterin1 osoittama muistipaikan arvo: "<< *myPointer1 <<endl;
    cout<<"Pointterin2 osoittama muistipaikan osoite: "<< myPointer2 <<endl;
    cout<<"Pointterin1 osoittama muistipaikan arvo: "<< *myPointer2 <<endl;

    cout << "refA osoittama osoite on: " << &refA <<endl;
    cout << "refA osoittama muistipaikan arvo on: " << refA <<endl;

    ClassB objB;
    objB.setInfo("Olion B asettama info");

    AssosiationA objAss(objB);
    objAss.setBinfo("Olion objAss asettama info");

    cout<<"Assosiaatio esimerkki:"<<endl;
    cout<<"objB: "<<objB.getInfo()<<endl;
    cout<<"objAss: "<<objAss.getBinfo()<<endl;

    cout<<"Aggregaatio esimerkki:"<<endl;
    ClassB &refB=objB;
    AggregationA objAggr(refB);
    objAggr.setBinfo("Olion Agr asettama info");
    cout<<"objB: "<<objB.getInfo()<<endl;
    cout<<"objAggr "<<objAggr.getBinfo()<<endl;
    cout<<endl;

}
