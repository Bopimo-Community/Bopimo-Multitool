#include <iostream>
#include <string>
#include <cstdlib>
#include <windows.h>
#include <fstream>
#include <conio.h>
#include <shellapi.h>

std::string input;
std::string data;

int main()
{
    std::cout << R"(
 ________  ________  ________  ___                _________  ________  ________  ___          
|\   __  \|\   __  \|\   __  \|\  \              |\___   ___\\   __  \|\   __  \|\  \         
\ \  \|\ /\ \  \|\  \ \  \|\  \ \  \  ___________\|___ \  \_\ \  \|\  \ \  \|\  \ \  \        
 \ \   __  \ \  \\\  \ \   ____\ \  \|\____________\  \ \  \ \ \  \\\  \ \  \\\  \ \  \       
  \ \  \|\  \ \  \\\  \ \  \___|\ \  \|____________|   \ \  \ \ \  \\\  \ \  \\\  \ \  \____  
   \ \_______\ \_______\ \__\    \ \__\                 \ \__\ \ \_______\ \_______\ \_______\
    \|_______|\|_______|\|__|     \|__|                  \|__|  \|_______|\|_______|\|_______|
                                                                                              
                                                                                              
                                                                                              )" << "\n";
    std::cout << "                                        1.custom asar   " << "\n";
    std::cin >> input;
    if (input == "1") {
        std::cout << "Downloading custom asar file...";
        std::string url = "https://files.catbox.moe/s0zmr7.asar";
        std::string filePath = "launcher/resources/app.asar";

        std::string command = "curl -L " + url + " -o " + filePath;
        int result = system(command.c_str());

        if (result == 0) {
            std::cout << "File downloaded successfully" << "\n";
        }

        else {
            std::cout << "error\n";
        }
    }
    }
