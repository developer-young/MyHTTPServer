#include <unistd.h>
#include "webserver.h"

int main() {

    WebServer server(1215, 3, 60000, false, 4);            
    server.Start();
} 