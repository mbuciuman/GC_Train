#ifndef GCTRAIN_INPUTMODIFIERS_RECORDING_NOINPUTRECORDING_HPP_
#define GCTRAIN_INPUTMODIFIERS_RECORDING_NOINPUTRECORDING_HPP_

#include "../InputModifier.hpp"
#include <Nintendo.h>

class NoInputRecording : public InputModifier {
  public:
    ~NoInputRecording();
    void modifyInput(Gamecube_Data_t &dataToModify);
    void cleanUp();
};

#endif // GCTRAIN_INPUTMODIFIERS_RECORDING_NOINPUTRECORDING_HPP_