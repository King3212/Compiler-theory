#include "error.h"


void error(char *message){
    std::ofstream logfile("error.log", std::ios_base::app);
    logfile << message;
    logfile.close();
}

void error(std::string *message){
    std::ofstream logfile("error.log", std::ios_base::app);
    logfile << message;
    logfile.close();
}
