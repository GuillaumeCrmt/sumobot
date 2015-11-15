#include "InfraredSensor.h"

/**
 * @brief Constructeur de InfraredSensor
 * 
 * @param char Numéro de pin associé
 */
InfraredSensor::InfraredSensor(const unsigned char &pin) : mPin(pin)
{
	pinMode(mPin, INPUT);
}

/**
 * @brief Retourne la valeur du capteur
 * 
 * @param 
 */
unsigned char InfraredSensor::getValue()const
{
	return analogRead(getPin());
}

/**
 * @brief Retourne la valeur du capteur en cm
 * 
 * @param 
 */
int InfraredSensor::getValueCm()const
{
	return 4800/(getValue() - 20);
}