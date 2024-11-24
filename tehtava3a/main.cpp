#include <chef.h>
#include <italianchef.h>

using namespace std;

int main()
{
    chef objChef("Gordon Ramsey");
    objChef.makeSalad();
    objChef.makeSoup();


    ItalianChef objItalianChef("Anthony Bourdain");
    objItalianChef.makeSalad();
    objItalianChef.makeSoup();
    objItalianChef.makePasta();

    return 0;
}
