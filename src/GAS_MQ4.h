#ifndef GAS_MQ4_h
#define GAS_MQ4_h

#include <Arduino.h>

namespace AnalogSensor {
class GAS_MQ4
{
  public:
    /**
     * Constructor
     */
    GAS_MQ4(int pin);
    
    /**
     * Returns the PPM concentration
     */
    int read();

    /**
     * Calibrates the start point of 400
     */    
    double calibrate();

    /**
     * Returns the voltage
     */
    double getVoltage();
  private:
    int _pin;
};
}
#endif