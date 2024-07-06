#pragma once

#include <string>

void StringToChar(System::String^ s, std::string& os);
System::String^ CharToString(char* str);
char* EncodeText(char* psText);
char* DecodeText(char* psText);