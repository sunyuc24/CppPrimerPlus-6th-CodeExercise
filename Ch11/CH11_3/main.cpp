
#include <iostream>
#include "Ch11_4.h"

int main()
{
    using std::cout;
    using std::endl;
    Ch11_4_Time aida(3, 35);
    Ch11_4_Time tosca(2, 48);
    Ch11_4_Time temp;

    cout << "Aida and Tosca:\n";
    cout << aida<<"; " << tosca << endl;
    temp = aida + tosca;     // operator+()
    cout << "Aida + Tosca: " << temp << endl;
    temp = aida* 1.17;  // member operator*()
    cout << "Aida * 1.17: " << temp << endl;
    cout << "10.0 * Tosca: " << 10.0 * tosca << endl;
	// std::cin.get();
    return 0; 
}