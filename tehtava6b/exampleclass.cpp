#include "exampleclass.h"
#include "qobject.h"
#include "qobjectdefs.h"

ExampleClass::ExampleClass(QObject *parent) : QObject(parent) {
    qDebug() << "Start";

    QObject::connect(this, SIGNAL(readyToSay()), this, SLOT(sayHelloSlot()));

    qDebug() << "End";
}

void ExampleClass::startToWait() {
    QThread::msleep(1000);
    emit readyToSay();
}

void ExampleClass::sayHelloSlot() {
    qDebug() << "Terve";
}
