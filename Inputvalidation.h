#pragma once
#ifndef INPUTVALIDATION_H
#define INPUTVALIDATION_H

#include <string>

bool getInputDouble(double& input, const std::string& errorMessage, double min, double max);
bool getInputInt(int& input, const std::string& errorMessage, int min, int max);
#endif
