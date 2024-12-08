#include "aggregationa.h"
#include <iostream>
#include "classb.h"
#include <string>

using namespace std;

AggregationA::AggregationA(ClassB &value):refB(value)
{
}

string AggregationA::getBinfo()
{
    return refB.getInfo();
}

void AggregationA::setBinfo(string value)
{
    refB.setInfo(value);
}
