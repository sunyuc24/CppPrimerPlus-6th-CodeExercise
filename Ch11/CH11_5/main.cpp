
#include "Ch11_5.h"
#include <iostream>

int main()
{
    using std::cout;
    using std::endl;

    Ch11_5_StoneWt s1;
    Ch11_5_StoneWt s2 = Ch11_5_StoneWt(2, 3);
    Ch11_5_StoneWt s3 = Ch11_5_StoneWt(3, 2.5, Ch11_5_StoneWt::PDS);

    cout << "s1: " << s1 << endl;
    cout << "s2: " << s2 << endl;
    cout << "s3: " << s3 << endl;
    s3.set_stn();
    cout << "s3 set_stn(), s3 = " << s3 << endl;
    cout << "s3 - s2 = " << s3 - s2 << endl;
    cout << "s2 + s1 = " << s2 + s1 << endl;
    cout << "3*s3 = " << 3 * s3 << endl;
    cout << "s3*2 = " << s3 * 2 << endl;

    return 0;
}