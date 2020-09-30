#include "ns3/address.h"
#include "ns3/address-utils.h"
#include "ns3/log.h"
#include "ns3/inet-socket-address.h"
#include "ns3/inet6-socket-address.h"
#include "ns3/node.h"
#include "ns3/socket.h"
#include "ns3/udp-socket.h"
#include "ns3/simulator.h"
#include "ns3/socket-factory.h"
#include "ns3/packet.h"
#include "ns3/trace-source-accessor.h"
#include "ns3/udp-socket-factory.h"
#include "ns3/tcp-socket-factory.h"
#include "ns3/uinteger.h"
#include "ns3/double.h"
#include "bitcoin-node.h"
#include "bitcoin-callback.h"

namespace ns3 {

int count = 0;

float
Call::Welcome(float a) {
    return a+1;
}

void
Call::Welcome1() {
    std::cout<<"Count from Welcome1 is: "<<count<<" at time: "<<Simulator::Now().GetMinutes()<<" mins\n";
}

void
Call::GetThroughput(double x, double y) {
    if(Simulator::Now().GetMinutes() < x){
        std::cout<<"Current time: "<<Simulator::Now().GetMinutes()<<" mins. Count value: "<<count<<"\n";
        count++;
        Simulator::Schedule(Minutes(y), &Call::GetThroughput, x, y);
    }
}

}