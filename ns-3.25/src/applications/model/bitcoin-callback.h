//
// Created by Aniket Anand on 21/08/20.
//

#ifndef NS_ALLINONE_3_25_BITCOIN_CALLBACK_H
#define NS_ALLINONE_3_25_BITCOIN_CALLBACK_H

#include <algorithm>
#include "ns3/application.h"
#include "ns3/event-id.h"
#include "ns3/ptr.h"
#include "ns3/traced-callback.h"
#include "ns3/address.h"
#include "bitcoin.h"
#include "ns3/boolean.h"
#include "../../rapidjson/document.h"
#include "../../rapidjson/writer.h"
#include "../../rapidjson/stringbuffer.h"

namespace ns3 {

class Call{
public:

    //static int count;

    float Welcome(float a);
    void Welcome1();

    static void GetThroughput(double x, double y);

};
}

#endif //NS_ALLINONE_3_25_BITCOIN_CALLBACK_H
