#include <iostream>
#include "Ch11_5.h"

Ch11_5_StoneWt::Ch11_5_StoneWt(double lbs, Mode s)
{
    stone = int (lbs) / Lbs_per_stn;    // integer division
    pds_left = int (lbs) % Lbs_per_stn + lbs - int(lbs);
    pounds = lbs;
    status = s;
}


Ch11_5_StoneWt::Ch11_5_StoneWt(int stn, double lbs, Mode s)
{
    stone = stn;
    pds_left = lbs;
    pounds =  stn * Lbs_per_stn +lbs;
    status = s;
}

Ch11_5_StoneWt::Ch11_5_StoneWt()          
    stone = pounds = pds_left = 0;
    status = STN;
}

Ch11_5_StoneWt::~Ch11_5_StoneWt()        
{
}

Ch11_5_StoneWt Ch11_5_StoneWt::operator+(const Ch11_5_StoneWt & st) const
{
    double pds_sum = pounds + st.pounds;
    Ch11_5_StoneWt sum = Ch11_5_StoneWt(pds_sum);
    return sum;
}

Ch11_5_StoneWt Ch11_5_StoneWt::operator-(const Ch11_5_StoneWt & st) const
{
    double pds_diff = pounds - st.pounds;
    Ch11_5_StoneWt diff = Ch11_5_StoneWt(pds_diff);
    return diff;
}

Ch11_5_StoneWt Ch11_5_StoneWt::operator*(double p) const
{
    double multi = pounds * p;
    return Ch11_5_StoneWt(multi);
}


std::ostream & operator<<(std::ostream & os, const Ch11_5_StoneWt & st)
{
    if(st.status == Ch11_5_StoneWt::STN)
        std::cout << st.stone << " stone, " << st.pds_left << "pounds";
    else if(st.status == Ch11_5_StoneWt::PDS)
        std::cout << st.pounds << " pounds";     
    else
        std::cout << "Incorrect status";
}