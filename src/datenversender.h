//for datatypes
#include "queue.h"
#include "internals.h"

typedef struct IG_Datenversender{
    IG_Config * config,
    IG_Queue * queue
} IG_Datenversender;



// gives the IG_Data to the datenversender thread (pushes it to the queue)
IG_Status sendData(IG_Datenversender * sender, IG_Data * data)



// initializes the connection to the Datadestination(MQTT-Broker) and starts the extra thread with loop over incoming data
// TODO: needs config parameters (as pointer?) 
// TODO: parameter for flags?
IG_Status init(IG_Datenversender * sender);