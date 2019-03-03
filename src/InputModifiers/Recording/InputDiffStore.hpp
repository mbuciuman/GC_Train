#ifndef GCTRAIN_INPUTMODIFIERS_RECORDING_INPUTDIFFSTORE_HPP_
#define GCTRAIN_INPUTMODIFIERS_RECORDING_INPUTDIFFSTORE_HPP_

#include "InputDiff.hpp"
#include "constants.hpp"
#include <Nintendo.h>

class InputDiffStore {
  private:
    Gamecube_Data_t initialData;
    InputDiff inputDiffs[MAX_STORE_SIZE];
    uint8_t totalDiffs;
    uint16_t lastTime;

  public:
    InputDiffStore();
    void initialize(Gamecube_Data_t &initialData);
    bool canStoreDiff();
    void storeDiff(uint16_t timeDiff, Gamecube_Report_t &firstReport,
                   Gamecube_Report_t &secondReport);
    void storeLastTime(uint16_t lastTime);
    InputDiff &getDiff(int index);
    uint8_t getTotalDiffs();
    uint16_t getLastTime();
    Gamecube_Data_t getInitialData();
    void reset();
};
#endif // GCTRAIN_INPUTMODIFIERS_RECORDING_INPUTDIFFSTORE_HPP_
