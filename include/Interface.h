#ifndef DA_WATERSUPPLYMANAGEMENT_INTERFACE_H
#define DA_WATERSUPPLYMANAGEMENT_INTERFACE_H

#include "WaterSupplyNetwork.h"

class Interface {
public:

    bool init();

    void printMenuOptions(const std::vector<std::string> &options, int choice);
    void printOptionsCity(const std::vector<std::string> &options, const std::string &title, int choice, int page);
    void printTop();
    void printBottom();
    void waitInput();

    void saveGeneralMaxFlowToFile(const std::string& title);
    void saveAllMaxFlowToFile(const std::string& title);
    void saveSingleMaxFlowToFile(const DeliverySite* city);

    void mainMenu();
    void exitMenu();

    DeliverySite * citySelection();
    Reservoir * reservoirSelection();
    PumpingStation * pumpingStationSelection();
    ServicePoint * servicePointSelection();
    ServicePoint * servicePointSelection(ServicePoint *src);

    std::string readInputText();
    void printWriteBuffer(const std::string &buffer);

    void cityDisplay(const std::vector<DeliverySite *> &cities);
    void cityDisplayComparison(const std::vector<DeliverySite *> &cities);
    void displaySupplyDemand();
    void displayServicePointEffects();
    void reservoirDisplay(const std::vector<Reservoir *> &reservoirs);
    void pumpingStationDisplay(const std::vector<PumpingStation *> &pumpingStations);
    void pipeDisplay(const ServicePoint *servicePoint);

private:
    int width = 80;
    WaterSupplyNetwork wsn;
    std::unordered_map<std::string, double> cityToDefaultFlow;
    bool outputToFile = false;
};


#endif //DA_WATERSUPPLYMANAGEMENT_INTERFACE_H
