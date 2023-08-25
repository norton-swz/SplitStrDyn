#pragma once
#define  EXPORT __declspec(dllexport)
#include<string>
#include<vector>

std::vector<std::string> EXPORT splitString(const std::string& vInput, char vSeperator);