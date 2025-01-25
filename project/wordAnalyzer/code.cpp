#include "getInput.h" 
#include <iostream> 
#include <vector> 
#include <string> 
#include <algorithm>
using namespace std; 
#include <map> 
struct token{ 
    string name; 
    string value; 
}; 



bool _1000(Input *input){
    std::vector<int> finalNodes = {0, 1};
    int state = 4; // 初始状态
    while(true) {
        char letter = (input->getInput())[0];
        switch(state) {
            case 0: 
                switch(letter) {
                    default: return std::find(finalNodes.begin(), finalNodes.end(), state) != finalNodes.end();
                }
                break;
            case 1: 
                switch(letter) {
                    default: return std::find(finalNodes.begin(), finalNodes.end(), state) != finalNodes.end();
                }
                break;
            case 2: 
                switch(letter) {
                    case 'f': state = 0; break;
                    case 'F': state = 1; break;
                    default: return std::find(finalNodes.begin(), finalNodes.end(), state) != finalNodes.end();
                }
                break;
            case 3: 
                switch(letter) {
                    case 'f': state = 0; break;
                    case 'F': state = 1; break;
                    default: return std::find(finalNodes.begin(), finalNodes.end(), state) != finalNodes.end();
                }
                break;
            case 4: 
                switch(letter) {
                    case 'i': state = 2; break;
                    case 'I': state = 3; break;
                    default: return std::find(finalNodes.begin(), finalNodes.end(), state) != finalNodes.end();
                }
                break;
            default: break;
        }
    }
    return false;
}
bool _1001(Input *input){
    std::vector<int> finalNodes = {1, 0};
    int state = 4; // 初始状态
    while(true) {
        char letter = (input->getInput())[0];
        switch(state) {
            case 0: 
                switch(letter) {
                    default: return std::find(finalNodes.begin(), finalNodes.end(), state) != finalNodes.end();
                }
                break;
            case 1: 
                switch(letter) {
                    default: return std::find(finalNodes.begin(), finalNodes.end(), state) != finalNodes.end();
                }
                break;
            case 2: 
                switch(letter) {
                    case 'H': state = 6; break;
                    case 'h': state = 5; break;
                    default: return std::find(finalNodes.begin(), finalNodes.end(), state) != finalNodes.end();
                }
                break;
            case 3: 
                switch(letter) {
                    case 'H': state = 6; break;
                    case 'h': state = 5; break;
                    default: return std::find(finalNodes.begin(), finalNodes.end(), state) != finalNodes.end();
                }
                break;
            case 4: 
                switch(letter) {
                    case 'T': state = 3; break;
                    case 't': state = 2; break;
                    default: return std::find(finalNodes.begin(), finalNodes.end(), state) != finalNodes.end();
                }
                break;
            case 5: 
                switch(letter) {
                    case 'E': state = 8; break;
                    case 'e': state = 7; break;
                    default: return std::find(finalNodes.begin(), finalNodes.end(), state) != finalNodes.end();
                }
                break;
            case 6: 
                switch(letter) {
                    case 'e': state = 7; break;
                    case 'E': state = 8; break;
                    default: return std::find(finalNodes.begin(), finalNodes.end(), state) != finalNodes.end();
                }
                break;
            case 7: 
                switch(letter) {
                    case 'n': state = 0; break;
                    case 'N': state = 1; break;
                    default: return std::find(finalNodes.begin(), finalNodes.end(), state) != finalNodes.end();
                }
                break;
            case 8: 
                switch(letter) {
                    case 'n': state = 0; break;
                    case 'N': state = 1; break;
                    default: return std::find(finalNodes.begin(), finalNodes.end(), state) != finalNodes.end();
                }
                break;
            default: break;
        }
    }
    return false;
}
bool _1002(Input *input){
    std::vector<int> finalNodes = {1, 0};
    int state = 6; // 初始状态
    while(true) {
        char letter = (input->getInput())[0];
        switch(state) {
            case 0: 
                switch(letter) {
                    default: return std::find(finalNodes.begin(), finalNodes.end(), state) != finalNodes.end();
                }
                break;
            case 1: 
                switch(letter) {
                    default: return std::find(finalNodes.begin(), finalNodes.end(), state) != finalNodes.end();
                }
                break;
            case 2: 
                switch(letter) {
                    case 'l': state = 4; break;
                    case 'L': state = 5; break;
                    default: return std::find(finalNodes.begin(), finalNodes.end(), state) != finalNodes.end();
                }
                break;
            case 3: 
                switch(letter) {
                    case 'l': state = 4; break;
                    case 'L': state = 5; break;
                    default: return std::find(finalNodes.begin(), finalNodes.end(), state) != finalNodes.end();
                }
                break;
            case 4: 
                switch(letter) {
                    case 's': state = 7; break;
                    case 'S': state = 8; break;
                    default: return std::find(finalNodes.begin(), finalNodes.end(), state) != finalNodes.end();
                }
                break;
            case 5: 
                switch(letter) {
                    case 'S': state = 8; break;
                    case 's': state = 7; break;
                    default: return std::find(finalNodes.begin(), finalNodes.end(), state) != finalNodes.end();
                }
                break;
            case 6: 
                switch(letter) {
                    case 'E': state = 3; break;
                    case 'e': state = 2; break;
                    default: return std::find(finalNodes.begin(), finalNodes.end(), state) != finalNodes.end();
                }
                break;
            case 7: 
                switch(letter) {
                    case 'E': state = 1; break;
                    case 'e': state = 0; break;
                    default: return std::find(finalNodes.begin(), finalNodes.end(), state) != finalNodes.end();
                }
                break;
            case 8: 
                switch(letter) {
                    case 'e': state = 0; break;
                    case 'E': state = 1; break;
                    default: return std::find(finalNodes.begin(), finalNodes.end(), state) != finalNodes.end();
                }
                break;
            default: break;
        }
    }
    return false;
}
bool _1003(Input *input){
    std::vector<int> finalNodes = {0, 1};
    int state = 6; // 初始状态
    while(true) {
        char letter = (input->getInput())[0];
        switch(state) {
            case 0: 
                switch(letter) {
                    default: return std::find(finalNodes.begin(), finalNodes.end(), state) != finalNodes.end();
                }
                break;
            case 1: 
                switch(letter) {
                    default: return std::find(finalNodes.begin(), finalNodes.end(), state) != finalNodes.end();
                }
                break;
            case 2: 
                switch(letter) {
                    case 'd': state = 0; break;
                    case 'D': state = 1; break;
                    default: return std::find(finalNodes.begin(), finalNodes.end(), state) != finalNodes.end();
                }
                break;
            case 3: 
                switch(letter) {
                    case 'd': state = 0; break;
                    case 'D': state = 1; break;
                    default: return std::find(finalNodes.begin(), finalNodes.end(), state) != finalNodes.end();
                }
                break;
            case 4: 
                switch(letter) {
                    case 'n': state = 2; break;
                    case 'N': state = 3; break;
                    default: return std::find(finalNodes.begin(), finalNodes.end(), state) != finalNodes.end();
                }
                break;
            case 5: 
                switch(letter) {
                    case 'n': state = 2; break;
                    case 'N': state = 3; break;
                    default: return std::find(finalNodes.begin(), finalNodes.end(), state) != finalNodes.end();
                }
                break;
            case 6: 
                switch(letter) {
                    case 'e': state = 4; break;
                    case 'E': state = 5; break;
                    default: return std::find(finalNodes.begin(), finalNodes.end(), state) != finalNodes.end();
                }
                break;
            default: break;
        }
    }
    return false;
}
bool _1004(Input *input){
    std::vector<int> finalNodes = {1, 0};
    int state = 12; // 初始状态
    while(true) {
        char letter = (input->getInput())[0];
        switch(state) {
            case 0: 
                switch(letter) {
                    default: return std::find(finalNodes.begin(), finalNodes.end(), state) != finalNodes.end();
                }
                break;
            case 1: 
                switch(letter) {
                    default: return std::find(finalNodes.begin(), finalNodes.end(), state) != finalNodes.end();
                }
                break;
            case 2: 
                switch(letter) {
                    case 'A': state = 5; break;
                    case 'a': state = 4; break;
                    default: return std::find(finalNodes.begin(), finalNodes.end(), state) != finalNodes.end();
                }
                break;
            case 3: 
                switch(letter) {
                    case 'A': state = 5; break;
                    case 'a': state = 4; break;
                    default: return std::find(finalNodes.begin(), finalNodes.end(), state) != finalNodes.end();
                }
                break;
            case 4: 
                switch(letter) {
                    case 't': state = 0; break;
                    case 'T': state = 1; break;
                    default: return std::find(finalNodes.begin(), finalNodes.end(), state) != finalNodes.end();
                }
                break;
            case 5: 
                switch(letter) {
                    case 't': state = 0; break;
                    case 'T': state = 1; break;
                    default: return std::find(finalNodes.begin(), finalNodes.end(), state) != finalNodes.end();
                }
                break;
            case 6: 
                switch(letter) {
                    case 'p': state = 9; break;
                    case 'P': state = 10; break;
                    default: return std::find(finalNodes.begin(), finalNodes.end(), state) != finalNodes.end();
                }
                break;
            case 7: 
                switch(letter) {
                    case 'P': state = 10; break;
                    case 'p': state = 9; break;
                    default: return std::find(finalNodes.begin(), finalNodes.end(), state) != finalNodes.end();
                }
                break;
            case 8: 
                switch(letter) {
                    case 'e': state = 6; break;
                    case 'E': state = 7; break;
                    default: return std::find(finalNodes.begin(), finalNodes.end(), state) != finalNodes.end();
                }
                break;
            case 9: 
                switch(letter) {
                    case 'e': state = 2; break;
                    case 'E': state = 3; break;
                    default: return std::find(finalNodes.begin(), finalNodes.end(), state) != finalNodes.end();
                }
                break;
            case 10: 
                switch(letter) {
                    case 'e': state = 2; break;
                    case 'E': state = 3; break;
                    default: return std::find(finalNodes.begin(), finalNodes.end(), state) != finalNodes.end();
                }
                break;
            case 11: 
                switch(letter) {
                    case 'E': state = 7; break;
                    case 'e': state = 6; break;
                    default: return std::find(finalNodes.begin(), finalNodes.end(), state) != finalNodes.end();
                }
                break;
            case 12: 
                switch(letter) {
                    case 'R': state = 11; break;
                    case 'r': state = 8; break;
                    default: return std::find(finalNodes.begin(), finalNodes.end(), state) != finalNodes.end();
                }
                break;
            default: break;
        }
    }
    return false;
}
bool _1005(Input *input){
    std::vector<int> finalNodes = {1, 0};
    int state = 8; // 初始状态
    while(true) {
        char letter = (input->getInput())[0];
        switch(state) {
            case 0: 
                switch(letter) {
                    default: return std::find(finalNodes.begin(), finalNodes.end(), state) != finalNodes.end();
                }
                break;
            case 1: 
                switch(letter) {
                    default: return std::find(finalNodes.begin(), finalNodes.end(), state) != finalNodes.end();
                }
                break;
            case 2: 
                switch(letter) {
                    case 't': state = 4; break;
                    case 'T': state = 5; break;
                    default: return std::find(finalNodes.begin(), finalNodes.end(), state) != finalNodes.end();
                }
                break;
            case 3: 
                switch(letter) {
                    case 'T': state = 5; break;
                    case 't': state = 4; break;
                    default: return std::find(finalNodes.begin(), finalNodes.end(), state) != finalNodes.end();
                }
                break;
            case 4: 
                switch(letter) {
                    case 'i': state = 6; break;
                    case 'I': state = 7; break;
                    default: return std::find(finalNodes.begin(), finalNodes.end(), state) != finalNodes.end();
                }
                break;
            case 5: 
                switch(letter) {
                    case 'I': state = 7; break;
                    case 'i': state = 6; break;
                    default: return std::find(finalNodes.begin(), finalNodes.end(), state) != finalNodes.end();
                }
                break;
            case 6: 
                switch(letter) {
                    case 'l': state = 0; break;
                    case 'L': state = 1; break;
                    default: return std::find(finalNodes.begin(), finalNodes.end(), state) != finalNodes.end();
                }
                break;
            case 7: 
                switch(letter) {
                    case 'L': state = 1; break;
                    case 'l': state = 0; break;
                    default: return std::find(finalNodes.begin(), finalNodes.end(), state) != finalNodes.end();
                }
                break;
            case 8: 
                switch(letter) {
                    case 'u': state = 9; break;
                    case 'U': state = 10; break;
                    default: return std::find(finalNodes.begin(), finalNodes.end(), state) != finalNodes.end();
                }
                break;
            case 9: 
                switch(letter) {
                    case 'n': state = 2; break;
                    case 'N': state = 3; break;
                    default: return std::find(finalNodes.begin(), finalNodes.end(), state) != finalNodes.end();
                }
                break;
            case 10: 
                switch(letter) {
                    case 'n': state = 2; break;
                    case 'N': state = 3; break;
                    default: return std::find(finalNodes.begin(), finalNodes.end(), state) != finalNodes.end();
                }
                break;
            default: break;
        }
    }
    return false;
}
bool _1006(Input *input){
    std::vector<int> finalNodes = {1, 0};
    int state = 8; // 初始状态
    while(true) {
        char letter = (input->getInput())[0];
        switch(state) {
            case 0: 
                switch(letter) {
                    default: return std::find(finalNodes.begin(), finalNodes.end(), state) != finalNodes.end();
                }
                break;
            case 1: 
                switch(letter) {
                    default: return std::find(finalNodes.begin(), finalNodes.end(), state) != finalNodes.end();
                }
                break;
            case 2: 
                switch(letter) {
                    case 'E': state = 5; break;
                    case 'e': state = 4; break;
                    default: return std::find(finalNodes.begin(), finalNodes.end(), state) != finalNodes.end();
                }
                break;
            case 3: 
                switch(letter) {
                    case 'E': state = 5; break;
                    case 'e': state = 4; break;
                    default: return std::find(finalNodes.begin(), finalNodes.end(), state) != finalNodes.end();
                }
                break;
            case 4: 
                switch(letter) {
                    case 'a': state = 6; break;
                    case 'A': state = 7; break;
                    default: return std::find(finalNodes.begin(), finalNodes.end(), state) != finalNodes.end();
                }
                break;
            case 5: 
                switch(letter) {
                    case 'a': state = 6; break;
                    case 'A': state = 7; break;
                    default: return std::find(finalNodes.begin(), finalNodes.end(), state) != finalNodes.end();
                }
                break;
            case 6: 
                switch(letter) {
                    case 'd': state = 0; break;
                    case 'D': state = 1; break;
                    default: return std::find(finalNodes.begin(), finalNodes.end(), state) != finalNodes.end();
                }
                break;
            case 7: 
                switch(letter) {
                    case 'd': state = 0; break;
                    case 'D': state = 1; break;
                    default: return std::find(finalNodes.begin(), finalNodes.end(), state) != finalNodes.end();
                }
                break;
            case 8: 
                switch(letter) {
                    case 'R': state = 3; break;
                    case 'r': state = 2; break;
                    default: return std::find(finalNodes.begin(), finalNodes.end(), state) != finalNodes.end();
                }
                break;
            default: break;
        }
    }
    return false;
}
bool _1007(Input *input){
    std::vector<int> finalNodes = {1, 0};
    int state = 8; // 初始状态
    while(true) {
        char letter = (input->getInput())[0];
        switch(state) {
            case 0: 
                switch(letter) {
                    default: return std::find(finalNodes.begin(), finalNodes.end(), state) != finalNodes.end();
                }
                break;
            case 1: 
                switch(letter) {
                    default: return std::find(finalNodes.begin(), finalNodes.end(), state) != finalNodes.end();
                }
                break;
            case 2: 
                switch(letter) {
                    case 't': state = 6; break;
                    case 'T': state = 7; break;
                    default: return std::find(finalNodes.begin(), finalNodes.end(), state) != finalNodes.end();
                }
                break;
            case 3: 
                switch(letter) {
                    case 'T': state = 7; break;
                    case 't': state = 6; break;
                    default: return std::find(finalNodes.begin(), finalNodes.end(), state) != finalNodes.end();
                }
                break;
            case 4: 
                switch(letter) {
                    case 'I': state = 3; break;
                    case 'i': state = 2; break;
                    default: return std::find(finalNodes.begin(), finalNodes.end(), state) != finalNodes.end();
                }
                break;
            case 5: 
                switch(letter) {
                    case 'I': state = 3; break;
                    case 'i': state = 2; break;
                    default: return std::find(finalNodes.begin(), finalNodes.end(), state) != finalNodes.end();
                }
                break;
            case 6: 
                switch(letter) {
                    case 'e': state = 0; break;
                    case 'E': state = 1; break;
                    default: return std::find(finalNodes.begin(), finalNodes.end(), state) != finalNodes.end();
                }
                break;
            case 7: 
                switch(letter) {
                    case 'e': state = 0; break;
                    case 'E': state = 1; break;
                    default: return std::find(finalNodes.begin(), finalNodes.end(), state) != finalNodes.end();
                }
                break;
            case 8: 
                switch(letter) {
                    case 'w': state = 9; break;
                    case 'W': state = 10; break;
                    default: return std::find(finalNodes.begin(), finalNodes.end(), state) != finalNodes.end();
                }
                break;
            case 9: 
                switch(letter) {
                    case 'r': state = 4; break;
                    case 'R': state = 5; break;
                    default: return std::find(finalNodes.begin(), finalNodes.end(), state) != finalNodes.end();
                }
                break;
            case 10: 
                switch(letter) {
                    case 'R': state = 5; break;
                    case 'r': state = 4; break;
                    default: return std::find(finalNodes.begin(), finalNodes.end(), state) != finalNodes.end();
                }
                break;
            default: break;
        }
    }
    return false;
}
bool _500(Input *input){
    std::vector<int> finalNodes = {0};
    int state = 1; // 初始状态
    while(true) {
        char letter = (input->getInput())[0];
        switch(state) {
            case 0: 
                switch(letter) {
                    default: return std::find(finalNodes.begin(), finalNodes.end(), state) != finalNodes.end();
                }
                break;
            case 1: 
                switch(letter) {
                    case '+': state = 0; break;
                    default: return std::find(finalNodes.begin(), finalNodes.end(), state) != finalNodes.end();
                }
                break;
            default: break;
        }
    }
    return false;
}
bool _501(Input *input){
    std::vector<int> finalNodes = {0};
    int state = 1; // 初始状态
    while(true) {
        char letter = (input->getInput())[0];
        switch(state) {
            case 0: 
                switch(letter) {
                    default: return std::find(finalNodes.begin(), finalNodes.end(), state) != finalNodes.end();
                }
                break;
            case 1: 
                switch(letter) {
                    case '-': state = 0; break;
                    default: return std::find(finalNodes.begin(), finalNodes.end(), state) != finalNodes.end();
                }
                break;
            default: break;
        }
    }
    return false;
}
bool _502(Input *input){
    std::vector<int> finalNodes = {0};
    int state = 1; // 初始状态
    while(true) {
        char letter = (input->getInput())[0];
        switch(state) {
            case 0: 
                switch(letter) {
                    default: return std::find(finalNodes.begin(), finalNodes.end(), state) != finalNodes.end();
                }
                break;
            case 1: 
                switch(letter) {
                    case '*': state = 0; break;
                    default: return std::find(finalNodes.begin(), finalNodes.end(), state) != finalNodes.end();
                }
                break;
            default: break;
        }
    }
    return false;
}
bool _503(Input *input){
    std::vector<int> finalNodes = {0};
    int state = 1; // 初始状态
    while(true) {
        char letter = (input->getInput())[0];
        switch(state) {
            case 0: 
                switch(letter) {
                    default: return std::find(finalNodes.begin(), finalNodes.end(), state) != finalNodes.end();
                }
                break;
            case 1: 
                switch(letter) {
                    case '/': state = 0; break;
                    default: return std::find(finalNodes.begin(), finalNodes.end(), state) != finalNodes.end();
                }
                break;
            default: break;
        }
    }
    return false;
}
bool _504(Input *input){
    std::vector<int> finalNodes = {0};
    int state = 1; // 初始状态
    while(true) {
        char letter = (input->getInput())[0];
        switch(state) {
            case 0: 
                switch(letter) {
                    default: return std::find(finalNodes.begin(), finalNodes.end(), state) != finalNodes.end();
                }
                break;
            case 1: 
                switch(letter) {
                    case '%': state = 0; break;
                    default: return std::find(finalNodes.begin(), finalNodes.end(), state) != finalNodes.end();
                }
                break;
            default: break;
        }
    }
    return false;
}
bool _505(Input *input){
    std::vector<int> finalNodes = {0};
    int state = 1; // 初始状态
    while(true) {
        char letter = (input->getInput())[0];
        switch(state) {
            case 0: 
                switch(letter) {
                    default: return std::find(finalNodes.begin(), finalNodes.end(), state) != finalNodes.end();
                }
                break;
            case 1: 
                switch(letter) {
                    case '^': state = 0; break;
                    default: return std::find(finalNodes.begin(), finalNodes.end(), state) != finalNodes.end();
                }
                break;
            default: break;
        }
    }
    return false;
}
bool _506(Input *input){
    std::vector<int> finalNodes = {0};
    int state = 2; // 初始状态
    while(true) {
        char letter = (input->getInput())[0];
        switch(state) {
            case 0: 
                switch(letter) {
                    default: return std::find(finalNodes.begin(), finalNodes.end(), state) != finalNodes.end();
                }
                break;
            case 1: 
                switch(letter) {
                    case '>': state = 0; break;
                    default: return std::find(finalNodes.begin(), finalNodes.end(), state) != finalNodes.end();
                }
                break;
            case 2: 
                switch(letter) {
                    case '<': state = 1; break;
                    default: return std::find(finalNodes.begin(), finalNodes.end(), state) != finalNodes.end();
                }
                break;
            default: break;
        }
    }
    return false;
}
bool _507(Input *input){
    std::vector<int> finalNodes = {0};
    int state = 2; // 初始状态
    while(true) {
        char letter = (input->getInput())[0];
        switch(state) {
            case 0: 
                switch(letter) {
                    default: return std::find(finalNodes.begin(), finalNodes.end(), state) != finalNodes.end();
                }
                break;
            case 1: 
                switch(letter) {
                    case '=': state = 0; break;
                    default: return std::find(finalNodes.begin(), finalNodes.end(), state) != finalNodes.end();
                }
                break;
            case 2: 
                switch(letter) {
                    case '<': state = 1; break;
                    default: return std::find(finalNodes.begin(), finalNodes.end(), state) != finalNodes.end();
                }
                break;
            default: break;
        }
    }
    return false;
}
bool _508(Input *input){
    std::vector<int> finalNodes = {0};
    int state = 1; // 初始状态
    while(true) {
        char letter = (input->getInput())[0];
        switch(state) {
            case 0: 
                switch(letter) {
                    default: return std::find(finalNodes.begin(), finalNodes.end(), state) != finalNodes.end();
                }
                break;
            case 1: 
                switch(letter) {
                    case '<': state = 0; break;
                    default: return std::find(finalNodes.begin(), finalNodes.end(), state) != finalNodes.end();
                }
                break;
            default: break;
        }
    }
    return false;
}
bool _509(Input *input){
    std::vector<int> finalNodes = {0};
    int state = 2; // 初始状态
    while(true) {
        char letter = (input->getInput())[0];
        switch(state) {
            case 0: 
                switch(letter) {
                    default: return std::find(finalNodes.begin(), finalNodes.end(), state) != finalNodes.end();
                }
                break;
            case 1: 
                switch(letter) {
                    case '=': state = 0; break;
                    default: return std::find(finalNodes.begin(), finalNodes.end(), state) != finalNodes.end();
                }
                break;
            case 2: 
                switch(letter) {
                    case '>': state = 1; break;
                    default: return std::find(finalNodes.begin(), finalNodes.end(), state) != finalNodes.end();
                }
                break;
            default: break;
        }
    }
    return false;
}
bool _510(Input *input){
    std::vector<int> finalNodes = {0};
    int state = 1; // 初始状态
    while(true) {
        char letter = (input->getInput())[0];
        switch(state) {
            case 0: 
                switch(letter) {
                    default: return std::find(finalNodes.begin(), finalNodes.end(), state) != finalNodes.end();
                }
                break;
            case 1: 
                switch(letter) {
                    case '>': state = 0; break;
                    default: return std::find(finalNodes.begin(), finalNodes.end(), state) != finalNodes.end();
                }
                break;
            default: break;
        }
    }
    return false;
}
bool _511(Input *input){
    std::vector<int> finalNodes = {0};
    int state = 1; // 初始状态
    while(true) {
        char letter = (input->getInput())[0];
        switch(state) {
            case 0: 
                switch(letter) {
                    default: return std::find(finalNodes.begin(), finalNodes.end(), state) != finalNodes.end();
                }
                break;
            case 1: 
                switch(letter) {
                    case '=': state = 0; break;
                    default: return std::find(finalNodes.begin(), finalNodes.end(), state) != finalNodes.end();
                }
                break;
            default: break;
        }
    }
    return false;
}
bool _512(Input *input){
    std::vector<int> finalNodes = {0};
    int state = 1; // 初始状态
    while(true) {
        char letter = (input->getInput())[0];
        switch(state) {
            case 0: 
                switch(letter) {
                    default: return std::find(finalNodes.begin(), finalNodes.end(), state) != finalNodes.end();
                }
                break;
            case 1: 
                switch(letter) {
                    case ';': state = 0; break;
                    default: return std::find(finalNodes.begin(), finalNodes.end(), state) != finalNodes.end();
                }
                break;
            default: break;
        }
    }
    return false;
}
bool _513(Input *input){
    std::vector<int> finalNodes = {0};
    int state = 2; // 初始状态
    while(true) {
        char letter = (input->getInput())[0];
        switch(state) {
            case 0: 
                switch(letter) {
                    default: return std::find(finalNodes.begin(), finalNodes.end(), state) != finalNodes.end();
                }
                break;
            case 1: 
                switch(letter) {
                    case '=': state = 0; break;
                    default: return std::find(finalNodes.begin(), finalNodes.end(), state) != finalNodes.end();
                }
                break;
            case 2: 
                switch(letter) {
                    case ':': state = 1; break;
                    default: return std::find(finalNodes.begin(), finalNodes.end(), state) != finalNodes.end();
                }
                break;
            default: break;
        }
    }
    return false;
}
bool _10(Input *input){
    std::vector<int> finalNodes = {6, 45, 10, 14, 0, 5, 21, 22, 12, 2, 7, 8, 56, 19, 33, 41, 9, 13, 16, 54, 86, 20, 49, 18, 46, 17, 52, 11, 62, 98, 83, 60, 100, 69, 4, 103, 3, 1, 15, 82, 70, 44, 81, 87, 57, 55, 53, 36, 88, 51, 77, 50, 102, 25, 35, 73, 63, 58, 71, 79, 108, 78, 107, 48, 106, 47, 105, 104, 72, 101, 42, 30, 89, 95, 84, 26, 85, 91, 32, 23, 24, 27, 90, 31, 65, 94, 67, 96, 37, 97, 38, 99, 40, 113, 112, 110, 59, 61, 68, 76, 80, 28, 92, 93, 34, 109, 64, 75, 39, 66, 43, 29, 111, 74};
    int state = 114; // 初始状态
    while(true) {
        char letter = (input->getInput())[0];
        switch(state) {
            case 0: 
                switch(letter) {
                    case 'J': state = 24; break;
                    case 't': state = 25; break;
                    case '0': state = 93; break;
                    case 'V': state = 96; break;
                    case '1': state = 100; break;
                    case 'y': state = 104; break;
                    case '4': state = 65; break;
                    case 'x': state = 71; break;
                    case 'F': state = 77; break;
                    case 'Z': state = 58; break;
                    case 'I': state = 67; break;
                    case 'e': state = 73; break;
                    case 'R': state = 112; break;
                    case 'i': state = 68; break;
                    case 'n': state = 82; break;
                    case 'B': state = 81; break;
                    case '9': state = 44; break;
                    case 'L': state = 60; break;
                    case 'H': state = 69; break;
                    case 'h': state = 111; break;
                    case 'C': state = 88; break;
                    case 'q': state = 74; break;
                    case '3': state = 23; break;
                    case 'N': state = 83; break;
                    case 'S': state = 113; break;
                    case '5': state = 62; break;
                    case '2': state = 72; break;
                    case 'f': state = 91; break;
                    case 'D': state = 87; break;
                    case 'k': state = 89; break;
                    case 'z': state = 102; break;
                    case 'p': state = 94; break;
                    case 'U': state = 108; break;
                    case 'M': state = 63; break;
                    case 'm': state = 79; break;
                    case 'E': state = 70; break;
                    case 's': state = 59; break;
                    case 'X': state = 109; break;
                    case 'A': state = 78; break;
                    case 'g': state = 80; break;
                    case 'b': state = 28; break;
                    case '6': state = 27; break;
                    case 'W': state = 98; break;
                    case 'G': state = 105; break;
                    case 'Q': state = 95; break;
                    case 'c': state = 106; break;
                    case '7': state = 107; break;
                    case 'r': state = 26; break;
                    case 'd': state = 90; break;
                    case 'P': state = 61; break;
                    case 'T': state = 103; break;
                    case 'u': state = 92; break;
                    case '8': state = 85; break;
                    case 'Y': state = 97; break;
                    case 'o': state = 101; break;
                    case 'l': state = 76; break;
                    case 'v': state = 99; break;
                    case 'j': state = 110; break;
                    case 'w': state = 84; break;
                    case 'K': state = 75; break;
                    case 'O': state = 64; break;
                    case 'a': state = 66; break;
                    default: return std::find(finalNodes.begin(), finalNodes.end(), state) != finalNodes.end();
                }
                break;
            case 1: 
                switch(letter) {
                    case 'J': state = 24; break;
                    case 'X': state = 109; break;
                    case 'a': state = 66; break;
                    case 'C': state = 88; break;
                    case 'E': state = 70; break;
                    case 'T': state = 103; break;
                    case 't': state = 25; break;
                    case 'e': state = 73; break;
                    case 's': state = 59; break;
                    case '1': state = 100; break;
                    case 'z': state = 102; break;
                    case '2': state = 72; break;
                    case 'A': state = 78; break;
                    case '9': state = 44; break;
                    case 'f': state = 91; break;
                    case 'i': state = 68; break;
                    case 'm': state = 79; break;
                    case 'N': state = 83; break;
                    case 'H': state = 69; break;
                    case '4': state = 65; break;
                    case 'L': state = 60; break;
                    case 'P': state = 61; break;
                    case 'U': state = 108; break;
                    case 'u': state = 92; break;
                    case 'n': state = 82; break;
                    case 'w': state = 84; break;
                    case 'S': state = 113; break;
                    case 'g': state = 80; break;
                    case 'G': state = 105; break;
                    case 'k': state = 89; break;
                    case 'R': state = 112; break;
                    case 'V': state = 96; break;
                    case 'c': state = 106; break;
                    case '3': state = 23; break;
                    case 'p': state = 94; break;
                    case 'Y': state = 97; break;
                    case 'D': state = 87; break;
                    case 'y': state = 104; break;
                    case 'x': state = 71; break;
                    case 'q': state = 74; break;
                    case 'Z': state = 58; break;
                    case 'I': state = 67; break;
                    case 'M': state = 63; break;
                    case 'l': state = 76; break;
                    case '6': state = 27; break;
                    case 'B': state = 81; break;
                    case '8': state = 85; break;
                    case 'b': state = 28; break;
                    case 'Q': state = 95; break;
                    case 'F': state = 77; break;
                    case '7': state = 107; break;
                    case '0': state = 93; break;
                    case 'd': state = 90; break;
                    case 'r': state = 26; break;
                    case '5': state = 62; break;
                    case 'O': state = 64; break;
                    case 'h': state = 111; break;
                    case 'W': state = 98; break;
                    case 'j': state = 110; break;
                    case 'K': state = 75; break;
                    case 'v': state = 99; break;
                    case 'o': state = 101; break;
                    default: return std::find(finalNodes.begin(), finalNodes.end(), state) != finalNodes.end();
                }
                break;
            case 2: 
                switch(letter) {
                    case 'L': state = 60; break;
                    case 'X': state = 109; break;
                    case 'O': state = 64; break;
                    case 'h': state = 111; break;
                    case '5': state = 62; break;
                    case 'v': state = 99; break;
                    case 'e': state = 73; break;
                    case 'V': state = 96; break;
                    case 'S': state = 113; break;
                    case 'B': state = 81; break;
                    case 't': state = 25; break;
                    case 'Y': state = 97; break;
                    case 'n': state = 82; break;
                    case 'l': state = 76; break;
                    case 'E': state = 70; break;
                    case 'i': state = 68; break;
                    case 'P': state = 61; break;
                    case 's': state = 59; break;
                    case 'R': state = 112; break;
                    case 'M': state = 63; break;
                    case 'm': state = 79; break;
                    case '2': state = 72; break;
                    case 'A': state = 78; break;
                    case 'Z': state = 58; break;
                    case 'q': state = 74; break;
                    case 'U': state = 108; break;
                    case '7': state = 107; break;
                    case '4': state = 65; break;
                    case 'D': state = 87; break;
                    case 'c': state = 106; break;
                    case 'w': state = 84; break;
                    case 'g': state = 80; break;
                    case 'F': state = 77; break;
                    case 'x': state = 71; break;
                    case 'b': state = 28; break;
                    case 'I': state = 67; break;
                    case 'T': state = 103; break;
                    case 'H': state = 69; break;
                    case 'u': state = 92; break;
                    case 'k': state = 89; break;
                    case 'G': state = 105; break;
                    case 'Q': state = 95; break;
                    case 'f': state = 91; break;
                    case '9': state = 44; break;
                    case 'y': state = 104; break;
                    case '3': state = 23; break;
                    case 'J': state = 24; break;
                    case 'p': state = 94; break;
                    case 'a': state = 66; break;
                    case 'N': state = 83; break;
                    case '8': state = 85; break;
                    case 'r': state = 26; break;
                    case '0': state = 93; break;
                    case 'z': state = 102; break;
                    case '6': state = 27; break;
                    case '1': state = 100; break;
                    case 'C': state = 88; break;
                    case 'o': state = 101; break;
                    case 'd': state = 90; break;
                    case 'W': state = 98; break;
                    case 'j': state = 110; break;
                    case 'K': state = 75; break;
                    default: return std::find(finalNodes.begin(), finalNodes.end(), state) != finalNodes.end();
                }
                break;
            case 3: 
                switch(letter) {
                    case 'L': state = 60; break;
                    case 'O': state = 64; break;
                    case 'X': state = 109; break;
                    case '9': state = 44; break;
                    case 'N': state = 83; break;
                    case '5': state = 62; break;
                    case 'h': state = 111; break;
                    case 'V': state = 96; break;
                    case 'e': state = 73; break;
                    case 'E': state = 70; break;
                    case 'n': state = 82; break;
                    case 'S': state = 113; break;
                    case '1': state = 100; break;
                    case 't': state = 25; break;
                    case 'i': state = 68; break;
                    case 'g': state = 80; break;
                    case 'l': state = 76; break;
                    case 'P': state = 61; break;
                    case 's': state = 59; break;
                    case 'R': state = 112; break;
                    case 'Z': state = 58; break;
                    case '2': state = 72; break;
                    case 'm': state = 79; break;
                    case 'x': state = 71; break;
                    case '4': state = 65; break;
                    case 'y': state = 104; break;
                    case 'D': state = 87; break;
                    case 'p': state = 94; break;
                    case 'f': state = 91; break;
                    case 'k': state = 89; break;
                    case '3': state = 23; break;
                    case 'A': state = 78; break;
                    case 'I': state = 67; break;
                    case 'J': state = 24; break;
                    case 'Y': state = 97; break;
                    case 'F': state = 77; break;
                    case 'B': state = 81; break;
                    case 'b': state = 28; break;
                    case 'c': state = 106; break;
                    case 'M': state = 63; break;
                    case 'U': state = 108; break;
                    case 'G': state = 105; break;
                    case 'H': state = 69; break;
                    case 'r': state = 26; break;
                    case 'q': state = 74; break;
                    case 'u': state = 92; break;
                    case 'a': state = 66; break;
                    case 'Q': state = 95; break;
                    case '8': state = 85; break;
                    case 'z': state = 102; break;
                    case 'C': state = 88; break;
                    case 'v': state = 99; break;
                    case 'd': state = 90; break;
                    case '0': state = 93; break;
                    case '6': state = 27; break;
                    case 'W': state = 98; break;
                    case '7': state = 107; break;
                    case 'T': state = 103; break;
                    case 'j': state = 110; break;
                    case 'o': state = 101; break;
                    case 'K': state = 75; break;
                    case 'w': state = 84; break;
                    default: return std::find(finalNodes.begin(), finalNodes.end(), state) != finalNodes.end();
                }
                break;
            case 4: 
                switch(letter) {
                    case 'T': state = 103; break;
                    case 'y': state = 104; break;
                    case '4': state = 65; break;
                    case 'x': state = 71; break;
                    case 'i': state = 68; break;
                    case 'B': state = 81; break;
                    case 'I': state = 67; break;
                    case 'n': state = 82; break;
                    case 'F': state = 77; break;
                    case 'K': state = 75; break;
                    case 'L': state = 60; break;
                    case 'C': state = 88; break;
                    case 'a': state = 66; break;
                    case 'U': state = 108; break;
                    case 'O': state = 64; break;
                    case 'W': state = 98; break;
                    case '5': state = 62; break;
                    case 'P': state = 61; break;
                    case '1': state = 100; break;
                    case 'w': state = 84; break;
                    case 'l': state = 76; break;
                    case 'R': state = 112; break;
                    case 'p': state = 94; break;
                    case 'm': state = 79; break;
                    case '2': state = 72; break;
                    case 'V': state = 96; break;
                    case 'f': state = 91; break;
                    case 'r': state = 26; break;
                    case '3': state = 23; break;
                    case 'u': state = 92; break;
                    case 'k': state = 89; break;
                    case 'q': state = 74; break;
                    case 'X': state = 109; break;
                    case 'E': state = 70; break;
                    case 'M': state = 63; break;
                    case 'e': state = 73; break;
                    case 'g': state = 80; break;
                    case '7': state = 107; break;
                    case 'J': state = 24; break;
                    case 'N': state = 83; break;
                    case 'Y': state = 97; break;
                    case '8': state = 85; break;
                    case 'G': state = 105; break;
                    case 'S': state = 113; break;
                    case 'H': state = 69; break;
                    case 'z': state = 102; break;
                    case '9': state = 44; break;
                    case 'b': state = 28; break;
                    case 's': state = 59; break;
                    case 'D': state = 87; break;
                    case 'd': state = 90; break;
                    case '0': state = 93; break;
                    case 'c': state = 106; break;
                    case '6': state = 27; break;
                    case 't': state = 25; break;
                    case 'Z': state = 58; break;
                    case 'j': state = 110; break;
                    case 'A': state = 78; break;
                    case 'Q': state = 95; break;
                    case 'v': state = 99; break;
                    case 'h': state = 111; break;
                    case 'o': state = 101; break;
                    default: return std::find(finalNodes.begin(), finalNodes.end(), state) != finalNodes.end();
                }
                break;
            case 5: 
                switch(letter) {
                    case 'u': state = 92; break;
                    case '0': state = 93; break;
                    case 'V': state = 96; break;
                    case 'T': state = 103; break;
                    case '4': state = 65; break;
                    case 'x': state = 71; break;
                    case 'F': state = 77; break;
                    case 'I': state = 67; break;
                    case 'i': state = 68; break;
                    case 'n': state = 82; break;
                    case 'B': state = 81; break;
                    case 'y': state = 104; break;
                    case 'K': state = 75; break;
                    case 'C': state = 88; break;
                    case '8': state = 85; break;
                    case 'L': state = 60; break;
                    case 'X': state = 109; break;
                    case 'U': state = 108; break;
                    case 'O': state = 64; break;
                    case 'q': state = 74; break;
                    case 'a': state = 66; break;
                    case 'J': state = 24; break;
                    case 'c': state = 106; break;
                    case 'P': state = 61; break;
                    case '1': state = 100; break;
                    case 'l': state = 76; break;
                    case 'f': state = 91; break;
                    case '5': state = 62; break;
                    case 'm': state = 79; break;
                    case 'r': state = 26; break;
                    case 'W': state = 98; break;
                    case 'D': state = 87; break;
                    case 's': state = 59; break;
                    case 'S': state = 113; break;
                    case 'e': state = 73; break;
                    case 'M': state = 63; break;
                    case 'N': state = 83; break;
                    case 'k': state = 89; break;
                    case 'z': state = 102; break;
                    case 'g': state = 80; break;
                    case 'b': state = 28; break;
                    case 'G': state = 105; break;
                    case '6': state = 27; break;
                    case '3': state = 23; break;
                    case 'p': state = 94; break;
                    case 'd': state = 90; break;
                    case '9': state = 44; break;
                    case '7': state = 107; break;
                    case 'Z': state = 58; break;
                    case 'R': state = 112; break;
                    case 't': state = 25; break;
                    case 'Y': state = 97; break;
                    case 'E': state = 70; break;
                    case 'A': state = 78; break;
                    case 'j': state = 110; break;
                    case 'Q': state = 95; break;
                    case '2': state = 72; break;
                    case 'H': state = 69; break;
                    case 'v': state = 99; break;
                    case 'o': state = 101; break;
                    case 'w': state = 84; break;
                    case 'h': state = 111; break;
                    default: return std::find(finalNodes.begin(), finalNodes.end(), state) != finalNodes.end();
                }
                break;
            case 6: 
                switch(letter) {
                    case 'u': state = 92; break;
                    case '0': state = 93; break;
                    case 'V': state = 96; break;
                    case 'T': state = 103; break;
                    case 'y': state = 104; break;
                    case '4': state = 65; break;
                    case 'i': state = 68; break;
                    case 'n': state = 82; break;
                    case 'B': state = 81; break;
                    case 'I': state = 67; break;
                    case 'F': state = 77; break;
                    case 'L': state = 60; break;
                    case 'K': state = 75; break;
                    case 'X': state = 109; break;
                    case 'U': state = 108; break;
                    case 'O': state = 64; break;
                    case 'q': state = 74; break;
                    case 'J': state = 24; break;
                    case 'c': state = 106; break;
                    case '2': state = 72; break;
                    case 'a': state = 66; break;
                    case 'l': state = 76; break;
                    case 'P': state = 61; break;
                    case 'f': state = 91; break;
                    case '1': state = 100; break;
                    case '5': state = 62; break;
                    case 't': state = 25; break;
                    case 'Z': state = 58; break;
                    case 'D': state = 87; break;
                    case 'S': state = 113; break;
                    case '8': state = 85; break;
                    case 'x': state = 71; break;
                    case 'Q': state = 95; break;
                    case 'r': state = 26; break;
                    case 'g': state = 80; break;
                    case 'E': state = 70; break;
                    case 'z': state = 102; break;
                    case 'k': state = 89; break;
                    case 'e': state = 73; break;
                    case 'M': state = 63; break;
                    case 'N': state = 83; break;
                    case 'w': state = 84; break;
                    case '9': state = 44; break;
                    case 'W': state = 98; break;
                    case 'm': state = 79; break;
                    case '7': state = 107; break;
                    case '6': state = 27; break;
                    case 'R': state = 112; break;
                    case 'H': state = 69; break;
                    case 'G': state = 105; break;
                    case 's': state = 59; break;
                    case '3': state = 23; break;
                    case 'Y': state = 97; break;
                    case 'b': state = 28; break;
                    case 'd': state = 90; break;
                    case 'j': state = 110; break;
                    case 'A': state = 78; break;
                    case 'p': state = 94; break;
                    case 'C': state = 88; break;
                    case 'h': state = 111; break;
                    case 'o': state = 101; break;
                    case 'v': state = 99; break;
                    default: return std::find(finalNodes.begin(), finalNodes.end(), state) != finalNodes.end();
                }
                break;
            case 7: 
                switch(letter) {
                    case 't': state = 25; break;
                    case '0': state = 93; break;
                    case 'V': state = 96; break;
                    case '1': state = 100; break;
                    case '4': state = 65; break;
                    case 'B': state = 81; break;
                    case 'n': state = 82; break;
                    case 'R': state = 112; break;
                    case 'a': state = 66; break;
                    case 'F': state = 77; break;
                    case 'I': state = 67; break;
                    case 'Z': state = 58; break;
                    case 'i': state = 68; break;
                    case 'y': state = 104; break;
                    case '8': state = 85; break;
                    case 'J': state = 24; break;
                    case '5': state = 62; break;
                    case 'L': state = 60; break;
                    case 'H': state = 69; break;
                    case 'h': state = 111; break;
                    case 'q': state = 74; break;
                    case 'P': state = 61; break;
                    case 'r': state = 26; break;
                    case 'U': state = 108; break;
                    case 'v': state = 99; break;
                    case '3': state = 23; break;
                    case 'N': state = 83; break;
                    case 'E': state = 70; break;
                    case 'M': state = 63; break;
                    case 'X': state = 109; break;
                    case 'k': state = 89; break;
                    case 'e': state = 73; break;
                    case 'g': state = 80; break;
                    case 'D': state = 87; break;
                    case 'm': state = 79; break;
                    case 'S': state = 113; break;
                    case 'O': state = 64; break;
                    case 'T': state = 103; break;
                    case 'b': state = 28; break;
                    case 'c': state = 106; break;
                    case 'W': state = 98; break;
                    case 'z': state = 102; break;
                    case '2': state = 72; break;
                    case '6': state = 27; break;
                    case 'p': state = 94; break;
                    case 'x': state = 71; break;
                    case 's': state = 59; break;
                    case 'u': state = 92; break;
                    case 'C': state = 88; break;
                    case 'A': state = 78; break;
                    case '7': state = 107; break;
                    case 'G': state = 105; break;
                    case 'd': state = 90; break;
                    case 'j': state = 110; break;
                    case 'K': state = 75; break;
                    case 'Q': state = 95; break;
                    case 'Y': state = 97; break;
                    case 'f': state = 91; break;
                    case '9': state = 44; break;
                    case 'o': state = 101; break;
                    case 'w': state = 84; break;
                    case 'l': state = 76; break;
                    default: return std::find(finalNodes.begin(), finalNodes.end(), state) != finalNodes.end();
                }
                break;
            case 8: 
                switch(letter) {
                    case 'x': state = 71; break;
                    case 'Z': state = 58; break;
                    case '0': state = 93; break;
                    case 'V': state = 96; break;
                    case '1': state = 100; break;
                    case 'B': state = 81; break;
                    case 'n': state = 82; break;
                    case 'R': state = 112; break;
                    case 'e': state = 73; break;
                    case 'I': state = 67; break;
                    case 'F': state = 77; break;
                    case '4': state = 65; break;
                    case 'i': state = 68; break;
                    case 'E': state = 70; break;
                    case 'y': state = 104; break;
                    case '8': state = 85; break;
                    case 'h': state = 111; break;
                    case 'J': state = 24; break;
                    case 'L': state = 60; break;
                    case 'H': state = 69; break;
                    case '5': state = 62; break;
                    case 'K': state = 75; break;
                    case 'S': state = 113; break;
                    case 'U': state = 108; break;
                    case 'P': state = 61; break;
                    case 'm': state = 79; break;
                    case 'r': state = 26; break;
                    case 'f': state = 91; break;
                    case 'N': state = 83; break;
                    case 'g': state = 80; break;
                    case 'd': state = 90; break;
                    case '3': state = 23; break;
                    case 'w': state = 84; break;
                    case 's': state = 59; break;
                    case 'X': state = 109; break;
                    case 'M': state = 63; break;
                    case 'l': state = 76; break;
                    case 'k': state = 89; break;
                    case '9': state = 44; break;
                    case 'T': state = 103; break;
                    case 'z': state = 102; break;
                    case 'q': state = 74; break;
                    case 'v': state = 99; break;
                    case 'C': state = 88; break;
                    case 'a': state = 66; break;
                    case '7': state = 107; break;
                    case 'p': state = 94; break;
                    case '2': state = 72; break;
                    case 'b': state = 28; break;
                    case 'A': state = 78; break;
                    case 'G': state = 105; break;
                    case 'W': state = 98; break;
                    case 'c': state = 106; break;
                    case 'u': state = 92; break;
                    case 'j': state = 110; break;
                    case '6': state = 27; break;
                    case 'D': state = 87; break;
                    case 't': state = 25; break;
                    case 'Y': state = 97; break;
                    case 'o': state = 101; break;
                    case 'Q': state = 95; break;
                    case 'O': state = 64; break;
                    default: return std::find(finalNodes.begin(), finalNodes.end(), state) != finalNodes.end();
                }
                break;
            case 9: 
                switch(letter) {
                    case '0': state = 93; break;
                    case 'V': state = 96; break;
                    case '1': state = 100; break;
                    case 'x': state = 71; break;
                    case 'h': state = 111; break;
                    case '4': state = 65; break;
                    case 'i': state = 68; break;
                    case 'n': state = 82; break;
                    case 'B': state = 81; break;
                    case 'R': state = 112; break;
                    case 'e': state = 73; break;
                    case 'a': state = 66; break;
                    case 'Z': state = 58; break;
                    case 'I': state = 67; break;
                    case 'F': state = 77; break;
                    case 'y': state = 104; break;
                    case 'J': state = 24; break;
                    case 'K': state = 75; break;
                    case 'N': state = 83; break;
                    case 'l': state = 76; break;
                    case 'S': state = 113; break;
                    case 'L': state = 60; break;
                    case 'm': state = 79; break;
                    case 'f': state = 91; break;
                    case 'r': state = 26; break;
                    case 's': state = 59; break;
                    case '6': state = 27; break;
                    case 'g': state = 80; break;
                    case '8': state = 85; break;
                    case '3': state = 23; break;
                    case 'X': state = 109; break;
                    case 'Q': state = 95; break;
                    case 'M': state = 63; break;
                    case 'k': state = 89; break;
                    case 'c': state = 106; break;
                    case 'U': state = 108; break;
                    case 'b': state = 28; break;
                    case 'T': state = 103; break;
                    case 'q': state = 74; break;
                    case '9': state = 44; break;
                    case 'v': state = 99; break;
                    case 'P': state = 61; break;
                    case 'O': state = 64; break;
                    case 'p': state = 94; break;
                    case 'u': state = 92; break;
                    case 'A': state = 78; break;
                    case 'Y': state = 97; break;
                    case 'H': state = 69; break;
                    case 'z': state = 102; break;
                    case 'E': state = 70; break;
                    case 'd': state = 90; break;
                    case 'G': state = 105; break;
                    case 'W': state = 98; break;
                    case '7': state = 107; break;
                    case 'C': state = 88; break;
                    case 'j': state = 110; break;
                    case 'D': state = 87; break;
                    case 'o': state = 101; break;
                    case 't': state = 25; break;
                    case '2': state = 72; break;
                    case 'w': state = 84; break;
                    case '5': state = 62; break;
                    default: return std::find(finalNodes.begin(), finalNodes.end(), state) != finalNodes.end();
                }
                break;
            case 10: 
                switch(letter) {
                    case '0': state = 93; break;
                    case 'V': state = 96; break;
                    case '1': state = 100; break;
                    case 'B': state = 81; break;
                    case '4': state = 65; break;
                    case 'i': state = 68; break;
                    case 'n': state = 82; break;
                    case 'R': state = 112; break;
                    case 'e': state = 73; break;
                    case 'a': state = 66; break;
                    case 'x': state = 71; break;
                    case 'F': state = 77; break;
                    case 'I': state = 67; break;
                    case 'Z': state = 58; break;
                    case 'N': state = 83; break;
                    case 'y': state = 104; break;
                    case 'U': state = 108; break;
                    case 'K': state = 75; break;
                    case 'J': state = 24; break;
                    case 'h': state = 111; break;
                    case 'w': state = 84; break;
                    case 'l': state = 76; break;
                    case '5': state = 62; break;
                    case 'S': state = 113; break;
                    case 'E': state = 70; break;
                    case 'L': state = 60; break;
                    case 'm': state = 79; break;
                    case 'r': state = 26; break;
                    case 'o': state = 101; break;
                    case 'P': state = 61; break;
                    case 's': state = 59; break;
                    case 'g': state = 80; break;
                    case '3': state = 23; break;
                    case 'O': state = 64; break;
                    case 'M': state = 63; break;
                    case 'k': state = 89; break;
                    case '6': state = 27; break;
                    case 'v': state = 99; break;
                    case 'X': state = 109; break;
                    case 'z': state = 102; break;
                    case 'Y': state = 97; break;
                    case 'D': state = 87; break;
                    case 'C': state = 88; break;
                    case 'T': state = 103; break;
                    case '9': state = 44; break;
                    case '8': state = 85; break;
                    case 'p': state = 94; break;
                    case 'q': state = 74; break;
                    case 'W': state = 98; break;
                    case 'j': state = 110; break;
                    case '2': state = 72; break;
                    case 'c': state = 106; break;
                    case 'f': state = 91; break;
                    case 'A': state = 78; break;
                    case '7': state = 107; break;
                    case 'd': state = 90; break;
                    case 'u': state = 92; break;
                    case 'G': state = 105; break;
                    case 't': state = 25; break;
                    case 'Q': state = 95; break;
                    case 'H': state = 69; break;
                    case 'b': state = 28; break;
                    default: return std::find(finalNodes.begin(), finalNodes.end(), state) != finalNodes.end();
                }
                break;
            case 11: 
                switch(letter) {
                    case 'J': state = 24; break;
                    case '0': state = 93; break;
                    case 'V': state = 96; break;
                    case '1': state = 100; break;
                    case '4': state = 65; break;
                    case 'x': state = 71; break;
                    case 'B': state = 81; break;
                    case 'i': state = 68; break;
                    case 'n': state = 82; break;
                    case 'R': state = 112; break;
                    case 'e': state = 73; break;
                    case 'a': state = 66; break;
                    case 'F': state = 77; break;
                    case 'I': state = 67; break;
                    case 'Z': state = 58; break;
                    case 'y': state = 104; break;
                    case 'K': state = 75; break;
                    case '3': state = 23; break;
                    case '5': state = 62; break;
                    case 'w': state = 84; break;
                    case 'L': state = 60; break;
                    case 'h': state = 111; break;
                    case 'S': state = 113; break;
                    case 'E': state = 70; break;
                    case 'N': state = 83; break;
                    case '7': state = 107; break;
                    case 'm': state = 79; break;
                    case 'U': state = 108; break;
                    case 'f': state = 91; break;
                    case 's': state = 59; break;
                    case '8': state = 85; break;
                    case 'l': state = 76; break;
                    case 'p': state = 94; break;
                    case 'X': state = 109; break;
                    case '9': state = 44; break;
                    case 'M': state = 63; break;
                    case 'o': state = 101; break;
                    case 'v': state = 99; break;
                    case 'z': state = 102; break;
                    case 'C': state = 88; break;
                    case 'r': state = 26; break;
                    case 'P': state = 61; break;
                    case 'q': state = 74; break;
                    case 'D': state = 87; break;
                    case 'k': state = 89; break;
                    case 'c': state = 106; break;
                    case 'u': state = 92; break;
                    case 'W': state = 98; break;
                    case '6': state = 27; break;
                    case 'A': state = 78; break;
                    case '2': state = 72; break;
                    case 'd': state = 90; break;
                    case 'T': state = 103; break;
                    case 'H': state = 69; break;
                    case 'G': state = 105; break;
                    case 't': state = 25; break;
                    case 'g': state = 80; break;
                    case 'O': state = 64; break;
                    case 'Y': state = 97; break;
                    case 'Q': state = 95; break;
                    case 'j': state = 110; break;
                    case 'b': state = 28; break;
                    default: return std::find(finalNodes.begin(), finalNodes.end(), state) != finalNodes.end();
                }
                break;
            case 12: 
                switch(letter) {
                    case 'Z': state = 58; break;
                    case 't': state = 25; break;
                    case 'J': state = 24; break;
                    case '3': state = 23; break;
                    case '0': state = 93; break;
                    case 'V': state = 96; break;
                    case '1': state = 100; break;
                    case 'y': state = 104; break;
                    case 'i': state = 68; break;
                    case 'B': state = 81; break;
                    case '4': state = 65; break;
                    case 'n': state = 82; break;
                    case 'R': state = 112; break;
                    case 'a': state = 66; break;
                    case 'I': state = 67; break;
                    case 'F': state = 77; break;
                    case 'L': state = 60; break;
                    case 'S': state = 113; break;
                    case 'h': state = 111; break;
                    case 'E': state = 70; break;
                    case 'K': state = 75; break;
                    case 's': state = 59; break;
                    case 'm': state = 79; break;
                    case '9': state = 44; break;
                    case 'v': state = 99; break;
                    case 'w': state = 84; break;
                    case '8': state = 85; break;
                    case 'M': state = 63; break;
                    case 'p': state = 94; break;
                    case 'e': state = 73; break;
                    case 'P': state = 61; break;
                    case 'o': state = 101; break;
                    case '7': state = 107; break;
                    case 'O': state = 64; break;
                    case 'l': state = 76; break;
                    case 'r': state = 26; break;
                    case 'N': state = 83; break;
                    case 'b': state = 28; break;
                    case 'X': state = 109; break;
                    case 'U': state = 108; break;
                    case 'x': state = 71; break;
                    case 'Q': state = 95; break;
                    case 'q': state = 74; break;
                    case 'z': state = 102; break;
                    case 'f': state = 91; break;
                    case 'k': state = 89; break;
                    case 'W': state = 98; break;
                    case 'd': state = 90; break;
                    case 'c': state = 106; break;
                    case 'A': state = 78; break;
                    case 'T': state = 103; break;
                    case 'D': state = 87; break;
                    case 'C': state = 88; break;
                    case '2': state = 72; break;
                    case 'u': state = 92; break;
                    case '6': state = 27; break;
                    case 'H': state = 69; break;
                    case 'G': state = 105; break;
                    case '5': state = 62; break;
                    case 'g': state = 80; break;
                    case 'Y': state = 97; break;
                    case 'j': state = 110; break;
                    default: return std::find(finalNodes.begin(), finalNodes.end(), state) != finalNodes.end();
                }
                break;
            case 13: 
                switch(letter) {
                    case 'J': state = 24; break;
                    case 'f': state = 91; break;
                    case '0': state = 93; break;
                    case 'V': state = 96; break;
                    case '1': state = 100; break;
                    case 'Z': state = 58; break;
                    case 'I': state = 67; break;
                    case 'F': state = 77; break;
                    case 'a': state = 66; break;
                    case 'R': state = 112; break;
                    case 'B': state = 81; break;
                    case '4': state = 65; break;
                    case 'i': state = 68; break;
                    case 'n': state = 82; break;
                    case 't': state = 25; break;
                    case 'y': state = 104; break;
                    case 'N': state = 83; break;
                    case 'w': state = 84; break;
                    case 'S': state = 113; break;
                    case 'h': state = 111; break;
                    case 'E': state = 70; break;
                    case 'L': state = 60; break;
                    case '5': state = 62; break;
                    case 'M': state = 63; break;
                    case 'e': state = 73; break;
                    case 'm': state = 79; break;
                    case 'U': state = 108; break;
                    case '9': state = 44; break;
                    case 'X': state = 109; break;
                    case 'r': state = 26; break;
                    case 'K': state = 75; break;
                    case 'p': state = 94; break;
                    case 'Q': state = 95; break;
                    case '8': state = 85; break;
                    case 'P': state = 61; break;
                    case 'o': state = 101; break;
                    case 'k': state = 89; break;
                    case 'b': state = 28; break;
                    case 'v': state = 99; break;
                    case 'd': state = 90; break;
                    case 'l': state = 76; break;
                    case 's': state = 59; break;
                    case 'x': state = 71; break;
                    case 'c': state = 106; break;
                    case 'z': state = 102; break;
                    case 'q': state = 74; break;
                    case '7': state = 107; break;
                    case 'W': state = 98; break;
                    case '3': state = 23; break;
                    case 'A': state = 78; break;
                    case '2': state = 72; break;
                    case 'T': state = 103; break;
                    case 'D': state = 87; break;
                    case 'C': state = 88; break;
                    case 'u': state = 92; break;
                    case '6': state = 27; break;
                    case 'Y': state = 97; break;
                    case 'G': state = 105; break;
                    case 'H': state = 69; break;
                    case 'g': state = 80; break;
                    case 'O': state = 64; break;
                    case 'j': state = 110; break;
                    default: return std::find(finalNodes.begin(), finalNodes.end(), state) != finalNodes.end();
                }
                break;
            case 14: 
                switch(letter) {
                    case 'J': state = 24; break;
                    case 't': state = 25; break;
                    case 'f': state = 91; break;
                    case '0': state = 93; break;
                    case 'V': state = 96; break;
                    case '1': state = 100; break;
                    case 'y': state = 104; break;
                    case 'x': state = 71; break;
                    case 'Z': state = 58; break;
                    case 'I': state = 67; break;
                    case 'F': state = 77; break;
                    case 'a': state = 66; break;
                    case 'e': state = 73; break;
                    case 'R': state = 112; break;
                    case 'B': state = 81; break;
                    case '4': state = 65; break;
                    case 'i': state = 68; break;
                    case 'n': state = 82; break;
                    case 'P': state = 61; break;
                    case '3': state = 23; break;
                    case '5': state = 62; break;
                    case 'S': state = 113; break;
                    case 'E': state = 70; break;
                    case 'L': state = 60; break;
                    case 'N': state = 83; break;
                    case 'h': state = 111; break;
                    case 'H': state = 69; break;
                    case 'l': state = 76; break;
                    case 'j': state = 110; break;
                    case 'M': state = 63; break;
                    case '2': state = 72; break;
                    case 's': state = 59; break;
                    case 'W': state = 98; break;
                    case 'U': state = 108; break;
                    case 'O': state = 64; break;
                    case 'Q': state = 95; break;
                    case 'u': state = 92; break;
                    case 'p': state = 94; break;
                    case 'k': state = 89; break;
                    case 'v': state = 99; break;
                    case 'X': state = 109; break;
                    case 'r': state = 26; break;
                    case 'K': state = 75; break;
                    case '9': state = 44; break;
                    case '8': state = 85; break;
                    case 'q': state = 74; break;
                    case 'c': state = 106; break;
                    case 'z': state = 102; break;
                    case 'A': state = 78; break;
                    case 'm': state = 79; break;
                    case 'd': state = 90; break;
                    case 'D': state = 87; break;
                    case 'b': state = 28; break;
                    case 'T': state = 103; break;
                    case '7': state = 107; break;
                    case '6': state = 27; break;
                    case 'C': state = 88; break;
                    case 'G': state = 105; break;
                    case 'o': state = 101; break;
                    case 'Y': state = 97; break;
                    case 'g': state = 80; break;
                    case 'w': state = 84; break;
                    default: return std::find(finalNodes.begin(), finalNodes.end(), state) != finalNodes.end();
                }
                break;
            case 15: 
                switch(letter) {
                    case 'L': state = 60; break;
                    case 'X': state = 109; break;
                    case 'O': state = 64; break;
                    case 'v': state = 99; break;
                    case 'Z': state = 58; break;
                    case 'e': state = 73; break;
                    case 's': state = 59; break;
                    case 'M': state = 63; break;
                    case '5': state = 62; break;
                    case 'i': state = 68; break;
                    case '4': state = 65; break;
                    case 'c': state = 106; break;
                    case 'V': state = 96; break;
                    case 'J': state = 24; break;
                    case 'x': state = 71; break;
                    case 'Q': state = 95; break;
                    case 'I': state = 67; break;
                    case 't': state = 25; break;
                    case 'r': state = 26; break;
                    case 'S': state = 113; break;
                    case 'N': state = 83; break;
                    case 'u': state = 92; break;
                    case 'A': state = 78; break;
                    case 'j': state = 110; break;
                    case 'm': state = 79; break;
                    case 'U': state = 108; break;
                    case '9': state = 44; break;
                    case 'd': state = 90; break;
                    case 'G': state = 105; break;
                    case '3': state = 23; break;
                    case 'l': state = 76; break;
                    case 'P': state = 61; break;
                    case 'g': state = 80; break;
                    case 'T': state = 103; break;
                    case 'f': state = 91; break;
                    case '7': state = 107; break;
                    case 'Y': state = 97; break;
                    case 'k': state = 89; break;
                    case 'p': state = 94; break;
                    case 'D': state = 87; break;
                    case 'y': state = 104; break;
                    case '2': state = 72; break;
                    case 'q': state = 74; break;
                    case 'w': state = 84; break;
                    case 'R': state = 112; break;
                    case 'E': state = 70; break;
                    case 'b': state = 28; break;
                    case 'B': state = 81; break;
                    case 'z': state = 102; break;
                    case '0': state = 93; break;
                    case 'F': state = 77; break;
                    case 'o': state = 101; break;
                    case 'a': state = 66; break;
                    case '1': state = 100; break;
                    case '8': state = 85; break;
                    case 'C': state = 88; break;
                    case 'W': state = 98; break;
                    case 'h': state = 111; break;
                    case 'K': state = 75; break;
                    case '6': state = 27; break;
                    case 'n': state = 82; break;
                    case 'H': state = 69; break;
                    default: return std::find(finalNodes.begin(), finalNodes.end(), state) != finalNodes.end();
                }
                break;
            case 16: 
                switch(letter) {
                    case 'J': state = 24; break;
                    case '0': state = 93; break;
                    case 'V': state = 96; break;
                    case 'y': state = 104; break;
                    case '4': state = 65; break;
                    case 'U': state = 108; break;
                    case 'B': state = 81; break;
                    case 'w': state = 84; break;
                    case 'i': state = 68; break;
                    case 'n': state = 82; break;
                    case 'R': state = 112; break;
                    case 'F': state = 77; break;
                    case 'I': state = 67; break;
                    case 'Z': state = 58; break;
                    case 't': state = 25; break;
                    case 'H': state = 69; break;
                    case 'S': state = 113; break;
                    case 'h': state = 111; break;
                    case '5': state = 62; break;
                    case 'L': state = 60; break;
                    case 'f': state = 91; break;
                    case 'D': state = 87; break;
                    case 'E': state = 70; break;
                    case 'm': state = 79; break;
                    case 'x': state = 71; break;
                    case '7': state = 107; break;
                    case 'A': state = 78; break;
                    case 'r': state = 26; break;
                    case '8': state = 85; break;
                    case 'g': state = 80; break;
                    case 'z': state = 102; break;
                    case 'Y': state = 97; break;
                    case 'M': state = 63; break;
                    case 's': state = 59; break;
                    case 'O': state = 64; break;
                    case 'K': state = 75; break;
                    case 'k': state = 89; break;
                    case 'C': state = 88; break;
                    case 'Q': state = 95; break;
                    case 'p': state = 94; break;
                    case '6': state = 27; break;
                    case '3': state = 23; break;
                    case 'u': state = 92; break;
                    case 'N': state = 83; break;
                    case 'c': state = 106; break;
                    case '9': state = 44; break;
                    case 'X': state = 109; break;
                    case 'd': state = 90; break;
                    case 'e': state = 73; break;
                    case 'q': state = 74; break;
                    case 'T': state = 103; break;
                    case 'v': state = 99; break;
                    case 'a': state = 66; break;
                    case 'W': state = 98; break;
                    case 'G': state = 105; break;
                    case 'P': state = 61; break;
                    case 'o': state = 101; break;
                    case '2': state = 72; break;
                    case 'b': state = 28; break;
                    case 'l': state = 76; break;
                    case 'j': state = 110; break;
                    case '1': state = 100; break;
                    default: return std::find(finalNodes.begin(), finalNodes.end(), state) != finalNodes.end();
                }
                break;
            case 17: 
                switch(letter) {
                    case '9': state = 44; break;
                    case 'w': state = 84; break;
                    case 'J': state = 24; break;
                    case '0': state = 93; break;
                    case 'V': state = 96; break;
                    case 'y': state = 104; break;
                    case '4': state = 65; break;
                    case 'U': state = 108; break;
                    case 'i': state = 68; break;
                    case 'n': state = 82; break;
                    case 'B': state = 81; break;
                    case 'R': state = 112; break;
                    case 'Z': state = 58; break;
                    case 'I': state = 67; break;
                    case 'F': state = 77; break;
                    case 'W': state = 98; break;
                    case 'S': state = 113; break;
                    case 'h': state = 111; break;
                    case 'L': state = 60; break;
                    case '5': state = 62; break;
                    case 'H': state = 69; break;
                    case 'a': state = 66; break;
                    case 'N': state = 83; break;
                    case '7': state = 107; break;
                    case 'x': state = 71; break;
                    case 'm': state = 79; break;
                    case 'c': state = 106; break;
                    case '2': state = 72; break;
                    case 'p': state = 94; break;
                    case 's': state = 59; break;
                    case 'E': state = 70; break;
                    case '8': state = 85; break;
                    case 'X': state = 109; break;
                    case '3': state = 23; break;
                    case 'A': state = 78; break;
                    case 'z': state = 102; break;
                    case 'K': state = 75; break;
                    case 'g': state = 80; break;
                    case 'M': state = 63; break;
                    case 'r': state = 26; break;
                    case 'b': state = 28; break;
                    case 'k': state = 89; break;
                    case 'Q': state = 95; break;
                    case 'e': state = 73; break;
                    case 'u': state = 92; break;
                    case 'v': state = 99; break;
                    case 'd': state = 90; break;
                    case '6': state = 27; break;
                    case 'q': state = 74; break;
                    case 'G': state = 105; break;
                    case 'T': state = 103; break;
                    case 'P': state = 61; break;
                    case 'o': state = 101; break;
                    case 'C': state = 88; break;
                    case 'Y': state = 97; break;
                    case 'f': state = 91; break;
                    case 'O': state = 64; break;
                    case 'j': state = 110; break;
                    case '1': state = 100; break;
                    case 'l': state = 76; break;
                    case 't': state = 25; break;
                    case 'D': state = 87; break;
                    default: return std::find(finalNodes.begin(), finalNodes.end(), state) != finalNodes.end();
                }
                break;
            case 18: 
                switch(letter) {
                    case '9': state = 44; break;
                    case 'w': state = 84; break;
                    case 'J': state = 24; break;
                    case '0': state = 93; break;
                    case 'V': state = 96; break;
                    case 'y': state = 104; break;
                    case '4': state = 65; break;
                    case 'U': state = 108; break;
                    case 'B': state = 81; break;
                    case 'i': state = 68; break;
                    case 'n': state = 82; break;
                    case 'R': state = 112; break;
                    case 'F': state = 77; break;
                    case 'I': state = 67; break;
                    case 't': state = 25; break;
                    case 'W': state = 98; break;
                    case 'N': state = 83; break;
                    case 'L': state = 60; break;
                    case 'S': state = 113; break;
                    case '5': state = 62; break;
                    case 'H': state = 69; break;
                    case '7': state = 107; break;
                    case 'e': state = 73; break;
                    case 'h': state = 111; break;
                    case 'm': state = 79; break;
                    case '1': state = 100; break;
                    case 'X': state = 109; break;
                    case 'Z': state = 58; break;
                    case 'A': state = 78; break;
                    case 'Q': state = 95; break;
                    case 's': state = 59; break;
                    case '8': state = 85; break;
                    case 'K': state = 75; break;
                    case 'g': state = 80; break;
                    case 'z': state = 102; break;
                    case 'd': state = 90; break;
                    case 'M': state = 63; break;
                    case 'x': state = 71; break;
                    case 'r': state = 26; break;
                    case 'k': state = 89; break;
                    case '3': state = 23; break;
                    case 'b': state = 28; break;
                    case 'E': state = 70; break;
                    case 'p': state = 94; break;
                    case '6': state = 27; break;
                    case 'u': state = 92; break;
                    case 'c': state = 106; break;
                    case 'C': state = 88; break;
                    case 'G': state = 105; break;
                    case 'T': state = 103; break;
                    case '2': state = 72; break;
                    case 'a': state = 66; break;
                    case 'v': state = 99; break;
                    case 'D': state = 87; break;
                    case 'P': state = 61; break;
                    case 'o': state = 101; break;
                    case 'q': state = 74; break;
                    case 'Y': state = 97; break;
                    case 'f': state = 91; break;
                    case 'O': state = 64; break;
                    case 'j': state = 110; break;
                    case 'l': state = 76; break;
                    default: return std::find(finalNodes.begin(), finalNodes.end(), state) != finalNodes.end();
                }
                break;
            case 19: 
                switch(letter) {
                    case '9': state = 44; break;
                    case 'J': state = 24; break;
                    case '0': state = 93; break;
                    case 'V': state = 96; break;
                    case 'W': state = 98; break;
                    case '4': state = 65; break;
                    case 'U': state = 108; break;
                    case 'i': state = 68; break;
                    case 'n': state = 82; break;
                    case 'B': state = 81; break;
                    case 'R': state = 112; break;
                    case 'w': state = 84; break;
                    case 'I': state = 67; break;
                    case 'F': state = 77; break;
                    case 't': state = 25; break;
                    case 'y': state = 104; break;
                    case 'h': state = 111; break;
                    case 'S': state = 113; break;
                    case '7': state = 107; break;
                    case '5': state = 62; break;
                    case 'L': state = 60; break;
                    case 'D': state = 87; break;
                    case 'H': state = 69; break;
                    case 'c': state = 106; break;
                    case 'x': state = 71; break;
                    case 'm': state = 79; break;
                    case 'g': state = 80; break;
                    case 'Z': state = 58; break;
                    case 's': state = 59; break;
                    case 'l': state = 76; break;
                    case 'Q': state = 95; break;
                    case 'Y': state = 97; break;
                    case 'e': state = 73; break;
                    case '8': state = 85; break;
                    case 'X': state = 109; break;
                    case 'z': state = 102; break;
                    case 'M': state = 63; break;
                    case 'O': state = 64; break;
                    case 'K': state = 75; break;
                    case 'r': state = 26; break;
                    case 'b': state = 28; break;
                    case 'E': state = 70; break;
                    case 'T': state = 103; break;
                    case 'N': state = 83; break;
                    case 'k': state = 89; break;
                    case 'u': state = 92; break;
                    case 'A': state = 78; break;
                    case 'j': state = 110; break;
                    case 'p': state = 94; break;
                    case 'C': state = 88; break;
                    case 'a': state = 66; break;
                    case '6': state = 27; break;
                    case 'G': state = 105; break;
                    case 'd': state = 90; break;
                    case 'v': state = 99; break;
                    case 'P': state = 61; break;
                    case '3': state = 23; break;
                    case 'o': state = 101; break;
                    case 'f': state = 91; break;
                    case '2': state = 72; break;
                    case '1': state = 100; break;
                    case 'q': state = 74; break;
                    default: return std::find(finalNodes.begin(), finalNodes.end(), state) != finalNodes.end();
                }
                break;
            case 20: 
                switch(letter) {
                    case 'J': state = 24; break;
                    case '0': state = 93; break;
                    case 'V': state = 96; break;
                    case 'W': state = 98; break;
                    case '6': state = 27; break;
                    case 'y': state = 104; break;
                    case '4': state = 65; break;
                    case 'I': state = 67; break;
                    case 'F': state = 77; break;
                    case '5': state = 62; break;
                    case 'R': state = 112; break;
                    case 'B': state = 81; break;
                    case 'i': state = 68; break;
                    case 'n': state = 82; break;
                    case 'w': state = 84; break;
                    case 'h': state = 111; break;
                    case 'S': state = 113; break;
                    case '1': state = 100; break;
                    case 'x': state = 71; break;
                    case 'D': state = 87; break;
                    case 'H': state = 69; break;
                    case '7': state = 107; break;
                    case 'O': state = 64; break;
                    case 'q': state = 74; break;
                    case 'm': state = 79; break;
                    case 'L': state = 60; break;
                    case 'g': state = 80; break;
                    case 'U': state = 108; break;
                    case 'T': state = 103; break;
                    case 'Z': state = 58; break;
                    case 'd': state = 90; break;
                    case 'b': state = 28; break;
                    case 'l': state = 76; break;
                    case 'M': state = 63; break;
                    case 'Q': state = 95; break;
                    case 'Y': state = 97; break;
                    case 'K': state = 75; break;
                    case '2': state = 72; break;
                    case 'r': state = 26; break;
                    case 'X': state = 109; break;
                    case '8': state = 85; break;
                    case 'z': state = 102; break;
                    case 'k': state = 89; break;
                    case 's': state = 59; break;
                    case 'e': state = 73; break;
                    case 'p': state = 94; break;
                    case 'c': state = 106; break;
                    case 'N': state = 83; break;
                    case '9': state = 44; break;
                    case 'P': state = 61; break;
                    case 'A': state = 78; break;
                    case 't': state = 25; break;
                    case 'a': state = 66; break;
                    case 'G': state = 105; break;
                    case '3': state = 23; break;
                    case 'v': state = 99; break;
                    case 'E': state = 70; break;
                    case 'u': state = 92; break;
                    case 'j': state = 110; break;
                    case 'C': state = 88; break;
                    case 'o': state = 101; break;
                    case 'f': state = 91; break;
                    default: return std::find(finalNodes.begin(), finalNodes.end(), state) != finalNodes.end();
                }
                break;
            case 21: 
                switch(letter) {
                    case '6': state = 27; break;
                    case '9': state = 44; break;
                    case 'J': state = 24; break;
                    case '0': state = 93; break;
                    case 'V': state = 96; break;
                    case 'W': state = 98; break;
                    case 'y': state = 104; break;
                    case '4': state = 65; break;
                    case 'F': state = 77; break;
                    case 'I': state = 67; break;
                    case '5': state = 62; break;
                    case 'R': state = 112; break;
                    case 'i': state = 68; break;
                    case 'n': state = 82; break;
                    case 'B': state = 81; break;
                    case 'h': state = 111; break;
                    case 'S': state = 113; break;
                    case '8': state = 85; break;
                    case 'x': state = 71; break;
                    case 'H': state = 69; break;
                    case 'E': state = 70; break;
                    case '1': state = 100; break;
                    case '7': state = 107; break;
                    case 'U': state = 108; break;
                    case 'D': state = 87; break;
                    case 'L': state = 60; break;
                    case 'X': state = 109; break;
                    case 'Z': state = 58; break;
                    case 'Q': state = 95; break;
                    case 'd': state = 90; break;
                    case 'r': state = 26; break;
                    case '2': state = 72; break;
                    case 'N': state = 83; break;
                    case 'K': state = 75; break;
                    case 'z': state = 102; break;
                    case 'M': state = 63; break;
                    case 'w': state = 84; break;
                    case 'g': state = 80; break;
                    case 'k': state = 89; break;
                    case 'C': state = 88; break;
                    case 'O': state = 64; break;
                    case 't': state = 25; break;
                    case 's': state = 59; break;
                    case 'e': state = 73; break;
                    case 'b': state = 28; break;
                    case 'p': state = 94; break;
                    case 'c': state = 106; break;
                    case 'A': state = 78; break;
                    case 'Y': state = 97; break;
                    case 'G': state = 105; break;
                    case 'T': state = 103; break;
                    case 'a': state = 66; break;
                    case 'o': state = 101; break;
                    case 'u': state = 92; break;
                    case '3': state = 23; break;
                    case 'v': state = 99; break;
                    case 'P': state = 61; break;
                    case 'f': state = 91; break;
                    case 'j': state = 110; break;
                    case 'l': state = 76; break;
                    case 'm': state = 79; break;
                    case 'q': state = 74; break;
                    default: return std::find(finalNodes.begin(), finalNodes.end(), state) != finalNodes.end();
                }
                break;
            case 22: 
                switch(letter) {
                    case '9': state = 44; break;
                    case 'J': state = 24; break;
                    case '0': state = 93; break;
                    case 'V': state = 96; break;
                    case 'W': state = 98; break;
                    case 'y': state = 104; break;
                    case '4': state = 65; break;
                    case 'i': state = 68; break;
                    case 'n': state = 82; break;
                    case 'B': state = 81; break;
                    case 'R': state = 112; break;
                    case 'I': state = 67; break;
                    case 'F': state = 77; break;
                    case 'h': state = 111; break;
                    case 'H': state = 69; break;
                    case 'S': state = 113; break;
                    case '8': state = 85; break;
                    case '1': state = 100; break;
                    case '7': state = 107; break;
                    case 'O': state = 64; break;
                    case 'D': state = 87; break;
                    case 'E': state = 70; break;
                    case 'U': state = 108; break;
                    case 'm': state = 79; break;
                    case 'x': state = 71; break;
                    case 'X': state = 109; break;
                    case 'Z': state = 58; break;
                    case '5': state = 62; break;
                    case 'r': state = 26; break;
                    case '2': state = 72; break;
                    case 'L': state = 60; break;
                    case 'Y': state = 97; break;
                    case 'M': state = 63; break;
                    case 'Q': state = 95; break;
                    case 'g': state = 80; break;
                    case 'C': state = 88; break;
                    case 's': state = 59; break;
                    case 'b': state = 28; break;
                    case 'p': state = 94; break;
                    case 'P': state = 61; break;
                    case 'u': state = 92; break;
                    case '6': state = 27; break;
                    case 'e': state = 73; break;
                    case 'z': state = 102; break;
                    case 'G': state = 105; break;
                    case 'N': state = 83; break;
                    case 'A': state = 78; break;
                    case 'd': state = 90; break;
                    case 't': state = 25; break;
                    case 'a': state = 66; break;
                    case 'o': state = 101; break;
                    case 'v': state = 99; break;
                    case '3': state = 23; break;
                    case 'T': state = 103; break;
                    case 'c': state = 106; break;
                    case 'k': state = 89; break;
                    case 'f': state = 91; break;
                    case 'j': state = 110; break;
                    case 'l': state = 76; break;
                    case 'w': state = 84; break;
                    case 'K': state = 75; break;
                    case 'q': state = 74; break;
                    default: return std::find(finalNodes.begin(), finalNodes.end(), state) != finalNodes.end();
                }
                break;
            case 23: 
                switch(letter) {
                    case 'X': state = 109; break;
                    case 'g': state = 80; break;
                    case 'R': state = 112; break;
                    case 'n': state = 82; break;
                    case 'P': state = 61; break;
                    case 'p': state = 94; break;
                    case '7': state = 107; break;
                    case 'y': state = 104; break;
                    case 'V': state = 96; break;
                    case 'J': state = 24; break;
                    case 'q': state = 74; break;
                    case 'x': state = 71; break;
                    case 'A': state = 78; break;
                    case 'm': state = 79; break;
                    case '5': state = 62; break;
                    case '8': state = 85; break;
                    case 'U': state = 108; break;
                    case 'Y': state = 97; break;
                    case 'S': state = 113; break;
                    case 'G': state = 105; break;
                    case 'c': state = 106; break;
                    case 'M': state = 63; break;
                    case 'H': state = 69; break;
                    case 'D': state = 87; break;
                    case 'z': state = 102; break;
                    case 'L': state = 60; break;
                    case 'Q': state = 95; break;
                    case 's': state = 59; break;
                    case 'C': state = 88; break;
                    case 'i': state = 68; break;
                    case '9': state = 44; break;
                    case 'b': state = 28; break;
                    case 'r': state = 26; break;
                    case 'Z': state = 58; break;
                    case '4': state = 65; break;
                    case 'u': state = 92; break;
                    case 'I': state = 67; break;
                    case 'B': state = 81; break;
                    case 'F': state = 77; break;
                    case '0': state = 93; break;
                    case 'e': state = 73; break;
                    case '6': state = 27; break;
                    case '2': state = 72; break;
                    case 'T': state = 103; break;
                    case 'd': state = 90; break;
                    case 'E': state = 70; break;
                    case 'k': state = 89; break;
                    case 'W': state = 98; break;
                    case 't': state = 25; break;
                    case 'N': state = 83; break;
                    case 'h': state = 111; break;
                    case '3': state = 23; break;
                    case 'l': state = 76; break;
                    case 'f': state = 91; break;
                    case 'j': state = 110; break;
                    case 'v': state = 99; break;
                    case 'w': state = 84; break;
                    case 'K': state = 75; break;
                    case '1': state = 100; break;
                    case 'o': state = 101; break;
                    case 'O': state = 64; break;
                    case 'a': state = 66; break;
                    default: return std::find(finalNodes.begin(), finalNodes.end(), state) != finalNodes.end();
                }
                break;
            case 24: 
                switch(letter) {
                    case 'X': state = 109; break;
                    case 'z': state = 102; break;
                    case 'M': state = 63; break;
                    case '5': state = 62; break;
                    case 'P': state = 61; break;
                    case '1': state = 100; break;
                    case 'p': state = 94; break;
                    case 'R': state = 112; break;
                    case 'q': state = 74; break;
                    case '7': state = 107; break;
                    case 'V': state = 96; break;
                    case '0': state = 93; break;
                    case 'x': state = 71; break;
                    case 'U': state = 108; break;
                    case 'n': state = 82; break;
                    case '4': state = 65; break;
                    case 't': state = 25; break;
                    case 'd': state = 90; break;
                    case 'c': state = 106; break;
                    case 'y': state = 104; break;
                    case 'A': state = 78; break;
                    case 'Y': state = 97; break;
                    case 'b': state = 28; break;
                    case 's': state = 59; break;
                    case 'Q': state = 95; break;
                    case 'S': state = 113; break;
                    case 'H': state = 69; break;
                    case 'D': state = 87; break;
                    case 'l': state = 76; break;
                    case 'K': state = 75; break;
                    case 'e': state = 73; break;
                    case 'N': state = 83; break;
                    case 'F': state = 77; break;
                    case 'k': state = 89; break;
                    case 'i': state = 68; break;
                    case 'G': state = 105; break;
                    case 'J': state = 24; break;
                    case '9': state = 44; break;
                    case 'w': state = 84; break;
                    case '2': state = 72; break;
                    case 'I': state = 67; break;
                    case 'L': state = 60; break;
                    case 'E': state = 70; break;
                    case 'T': state = 103; break;
                    case 'Z': state = 58; break;
                    case 'r': state = 26; break;
                    case 'g': state = 80; break;
                    case 'u': state = 92; break;
                    case 'B': state = 81; break;
                    case '8': state = 85; break;
                    case 'h': state = 111; break;
                    case 'f': state = 91; break;
                    case '6': state = 27; break;
                    case 'O': state = 64; break;
                    case '3': state = 23; break;
                    case 'W': state = 98; break;
                    case 'j': state = 110; break;
                    case 'C': state = 88; break;
                    case 'v': state = 99; break;
                    case 'm': state = 79; break;
                    case 'o': state = 101; break;
                    case 'a': state = 66; break;
                    default: return std::find(finalNodes.begin(), finalNodes.end(), state) != finalNodes.end();
                }
                break;
            case 25: 
                switch(letter) {
                    case 'H': state = 69; break;
                    case '3': state = 23; break;
                    case 'a': state = 66; break;
                    case 'A': state = 78; break;
                    case 'p': state = 94; break;
                    case 'P': state = 61; break;
                    case 'R': state = 112; break;
                    case 'n': state = 82; break;
                    case 'q': state = 74; break;
                    case '7': state = 107; break;
                    case 'V': state = 96; break;
                    case 'Q': state = 95; break;
                    case 't': state = 25; break;
                    case 'c': state = 106; break;
                    case 'x': state = 71; break;
                    case '1': state = 100; break;
                    case 'U': state = 108; break;
                    case 'r': state = 26; break;
                    case 'S': state = 113; break;
                    case 'd': state = 90; break;
                    case 'z': state = 102; break;
                    case 'Z': state = 58; break;
                    case '9': state = 44; break;
                    case '5': state = 62; break;
                    case 'b': state = 28; break;
                    case 'X': state = 109; break;
                    case 'e': state = 73; break;
                    case 'D': state = 87; break;
                    case 'Y': state = 97; break;
                    case 'i': state = 68; break;
                    case 'G': state = 105; break;
                    case 'h': state = 111; break;
                    case 'J': state = 24; break;
                    case 'B': state = 81; break;
                    case 'M': state = 63; break;
                    case 'y': state = 104; break;
                    case 'k': state = 89; break;
                    case 'u': state = 92; break;
                    case 'l': state = 76; break;
                    case 'T': state = 103; break;
                    case 'I': state = 67; break;
                    case '2': state = 72; break;
                    case 'L': state = 60; break;
                    case 'K': state = 75; break;
                    case 'g': state = 80; break;
                    case '4': state = 65; break;
                    case 'E': state = 70; break;
                    case 'N': state = 83; break;
                    case 'f': state = 91; break;
                    case 's': state = 59; break;
                    case '6': state = 27; break;
                    case '8': state = 85; break;
                    case '0': state = 93; break;
                    case 'W': state = 98; break;
                    case 'j': state = 110; break;
                    case 'w': state = 84; break;
                    case 'o': state = 101; break;
                    case 'v': state = 99; break;
                    case 'O': state = 64; break;
                    case 'F': state = 77; break;
                    case 'C': state = 88; break;
                    case 'm': state = 79; break;
                    default: return std::find(finalNodes.begin(), finalNodes.end(), state) != finalNodes.end();
                }
                break;
            case 26: 
                switch(letter) {
                    case 'H': state = 69; break;
                    case 'z': state = 102; break;
                    case 'u': state = 92; break;
                    case 'b': state = 28; break;
                    case 'n': state = 82; break;
                    case '7': state = 107; break;
                    case 'y': state = 104; break;
                    case 'V': state = 96; break;
                    case 'J': state = 24; break;
                    case 'q': state = 74; break;
                    case '1': state = 100; break;
                    case 'p': state = 94; break;
                    case 't': state = 25; break;
                    case 'R': state = 112; break;
                    case 'x': state = 71; break;
                    case '4': state = 65; break;
                    case 'S': state = 113; break;
                    case 'e': state = 73; break;
                    case 'P': state = 61; break;
                    case 'M': state = 63; break;
                    case '9': state = 44; break;
                    case 'X': state = 109; break;
                    case 'Y': state = 97; break;
                    case 'G': state = 105; break;
                    case 'c': state = 106; break;
                    case 'Q': state = 95; break;
                    case '5': state = 62; break;
                    case 's': state = 59; break;
                    case 'B': state = 81; break;
                    case 'U': state = 108; break;
                    case 'i': state = 68; break;
                    case 'h': state = 111; break;
                    case 'D': state = 87; break;
                    case 'g': state = 80; break;
                    case 'k': state = 89; break;
                    case 'K': state = 75; break;
                    case 'T': state = 103; break;
                    case '0': state = 93; break;
                    case 'd': state = 90; break;
                    case 'E': state = 70; break;
                    case 'r': state = 26; break;
                    case 'F': state = 77; break;
                    case '2': state = 72; break;
                    case 'N': state = 83; break;
                    case 'Z': state = 58; break;
                    case 'l': state = 76; break;
                    case 'I': state = 67; break;
                    case '3': state = 23; break;
                    case 'j': state = 110; break;
                    case '8': state = 85; break;
                    case '6': state = 27; break;
                    case 'A': state = 78; break;
                    case 'W': state = 98; break;
                    case 'L': state = 60; break;
                    case 'f': state = 91; break;
                    case 'w': state = 84; break;
                    case 'o': state = 101; break;
                    case 'v': state = 99; break;
                    case 'O': state = 64; break;
                    case 'm': state = 79; break;
                    case 'a': state = 66; break;
                    case 'C': state = 88; break;
                    default: return std::find(finalNodes.begin(), finalNodes.end(), state) != finalNodes.end();
                }
                break;
            case 27: 
                switch(letter) {
                    case 's': state = 59; break;
                    case 'H': state = 69; break;
                    case 'Z': state = 58; break;
                    case 'z': state = 102; break;
                    case 'M': state = 63; break;
                    case 'q': state = 74; break;
                    case 'E': state = 70; break;
                    case '7': state = 107; break;
                    case 'y': state = 104; break;
                    case 'V': state = 96; break;
                    case 'Q': state = 95; break;
                    case 'p': state = 94; break;
                    case '0': state = 93; break;
                    case 'u': state = 92; break;
                    case 'n': state = 82; break;
                    case 't': state = 25; break;
                    case 'U': state = 108; break;
                    case 'c': state = 106; break;
                    case '4': state = 65; break;
                    case 'N': state = 83; break;
                    case 'X': state = 109; break;
                    case 'S': state = 113; break;
                    case 'k': state = 89; break;
                    case 'e': state = 73; break;
                    case 'P': state = 61; break;
                    case 'Y': state = 97; break;
                    case 'L': state = 60; break;
                    case 'b': state = 28; break;
                    case 'B': state = 81; break;
                    case 'x': state = 71; break;
                    case 'D': state = 87; break;
                    case '5': state = 62; break;
                    case 'I': state = 67; break;
                    case 'G': state = 105; break;
                    case 'm': state = 79; break;
                    case 'J': state = 24; break;
                    case 'h': state = 111; break;
                    case '6': state = 27; break;
                    case 'i': state = 68; break;
                    case 'A': state = 78; break;
                    case '2': state = 72; break;
                    case 'l': state = 76; break;
                    case 'd': state = 90; break;
                    case 'K': state = 75; break;
                    case 'w': state = 84; break;
                    case 'g': state = 80; break;
                    case 'r': state = 26; break;
                    case 'a': state = 66; break;
                    case '3': state = 23; break;
                    case 'R': state = 112; break;
                    case '8': state = 85; break;
                    case 'W': state = 98; break;
                    case 'j': state = 110; break;
                    case '9': state = 44; break;
                    case 'f': state = 91; break;
                    case '1': state = 100; break;
                    case 'o': state = 101; break;
                    case 'T': state = 103; break;
                    case 'v': state = 99; break;
                    case 'F': state = 77; break;
                    case 'O': state = 64; break;
                    case 'C': state = 88; break;
                    default: return std::find(finalNodes.begin(), finalNodes.end(), state) != finalNodes.end();
                }
                break;
            case 28: 
                switch(letter) {
                    case 's': state = 59; break;
                    case 'H': state = 69; break;
                    case '3': state = 23; break;
                    case 'a': state = 66; break;
                    case 'P': state = 61; break;
                    case 'A': state = 78; break;
                    case 'I': state = 67; break;
                    case '7': state = 107; break;
                    case 'y': state = 104; break;
                    case 'V': state = 96; break;
                    case 'p': state = 94; break;
                    case '0': state = 93; break;
                    case 't': state = 25; break;
                    case 'x': state = 71; break;
                    case 'J': state = 24; break;
                    case 'h': state = 111; break;
                    case 'M': state = 63; break;
                    case '4': state = 65; break;
                    case 'l': state = 76; break;
                    case 'q': state = 74; break;
                    case 'U': state = 108; break;
                    case 'K': state = 75; break;
                    case 'S': state = 113; break;
                    case 'r': state = 26; break;
                    case 'G': state = 105; break;
                    case 'X': state = 109; break;
                    case 'Q': state = 95; break;
                    case 'z': state = 102; break;
                    case 'i': state = 68; break;
                    case 'e': state = 73; break;
                    case 'B': state = 81; break;
                    case 'O': state = 64; break;
                    case 'w': state = 84; break;
                    case 'N': state = 83; break;
                    case 'd': state = 90; break;
                    case 'n': state = 82; break;
                    case 'b': state = 28; break;
                    case 'c': state = 106; break;
                    case 'Z': state = 58; break;
                    case 'T': state = 103; break;
                    case 'g': state = 80; break;
                    case 'E': state = 70; break;
                    case '6': state = 27; break;
                    case 'R': state = 112; break;
                    case 'u': state = 92; break;
                    case 'k': state = 89; break;
                    case 'W': state = 98; break;
                    case 'F': state = 77; break;
                    case '8': state = 85; break;
                    case 'L': state = 60; break;
                    case 'j': state = 110; break;
                    case '9': state = 44; break;
                    case 'm': state = 79; break;
                    case 'C': state = 88; break;
                    case '2': state = 72; break;
                    case 'v': state = 99; break;
                    case 'D': state = 87; break;
                    case 'o': state = 101; break;
                    case '5': state = 62; break;
                    case 'Y': state = 97; break;
                    case '1': state = 100; break;
                    case 'f': state = 91; break;
                    default: return std::find(finalNodes.begin(), finalNodes.end(), state) != finalNodes.end();
                }
                break;
            case 29: 
                switch(letter) {
                    case 'U': state = 108; break;
                    case 'T': state = 103; break;
                    case 'F': state = 77; break;
                    case '9': state = 44; break;
                    case 'q': state = 74; break;
                    case 'L': state = 60; break;
                    case 'N': state = 83; break;
                    case 'u': state = 92; break;
                    case 'E': state = 70; break;
                    case '5': state = 62; break;
                    case 'V': state = 96; break;
                    case 'I': state = 67; break;
                    case 'X': state = 109; break;
                    case 'r': state = 26; break;
                    case 'w': state = 84; break;
                    case 'S': state = 113; break;
                    case 'K': state = 75; break;
                    case 'P': state = 61; break;
                    case '7': state = 107; break;
                    case '0': state = 93; break;
                    case 'i': state = 68; break;
                    case 'g': state = 80; break;
                    case 'x': state = 71; break;
                    case 'f': state = 91; break;
                    case 'm': state = 79; break;
                    case 'Z': state = 58; break;
                    case 's': state = 59; break;
                    case 'h': state = 111; break;
                    case 'R': state = 112; break;
                    case 'Q': state = 95; break;
                    case '3': state = 23; break;
                    case 'k': state = 89; break;
                    case 'l': state = 76; break;
                    case 'p': state = 94; break;
                    case 'y': state = 104; break;
                    case 'z': state = 102; break;
                    case 'M': state = 63; break;
                    case 'A': state = 78; break;
                    case 'G': state = 105; break;
                    case 'd': state = 90; break;
                    case 'b': state = 28; break;
                    case 'c': state = 106; break;
                    case 't': state = 25; break;
                    case 'a': state = 66; break;
                    case 'B': state = 81; break;
                    case 'e': state = 73; break;
                    case 'H': state = 69; break;
                    case 'O': state = 64; break;
                    case '4': state = 65; break;
                    case 'j': state = 110; break;
                    case 'v': state = 99; break;
                    case '8': state = 85; break;
                    case 'C': state = 88; break;
                    case '2': state = 72; break;
                    case 'n': state = 82; break;
                    case 'J': state = 24; break;
                    case 'D': state = 87; break;
                    case 'W': state = 98; break;
                    case '6': state = 27; break;
                    case 'o': state = 101; break;
                    case 'Y': state = 97; break;
                    case '1': state = 100; break;
                    default: return std::find(finalNodes.begin(), finalNodes.end(), state) != finalNodes.end();
                }
                break;
            case 30: 
                switch(letter) {
                    case 'T': state = 103; break;
                    case 'n': state = 82; break;
                    case '9': state = 44; break;
                    case 'B': state = 81; break;
                    case 'H': state = 69; break;
                    case '1': state = 100; break;
                    case '7': state = 107; break;
                    case 'g': state = 80; break;
                    case 'm': state = 79; break;
                    case 'l': state = 76; break;
                    case 'O': state = 64; break;
                    case 'Q': state = 95; break;
                    case 'Z': state = 58; break;
                    case 'w': state = 84; break;
                    case 'D': state = 87; break;
                    case 'x': state = 71; break;
                    case 'p': state = 94; break;
                    case '3': state = 23; break;
                    case 'y': state = 104; break;
                    case 't': state = 25; break;
                    case 'c': state = 106; break;
                    case 'z': state = 102; break;
                    case 'X': state = 109; break;
                    case 'K': state = 75; break;
                    case 'J': state = 24; break;
                    case 'S': state = 113; break;
                    case 'R': state = 112; break;
                    case '8': state = 85; break;
                    case 'M': state = 63; break;
                    case 'V': state = 96; break;
                    case 'I': state = 67; break;
                    case 'G': state = 105; break;
                    case 'r': state = 26; break;
                    case 'P': state = 61; break;
                    case '4': state = 65; break;
                    case 'N': state = 83; break;
                    case 'a': state = 66; break;
                    case 'k': state = 89; break;
                    case 's': state = 59; break;
                    case 'A': state = 78; break;
                    case 'b': state = 28; break;
                    case 'i': state = 68; break;
                    case 'F': state = 77; break;
                    case 'd': state = 90; break;
                    case 'h': state = 111; break;
                    case '0': state = 93; break;
                    case 'f': state = 91; break;
                    case 'U': state = 108; break;
                    case 'E': state = 70; break;
                    case 'e': state = 73; break;
                    case 'j': state = 110; break;
                    case 'C': state = 88; break;
                    case '2': state = 72; break;
                    case 'q': state = 74; break;
                    case 'Y': state = 97; break;
                    case 'o': state = 101; break;
                    case 'u': state = 92; break;
                    case '6': state = 27; break;
                    case 'W': state = 98; break;
                    case 'v': state = 99; break;
                    case '5': state = 62; break;
                    case 'L': state = 60; break;
                    default: return std::find(finalNodes.begin(), finalNodes.end(), state) != finalNodes.end();
                }
                break;
            case 31: 
                switch(letter) {
                    case 'N': state = 83; break;
                    case 'B': state = 81; break;
                    case '7': state = 107; break;
                    case '1': state = 100; break;
                    case 'M': state = 63; break;
                    case 'S': state = 113; break;
                    case 'F': state = 77; break;
                    case 'i': state = 68; break;
                    case 'H': state = 69; break;
                    case 'g': state = 80; break;
                    case 'Z': state = 58; break;
                    case 'O': state = 64; break;
                    case 'G': state = 105; break;
                    case 'p': state = 94; break;
                    case '4': state = 65; break;
                    case 'R': state = 112; break;
                    case 'o': state = 101; break;
                    case 'x': state = 71; break;
                    case 'c': state = 106; break;
                    case 'l': state = 76; break;
                    case 'e': state = 73; break;
                    case 'U': state = 108; break;
                    case 'X': state = 109; break;
                    case 'J': state = 24; break;
                    case 'P': state = 61; break;
                    case 'I': state = 67; break;
                    case 'b': state = 28; break;
                    case 'y': state = 104; break;
                    case 's': state = 59; break;
                    case 'Q': state = 95; break;
                    case 'z': state = 102; break;
                    case 'V': state = 96; break;
                    case '3': state = 23; break;
                    case 'T': state = 103; break;
                    case 'k': state = 89; break;
                    case 'r': state = 26; break;
                    case 'A': state = 78; break;
                    case 'w': state = 84; break;
                    case '0': state = 93; break;
                    case 'd': state = 90; break;
                    case 'Y': state = 97; break;
                    case 't': state = 25; break;
                    case 'f': state = 91; break;
                    case 'K': state = 75; break;
                    case 'a': state = 66; break;
                    case 'E': state = 70; break;
                    case 'n': state = 82; break;
                    case '9': state = 44; break;
                    case 'W': state = 98; break;
                    case 'u': state = 92; break;
                    case '2': state = 72; break;
                    case 'D': state = 87; break;
                    case 'C': state = 88; break;
                    case 'j': state = 110; break;
                    case '8': state = 85; break;
                    case 'h': state = 111; break;
                    case '6': state = 27; break;
                    case 'm': state = 79; break;
                    case 'v': state = 99; break;
                    case 'q': state = 74; break;
                    case '5': state = 62; break;
                    case 'L': state = 60; break;
                    default: return std::find(finalNodes.begin(), finalNodes.end(), state) != finalNodes.end();
                }
                break;
            case 32: 
                switch(letter) {
                    case 'T': state = 103; break;
                    case '9': state = 44; break;
                    case 'f': state = 91; break;
                    case '7': state = 107; break;
                    case 'z': state = 102; break;
                    case 's': state = 59; break;
                    case 'X': state = 109; break;
                    case 'K': state = 75; break;
                    case 'N': state = 83; break;
                    case '5': state = 62; break;
                    case 'q': state = 74; break;
                    case 'M': state = 63; break;
                    case 'Z': state = 58; break;
                    case 'U': state = 108; break;
                    case '3': state = 23; break;
                    case 'D': state = 87; break;
                    case 'H': state = 69; break;
                    case 'O': state = 64; break;
                    case 'R': state = 112; break;
                    case 'P': state = 61; break;
                    case '4': state = 65; break;
                    case 'g': state = 80; break;
                    case 'G': state = 105; break;
                    case 'Q': state = 95; break;
                    case 'r': state = 26; break;
                    case 'k': state = 89; break;
                    case 'a': state = 66; break;
                    case 'y': state = 104; break;
                    case 'J': state = 24; break;
                    case 'o': state = 101; break;
                    case '0': state = 93; break;
                    case 'V': state = 96; break;
                    case 'A': state = 78; break;
                    case 'S': state = 113; break;
                    case 'B': state = 81; break;
                    case 'd': state = 90; break;
                    case 'p': state = 94; break;
                    case 'v': state = 99; break;
                    case 'e': state = 73; break;
                    case 'F': state = 77; break;
                    case 'x': state = 71; break;
                    case 'c': state = 106; break;
                    case 't': state = 25; break;
                    case 'w': state = 84; break;
                    case 'l': state = 76; break;
                    case 'I': state = 67; break;
                    case 'h': state = 111; break;
                    case '2': state = 72; break;
                    case 'E': state = 70; break;
                    case 'W': state = 98; break;
                    case 'n': state = 82; break;
                    case 'Y': state = 97; break;
                    case 'L': state = 60; break;
                    case 'm': state = 79; break;
                    case 'u': state = 92; break;
                    case 'b': state = 28; break;
                    case '8': state = 85; break;
                    case 'i': state = 68; break;
                    case 'j': state = 110; break;
                    case '6': state = 27; break;
                    case 'C': state = 88; break;
                    case '1': state = 100; break;
                    default: return std::find(finalNodes.begin(), finalNodes.end(), state) != finalNodes.end();
                }
                break;
            case 33: 
                switch(letter) {
                    case 'T': state = 103; break;
                    case 'E': state = 70; break;
                    case 'U': state = 108; break;
                    case 'X': state = 109; break;
                    case 'L': state = 60; break;
                    case 'C': state = 88; break;
                    case 'z': state = 102; break;
                    case '7': state = 107; break;
                    case 's': state = 59; break;
                    case 'a': state = 66; break;
                    case 'K': state = 75; break;
                    case '5': state = 62; break;
                    case 'O': state = 64; break;
                    case '9': state = 44; break;
                    case 'h': state = 111; break;
                    case 'D': state = 87; break;
                    case 'x': state = 71; break;
                    case 'G': state = 105; break;
                    case 'f': state = 91; break;
                    case 'l': state = 76; break;
                    case 'y': state = 104; break;
                    case 'm': state = 79; break;
                    case 'V': state = 96; break;
                    case 'p': state = 94; break;
                    case 'S': state = 113; break;
                    case 'N': state = 83; break;
                    case '0': state = 93; break;
                    case 'A': state = 78; break;
                    case 'r': state = 26; break;
                    case 'J': state = 24; break;
                    case 'k': state = 89; break;
                    case 'P': state = 61; break;
                    case 'g': state = 80; break;
                    case 'R': state = 112; break;
                    case 'Z': state = 58; break;
                    case 'e': state = 73; break;
                    case 'M': state = 63; break;
                    case 'd': state = 90; break;
                    case 'I': state = 67; break;
                    case 'w': state = 84; break;
                    case 'c': state = 106; break;
                    case 't': state = 25; break;
                    case 'u': state = 92; break;
                    case 'v': state = 99; break;
                    case 'F': state = 77; break;
                    case 'Q': state = 95; break;
                    case 'Y': state = 97; break;
                    case 'o': state = 101; break;
                    case 'q': state = 74; break;
                    case '3': state = 23; break;
                    case 'W': state = 98; break;
                    case '4': state = 65; break;
                    case '2': state = 72; break;
                    case 'H': state = 69; break;
                    case 'B': state = 81; break;
                    case '1': state = 100; break;
                    case 'j': state = 110; break;
                    case '8': state = 85; break;
                    case 'n': state = 82; break;
                    case 'i': state = 68; break;
                    case '6': state = 27; break;
                    case 'b': state = 28; break;
                    default: return std::find(finalNodes.begin(), finalNodes.end(), state) != finalNodes.end();
                }
                break;
            case 34: 
                switch(letter) {
                    case 'T': state = 103; break;
                    case 'E': state = 70; break;
                    case 'U': state = 108; break;
                    case 'L': state = 60; break;
                    case 'N': state = 83; break;
                    case 'F': state = 77; break;
                    case 'C': state = 88; break;
                    case 't': state = 25; break;
                    case '6': state = 27; break;
                    case 'g': state = 80; break;
                    case 'X': state = 109; break;
                    case 'O': state = 64; break;
                    case 'B': state = 81; break;
                    case 'z': state = 102; break;
                    case 'A': state = 78; break;
                    case '0': state = 93; break;
                    case 'K': state = 75; break;
                    case 'Q': state = 95; break;
                    case 'h': state = 111; break;
                    case '1': state = 100; break;
                    case 'y': state = 104; break;
                    case 's': state = 59; break;
                    case 'f': state = 91; break;
                    case '7': state = 107; break;
                    case 'V': state = 96; break;
                    case '3': state = 23; break;
                    case 'Y': state = 97; break;
                    case 'Z': state = 58; break;
                    case 'o': state = 101; break;
                    case 'p': state = 94; break;
                    case 'J': state = 24; break;
                    case 'S': state = 113; break;
                    case 'I': state = 67; break;
                    case 'l': state = 76; break;
                    case 'r': state = 26; break;
                    case 'k': state = 89; break;
                    case 'c': state = 106; break;
                    case 'e': state = 73; break;
                    case 'R': state = 112; break;
                    case 'P': state = 61; break;
                    case 'G': state = 105; break;
                    case 'b': state = 28; break;
                    case 'M': state = 63; break;
                    case '2': state = 72; break;
                    case 'u': state = 92; break;
                    case 'v': state = 99; break;
                    case 'H': state = 69; break;
                    case 'q': state = 74; break;
                    case 'd': state = 90; break;
                    case '5': state = 62; break;
                    case '9': state = 44; break;
                    case 'W': state = 98; break;
                    case 'x': state = 71; break;
                    case '4': state = 65; break;
                    case 'n': state = 82; break;
                    case 'i': state = 68; break;
                    case 'j': state = 110; break;
                    case '8': state = 85; break;
                    case 'D': state = 87; break;
                    case 'm': state = 79; break;
                    case 'a': state = 66; break;
                    case 'w': state = 84; break;
                    default: return std::find(finalNodes.begin(), finalNodes.end(), state) != finalNodes.end();
                }
                break;
            case 35: 
                switch(letter) {
                    case 'T': state = 103; break;
                    case 'E': state = 70; break;
                    case 'U': state = 108; break;
                    case 'X': state = 109; break;
                    case 'F': state = 77; break;
                    case 'C': state = 88; break;
                    case 'L': state = 60; break;
                    case 'Z': state = 58; break;
                    case 'q': state = 74; break;
                    case 'z': state = 102; break;
                    case 's': state = 59; break;
                    case 'B': state = 81; break;
                    case 'N': state = 83; break;
                    case 'O': state = 64; break;
                    case 'K': state = 75; break;
                    case 'M': state = 63; break;
                    case 'S': state = 113; break;
                    case 'g': state = 80; break;
                    case 'h': state = 111; break;
                    case '1': state = 100; break;
                    case 'I': state = 67; break;
                    case 'y': state = 104; break;
                    case 'J': state = 24; break;
                    case 'Y': state = 97; break;
                    case 'f': state = 91; break;
                    case '3': state = 23; break;
                    case 'R': state = 112; break;
                    case '7': state = 107; break;
                    case 'V': state = 96; break;
                    case 'p': state = 94; break;
                    case 't': state = 25; break;
                    case 'i': state = 68; break;
                    case '0': state = 93; break;
                    case 'o': state = 101; break;
                    case 'd': state = 90; break;
                    case 'l': state = 76; break;
                    case 'r': state = 26; break;
                    case 'k': state = 89; break;
                    case 'Q': state = 95; break;
                    case 'G': state = 105; break;
                    case 'P': state = 61; break;
                    case 'A': state = 78; break;
                    case 'e': state = 73; break;
                    case 'c': state = 106; break;
                    case '9': state = 44; break;
                    case 'v': state = 99; break;
                    case 'u': state = 92; break;
                    case '4': state = 65; break;
                    case 'H': state = 69; break;
                    case '2': state = 72; break;
                    case '5': state = 62; break;
                    case '8': state = 85; break;
                    case 'x': state = 71; break;
                    case 'W': state = 98; break;
                    case 'D': state = 87; break;
                    case 'b': state = 28; break;
                    case 'j': state = 110; break;
                    case 'n': state = 82; break;
                    case '6': state = 27; break;
                    case 'a': state = 66; break;
                    case 'w': state = 84; break;
                    case 'm': state = 79; break;
                    default: return std::find(finalNodes.begin(), finalNodes.end(), state) != finalNodes.end();
                }
                break;
            case 36: 
                switch(letter) {
                    case 'T': state = 103; break;
                    case 'X': state = 109; break;
                    case 'L': state = 60; break;
                    case 'N': state = 83; break;
                    case 'F': state = 77; break;
                    case 'C': state = 88; break;
                    case '1': state = 100; break;
                    case 'w': state = 84; break;
                    case 'E': state = 70; break;
                    case 'U': state = 108; break;
                    case 'Z': state = 58; break;
                    case 'r': state = 26; break;
                    case '7': state = 107; break;
                    case 'l': state = 76; break;
                    case 'K': state = 75; break;
                    case 'y': state = 104; break;
                    case 'p': state = 94; break;
                    case '0': state = 93; break;
                    case 'o': state = 101; break;
                    case 'e': state = 73; break;
                    case 'Y': state = 97; break;
                    case 'c': state = 106; break;
                    case 'O': state = 64; break;
                    case 'v': state = 99; break;
                    case 'j': state = 110; break;
                    case 'u': state = 92; break;
                    case 'S': state = 113; break;
                    case 's': state = 59; break;
                    case 'k': state = 89; break;
                    case 'G': state = 105; break;
                    case 'M': state = 63; break;
                    case 'g': state = 80; break;
                    case 'A': state = 78; break;
                    case 'i': state = 68; break;
                    case 'P': state = 61; break;
                    case 'R': state = 112; break;
                    case 't': state = 25; break;
                    case 'V': state = 96; break;
                    case 'd': state = 90; break;
                    case 'Q': state = 95; break;
                    case 'f': state = 91; break;
                    case 'b': state = 28; break;
                    case 'm': state = 79; break;
                    case 'x': state = 71; break;
                    case 'I': state = 67; break;
                    case 'B': state = 81; break;
                    case 'q': state = 74; break;
                    case '4': state = 65; break;
                    case '6': state = 27; break;
                    case 'W': state = 98; break;
                    case '8': state = 85; break;
                    case 'H': state = 69; break;
                    case '3': state = 23; break;
                    case '5': state = 62; break;
                    case 'h': state = 111; break;
                    case '9': state = 44; break;
                    case 'D': state = 87; break;
                    case 'n': state = 82; break;
                    case 'J': state = 24; break;
                    case 'z': state = 102; break;
                    case '2': state = 72; break;
                    case 'a': state = 66; break;
                    default: return std::find(finalNodes.begin(), finalNodes.end(), state) != finalNodes.end();
                }
                break;
            case 37: 
                switch(letter) {
                    case 'T': state = 103; break;
                    case 'L': state = 60; break;
                    case 'F': state = 77; break;
                    case 'N': state = 83; break;
                    case 'q': state = 74; break;
                    case '7': state = 107; break;
                    case '9': state = 44; break;
                    case 'E': state = 70; break;
                    case 's': state = 59; break;
                    case 'w': state = 84; break;
                    case '4': state = 65; break;
                    case 'j': state = 110; break;
                    case 'R': state = 112; break;
                    case 'B': state = 81; break;
                    case '3': state = 23; break;
                    case 'P': state = 61; break;
                    case 'M': state = 63; break;
                    case 'I': state = 67; break;
                    case 'm': state = 79; break;
                    case 'U': state = 108; break;
                    case 'y': state = 104; break;
                    case '0': state = 93; break;
                    case 'V': state = 96; break;
                    case 'p': state = 94; break;
                    case 'K': state = 75; break;
                    case 'H': state = 69; break;
                    case 'S': state = 113; break;
                    case 'g': state = 80; break;
                    case 'Y': state = 97; break;
                    case 'f': state = 91; break;
                    case 'k': state = 89; break;
                    case 'o': state = 101; break;
                    case 'e': state = 73; break;
                    case 'v': state = 99; break;
                    case 'A': state = 78; break;
                    case 'G': state = 105; break;
                    case 't': state = 25; break;
                    case 'Z': state = 58; break;
                    case 'r': state = 26; break;
                    case '2': state = 72; break;
                    case 'O': state = 64; break;
                    case 'c': state = 106; break;
                    case 'Q': state = 95; break;
                    case 'l': state = 76; break;
                    case 'X': state = 109; break;
                    case 'u': state = 92; break;
                    case 'h': state = 111; break;
                    case 'x': state = 71; break;
                    case 'W': state = 98; break;
                    case 'J': state = 24; break;
                    case 'i': state = 68; break;
                    case '5': state = 62; break;
                    case '8': state = 85; break;
                    case 'D': state = 87; break;
                    case 'd': state = 90; break;
                    case 'n': state = 82; break;
                    case '1': state = 100; break;
                    case 'z': state = 102; break;
                    case 'a': state = 66; break;
                    case 'C': state = 88; break;
                    case 'b': state = 28; break;
                    case '6': state = 27; break;
                    default: return std::find(finalNodes.begin(), finalNodes.end(), state) != finalNodes.end();
                }
                break;
            case 38: 
                switch(letter) {
                    case 'T': state = 103; break;
                    case 'L': state = 60; break;
                    case 'N': state = 83; break;
                    case 'F': state = 77; break;
                    case 'X': state = 109; break;
                    case '7': state = 107; break;
                    case 's': state = 59; break;
                    case '4': state = 65; break;
                    case 'd': state = 90; break;
                    case 'O': state = 64; break;
                    case 'z': state = 102; break;
                    case 'q': state = 74; break;
                    case 'I': state = 67; break;
                    case 'S': state = 113; break;
                    case 't': state = 25; break;
                    case 'k': state = 89; break;
                    case 'P': state = 61; break;
                    case 'e': state = 73; break;
                    case 'm': state = 79; break;
                    case 'j': state = 110; break;
                    case 'U': state = 108; break;
                    case 'G': state = 105; break;
                    case 'y': state = 104; break;
                    case '0': state = 93; break;
                    case 'p': state = 94; break;
                    case 'V': state = 96; break;
                    case 'R': state = 112; break;
                    case 'Z': state = 58; break;
                    case 'Q': state = 95; break;
                    case 'D': state = 87; break;
                    case 'v': state = 99; break;
                    case 'g': state = 80; break;
                    case 'u': state = 92; break;
                    case 'A': state = 78; break;
                    case 'K': state = 75; break;
                    case 'w': state = 84; break;
                    case 'o': state = 101; break;
                    case '1': state = 100; break;
                    case 'r': state = 26; break;
                    case 'l': state = 76; break;
                    case '2': state = 72; break;
                    case 'f': state = 91; break;
                    case 'E': state = 70; break;
                    case 'B': state = 81; break;
                    case 'c': state = 106; break;
                    case 'Y': state = 97; break;
                    case '9': state = 44; break;
                    case 'x': state = 71; break;
                    case 'M': state = 63; break;
                    case '3': state = 23; break;
                    case 'H': state = 69; break;
                    case '8': state = 85; break;
                    case 'h': state = 111; break;
                    case 'i': state = 68; break;
                    case 'W': state = 98; break;
                    case '5': state = 62; break;
                    case 'J': state = 24; break;
                    case 'n': state = 82; break;
                    case 'a': state = 66; break;
                    case 'b': state = 28; break;
                    case '6': state = 27; break;
                    case 'C': state = 88; break;
                    default: return std::find(finalNodes.begin(), finalNodes.end(), state) != finalNodes.end();
                }
                break;
            case 39: 
                switch(letter) {
                    case 'T': state = 103; break;
                    case 'U': state = 108; break;
                    case 'N': state = 83; break;
                    case '7': state = 107; break;
                    case 'X': state = 109; break;
                    case '4': state = 65; break;
                    case 'O': state = 64; break;
                    case 't': state = 25; break;
                    case 'M': state = 63; break;
                    case 'S': state = 113; break;
                    case 'j': state = 110; break;
                    case 'P': state = 61; break;
                    case 'x': state = 71; break;
                    case 'c': state = 106; break;
                    case 'V': state = 96; break;
                    case 'p': state = 94; break;
                    case 'u': state = 92; break;
                    case 'R': state = 112; break;
                    case 'I': state = 67; break;
                    case 'l': state = 76; break;
                    case '0': state = 93; break;
                    case 'g': state = 80; break;
                    case 'A': state = 78; break;
                    case 'k': state = 89; break;
                    case 's': state = 59; break;
                    case 'G': state = 105; break;
                    case 'v': state = 99; break;
                    case 'Z': state = 58; break;
                    case 'r': state = 26; break;
                    case 'e': state = 73; break;
                    case 'y': state = 104; break;
                    case 'E': state = 70; break;
                    case 'w': state = 84; break;
                    case 'z': state = 102; break;
                    case 'Q': state = 95; break;
                    case '5': state = 62; break;
                    case 'B': state = 81; break;
                    case '2': state = 72; break;
                    case 'f': state = 91; break;
                    case 'o': state = 101; break;
                    case 'J': state = 24; break;
                    case 'F': state = 77; break;
                    case 'd': state = 90; break;
                    case 'Y': state = 97; break;
                    case '9': state = 44; break;
                    case 'h': state = 111; break;
                    case 'b': state = 28; break;
                    case 'W': state = 98; break;
                    case '8': state = 85; break;
                    case 'K': state = 75; break;
                    case 'q': state = 74; break;
                    case 'm': state = 79; break;
                    case 'a': state = 66; break;
                    case 'H': state = 69; break;
                    case '3': state = 23; break;
                    case 'i': state = 68; break;
                    case 'D': state = 87; break;
                    case 'L': state = 60; break;
                    case 'n': state = 82; break;
                    case '1': state = 100; break;
                    case '6': state = 27; break;
                    case 'C': state = 88; break;
                    default: return std::find(finalNodes.begin(), finalNodes.end(), state) != finalNodes.end();
                }
                break;
            case 40: 
                switch(letter) {
                    case 'T': state = 103; break;
                    case 'F': state = 77; break;
                    case 'L': state = 60; break;
                    case 'C': state = 88; break;
                    case '0': state = 93; break;
                    case 'g': state = 80; break;
                    case 'z': state = 102; break;
                    case 'q': state = 74; break;
                    case '4': state = 65; break;
                    case 'U': state = 108; break;
                    case 'M': state = 63; break;
                    case 'W': state = 98; break;
                    case 'R': state = 112; break;
                    case 'X': state = 109; break;
                    case 'm': state = 79; break;
                    case '2': state = 72; break;
                    case 'l': state = 76; break;
                    case 'j': state = 110; break;
                    case 'S': state = 113; break;
                    case 'P': state = 61; break;
                    case '7': state = 107; break;
                    case 'y': state = 104; break;
                    case 'V': state = 96; break;
                    case 'p': state = 94; break;
                    case '5': state = 62; break;
                    case 'c': state = 106; break;
                    case 'B': state = 81; break;
                    case 'I': state = 67; break;
                    case 'd': state = 90; break;
                    case 'x': state = 71; break;
                    case 'G': state = 105; break;
                    case 'u': state = 92; break;
                    case 'f': state = 91; break;
                    case 'w': state = 84; break;
                    case 's': state = 59; break;
                    case 'e': state = 73; break;
                    case 'Z': state = 58; break;
                    case 'k': state = 89; break;
                    case 'r': state = 26; break;
                    case 'A': state = 78; break;
                    case 'v': state = 99; break;
                    case '6': state = 27; break;
                    case 'Q': state = 95; break;
                    case 'o': state = 101; break;
                    case 't': state = 25; break;
                    case 'E': state = 70; break;
                    case 'O': state = 64; break;
                    case 'b': state = 28; break;
                    case '9': state = 44; break;
                    case 'D': state = 87; break;
                    case '1': state = 100; break;
                    case 'J': state = 24; break;
                    case 'h': state = 111; break;
                    case 'Y': state = 97; break;
                    case 'n': state = 82; break;
                    case 'i': state = 68; break;
                    case 'H': state = 69; break;
                    case '3': state = 23; break;
                    case '8': state = 85; break;
                    case 'N': state = 83; break;
                    case 'a': state = 66; break;
                    case 'K': state = 75; break;
                    default: return std::find(finalNodes.begin(), finalNodes.end(), state) != finalNodes.end();
                }
                break;
            case 41: 
                switch(letter) {
                    case 'F': state = 77; break;
                    case 'U': state = 108; break;
                    case 'T': state = 103; break;
                    case 'q': state = 74; break;
                    case 'C': state = 88; break;
                    case 'L': state = 60; break;
                    case 'z': state = 102; break;
                    case 'M': state = 63; break;
                    case 'h': state = 111; break;
                    case 'E': state = 70; break;
                    case 'J': state = 24; break;
                    case '7': state = 107; break;
                    case 'j': state = 110; break;
                    case 'm': state = 79; break;
                    case '2': state = 72; break;
                    case 'S': state = 113; break;
                    case 'y': state = 104; break;
                    case '0': state = 93; break;
                    case '1': state = 100; break;
                    case 'P': state = 61; break;
                    case 'c': state = 106; break;
                    case '4': state = 65; break;
                    case 'R': state = 112; break;
                    case 'b': state = 28; break;
                    case 'X': state = 109; break;
                    case 'V': state = 96; break;
                    case 'G': state = 105; break;
                    case 'f': state = 91; break;
                    case 'Z': state = 58; break;
                    case 'I': state = 67; break;
                    case 'l': state = 76; break;
                    case 'x': state = 71; break;
                    case 's': state = 59; break;
                    case 'e': state = 73; break;
                    case 'k': state = 89; break;
                    case 'r': state = 26; break;
                    case 'p': state = 94; break;
                    case 'v': state = 99; break;
                    case 'A': state = 78; break;
                    case 'a': state = 66; break;
                    case 'Q': state = 95; break;
                    case 'g': state = 80; break;
                    case 'o': state = 101; break;
                    case 'Y': state = 97; break;
                    case 'B': state = 81; break;
                    case 'd': state = 90; break;
                    case 'H': state = 69; break;
                    case 'w': state = 84; break;
                    case '5': state = 62; break;
                    case '9': state = 44; break;
                    case '3': state = 23; break;
                    case '6': state = 27; break;
                    case 'O': state = 64; break;
                    case 'u': state = 92; break;
                    case 'W': state = 98; break;
                    case 'i': state = 68; break;
                    case 't': state = 25; break;
                    case 'n': state = 82; break;
                    case 'D': state = 87; break;
                    case '8': state = 85; break;
                    case 'N': state = 83; break;
                    case 'K': state = 75; break;
                    default: return std::find(finalNodes.begin(), finalNodes.end(), state) != finalNodes.end();
                }
                break;
            case 42: 
                switch(letter) {
                    case 'U': state = 108; break;
                    case 'T': state = 103; break;
                    case 'F': state = 77; break;
                    case 'q': state = 74; break;
                    case 'L': state = 60; break;
                    case 'C': state = 88; break;
                    case '7': state = 107; break;
                    case 'M': state = 63; break;
                    case 'a': state = 66; break;
                    case 'z': state = 102; break;
                    case 's': state = 59; break;
                    case 'H': state = 69; break;
                    case 'h': state = 111; break;
                    case 'E': state = 70; break;
                    case 'A': state = 78; break;
                    case 'l': state = 76; break;
                    case 'j': state = 110; break;
                    case 'm': state = 79; break;
                    case 'S': state = 113; break;
                    case 'G': state = 105; break;
                    case '0': state = 93; break;
                    case 'p': state = 94; break;
                    case 'f': state = 91; break;
                    case '1': state = 100; break;
                    case 'I': state = 67; break;
                    case 'k': state = 89; break;
                    case '8': state = 85; break;
                    case 'B': state = 81; break;
                    case 'J': state = 24; break;
                    case 'y': state = 104; break;
                    case 'R': state = 112; break;
                    case 'X': state = 109; break;
                    case 'd': state = 90; break;
                    case '6': state = 27; break;
                    case 'g': state = 80; break;
                    case 'c': state = 106; break;
                    case 'V': state = 96; break;
                    case 'Z': state = 58; break;
                    case 'w': state = 84; break;
                    case 'b': state = 28; break;
                    case 'O': state = 64; break;
                    case 'x': state = 71; break;
                    case '4': state = 65; break;
                    case 'u': state = 92; break;
                    case 'v': state = 99; break;
                    case 'e': state = 73; break;
                    case 'r': state = 26; break;
                    case 'W': state = 98; break;
                    case 'Q': state = 95; break;
                    case 'P': state = 61; break;
                    case 'o': state = 101; break;
                    case 'n': state = 82; break;
                    case '3': state = 23; break;
                    case '9': state = 44; break;
                    case 'Y': state = 97; break;
                    case 'i': state = 68; break;
                    case '5': state = 62; break;
                    case 'K': state = 75; break;
                    case 'D': state = 87; break;
                    case 't': state = 25; break;
                    case '2': state = 72; break;
                    case 'N': state = 83; break;
                    default: return std::find(finalNodes.begin(), finalNodes.end(), state) != finalNodes.end();
                }
                break;
            case 43: 
                switch(letter) {
                    case 'T': state = 103; break;
                    case 'F': state = 77; break;
                    case 'L': state = 60; break;
                    case 'q': state = 74; break;
                    case 'C': state = 88; break;
                    case 'N': state = 83; break;
                    case '4': state = 65; break;
                    case '9': state = 44; break;
                    case 'p': state = 94; break;
                    case 'U': state = 108; break;
                    case '7': state = 107; break;
                    case 'W': state = 98; break;
                    case 'h': state = 111; break;
                    case 'M': state = 63; break;
                    case 'l': state = 76; break;
                    case 'S': state = 113; break;
                    case 'j': state = 110; break;
                    case 'x': state = 71; break;
                    case 'H': state = 69; break;
                    case 'P': state = 61; break;
                    case 'I': state = 67; break;
                    case 'V': state = 96; break;
                    case '0': state = 93; break;
                    case 'X': state = 109; break;
                    case 'y': state = 104; break;
                    case 'R': state = 112; break;
                    case 'Z': state = 58; break;
                    case 'b': state = 28; break;
                    case 'f': state = 91; break;
                    case 'G': state = 105; break;
                    case 'J': state = 24; break;
                    case 'k': state = 89; break;
                    case 'v': state = 99; break;
                    case 's': state = 59; break;
                    case '6': state = 27; break;
                    case 'c': state = 106; break;
                    case 'A': state = 78; break;
                    case 'B': state = 81; break;
                    case 'Y': state = 97; break;
                    case 'r': state = 26; break;
                    case '1': state = 100; break;
                    case 'u': state = 92; break;
                    case 'Q': state = 95; break;
                    case 'g': state = 80; break;
                    case 'o': state = 101; break;
                    case 'w': state = 84; break;
                    case 'a': state = 66; break;
                    case 'O': state = 64; break;
                    case '8': state = 85; break;
                    case 'm': state = 79; break;
                    case 'e': state = 73; break;
                    case 'd': state = 90; break;
                    case 'z': state = 102; break;
                    case 'i': state = 68; break;
                    case '2': state = 72; break;
                    case '5': state = 62; break;
                    case 'E': state = 70; break;
                    case 't': state = 25; break;
                    case 'n': state = 82; break;
                    case 'D': state = 87; break;
                    case '3': state = 23; break;
                    case 'K': state = 75; break;
                    default: return std::find(finalNodes.begin(), finalNodes.end(), state) != finalNodes.end();
                }
                break;
            case 44: 
                switch(letter) {
                    case 's': state = 59; break;
                    case 'H': state = 69; break;
                    case 'K': state = 75; break;
                    case 'I': state = 67; break;
                    case '7': state = 107; break;
                    case 'G': state = 105; break;
                    case 'y': state = 104; break;
                    case 'T': state = 103; break;
                    case 'Y': state = 97; break;
                    case 'p': state = 94; break;
                    case 'x': state = 71; break;
                    case 'J': state = 24; break;
                    case 'n': state = 82; break;
                    case 't': state = 25; break;
                    case 'j': state = 110; break;
                    case 'U': state = 108; break;
                    case 'S': state = 113; break;
                    case '5': state = 62; break;
                    case 'm': state = 79; break;
                    case 'b': state = 28; break;
                    case 'M': state = 63; break;
                    case 'z': state = 102; break;
                    case '9': state = 44; break;
                    case 'w': state = 84; break;
                    case 'h': state = 111; break;
                    case 'X': state = 109; break;
                    case '4': state = 65; break;
                    case '2': state = 72; break;
                    case 'A': state = 78; break;
                    case 'N': state = 83; break;
                    case 'Q': state = 95; break;
                    case 'c': state = 106; break;
                    case 'r': state = 26; break;
                    case '0': state = 93; break;
                    case 'V': state = 96; break;
                    case 'i': state = 68; break;
                    case 'q': state = 74; break;
                    case 'u': state = 92; break;
                    case 'v': state = 99; break;
                    case 'W': state = 98; break;
                    case 'l': state = 76; break;
                    case 'e': state = 73; break;
                    case 'D': state = 87; break;
                    case 'a': state = 66; break;
                    case 'g': state = 80; break;
                    case 'F': state = 77; break;
                    case 'E': state = 70; break;
                    case 'P': state = 61; break;
                    case 'Z': state = 58; break;
                    case '1': state = 100; break;
                    case 'C': state = 88; break;
                    case 'f': state = 91; break;
                    case 'B': state = 81; break;
                    case '6': state = 27; break;
                    case 'k': state = 89; break;
                    case '8': state = 85; break;
                    case 'R': state = 112; break;
                    case 'o': state = 101; break;
                    case 'L': state = 60; break;
                    case '3': state = 23; break;
                    case 'O': state = 64; break;
                    case 'd': state = 90; break;
                    default: return std::find(finalNodes.begin(), finalNodes.end(), state) != finalNodes.end();
                }
                break;
            case 45: 
                switch(letter) {
                    case 'U': state = 108; break;
                    case 'E': state = 70; break;
                    case 'T': state = 103; break;
                    case 'q': state = 74; break;
                    case 'F': state = 77; break;
                    case '5': state = 62; break;
                    case '0': state = 93; break;
                    case 't': state = 25; break;
                    case '4': state = 65; break;
                    case 'z': state = 102; break;
                    case 'D': state = 87; break;
                    case 'B': state = 81; break;
                    case 'C': state = 88; break;
                    case 'V': state = 96; break;
                    case 'Y': state = 97; break;
                    case 'R': state = 112; break;
                    case 'p': state = 94; break;
                    case 'u': state = 92; break;
                    case 'b': state = 28; break;
                    case '2': state = 72; break;
                    case 'h': state = 111; break;
                    case 'g': state = 80; break;
                    case 'Z': state = 58; break;
                    case '7': state = 107; break;
                    case 'k': state = 89; break;
                    case 'w': state = 84; break;
                    case 'P': state = 61; break;
                    case 'S': state = 113; break;
                    case 'f': state = 91; break;
                    case 'l': state = 76; break;
                    case '1': state = 100; break;
                    case 'X': state = 109; break;
                    case 'y': state = 104; break;
                    case 'G': state = 105; break;
                    case 'c': state = 106; break;
                    case 's': state = 59; break;
                    case 'j': state = 110; break;
                    case 'A': state = 78; break;
                    case 'e': state = 73; break;
                    case 'M': state = 63; break;
                    case 'm': state = 79; break;
                    case 'I': state = 67; break;
                    case 'r': state = 26; break;
                    case 'o': state = 101; break;
                    case 'Q': state = 95; break;
                    case 'v': state = 99; break;
                    case 'n': state = 82; break;
                    case 'x': state = 71; break;
                    case 'J': state = 24; break;
                    case 'W': state = 98; break;
                    case 'a': state = 66; break;
                    case '8': state = 85; break;
                    case 'd': state = 90; break;
                    case '9': state = 44; break;
                    case 'H': state = 69; break;
                    case '3': state = 23; break;
                    case '6': state = 27; break;
                    case 'i': state = 68; break;
                    case 'O': state = 64; break;
                    case 'L': state = 60; break;
                    case 'N': state = 83; break;
                    case 'K': state = 75; break;
                    default: return std::find(finalNodes.begin(), finalNodes.end(), state) != finalNodes.end();
                }
                break;
            case 46: 
                switch(letter) {
                    case 'U': state = 108; break;
                    case 'E': state = 70; break;
                    case 'T': state = 103; break;
                    case 'F': state = 77; break;
                    case 'K': state = 75; break;
                    case 'C': state = 88; break;
                    case 'V': state = 96; break;
                    case '0': state = 93; break;
                    case 'G': state = 105; break;
                    case 'N': state = 83; break;
                    case 'z': state = 102; break;
                    case 'u': state = 92; break;
                    case 'J': state = 24; break;
                    case 'Y': state = 97; break;
                    case '4': state = 65; break;
                    case 'Z': state = 58; break;
                    case 'R': state = 112; break;
                    case 'O': state = 64; break;
                    case '1': state = 100; break;
                    case '9': state = 44; break;
                    case 'I': state = 67; break;
                    case 'p': state = 94; break;
                    case 'g': state = 80; break;
                    case 'x': state = 71; break;
                    case 'k': state = 89; break;
                    case 'l': state = 76; break;
                    case 'h': state = 111; break;
                    case 'X': state = 109; break;
                    case '2': state = 72; break;
                    case '7': state = 107; break;
                    case 'r': state = 26; break;
                    case 'f': state = 91; break;
                    case 'y': state = 104; break;
                    case 'c': state = 106; break;
                    case 'P': state = 61; break;
                    case 's': state = 59; break;
                    case 'j': state = 110; break;
                    case 'B': state = 81; break;
                    case 'A': state = 78; break;
                    case 'S': state = 113; break;
                    case 'e': state = 73; break;
                    case 'M': state = 63; break;
                    case 'm': state = 79; break;
                    case 'a': state = 66; break;
                    case 't': state = 25; break;
                    case 'o': state = 101; break;
                    case 'd': state = 90; break;
                    case 'q': state = 74; break;
                    case 'Q': state = 95; break;
                    case '5': state = 62; break;
                    case 'w': state = 84; break;
                    case '8': state = 85; break;
                    case '6': state = 27; break;
                    case '3': state = 23; break;
                    case 'D': state = 87; break;
                    case 'W': state = 98; break;
                    case 'H': state = 69; break;
                    case 'v': state = 99; break;
                    case 'L': state = 60; break;
                    case 'n': state = 82; break;
                    case 'b': state = 28; break;
                    case 'i': state = 68; break;
                    default: return std::find(finalNodes.begin(), finalNodes.end(), state) != finalNodes.end();
                }
                break;
            case 47: 
                switch(letter) {
                    case 'U': state = 108; break;
                    case 'T': state = 103; break;
                    case 'u': state = 92; break;
                    case 'F': state = 77; break;
                    case 'L': state = 60; break;
                    case 'V': state = 96; break;
                    case '0': state = 93; break;
                    case '5': state = 62; break;
                    case '9': state = 44; break;
                    case 'q': state = 74; break;
                    case 'C': state = 88; break;
                    case 'X': state = 109; break;
                    case 'R': state = 112; break;
                    case '1': state = 100; break;
                    case 'Y': state = 97; break;
                    case 'W': state = 98; break;
                    case 'p': state = 94; break;
                    case 'r': state = 26; break;
                    case '6': state = 27; break;
                    case 'k': state = 89; break;
                    case '4': state = 65; break;
                    case 'h': state = 111; break;
                    case 'O': state = 64; break;
                    case '2': state = 72; break;
                    case 'S': state = 113; break;
                    case '7': state = 107; break;
                    case 'Z': state = 58; break;
                    case 'f': state = 91; break;
                    case 'y': state = 104; break;
                    case 'G': state = 105; break;
                    case 'c': state = 106; break;
                    case 'x': state = 71; break;
                    case 'I': state = 67; break;
                    case 'm': state = 79; break;
                    case 'M': state = 63; break;
                    case 'e': state = 73; break;
                    case 'j': state = 110; break;
                    case 's': state = 59; break;
                    case 'P': state = 61; break;
                    case 'B': state = 81; break;
                    case 'A': state = 78; break;
                    case 't': state = 25; break;
                    case 'd': state = 90; break;
                    case 'Q': state = 95; break;
                    case 'o': state = 101; break;
                    case 'v': state = 99; break;
                    case 'l': state = 76; break;
                    case 'E': state = 70; break;
                    case 'g': state = 80; break;
                    case 'K': state = 75; break;
                    case 'b': state = 28; break;
                    case 'H': state = 69; break;
                    case 'D': state = 87; break;
                    case 'a': state = 66; break;
                    case '8': state = 85; break;
                    case '3': state = 23; break;
                    case 'w': state = 84; break;
                    case 'N': state = 83; break;
                    case 'n': state = 82; break;
                    case 'i': state = 68; break;
                    case 'J': state = 24; break;
                    case 'z': state = 102; break;
                    default: return std::find(finalNodes.begin(), finalNodes.end(), state) != finalNodes.end();
                }
                break;
            case 48: 
                switch(letter) {
                    case 'U': state = 108; break;
                    case 'E': state = 70; break;
                    case 'T': state = 103; break;
                    case '1': state = 100; break;
                    case 'L': state = 60; break;
                    case 'r': state = 26; break;
                    case '0': state = 93; break;
                    case 'G': state = 105; break;
                    case 'F': state = 77; break;
                    case 'A': state = 78; break;
                    case 'Q': state = 95; break;
                    case 'w': state = 84; break;
                    case '9': state = 44; break;
                    case 'I': state = 67; break;
                    case 'P': state = 61; break;
                    case 'e': state = 73; break;
                    case 'p': state = 94; break;
                    case 'h': state = 111; break;
                    case 'M': state = 63; break;
                    case 'V': state = 96; break;
                    case 'u': state = 92; break;
                    case 'b': state = 28; break;
                    case '5': state = 62; break;
                    case 'k': state = 89; break;
                    case 'S': state = 113; break;
                    case 'O': state = 64; break;
                    case 'R': state = 112; break;
                    case 'D': state = 87; break;
                    case 's': state = 59; break;
                    case '4': state = 65; break;
                    case 'd': state = 90; break;
                    case 'f': state = 91; break;
                    case 'Y': state = 97; break;
                    case 'o': state = 101; break;
                    case 'y': state = 104; break;
                    case 'c': state = 106; break;
                    case '7': state = 107; break;
                    case 'x': state = 71; break;
                    case 'j': state = 110; break;
                    case 'g': state = 80; break;
                    case 'i': state = 68; break;
                    case 'm': state = 79; break;
                    case 'Z': state = 58; break;
                    case 'a': state = 66; break;
                    case 'l': state = 76; break;
                    case 'J': state = 24; break;
                    case '6': state = 27; break;
                    case 'H': state = 69; break;
                    case 'W': state = 98; break;
                    case 'X': state = 109; break;
                    case 'q': state = 74; break;
                    case 'B': state = 81; break;
                    case '8': state = 85; break;
                    case 'n': state = 82; break;
                    case '3': state = 23; break;
                    case 'v': state = 99; break;
                    case '2': state = 72; break;
                    case 't': state = 25; break;
                    case 'C': state = 88; break;
                    case 'z': state = 102; break;
                    case 'K': state = 75; break;
                    case 'N': state = 83; break;
                    default: return std::find(finalNodes.begin(), finalNodes.end(), state) != finalNodes.end();
                }
                break;
            case 49: 
                switch(letter) {
                    case 'L': state = 60; break;
                    case 'J': state = 24; break;
                    case '1': state = 100; break;
                    case 'C': state = 88; break;
                    case '9': state = 44; break;
                    case 'D': state = 87; break;
                    case 'F': state = 77; break;
                    case 'e': state = 73; break;
                    case 'I': state = 67; break;
                    case 'f': state = 91; break;
                    case 'A': state = 78; break;
                    case 'M': state = 63; break;
                    case '0': state = 93; break;
                    case 'X': state = 109; break;
                    case 'w': state = 84; break;
                    case 'U': state = 108; break;
                    case 'k': state = 89; break;
                    case 'P': state = 61; break;
                    case 's': state = 59; break;
                    case 'R': state = 112; break;
                    case 'V': state = 96; break;
                    case 'r': state = 26; break;
                    case 'E': state = 70; break;
                    case 'b': state = 28; break;
                    case '5': state = 62; break;
                    case 'Y': state = 97; break;
                    case 'o': state = 101; break;
                    case 'G': state = 105; break;
                    case 'p': state = 94; break;
                    case 'S': state = 113; break;
                    case 'N': state = 83; break;
                    case '4': state = 65; break;
                    case 'Z': state = 58; break;
                    case 'a': state = 66; break;
                    case 'd': state = 90; break;
                    case 'Q': state = 95; break;
                    case 'y': state = 104; break;
                    case 'c': state = 106; break;
                    case '7': state = 107; break;
                    case 'x': state = 71; break;
                    case 'm': state = 79; break;
                    case '2': state = 72; break;
                    case 'j': state = 110; break;
                    case 'l': state = 76; break;
                    case 'g': state = 80; break;
                    case 'K': state = 75; break;
                    case 'O': state = 64; break;
                    case 'u': state = 92; break;
                    case 'q': state = 74; break;
                    case '6': state = 27; break;
                    case 'h': state = 111; break;
                    case 'n': state = 82; break;
                    case 'i': state = 68; break;
                    case 'B': state = 81; break;
                    case 't': state = 25; break;
                    case '3': state = 23; break;
                    case 'T': state = 103; break;
                    case 'H': state = 69; break;
                    case '8': state = 85; break;
                    case 'v': state = 99; break;
                    case 'z': state = 102; break;
                    case 'W': state = 98; break;
                    default: return std::find(finalNodes.begin(), finalNodes.end(), state) != finalNodes.end();
                }
                break;
            case 50: 
                switch(letter) {
                    case 'L': state = 60; break;
                    case 'J': state = 24; break;
                    case 'C': state = 88; break;
                    case 'U': state = 108; break;
                    case 'k': state = 89; break;
                    case '1': state = 100; break;
                    case 'G': state = 105; break;
                    case 'f': state = 91; break;
                    case 'e': state = 73; break;
                    case 'X': state = 109; break;
                    case 'n': state = 82; break;
                    case '9': state = 44; break;
                    case 'R': state = 112; break;
                    case '0': state = 93; break;
                    case 'V': state = 96; break;
                    case 'N': state = 83; break;
                    case 'b': state = 28; break;
                    case '2': state = 72; break;
                    case 'p': state = 94; break;
                    case '5': state = 62; break;
                    case 'l': state = 76; break;
                    case 'u': state = 92; break;
                    case 'r': state = 26; break;
                    case 'w': state = 84; break;
                    case '8': state = 85; break;
                    case '4': state = 65; break;
                    case 'I': state = 67; break;
                    case 'A': state = 78; break;
                    case 'P': state = 61; break;
                    case 's': state = 59; break;
                    case 'M': state = 63; break;
                    case 'd': state = 90; break;
                    case 'Q': state = 95; break;
                    case 'y': state = 104; break;
                    case 'c': state = 106; break;
                    case '7': state = 107; break;
                    case 'x': state = 71; break;
                    case 'g': state = 80; break;
                    case 'S': state = 113; break;
                    case 'Z': state = 58; break;
                    case 'F': state = 77; break;
                    case 'm': state = 79; break;
                    case 'Y': state = 97; break;
                    case 'K': state = 75; break;
                    case 'O': state = 64; break;
                    case 'i': state = 68; break;
                    case '6': state = 27; break;
                    case 'E': state = 70; break;
                    case 'h': state = 111; break;
                    case 'D': state = 87; break;
                    case 'W': state = 98; break;
                    case 'B': state = 81; break;
                    case '3': state = 23; break;
                    case 'a': state = 66; break;
                    case 't': state = 25; break;
                    case 'T': state = 103; break;
                    case 'H': state = 69; break;
                    case 'j': state = 110; break;
                    case 'q': state = 74; break;
                    case 'o': state = 101; break;
                    case 'z': state = 102; break;
                    case 'v': state = 99; break;
                    default: return std::find(finalNodes.begin(), finalNodes.end(), state) != finalNodes.end();
                }
                break;
            case 51: 
                switch(letter) {
                    case 'J': state = 24; break;
                    case 'C': state = 88; break;
                    case 'E': state = 70; break;
                    case 'n': state = 82; break;
                    case '1': state = 100; break;
                    case '0': state = 93; break;
                    case 'e': state = 73; break;
                    case 'W': state = 98; break;
                    case 'A': state = 78; break;
                    case 'L': state = 60; break;
                    case '9': state = 44; break;
                    case 'f': state = 91; break;
                    case '5': state = 62; break;
                    case '6': state = 27; break;
                    case 'D': state = 87; break;
                    case 'r': state = 26; break;
                    case 'G': state = 105; break;
                    case 'V': state = 96; break;
                    case 'u': state = 92; break;
                    case '2': state = 72; break;
                    case 'p': state = 94; break;
                    case 'k': state = 89; break;
                    case 'Q': state = 95; break;
                    case '4': state = 65; break;
                    case 'l': state = 76; break;
                    case 'd': state = 90; break;
                    case '8': state = 85; break;
                    case 'O': state = 64; break;
                    case 'I': state = 67; break;
                    case 's': state = 59; break;
                    case 'Y': state = 97; break;
                    case 'U': state = 108; break;
                    case 'c': state = 106; break;
                    case 'M': state = 63; break;
                    case 'a': state = 66; break;
                    case 'y': state = 104; break;
                    case '7': state = 107; break;
                    case 'X': state = 109; break;
                    case 'x': state = 71; break;
                    case 'q': state = 74; break;
                    case 'Z': state = 58; break;
                    case 'm': state = 79; break;
                    case 'F': state = 77; break;
                    case 'S': state = 113; break;
                    case 'R': state = 112; break;
                    case 'g': state = 80; break;
                    case 'P': state = 61; break;
                    case 'N': state = 83; break;
                    case 'h': state = 111; break;
                    case 'H': state = 69; break;
                    case 'w': state = 84; break;
                    case 'b': state = 28; break;
                    case 'B': state = 81; break;
                    case 't': state = 25; break;
                    case 'j': state = 110; break;
                    case '3': state = 23; break;
                    case 'o': state = 101; break;
                    case 'i': state = 68; break;
                    case 'T': state = 103; break;
                    case 'v': state = 99; break;
                    case 'z': state = 102; break;
                    case 'K': state = 75; break;
                    default: return std::find(finalNodes.begin(), finalNodes.end(), state) != finalNodes.end();
                }
                break;
            case 52: 
                switch(letter) {
                    case 'C': state = 88; break;
                    case '9': state = 44; break;
                    case 'f': state = 91; break;
                    case 'N': state = 83; break;
                    case 'L': state = 60; break;
                    case '0': state = 93; break;
                    case 'K': state = 75; break;
                    case 'Z': state = 58; break;
                    case 'r': state = 26; break;
                    case 'S': state = 113; break;
                    case 'e': state = 73; break;
                    case 'w': state = 84; break;
                    case 'D': state = 87; break;
                    case 'U': state = 108; break;
                    case 'I': state = 67; break;
                    case 'k': state = 89; break;
                    case '4': state = 65; break;
                    case 'b': state = 28; break;
                    case 'M': state = 63; break;
                    case 'R': state = 112; break;
                    case 'P': state = 61; break;
                    case 'p': state = 94; break;
                    case 'V': state = 96; break;
                    case 'H': state = 69; break;
                    case 'd': state = 90; break;
                    case 'g': state = 80; break;
                    case '7': state = 107; break;
                    case 'J': state = 24; break;
                    case 'y': state = 104; break;
                    case 's': state = 59; break;
                    case 'c': state = 106; break;
                    case 'a': state = 66; break;
                    case 'z': state = 102; break;
                    case 'x': state = 71; break;
                    case 'O': state = 64; break;
                    case 'l': state = 76; break;
                    case 'q': state = 74; break;
                    case 'Q': state = 95; break;
                    case 'm': state = 79; break;
                    case 'F': state = 77; break;
                    case 'j': state = 110; break;
                    case 'A': state = 78; break;
                    case 'G': state = 105; break;
                    case 'X': state = 109; break;
                    case '1': state = 100; break;
                    case 'n': state = 82; break;
                    case 'E': state = 70; break;
                    case 'Y': state = 97; break;
                    case '6': state = 27; break;
                    case 'B': state = 81; break;
                    case '3': state = 23; break;
                    case 'W': state = 98; break;
                    case 'u': state = 92; break;
                    case '8': state = 85; break;
                    case 'o': state = 101; break;
                    case 't': state = 25; break;
                    case 'i': state = 68; break;
                    case '5': state = 62; break;
                    case 'T': state = 103; break;
                    case '2': state = 72; break;
                    case 'v': state = 99; break;
                    case 'h': state = 111; break;
                    default: return std::find(finalNodes.begin(), finalNodes.end(), state) != finalNodes.end();
                }
                break;
            case 53: 
                switch(letter) {
                    case 'E': state = 70; break;
                    case 'X': state = 109; break;
                    case 'U': state = 108; break;
                    case 'n': state = 82; break;
                    case '1': state = 100; break;
                    case 'K': state = 75; break;
                    case '9': state = 44; break;
                    case 'M': state = 63; break;
                    case 'D': state = 87; break;
                    case 'G': state = 105; break;
                    case '0': state = 93; break;
                    case 'u': state = 92; break;
                    case 'J': state = 24; break;
                    case 'w': state = 84; break;
                    case 'h': state = 111; break;
                    case 'k': state = 89; break;
                    case 'b': state = 28; break;
                    case 'm': state = 79; break;
                    case 'Z': state = 58; break;
                    case 'I': state = 67; break;
                    case 'x': state = 71; break;
                    case 'P': state = 61; break;
                    case 'B': state = 81; break;
                    case '4': state = 65; break;
                    case 'd': state = 90; break;
                    case 'R': state = 112; break;
                    case 'L': state = 60; break;
                    case '7': state = 107; break;
                    case 'p': state = 94; break;
                    case 'V': state = 96; break;
                    case 'N': state = 83; break;
                    case 'c': state = 106; break;
                    case 'z': state = 102; break;
                    case 'f': state = 91; break;
                    case 'r': state = 26; break;
                    case 'Q': state = 95; break;
                    case 's': state = 59; break;
                    case 'j': state = 110; break;
                    case 'l': state = 76; break;
                    case 'g': state = 80; break;
                    case 'i': state = 68; break;
                    case 'S': state = 113; break;
                    case 'q': state = 74; break;
                    case 'A': state = 78; break;
                    case 'F': state = 77; break;
                    case 'Y': state = 97; break;
                    case 'y': state = 104; break;
                    case 'W': state = 98; break;
                    case 'T': state = 103; break;
                    case '6': state = 27; break;
                    case 'H': state = 69; break;
                    case '5': state = 62; break;
                    case 'a': state = 66; break;
                    case '3': state = 23; break;
                    case 'o': state = 101; break;
                    case '8': state = 85; break;
                    case '2': state = 72; break;
                    case 'e': state = 73; break;
                    case 't': state = 25; break;
                    case 'v': state = 99; break;
                    case 'C': state = 88; break;
                    case 'O': state = 64; break;
                    default: return std::find(finalNodes.begin(), finalNodes.end(), state) != finalNodes.end();
                }
                break;
            case 54: 
                switch(letter) {
                    case 'X': state = 109; break;
                    case '1': state = 100; break;
                    case 'U': state = 108; break;
                    case 'n': state = 82; break;
                    case '9': state = 44; break;
                    case 'O': state = 64; break;
                    case '7': state = 107; break;
                    case 'f': state = 91; break;
                    case '0': state = 93; break;
                    case 'E': state = 70; break;
                    case 'F': state = 77; break;
                    case 'h': state = 111; break;
                    case 'b': state = 28; break;
                    case 'e': state = 73; break;
                    case 'l': state = 76; break;
                    case 'Z': state = 58; break;
                    case 'k': state = 89; break;
                    case 's': state = 59; break;
                    case '4': state = 65; break;
                    case 'u': state = 92; break;
                    case 'K': state = 75; break;
                    case 'w': state = 84; break;
                    case 'M': state = 63; break;
                    case 'Q': state = 95; break;
                    case 'R': state = 112; break;
                    case 'P': state = 61; break;
                    case 'J': state = 24; break;
                    case 'd': state = 90; break;
                    case 'p': state = 94; break;
                    case 'j': state = 110; break;
                    case 'V': state = 96; break;
                    case 'B': state = 81; break;
                    case 'I': state = 67; break;
                    case 'N': state = 83; break;
                    case 'c': state = 106; break;
                    case 'z': state = 102; break;
                    case 'i': state = 68; break;
                    case 'D': state = 87; break;
                    case 'r': state = 26; break;
                    case 'y': state = 104; break;
                    case 'G': state = 105; break;
                    case 'x': state = 71; break;
                    case 'g': state = 80; break;
                    case 'S': state = 113; break;
                    case 'q': state = 74; break;
                    case 'A': state = 78; break;
                    case 'm': state = 79; break;
                    case 'T': state = 103; break;
                    case 'H': state = 69; break;
                    case '2': state = 72; break;
                    case 'W': state = 98; break;
                    case '5': state = 62; break;
                    case 'L': state = 60; break;
                    case '6': state = 27; break;
                    case 'a': state = 66; break;
                    case 'o': state = 101; break;
                    case 't': state = 25; break;
                    case '8': state = 85; break;
                    case 'Y': state = 97; break;
                    case 'v': state = 99; break;
                    case 'C': state = 88; break;
                    case '3': state = 23; break;
                    default: return std::find(finalNodes.begin(), finalNodes.end(), state) != finalNodes.end();
                }
                break;
            case 55: 
                switch(letter) {
                    case 'L': state = 60; break;
                    case 'X': state = 109; break;
                    case 'U': state = 108; break;
                    case 'n': state = 82; break;
                    case '1': state = 100; break;
                    case 'f': state = 91; break;
                    case 'M': state = 63; break;
                    case '7': state = 107; break;
                    case 'G': state = 105; break;
                    case 'E': state = 70; break;
                    case '0': state = 93; break;
                    case 'S': state = 113; break;
                    case 'O': state = 64; break;
                    case 'F': state = 77; break;
                    case 'e': state = 73; break;
                    case 'w': state = 84; break;
                    case 'C': state = 88; break;
                    case 'D': state = 87; break;
                    case 'Z': state = 58; break;
                    case 'N': state = 83; break;
                    case 'I': state = 67; break;
                    case 'H': state = 69; break;
                    case 'x': state = 71; break;
                    case 'B': state = 81; break;
                    case '6': state = 27; break;
                    case 'j': state = 110; break;
                    case 'P': state = 61; break;
                    case '4': state = 65; break;
                    case 'V': state = 96; break;
                    case 'p': state = 94; break;
                    case 'k': state = 89; break;
                    case 'R': state = 112; break;
                    case 'b': state = 28; break;
                    case 'u': state = 92; break;
                    case 'J': state = 24; break;
                    case 'r': state = 26; break;
                    case 's': state = 59; break;
                    case 'c': state = 106; break;
                    case 'z': state = 102; break;
                    case 'Y': state = 97; break;
                    case 'y': state = 104; break;
                    case 'm': state = 79; break;
                    case 'q': state = 74; break;
                    case 'A': state = 78; break;
                    case 'i': state = 68; break;
                    case 'l': state = 76; break;
                    case 'g': state = 80; break;
                    case 'Q': state = 95; break;
                    case '9': state = 44; break;
                    case 'd': state = 90; break;
                    case '5': state = 62; break;
                    case 'o': state = 101; break;
                    case 'W': state = 98; break;
                    case 'T': state = 103; break;
                    case '3': state = 23; break;
                    case '8': state = 85; break;
                    case 'v': state = 99; break;
                    case '2': state = 72; break;
                    case 't': state = 25; break;
                    case 'a': state = 66; break;
                    case 'h': state = 111; break;
                    case 'K': state = 75; break;
                    default: return std::find(finalNodes.begin(), finalNodes.end(), state) != finalNodes.end();
                }
                break;
            case 56: 
                switch(letter) {
                    case 'J': state = 24; break;
                    case 'X': state = 109; break;
                    case '9': state = 44; break;
                    case 'O': state = 64; break;
                    case '1': state = 100; break;
                    case 'U': state = 108; break;
                    case 'n': state = 82; break;
                    case 'C': state = 88; break;
                    case 'e': state = 73; break;
                    case 'M': state = 63; break;
                    case '0': state = 93; break;
                    case 'B': state = 81; break;
                    case 'K': state = 75; break;
                    case 'N': state = 83; break;
                    case 'I': state = 67; break;
                    case 's': state = 59; break;
                    case 'u': state = 92; break;
                    case 'V': state = 96; break;
                    case 'p': state = 94; break;
                    case 'A': state = 78; break;
                    case '7': state = 107; break;
                    case 'H': state = 69; break;
                    case 'x': state = 71; break;
                    case 'k': state = 89; break;
                    case 'E': state = 70; break;
                    case 'r': state = 26; break;
                    case '4': state = 65; break;
                    case 'l': state = 76; break;
                    case 'd': state = 90; break;
                    case 'R': state = 112; break;
                    case 'f': state = 91; break;
                    case 'Q': state = 95; break;
                    case 'y': state = 104; break;
                    case 'c': state = 106; break;
                    case 'm': state = 79; break;
                    case 'Z': state = 58; break;
                    case 'S': state = 113; break;
                    case 'j': state = 110; break;
                    case 'L': state = 60; break;
                    case 'P': state = 61; break;
                    case 'q': state = 74; break;
                    case 'Y': state = 97; break;
                    case 'F': state = 77; break;
                    case 'g': state = 80; break;
                    case '2': state = 72; break;
                    case 'i': state = 68; break;
                    case 'h': state = 111; break;
                    case 'D': state = 87; break;
                    case '6': state = 27; break;
                    case 'T': state = 103; break;
                    case '5': state = 62; break;
                    case 'G': state = 105; break;
                    case 'W': state = 98; break;
                    case 'v': state = 99; break;
                    case '3': state = 23; break;
                    case 'a': state = 66; break;
                    case 'o': state = 101; break;
                    case '8': state = 85; break;
                    case 'z': state = 102; break;
                    case 'b': state = 28; break;
                    case 'w': state = 84; break;
                    case 't': state = 25; break;
                    default: return std::find(finalNodes.begin(), finalNodes.end(), state) != finalNodes.end();
                }
                break;
            case 57: 
                switch(letter) {
                    case 'J': state = 24; break;
                    case 'L': state = 60; break;
                    case 'X': state = 109; break;
                    case 'O': state = 64; break;
                    case 'C': state = 88; break;
                    case 'p': state = 94; break;
                    case 'e': state = 73; break;
                    case 'T': state = 103; break;
                    case 'S': state = 113; break;
                    case '2': state = 72; break;
                    case 'Q': state = 95; break;
                    case '0': state = 93; break;
                    case 'V': state = 96; break;
                    case 'v': state = 99; break;
                    case 'M': state = 63; break;
                    case 'F': state = 77; break;
                    case 'I': state = 67; break;
                    case 'm': state = 79; break;
                    case 'u': state = 92; break;
                    case '7': state = 107; break;
                    case 'A': state = 78; break;
                    case '1': state = 100; break;
                    case 'x': state = 71; break;
                    case 'd': state = 90; break;
                    case 'G': state = 105; break;
                    case 'k': state = 89; break;
                    case 'R': state = 112; break;
                    case 'r': state = 26; break;
                    case 'U': state = 108; break;
                    case 'B': state = 81; break;
                    case 'b': state = 28; break;
                    case 'f': state = 91; break;
                    case 'Y': state = 97; break;
                    case 'y': state = 104; break;
                    case 'E': state = 70; break;
                    case 'c': state = 106; break;
                    case '4': state = 65; break;
                    case 'Z': state = 58; break;
                    case 'j': state = 110; break;
                    case 's': state = 59; break;
                    case 'P': state = 61; break;
                    case 'l': state = 76; break;
                    case 'n': state = 82; break;
                    case 'g': state = 80; break;
                    case '6': state = 27; break;
                    case '5': state = 62; break;
                    case 'a': state = 66; break;
                    case 'q': state = 74; break;
                    case '9': state = 44; break;
                    case 'D': state = 87; break;
                    case 'N': state = 83; break;
                    case 'i': state = 68; break;
                    case 'o': state = 101; break;
                    case '8': state = 85; break;
                    case '3': state = 23; break;
                    case 'W': state = 98; break;
                    case 'z': state = 102; break;
                    case 'h': state = 111; break;
                    case 't': state = 25; break;
                    case 'K': state = 75; break;
                    case 'H': state = 69; break;
                    case 'w': state = 84; break;
                    default: return std::find(finalNodes.begin(), finalNodes.end(), state) != finalNodes.end();
                }
                break;
            case 58: 
                switch(letter) {
                    case 'F': state = 77; break;
                    case 'J': state = 24; break;
                    case 's': state = 59; break;
                    case 'k': state = 89; break;
                    case '5': state = 62; break;
                    case 'r': state = 26; break;
                    case 'C': state = 88; break;
                    case 'f': state = 91; break;
                    case 'u': state = 92; break;
                    case '0': state = 93; break;
                    case 'V': state = 96; break;
                    case '1': state = 100; break;
                    case 'y': state = 104; break;
                    case '9': state = 44; break;
                    case 'c': state = 106; break;
                    case '7': state = 107; break;
                    case 'X': state = 109; break;
                    case 'x': state = 71; break;
                    case 'O': state = 64; break;
                    case 'P': state = 61; break;
                    case 'h': state = 111; break;
                    case 'g': state = 80; break;
                    case 'L': state = 60; break;
                    case 'e': state = 73; break;
                    case 'a': state = 66; break;
                    case 'Z': state = 58; break;
                    case 'A': state = 78; break;
                    case 'w': state = 84; break;
                    case 't': state = 25; break;
                    case 'z': state = 102; break;
                    case 'H': state = 69; break;
                    case 'W': state = 98; break;
                    case '4': state = 65; break;
                    case '2': state = 72; break;
                    case 'd': state = 90; break;
                    case 'S': state = 113; break;
                    case 'p': state = 94; break;
                    case 'Y': state = 97; break;
                    case 'N': state = 83; break;
                    case 'M': state = 63; break;
                    case 'j': state = 110; break;
                    case 'v': state = 99; break;
                    case 'i': state = 68; break;
                    case 'R': state = 112; break;
                    case 'E': state = 70; break;
                    case 'q': state = 74; break;
                    case 'T': state = 103; break;
                    case 'n': state = 82; break;
                    case 'Q': state = 95; break;
                    case 'B': state = 81; break;
                    case '6': state = 27; break;
                    case 'm': state = 79; break;
                    case 'I': state = 67; break;
                    case '3': state = 23; break;
                    case 'l': state = 76; break;
                    case '8': state = 85; break;
                    case 'o': state = 101; break;
                    case 'U': state = 108; break;
                    case 'G': state = 105; break;
                    case 'D': state = 87; break;
                    case 'b': state = 28; break;
                    case 'K': state = 75; break;
                    default: return std::find(finalNodes.begin(), finalNodes.end(), state) != finalNodes.end();
                }
                break;
            case 59: 
                switch(letter) {
                    case 'O': state = 64; break;
                    case '9': state = 44; break;
                    case 'a': state = 66; break;
                    case 'C': state = 88; break;
                    case 'y': state = 104; break;
                    case 'X': state = 109; break;
                    case '5': state = 62; break;
                    case 'P': state = 61; break;
                    case '6': state = 27; break;
                    case 'J': state = 24; break;
                    case 't': state = 25; break;
                    case 'R': state = 112; break;
                    case '1': state = 100; break;
                    case 'e': state = 73; break;
                    case 'B': state = 81; break;
                    case 'l': state = 76; break;
                    case 'U': state = 108; break;
                    case '7': state = 107; break;
                    case 'r': state = 26; break;
                    case 'S': state = 113; break;
                    case 'Z': state = 58; break;
                    case 'E': state = 70; break;
                    case 'u': state = 92; break;
                    case '4': state = 65; break;
                    case '0': state = 93; break;
                    case 'j': state = 110; break;
                    case 'L': state = 60; break;
                    case 's': state = 59; break;
                    case 'd': state = 90; break;
                    case 'Q': state = 95; break;
                    case 'M': state = 63; break;
                    case 'p': state = 94; break;
                    case 'V': state = 96; break;
                    case 'h': state = 111; break;
                    case 'n': state = 82; break;
                    case 'w': state = 84; break;
                    case 'K': state = 75; break;
                    case 'H': state = 69; break;
                    case 'v': state = 99; break;
                    case 'N': state = 83; break;
                    case 'c': state = 106; break;
                    case 'Y': state = 97; break;
                    case 'G': state = 105; break;
                    case 'q': state = 74; break;
                    case 'I': state = 67; break;
                    case 'g': state = 80; break;
                    case 'k': state = 89; break;
                    case 'T': state = 103; break;
                    case 'D': state = 87; break;
                    case 'm': state = 79; break;
                    case 'F': state = 77; break;
                    case 'x': state = 71; break;
                    case 'i': state = 68; break;
                    case 'z': state = 102; break;
                    case '8': state = 85; break;
                    case 'o': state = 101; break;
                    case 'A': state = 78; break;
                    case 'f': state = 91; break;
                    case 'b': state = 28; break;
                    case '3': state = 23; break;
                    case '2': state = 72; break;
                    case 'W': state = 98; break;
                    default: return std::find(finalNodes.begin(), finalNodes.end(), state) != finalNodes.end();
                }
                break;
            case 60: 
                switch(letter) {
                    case 'O': state = 64; break;
                    case '9': state = 44; break;
                    case 'J': state = 24; break;
                    case 'K': state = 75; break;
                    case '1': state = 100; break;
                    case 'k': state = 89; break;
                    case 'C': state = 88; break;
                    case '5': state = 62; break;
                    case 'd': state = 90; break;
                    case 'P': state = 61; break;
                    case 'f': state = 91; break;
                    case 'Z': state = 58; break;
                    case 'j': state = 110; break;
                    case 'M': state = 63; break;
                    case 'A': state = 78; break;
                    case 'e': state = 73; break;
                    case 'a': state = 66; break;
                    case '6': state = 27; break;
                    case 'H': state = 69; break;
                    case 'w': state = 84; break;
                    case 'l': state = 76; break;
                    case '0': state = 93; break;
                    case '4': state = 65; break;
                    case 'g': state = 80; break;
                    case 'Q': state = 95; break;
                    case 'p': state = 94; break;
                    case 'Y': state = 97; break;
                    case 'I': state = 67; break;
                    case 'R': state = 112; break;
                    case 'L': state = 60; break;
                    case 'h': state = 111; break;
                    case 'S': state = 113; break;
                    case 'B': state = 81; break;
                    case 'D': state = 87; break;
                    case 'T': state = 103; break;
                    case 'q': state = 74; break;
                    case 's': state = 59; break;
                    case 'n': state = 82; break;
                    case 'F': state = 77; break;
                    case 'u': state = 92; break;
                    case 'E': state = 70; break;
                    case '2': state = 72; break;
                    case 'V': state = 96; break;
                    case 'N': state = 83; break;
                    case 'm': state = 79; break;
                    case '8': state = 85; break;
                    case 't': state = 25; break;
                    case '3': state = 23; break;
                    case 'U': state = 108; break;
                    case 'x': state = 71; break;
                    case 'X': state = 109; break;
                    case '7': state = 107; break;
                    case 'c': state = 106; break;
                    case 'y': state = 104; break;
                    case 'o': state = 101; break;
                    case 'v': state = 99; break;
                    case 'W': state = 98; break;
                    case 'r': state = 26; break;
                    case 'G': state = 105; break;
                    case 'b': state = 28; break;
                    case 'i': state = 68; break;
                    case 'z': state = 102; break;
                    default: return std::find(finalNodes.begin(), finalNodes.end(), state) != finalNodes.end();
                }
                break;
            case 61: 
                switch(letter) {
                    case '9': state = 44; break;
                    case 'J': state = 24; break;
                    case '1': state = 100; break;
                    case 'F': state = 77; break;
                    case 'k': state = 89; break;
                    case 'p': state = 94; break;
                    case 'P': state = 61; break;
                    case '5': state = 62; break;
                    case 'd': state = 90; break;
                    case 'Z': state = 58; break;
                    case 'f': state = 91; break;
                    case 'a': state = 66; break;
                    case 'M': state = 63; break;
                    case 'X': state = 109; break;
                    case 'H': state = 69; break;
                    case '0': state = 93; break;
                    case 'b': state = 28; break;
                    case 'C': state = 88; break;
                    case 'u': state = 92; break;
                    case 'w': state = 84; break;
                    case 'j': state = 110; break;
                    case '4': state = 65; break;
                    case '3': state = 23; break;
                    case 'g': state = 80; break;
                    case 'm': state = 79; break;
                    case 'K': state = 75; break;
                    case 'e': state = 73; break;
                    case 'l': state = 76; break;
                    case 'L': state = 60; break;
                    case 'R': state = 112; break;
                    case 'B': state = 81; break;
                    case 'q': state = 74; break;
                    case 'G': state = 105; break;
                    case 'E': state = 70; break;
                    case 'V': state = 96; break;
                    case 'n': state = 82; break;
                    case 'T': state = 103; break;
                    case '8': state = 85; break;
                    case '2': state = 72; break;
                    case 'D': state = 87; break;
                    case 's': state = 59; break;
                    case 'N': state = 83; break;
                    case 'S': state = 113; break;
                    case 'z': state = 102; break;
                    case '6': state = 27; break;
                    case 'Q': state = 95; break;
                    case 'Y': state = 97; break;
                    case 'U': state = 108; break;
                    case 'h': state = 111; break;
                    case 'A': state = 78; break;
                    case 'I': state = 67; break;
                    case 'O': state = 64; break;
                    case 'x': state = 71; break;
                    case '7': state = 107; break;
                    case 'c': state = 106; break;
                    case 'y': state = 104; break;
                    case 'o': state = 101; break;
                    case 'v': state = 99; break;
                    case 'W': state = 98; break;
                    case 't': state = 25; break;
                    case 'r': state = 26; break;
                    case 'i': state = 68; break;
                    default: return std::find(finalNodes.begin(), finalNodes.end(), state) != finalNodes.end();
                }
                break;
            case 62: 
                switch(letter) {
                    case 'O': state = 64; break;
                    case 'J': state = 24; break;
                    case '9': state = 44; break;
                    case 'K': state = 75; break;
                    case '1': state = 100; break;
                    case 'F': state = 77; break;
                    case 'k': state = 89; break;
                    case 'L': state = 60; break;
                    case 'p': state = 94; break;
                    case 'P': state = 61; break;
                    case 'd': state = 90; break;
                    case 'a': state = 66; break;
                    case 'Z': state = 58; break;
                    case '5': state = 62; break;
                    case 'S': state = 113; break;
                    case '0': state = 93; break;
                    case 'm': state = 79; break;
                    case 'b': state = 28; break;
                    case 'C': state = 88; break;
                    case 'X': state = 109; break;
                    case 'R': state = 112; break;
                    case 'M': state = 63; break;
                    case 'A': state = 78; break;
                    case 'E': state = 70; break;
                    case 'D': state = 87; break;
                    case 'i': state = 68; break;
                    case 'Y': state = 97; break;
                    case 'n': state = 82; break;
                    case 'G': state = 105; break;
                    case 'N': state = 83; break;
                    case 'V': state = 96; break;
                    case 'l': state = 76; break;
                    case 'B': state = 81; break;
                    case 'T': state = 103; break;
                    case '6': state = 27; break;
                    case 'q': state = 74; break;
                    case 'u': state = 92; break;
                    case 'H': state = 69; break;
                    case 's': state = 59; break;
                    case 'g': state = 80; break;
                    case 'j': state = 110; break;
                    case 't': state = 25; break;
                    case '8': state = 85; break;
                    case '4': state = 65; break;
                    case 'I': state = 67; break;
                    case '3': state = 23; break;
                    case 'Q': state = 95; break;
                    case 'w': state = 84; break;
                    case 'U': state = 108; break;
                    case 'h': state = 111; break;
                    case 'e': state = 73; break;
                    case '2': state = 72; break;
                    case 'x': state = 71; break;
                    case '7': state = 107; break;
                    case 'c': state = 106; break;
                    case 'y': state = 104; break;
                    case 'o': state = 101; break;
                    case 'v': state = 99; break;
                    case 'f': state = 91; break;
                    case 'r': state = 26; break;
                    case 'W': state = 98; break;
                    case 'z': state = 102; break;
                    default: return std::find(finalNodes.begin(), finalNodes.end(), state) != finalNodes.end();
                }
                break;
            case 63: 
                switch(letter) {
                    case 'O': state = 64; break;
                    case '9': state = 44; break;
                    case 'J': state = 24; break;
                    case '1': state = 100; break;
                    case 'K': state = 75; break;
                    case 'k': state = 89; break;
                    case 'C': state = 88; break;
                    case 's': state = 59; break;
                    case 'p': state = 94; break;
                    case 'P': state = 61; break;
                    case 'f': state = 91; break;
                    case 'a': state = 66; break;
                    case 'M': state = 63; break;
                    case 'N': state = 83; break;
                    case 'L': state = 60; break;
                    case 'H': state = 69; break;
                    case '0': state = 93; break;
                    case 'A': state = 78; break;
                    case 'Y': state = 97; break;
                    case '4': state = 65; break;
                    case 'Q': state = 95; break;
                    case 'd': state = 90; break;
                    case 'g': state = 80; break;
                    case 'Z': state = 58; break;
                    case 'R': state = 112; break;
                    case 'q': state = 74; break;
                    case 'I': state = 67; break;
                    case 'B': state = 81; break;
                    case 'T': state = 103; break;
                    case '2': state = 72; break;
                    case 'F': state = 77; break;
                    case 'D': state = 87; break;
                    case 'n': state = 82; break;
                    case 'm': state = 79; break;
                    case 'j': state = 110; break;
                    case '6': state = 27; break;
                    case 'V': state = 96; break;
                    case '3': state = 23; break;
                    case 'U': state = 108; break;
                    case '5': state = 62; break;
                    case 'l': state = 76; break;
                    case 'u': state = 92; break;
                    case 'S': state = 113; break;
                    case 'e': state = 73; break;
                    case '8': state = 85; break;
                    case 'i': state = 68; break;
                    case 'E': state = 70; break;
                    case 'h': state = 111; break;
                    case 'x': state = 71; break;
                    case 'X': state = 109; break;
                    case '7': state = 107; break;
                    case 'c': state = 106; break;
                    case 'y': state = 104; break;
                    case 'o': state = 101; break;
                    case 'v': state = 99; break;
                    case 'r': state = 26; break;
                    case 't': state = 25; break;
                    case 'w': state = 84; break;
                    case 'b': state = 28; break;
                    case 'W': state = 98; break;
                    case 'G': state = 105; break;
                    case 'z': state = 102; break;
                    default: return std::find(finalNodes.begin(), finalNodes.end(), state) != finalNodes.end();
                }
                break;
            case 64: 
                switch(letter) {
                    case '9': state = 44; break;
                    case 'N': state = 83; break;
                    case '5': state = 62; break;
                    case 'G': state = 105; break;
                    case 'a': state = 66; break;
                    case 'k': state = 89; break;
                    case '6': state = 27; break;
                    case 'q': state = 74; break;
                    case 'c': state = 106; break;
                    case 'D': state = 87; break;
                    case 'H': state = 69; break;
                    case 'B': state = 81; break;
                    case 'g': state = 80; break;
                    case '3': state = 23; break;
                    case 'u': state = 92; break;
                    case 'J': state = 24; break;
                    case 'Q': state = 95; break;
                    case 'C': state = 88; break;
                    case 'A': state = 78; break;
                    case 'l': state = 76; break;
                    case '0': state = 93; break;
                    case 'Y': state = 97; break;
                    case 'M': state = 63; break;
                    case 'Z': state = 58; break;
                    case '7': state = 107; break;
                    case 'W': state = 98; break;
                    case 'K': state = 75; break;
                    case 'p': state = 94; break;
                    case '4': state = 65; break;
                    case 'F': state = 77; break;
                    case 'j': state = 110; break;
                    case 'T': state = 103; break;
                    case 'm': state = 79; break;
                    case 'I': state = 67; break;
                    case '2': state = 72; break;
                    case 'd': state = 90; break;
                    case 'h': state = 111; break;
                    case 'w': state = 84; break;
                    case 't': state = 25; break;
                    case 'b': state = 28; break;
                    case 'U': state = 108; break;
                    case 'S': state = 113; break;
                    case 'r': state = 26; break;
                    case 'E': state = 70; break;
                    case 's': state = 59; break;
                    case 'L': state = 60; break;
                    case 'e': state = 73; break;
                    case 'R': state = 112; break;
                    case 'n': state = 82; break;
                    case 'i': state = 68; break;
                    case '8': state = 85; break;
                    case 'P': state = 61; break;
                    case 'O': state = 64; break;
                    case 'x': state = 71; break;
                    case 'X': state = 109; break;
                    case 'y': state = 104; break;
                    case 'z': state = 102; break;
                    case 'o': state = 101; break;
                    case '1': state = 100; break;
                    case 'V': state = 96; break;
                    case 'f': state = 91; break;
                    case 'v': state = 99; break;
                    default: return std::find(finalNodes.begin(), finalNodes.end(), state) != finalNodes.end();
                }
                break;
            case 65: 
                switch(letter) {
                    case 'J': state = 24; break;
                    case 'N': state = 83; break;
                    case '5': state = 62; break;
                    case 'G': state = 105; break;
                    case 'C': state = 88; break;
                    case 'a': state = 66; break;
                    case 'k': state = 89; break;
                    case 'K': state = 75; break;
                    case 'H': state = 69; break;
                    case 'B': state = 81; break;
                    case '9': state = 44; break;
                    case 'm': state = 79; break;
                    case 'L': state = 60; break;
                    case '3': state = 23; break;
                    case 'q': state = 74; break;
                    case 'M': state = 63; break;
                    case 'D': state = 87; break;
                    case 'Q': state = 95; break;
                    case '4': state = 65; break;
                    case 'Y': state = 97; break;
                    case 'l': state = 76; break;
                    case 'Z': state = 58; break;
                    case 'u': state = 92; break;
                    case 'd': state = 90; break;
                    case 'S': state = 113; break;
                    case '2': state = 72; break;
                    case 'j': state = 110; break;
                    case 'W': state = 98; break;
                    case 'w': state = 84; break;
                    case 'T': state = 103; break;
                    case 'A': state = 78; break;
                    case 'I': state = 67; break;
                    case 'c': state = 106; break;
                    case 'p': state = 94; break;
                    case 'n': state = 82; break;
                    case 't': state = 25; break;
                    case 'b': state = 28; break;
                    case 'U': state = 108; break;
                    case '0': state = 93; break;
                    case '6': state = 27; break;
                    case 'r': state = 26; break;
                    case 'E': state = 70; break;
                    case 's': state = 59; break;
                    case 'v': state = 99; break;
                    case 'x': state = 71; break;
                    case 'e': state = 73; break;
                    case 'R': state = 112; break;
                    case 'h': state = 111; break;
                    case 'g': state = 80; break;
                    case 'P': state = 61; break;
                    case 'i': state = 68; break;
                    case '8': state = 85; break;
                    case 'X': state = 109; break;
                    case '7': state = 107; break;
                    case 'y': state = 104; break;
                    case 'z': state = 102; break;
                    case 'o': state = 101; break;
                    case '1': state = 100; break;
                    case 'V': state = 96; break;
                    case 'f': state = 91; break;
                    case 'F': state = 77; break;
                    case 'O': state = 64; break;
                    default: return std::find(finalNodes.begin(), finalNodes.end(), state) != finalNodes.end();
                }
                break;
            case 66: 
                switch(letter) {
                    case 'F': state = 77; break;
                    case 'J': state = 24; break;
                    case '5': state = 62; break;
                    case 'G': state = 105; break;
                    case 'a': state = 66; break;
                    case 'k': state = 89; break;
                    case 'W': state = 98; break;
                    case 'z': state = 102; break;
                    case 'H': state = 69; break;
                    case '9': state = 44; break;
                    case 'q': state = 74; break;
                    case 'K': state = 75; break;
                    case '4': state = 65; break;
                    case 'i': state = 68; break;
                    case 't': state = 25; break;
                    case 'B': state = 81; break;
                    case 'M': state = 63; break;
                    case 'l': state = 76; break;
                    case 'D': state = 87; break;
                    case '3': state = 23; break;
                    case '1': state = 100; break;
                    case 'E': state = 70; break;
                    case 'Y': state = 97; break;
                    case 'u': state = 92; break;
                    case 'p': state = 94; break;
                    case 'c': state = 106; break;
                    case 'm': state = 79; break;
                    case 'n': state = 82; break;
                    case '2': state = 72; break;
                    case 'N': state = 83; break;
                    case 'Z': state = 58; break;
                    case 'b': state = 28; break;
                    case '6': state = 27; break;
                    case 'T': state = 103; break;
                    case 'Q': state = 95; break;
                    case 'U': state = 108; break;
                    case '0': state = 93; break;
                    case 'd': state = 90; break;
                    case 'w': state = 84; break;
                    case 'S': state = 113; break;
                    case 'r': state = 26; break;
                    case 'j': state = 110; break;
                    case 's': state = 59; break;
                    case 'f': state = 91; break;
                    case 'L': state = 60; break;
                    case 'X': state = 109; break;
                    case 'v': state = 99; break;
                    case 'I': state = 67; break;
                    case 'e': state = 73; break;
                    case 'R': state = 112; break;
                    case 'h': state = 111; break;
                    case 'o': state = 101; break;
                    case 'A': state = 78; break;
                    case 'y': state = 104; break;
                    case '8': state = 85; break;
                    case 'V': state = 96; break;
                    case 'C': state = 88; break;
                    case 'P': state = 61; break;
                    case 'g': state = 80; break;
                    case 'O': state = 64; break;
                    case 'x': state = 71; break;
                    case '7': state = 107; break;
                    default: return std::find(finalNodes.begin(), finalNodes.end(), state) != finalNodes.end();
                }
                break;
            case 67: 
                switch(letter) {
                    case '9': state = 44; break;
                    case 'F': state = 77; break;
                    case 'J': state = 24; break;
                    case 'G': state = 105; break;
                    case '5': state = 62; break;
                    case 'a': state = 66; break;
                    case 'L': state = 60; break;
                    case 'k': state = 89; break;
                    case 'C': state = 88; break;
                    case 'K': state = 75; break;
                    case '6': state = 27; break;
                    case 'H': state = 69; break;
                    case 'q': state = 74; break;
                    case 'l': state = 76; break;
                    case 'B': state = 81; break;
                    case '4': state = 65; break;
                    case 'i': state = 68; break;
                    case 'Q': state = 95; break;
                    case 'D': state = 87; break;
                    case '3': state = 23; break;
                    case 'b': state = 28; break;
                    case 'Z': state = 58; break;
                    case 'M': state = 63; break;
                    case '1': state = 100; break;
                    case 'E': state = 70; break;
                    case 'Y': state = 97; break;
                    case 'd': state = 90; break;
                    case 'u': state = 92; break;
                    case 'T': state = 103; break;
                    case 'z': state = 102; break;
                    case 'c': state = 106; break;
                    case 'j': state = 110; break;
                    case 'I': state = 67; break;
                    case 't': state = 25; break;
                    case 'w': state = 84; break;
                    case 'm': state = 79; break;
                    case '2': state = 72; break;
                    case 'W': state = 98; break;
                    case 'p': state = 94; break;
                    case 'A': state = 78; break;
                    case 'U': state = 108; break;
                    case 'h': state = 111; break;
                    case 'N': state = 83; break;
                    case 'S': state = 113; break;
                    case 'r': state = 26; break;
                    case 's': state = 59; break;
                    case 'v': state = 99; break;
                    case 'f': state = 91; break;
                    case '0': state = 93; break;
                    case 'o': state = 101; break;
                    case 'X': state = 109; break;
                    case 'e': state = 73; break;
                    case 'R': state = 112; break;
                    case '8': state = 85; break;
                    case 'n': state = 82; break;
                    case 'g': state = 80; break;
                    case 'P': state = 61; break;
                    case 'x': state = 71; break;
                    case '7': state = 107; break;
                    case 'y': state = 104; break;
                    case 'O': state = 64; break;
                    case 'V': state = 96; break;
                    default: return std::find(finalNodes.begin(), finalNodes.end(), state) != finalNodes.end();
                }
                break;
            case 68: 
                switch(letter) {
                    case 'F': state = 77; break;
                    case 'O': state = 64; break;
                    case 'N': state = 83; break;
                    case '5': state = 62; break;
                    case 'K': state = 75; break;
                    case 'L': state = 60; break;
                    case 'f': state = 91; break;
                    case 'P': state = 61; break;
                    case 'B': state = 81; break;
                    case 'I': state = 67; break;
                    case 'G': state = 105; break;
                    case '9': state = 44; break;
                    case 'q': state = 74; break;
                    case 'A': state = 78; break;
                    case 'g': state = 80; break;
                    case 'l': state = 76; break;
                    case 'Z': state = 58; break;
                    case 'j': state = 110; break;
                    case 'D': state = 87; break;
                    case 'H': state = 69; break;
                    case '3': state = 23; break;
                    case 'E': state = 70; break;
                    case 'M': state = 63; break;
                    case 'i': state = 68; break;
                    case 'p': state = 94; break;
                    case 'u': state = 92; break;
                    case '2': state = 72; break;
                    case 'm': state = 79; break;
                    case 'c': state = 106; break;
                    case 'C': state = 88; break;
                    case 'b': state = 28; break;
                    case 'U': state = 108; break;
                    case 's': state = 59; break;
                    case 'Q': state = 95; break;
                    case 'T': state = 103; break;
                    case 'W': state = 98; break;
                    case 't': state = 25; break;
                    case 'w': state = 84; break;
                    case 'v': state = 99; break;
                    case 'J': state = 24; break;
                    case 'S': state = 113; break;
                    case 'z': state = 102; break;
                    case '7': state = 107; break;
                    case 'k': state = 89; break;
                    case '6': state = 27; break;
                    case '0': state = 93; break;
                    case 'X': state = 109; break;
                    case 'r': state = 26; break;
                    case 'n': state = 82; break;
                    case 'a': state = 66; break;
                    case 'e': state = 73; break;
                    case 'R': state = 112; break;
                    case 'h': state = 111; break;
                    case '8': state = 85; break;
                    case 'x': state = 71; break;
                    case '4': state = 65; break;
                    case 'y': state = 104; break;
                    case 'o': state = 101; break;
                    case '1': state = 100; break;
                    case 'Y': state = 97; break;
                    case 'V': state = 96; break;
                    case 'd': state = 90; break;
                    default: return std::find(finalNodes.begin(), finalNodes.end(), state) != finalNodes.end();
                }
                break;
            case 69: 
                switch(letter) {
                    case 'O': state = 64; break;
                    case 'F': state = 77; break;
                    case 'N': state = 83; break;
                    case 'G': state = 105; break;
                    case 'J': state = 24; break;
                    case '5': state = 62; break;
                    case 'K': state = 75; break;
                    case 'a': state = 66; break;
                    case 'L': state = 60; break;
                    case 'B': state = 81; break;
                    case 'I': state = 67; break;
                    case 'f': state = 91; break;
                    case 'H': state = 69; break;
                    case 'o': state = 101; break;
                    case 'T': state = 103; break;
                    case '0': state = 93; break;
                    case 'i': state = 68; break;
                    case 'Z': state = 58; break;
                    case 'D': state = 87; break;
                    case '4': state = 65; break;
                    case '3': state = 23; break;
                    case '6': state = 27; break;
                    case 'E': state = 70; break;
                    case 'M': state = 63; break;
                    case 't': state = 25; break;
                    case 's': state = 59; break;
                    case 'p': state = 94; break;
                    case 'c': state = 106; break;
                    case 'u': state = 92; break;
                    case 'm': state = 79; break;
                    case 'l': state = 76; break;
                    case 'W': state = 98; break;
                    case 'A': state = 78; break;
                    case 'z': state = 102; break;
                    case '9': state = 44; break;
                    case 'b': state = 28; break;
                    case 'U': state = 108; break;
                    case 'g': state = 80; break;
                    case 'Q': state = 95; break;
                    case 'k': state = 89; break;
                    case 'Y': state = 97; break;
                    case 'C': state = 88; break;
                    case 'n': state = 82; break;
                    case 'S': state = 113; break;
                    case '7': state = 107; break;
                    case 'j': state = 110; break;
                    case '8': state = 85; break;
                    case 'q': state = 74; break;
                    case 'w': state = 84; break;
                    case 'X': state = 109; break;
                    case 'r': state = 26; break;
                    case 'v': state = 99; break;
                    case 'P': state = 61; break;
                    case 'h': state = 111; break;
                    case 'R': state = 112; break;
                    case 'e': state = 73; break;
                    case '2': state = 72; break;
                    case 'x': state = 71; break;
                    case 'y': state = 104; break;
                    case '1': state = 100; break;
                    case 'V': state = 96; break;
                    case 'd': state = 90; break;
                    default: return std::find(finalNodes.begin(), finalNodes.end(), state) != finalNodes.end();
                }
                break;
            case 70: 
                switch(letter) {
                    case 'F': state = 77; break;
                    case 'O': state = 64; break;
                    case 'N': state = 83; break;
                    case 'G': state = 105; break;
                    case '9': state = 44; break;
                    case '5': state = 62; break;
                    case 'L': state = 60; break;
                    case 'K': state = 75; break;
                    case 't': state = 25; break;
                    case '6': state = 27; break;
                    case 'f': state = 91; break;
                    case '0': state = 93; break;
                    case 'p': state = 94; break;
                    case 'V': state = 96; break;
                    case 'H': state = 69; break;
                    case 'T': state = 103; break;
                    case 'b': state = 28; break;
                    case 'P': state = 61; break;
                    case '3': state = 23; break;
                    case 'B': state = 81; break;
                    case 'd': state = 90; break;
                    case 'D': state = 87; break;
                    case 'r': state = 26; break;
                    case 'm': state = 79; break;
                    case 'Y': state = 97; break;
                    case 'l': state = 76; break;
                    case 'W': state = 98; break;
                    case 'Q': state = 95; break;
                    case 'C': state = 88; break;
                    case 'u': state = 92; break;
                    case 'E': state = 70; break;
                    case 'X': state = 109; break;
                    case 'J': state = 24; break;
                    case 'M': state = 63; break;
                    case 'Z': state = 58; break;
                    case 'I': state = 67; break;
                    case 'g': state = 80; break;
                    case '2': state = 72; break;
                    case 'U': state = 108; break;
                    case 'w': state = 84; break;
                    case 's': state = 59; break;
                    case 'S': state = 113; break;
                    case 'j': state = 110; break;
                    case 'z': state = 102; break;
                    case 'o': state = 101; break;
                    case 'n': state = 82; break;
                    case 'k': state = 89; break;
                    case 'q': state = 74; break;
                    case 'v': state = 99; break;
                    case 'A': state = 78; break;
                    case 'a': state = 66; break;
                    case 'e': state = 73; break;
                    case 'R': state = 112; break;
                    case '8': state = 85; break;
                    case 'i': state = 68; break;
                    case 'h': state = 111; break;
                    case 'x': state = 71; break;
                    case '7': state = 107; break;
                    case '4': state = 65; break;
                    case 'c': state = 106; break;
                    case 'y': state = 104; break;
                    case '1': state = 100; break;
                    default: return std::find(finalNodes.begin(), finalNodes.end(), state) != finalNodes.end();
                }
                break;
            case 71: 
                switch(letter) {
                    case 'F': state = 77; break;
                    case 'O': state = 64; break;
                    case 'N': state = 83; break;
                    case '9': state = 44; break;
                    case '5': state = 62; break;
                    case 'K': state = 75; break;
                    case 't': state = 25; break;
                    case '6': state = 27; break;
                    case 'f': state = 91; break;
                    case '0': state = 93; break;
                    case 'p': state = 94; break;
                    case 'V': state = 96; break;
                    case '1': state = 100; break;
                    case 'D': state = 87; break;
                    case 'z': state = 102; break;
                    case 'y': state = 104; break;
                    case 'c': state = 106; break;
                    case '4': state = 65; break;
                    case 'x': state = 71; break;
                    case 'w': state = 84; break;
                    case 'q': state = 74; break;
                    case 'Z': state = 58; break;
                    case 'A': state = 78; break;
                    case 'a': state = 66; break;
                    case 'R': state = 112; break;
                    case 'h': state = 111; break;
                    case 'P': state = 61; break;
                    case '8': state = 85; break;
                    case 'i': state = 68; break;
                    case 'E': state = 70; break;
                    case 'G': state = 105; break;
                    case '2': state = 72; break;
                    case 'U': state = 108; break;
                    case 'r': state = 26; break;
                    case '3': state = 23; break;
                    case 'u': state = 92; break;
                    case 'B': state = 81; break;
                    case 'C': state = 88; break;
                    case '7': state = 107; break;
                    case 'd': state = 90; break;
                    case 'M': state = 63; break;
                    case 'l': state = 76; break;
                    case 'S': state = 113; break;
                    case 'H': state = 69; break;
                    case 'g': state = 80; break;
                    case 'n': state = 82; break;
                    case 'W': state = 98; break;
                    case 'Y': state = 97; break;
                    case 'm': state = 79; break;
                    case 'b': state = 28; break;
                    case 'T': state = 103; break;
                    case 's': state = 59; break;
                    case 'Q': state = 95; break;
                    case 'e': state = 73; break;
                    case 'j': state = 110; break;
                    case 'J': state = 24; break;
                    case 'X': state = 109; break;
                    case 'L': state = 60; break;
                    case 'k': state = 89; break;
                    case 'v': state = 99; break;
                    case 'I': state = 67; break;
                    case 'o': state = 101; break;
                    default: return std::find(finalNodes.begin(), finalNodes.end(), state) != finalNodes.end();
                }
                break;
            case 72: 
                switch(letter) {
                    case 'F': state = 77; break;
                    case '9': state = 44; break;
                    case 's': state = 59; break;
                    case 'q': state = 74; break;
                    case 'w': state = 84; break;
                    case '5': state = 62; break;
                    case 'G': state = 105; break;
                    case 'g': state = 80; break;
                    case 'P': state = 61; break;
                    case 'Z': state = 58; break;
                    case 't': state = 25; break;
                    case 'C': state = 88; break;
                    case 'f': state = 91; break;
                    case 'u': state = 92; break;
                    case '0': state = 93; break;
                    case 'V': state = 96; break;
                    case 'W': state = 98; break;
                    case '1': state = 100; break;
                    case 'D': state = 87; break;
                    case 'A': state = 78; break;
                    case 'y': state = 104; break;
                    case 'i': state = 68; break;
                    case 'E': state = 70; break;
                    case '8': state = 85; break;
                    case '4': state = 65; break;
                    case 'c': state = 106; break;
                    case 'X': state = 109; break;
                    case 'a': state = 66; break;
                    case 'O': state = 64; break;
                    case 'x': state = 71; break;
                    case 'o': state = 101; break;
                    case 'T': state = 103; break;
                    case 'L': state = 60; break;
                    case 'S': state = 113; break;
                    case 'I': state = 67; break;
                    case 'Q': state = 95; break;
                    case 'h': state = 111; break;
                    case 'e': state = 73; break;
                    case 'z': state = 102; break;
                    case '7': state = 107; break;
                    case 'm': state = 79; break;
                    case 'M': state = 63; break;
                    case 'r': state = 26; break;
                    case 'l': state = 76; break;
                    case 'K': state = 75; break;
                    case 'H': state = 69; break;
                    case 'Y': state = 97; break;
                    case '3': state = 23; break;
                    case 'J': state = 24; break;
                    case '2': state = 72; break;
                    case 'B': state = 81; break;
                    case '6': state = 27; break;
                    case 'p': state = 94; break;
                    case 'n': state = 82; break;
                    case 'N': state = 83; break;
                    case 'd': state = 90; break;
                    case 'R': state = 112; break;
                    case 'j': state = 110; break;
                    case 'b': state = 28; break;
                    case 'v': state = 99; break;
                    case 'U': state = 108; break;
                    case 'k': state = 89; break;
                    default: return std::find(finalNodes.begin(), finalNodes.end(), state) != finalNodes.end();
                }
                break;
            case 73: 
                switch(letter) {
                    case '9': state = 44; break;
                    case 'C': state = 88; break;
                    case 'O': state = 64; break;
                    case 'P': state = 61; break;
                    case 'I': state = 67; break;
                    case 't': state = 25; break;
                    case 'h': state = 111; break;
                    case '5': state = 62; break;
                    case 'q': state = 74; break;
                    case '1': state = 100; break;
                    case 'W': state = 98; break;
                    case 'w': state = 84; break;
                    case 'R': state = 112; break;
                    case 'L': state = 60; break;
                    case 'E': state = 70; break;
                    case 'U': state = 108; break;
                    case 'Q': state = 95; break;
                    case 'T': state = 103; break;
                    case 'n': state = 82; break;
                    case 'K': state = 75; break;
                    case 'l': state = 76; break;
                    case 'i': state = 68; break;
                    case 'H': state = 69; break;
                    case 'D': state = 87; break;
                    case 'u': state = 92; break;
                    case '3': state = 23; break;
                    case 'y': state = 104; break;
                    case 'B': state = 81; break;
                    case '4': state = 65; break;
                    case 'r': state = 26; break;
                    case 'M': state = 63; break;
                    case 'd': state = 90; break;
                    case 'S': state = 113; break;
                    case 'G': state = 105; break;
                    case 'Y': state = 97; break;
                    case '2': state = 72; break;
                    case 'F': state = 77; break;
                    case 'N': state = 83; break;
                    case 'g': state = 80; break;
                    case 'A': state = 78; break;
                    case '7': state = 107; break;
                    case 'Z': state = 58; break;
                    case 'v': state = 99; break;
                    case 'a': state = 66; break;
                    case 'e': state = 73; break;
                    case 'm': state = 79; break;
                    case 'p': state = 94; break;
                    case 'o': state = 101; break;
                    case 'c': state = 106; break;
                    case 'z': state = 102; break;
                    case '8': state = 85; break;
                    case 'j': state = 110; break;
                    case 'b': state = 28; break;
                    case 'V': state = 96; break;
                    case 'X': state = 109; break;
                    case '0': state = 93; break;
                    case 'f': state = 91; break;
                    case 'J': state = 24; break;
                    case 'x': state = 71; break;
                    case 'k': state = 89; break;
                    case 's': state = 59; break;
                    case '6': state = 27; break;
                    default: return std::find(finalNodes.begin(), finalNodes.end(), state) != finalNodes.end();
                }
                break;
            case 74: 
                switch(letter) {
                    case 's': state = 59; break;
                    case 'K': state = 75; break;
                    case 'F': state = 77; break;
                    case '5': state = 62; break;
                    case 'w': state = 84; break;
                    case 't': state = 25; break;
                    case 'C': state = 88; break;
                    case 'f': state = 91; break;
                    case 'u': state = 92; break;
                    case '0': state = 93; break;
                    case 'V': state = 96; break;
                    case 'W': state = 98; break;
                    case 'D': state = 87; break;
                    case 'y': state = 104; break;
                    case 'c': state = 106; break;
                    case '4': state = 65; break;
                    case 'X': state = 109; break;
                    case 'x': state = 71; break;
                    case 'O': state = 64; break;
                    case 'P': state = 61; break;
                    case '8': state = 85; break;
                    case 'h': state = 111; break;
                    case 'g': state = 80; break;
                    case 'E': state = 70; break;
                    case 'i': state = 68; break;
                    case 'L': state = 60; break;
                    case 'a': state = 66; break;
                    case 'm': state = 79; break;
                    case 'Z': state = 58; break;
                    case 'G': state = 105; break;
                    case 'q': state = 74; break;
                    case 'I': state = 67; break;
                    case 'H': state = 69; break;
                    case 'e': state = 73; break;
                    case '1': state = 100; break;
                    case 'o': state = 101; break;
                    case 'z': state = 102; break;
                    case 'r': state = 26; break;
                    case '3': state = 23; break;
                    case '7': state = 107; break;
                    case 'Y': state = 97; break;
                    case 'k': state = 89; break;
                    case 'l': state = 76; break;
                    case 'Q': state = 95; break;
                    case 'd': state = 90; break;
                    case 'M': state = 63; break;
                    case 'T': state = 103; break;
                    case '9': state = 44; break;
                    case 'A': state = 78; break;
                    case '6': state = 27; break;
                    case 'n': state = 82; break;
                    case 'S': state = 113; break;
                    case '2': state = 72; break;
                    case 'N': state = 83; break;
                    case 'b': state = 28; break;
                    case 'p': state = 94; break;
                    case 'j': state = 110; break;
                    case 'R': state = 112; break;
                    case 'J': state = 24; break;
                    case 'U': state = 108; break;
                    case 'v': state = 99; break;
                    case 'B': state = 81; break;
                    default: return std::find(finalNodes.begin(), finalNodes.end(), state) != finalNodes.end();
                }
                break;
            case 75: 
                switch(letter) {
                    case '9': state = 44; break;
                    case 's': state = 59; break;
                    case 'K': state = 75; break;
                    case 'F': state = 77; break;
                    case '5': state = 62; break;
                    case 'G': state = 105; break;
                    case 'w': state = 84; break;
                    case 't': state = 25; break;
                    case 'r': state = 26; break;
                    case 'C': state = 88; break;
                    case 'f': state = 91; break;
                    case 'u': state = 92; break;
                    case '0': state = 93; break;
                    case 'V': state = 96; break;
                    case 'W': state = 98; break;
                    case '1': state = 100; break;
                    case 'D': state = 87; break;
                    case 'y': state = 104; break;
                    case 'c': state = 106; break;
                    case '4': state = 65; break;
                    case 'X': state = 109; break;
                    case 'x': state = 71; break;
                    case 'O': state = 64; break;
                    case 'P': state = 61; break;
                    case '8': state = 85; break;
                    case 'g': state = 80; break;
                    case 'E': state = 70; break;
                    case 'i': state = 68; break;
                    case 'L': state = 60; break;
                    case 'a': state = 66; break;
                    case 'Z': state = 58; break;
                    case 'q': state = 74; break;
                    case 'I': state = 67; break;
                    case 'T': state = 103; break;
                    case 'h': state = 111; break;
                    case 'H': state = 69; break;
                    case 'e': state = 73; break;
                    case 'z': state = 102; break;
                    case 'l': state = 76; break;
                    case 'k': state = 89; break;
                    case 'm': state = 79; break;
                    case 'Q': state = 95; break;
                    case '2': state = 72; break;
                    case 'o': state = 101; break;
                    case 'S': state = 113; break;
                    case '3': state = 23; break;
                    case 'M': state = 63; break;
                    case 'B': state = 81; break;
                    case 'Y': state = 97; break;
                    case 'n': state = 82; break;
                    case 'b': state = 28; break;
                    case 'd': state = 90; break;
                    case 'A': state = 78; break;
                    case '6': state = 27; break;
                    case 'p': state = 94; break;
                    case '7': state = 107; break;
                    case 'N': state = 83; break;
                    case 'j': state = 110; break;
                    case 'J': state = 24; break;
                    case 'U': state = 108; break;
                    case 'v': state = 99; break;
                    case 'R': state = 112; break;
                    default: return std::find(finalNodes.begin(), finalNodes.end(), state) != finalNodes.end();
                }
                break;
            case 76: 
                switch(letter) {
                    case 'F': state = 77; break;
                    case 'w': state = 84; break;
                    case 'J': state = 24; break;
                    case 'z': state = 102; break;
                    case 'G': state = 105; break;
                    case 'C': state = 88; break;
                    case 'r': state = 26; break;
                    case 't': state = 25; break;
                    case 'f': state = 91; break;
                    case 'u': state = 92; break;
                    case '0': state = 93; break;
                    case 'V': state = 96; break;
                    case '1': state = 100; break;
                    case 'D': state = 87; break;
                    case 'y': state = 104; break;
                    case 'c': state = 106; break;
                    case '4': state = 65; break;
                    case 'X': state = 109; break;
                    case 'x': state = 71; break;
                    case 'O': state = 64; break;
                    case 'q': state = 74; break;
                    case 'Z': state = 58; break;
                    case 'A': state = 78; break;
                    case 'a': state = 66; break;
                    case 'M': state = 63; break;
                    case 'j': state = 110; break;
                    case 'h': state = 111; break;
                    case 'L': state = 60; break;
                    case '8': state = 85; break;
                    case 'i': state = 68; break;
                    case 'E': state = 70; break;
                    case 'm': state = 79; break;
                    case 'P': state = 61; break;
                    case '5': state = 62; break;
                    case 'Q': state = 95; break;
                    case 'v': state = 99; break;
                    case 's': state = 59; break;
                    case 'H': state = 69; break;
                    case 'I': state = 67; break;
                    case 'g': state = 80; break;
                    case '2': state = 72; break;
                    case 'l': state = 76; break;
                    case 'W': state = 98; break;
                    case 'K': state = 75; break;
                    case 'o': state = 101; break;
                    case 'd': state = 90; break;
                    case 'Y': state = 97; break;
                    case 'k': state = 89; break;
                    case '3': state = 23; break;
                    case 'e': state = 73; break;
                    case 'S': state = 113; break;
                    case 'n': state = 82; break;
                    case 'R': state = 112; break;
                    case 'N': state = 83; break;
                    case '9': state = 44; break;
                    case 'b': state = 28; break;
                    case 'U': state = 108; break;
                    case '7': state = 107; break;
                    case 'T': state = 103; break;
                    case 'p': state = 94; break;
                    case '6': state = 27; break;
                    case 'B': state = 81; break;
                    default: return std::find(finalNodes.begin(), finalNodes.end(), state) != finalNodes.end();
                }
                break;
            case 77: 
                switch(letter) {
                    case 'J': state = 24; break;
                    case 'F': state = 77; break;
                    case 'C': state = 88; break;
                    case 'r': state = 26; break;
                    case 't': state = 25; break;
                    case 'f': state = 91; break;
                    case 'u': state = 92; break;
                    case '0': state = 93; break;
                    case 'V': state = 96; break;
                    case 'D': state = 87; break;
                    case 'y': state = 104; break;
                    case 'c': state = 106; break;
                    case '4': state = 65; break;
                    case 'X': state = 109; break;
                    case 'x': state = 71; break;
                    case 'O': state = 64; break;
                    case 'w': state = 84; break;
                    case 'q': state = 74; break;
                    case 'Z': state = 58; break;
                    case 'A': state = 78; break;
                    case 'm': state = 79; break;
                    case 'a': state = 66; break;
                    case 'M': state = 63; break;
                    case 'L': state = 60; break;
                    case '8': state = 85; break;
                    case 'i': state = 68; break;
                    case 'E': state = 70; break;
                    case 'G': state = 105; break;
                    case '1': state = 100; break;
                    case 'P': state = 61; break;
                    case '5': state = 62; break;
                    case 'o': state = 101; break;
                    case '9': state = 44; break;
                    case 'I': state = 67; break;
                    case 'B': state = 81; break;
                    case 'Q': state = 95; break;
                    case 'T': state = 103; break;
                    case 'z': state = 102; break;
                    case '6': state = 27; break;
                    case 'N': state = 83; break;
                    case 'l': state = 76; break;
                    case 'H': state = 69; break;
                    case 'v': state = 99; break;
                    case 'Y': state = 97; break;
                    case 'j': state = 110; break;
                    case 'W': state = 98; break;
                    case 'd': state = 90; break;
                    case 'K': state = 75; break;
                    case 'U': state = 108; break;
                    case '3': state = 23; break;
                    case 'b': state = 28; break;
                    case 's': state = 59; break;
                    case 'e': state = 73; break;
                    case 'n': state = 82; break;
                    case 'S': state = 113; break;
                    case 'p': state = 94; break;
                    case 'k': state = 89; break;
                    case 'g': state = 80; break;
                    case 'R': state = 112; break;
                    case '7': state = 107; break;
                    case 'h': state = 111; break;
                    case '2': state = 72; break;
                    default: return std::find(finalNodes.begin(), finalNodes.end(), state) != finalNodes.end();
                }
                break;
            case 78: 
                switch(letter) {
                    case 'F': state = 77; break;
                    case 'W': state = 98; break;
                    case 'w': state = 84; break;
                    case 't': state = 25; break;
                    case 'r': state = 26; break;
                    case 'f': state = 91; break;
                    case 'u': state = 92; break;
                    case '0': state = 93; break;
                    case 'V': state = 96; break;
                    case '1': state = 100; break;
                    case 'D': state = 87; break;
                    case 'z': state = 102; break;
                    case 'y': state = 104; break;
                    case 'c': state = 106; break;
                    case '4': state = 65; break;
                    case 'X': state = 109; break;
                    case 'x': state = 71; break;
                    case 'O': state = 64; break;
                    case 'g': state = 80; break;
                    case 'E': state = 70; break;
                    case 'i': state = 68; break;
                    case '8': state = 85; break;
                    case 'a': state = 66; break;
                    case 'Z': state = 58; break;
                    case 'q': state = 74; break;
                    case 'A': state = 78; break;
                    case '9': state = 44; break;
                    case 'H': state = 69; break;
                    case 'G': state = 105; break;
                    case 'C': state = 88; break;
                    case 'P': state = 61; break;
                    case '5': state = 62; break;
                    case 'K': state = 75; break;
                    case 'h': state = 111; break;
                    case 'M': state = 63; break;
                    case 'Q': state = 95; break;
                    case 'T': state = 103; break;
                    case 'I': state = 67; break;
                    case 'J': state = 24; break;
                    case 'v': state = 99; break;
                    case 'l': state = 76; break;
                    case 's': state = 59; break;
                    case 'd': state = 90; break;
                    case 'j': state = 110; break;
                    case '3': state = 23; break;
                    case 'S': state = 113; break;
                    case 'Y': state = 97; break;
                    case 'e': state = 73; break;
                    case '2': state = 72; break;
                    case 'o': state = 101; break;
                    case 'U': state = 108; break;
                    case 'R': state = 112; break;
                    case 'p': state = 94; break;
                    case 'k': state = 89; break;
                    case 'N': state = 83; break;
                    case 'm': state = 79; break;
                    case 'L': state = 60; break;
                    case '6': state = 27; break;
                    case 'b': state = 28; break;
                    case 'n': state = 82; break;
                    case '7': state = 107; break;
                    case 'B': state = 81; break;
                    default: return std::find(finalNodes.begin(), finalNodes.end(), state) != finalNodes.end();
                }
                break;
            case 79: 
                switch(letter) {
                    case 'F': state = 77; break;
                    case 'W': state = 98; break;
                    case 'G': state = 105; break;
                    case 'J': state = 24; break;
                    case 'w': state = 84; break;
                    case 't': state = 25; break;
                    case 'r': state = 26; break;
                    case 'f': state = 91; break;
                    case 'u': state = 92; break;
                    case '0': state = 93; break;
                    case 'V': state = 96; break;
                    case 'D': state = 87; break;
                    case 'z': state = 102; break;
                    case 'y': state = 104; break;
                    case 'c': state = 106; break;
                    case '4': state = 65; break;
                    case 'X': state = 109; break;
                    case 'x': state = 71; break;
                    case 'O': state = 64; break;
                    case '8': state = 85; break;
                    case 'j': state = 110; break;
                    case 'g': state = 80; break;
                    case 'E': state = 70; break;
                    case 'i': state = 68; break;
                    case 'S': state = 113; break;
                    case 'a': state = 66; break;
                    case '9': state = 44; break;
                    case 'H': state = 69; break;
                    case 'Z': state = 58; break;
                    case 'q': state = 74; break;
                    case 'A': state = 78; break;
                    case '1': state = 100; break;
                    case 'm': state = 79; break;
                    case 'P': state = 61; break;
                    case '5': state = 62; break;
                    case 'C': state = 88; break;
                    case 'M': state = 63; break;
                    case 'Q': state = 95; break;
                    case '2': state = 72; break;
                    case 'T': state = 103; break;
                    case '6': state = 27; break;
                    case 'h': state = 111; break;
                    case 'K': state = 75; break;
                    case 'v': state = 99; break;
                    case 'L': state = 60; break;
                    case 'l': state = 76; break;
                    case 'd': state = 90; break;
                    case 'Y': state = 97; break;
                    case '3': state = 23; break;
                    case 'e': state = 73; break;
                    case 's': state = 59; break;
                    case 'o': state = 101; break;
                    case 'U': state = 108; break;
                    case 'I': state = 67; break;
                    case 'N': state = 83; break;
                    case 'p': state = 94; break;
                    case 'k': state = 89; break;
                    case 'b': state = 28; break;
                    case 'n': state = 82; break;
                    case '7': state = 107; break;
                    case 'R': state = 112; break;
                    case 'B': state = 81; break;
                    default: return std::find(finalNodes.begin(), finalNodes.end(), state) != finalNodes.end();
                }
                break;
            case 80: 
                switch(letter) {
                    case 'F': state = 77; break;
                    case '9': state = 44; break;
                    case 't': state = 25; break;
                    case 'W': state = 98; break;
                    case 'f': state = 91; break;
                    case 'u': state = 92; break;
                    case '0': state = 93; break;
                    case 'V': state = 96; break;
                    case 'v': state = 99; break;
                    case 'D': state = 87; break;
                    case 'T': state = 103; break;
                    case 'y': state = 104; break;
                    case 'G': state = 105; break;
                    case 'c': state = 106; break;
                    case 'x': state = 71; break;
                    case 'O': state = 64; break;
                    case 'g': state = 80; break;
                    case 'i': state = 68; break;
                    case 'E': state = 70; break;
                    case 'S': state = 113; break;
                    case 'M': state = 63; break;
                    case 'a': state = 66; break;
                    case 'q': state = 74; break;
                    case 'Z': state = 58; break;
                    case 'A': state = 78; break;
                    case 'P': state = 61; break;
                    case 'J': state = 24; break;
                    case 'X': state = 109; break;
                    case 'e': state = 73; break;
                    case 'k': state = 89; break;
                    case 's': state = 59; break;
                    case '3': state = 23; break;
                    case '6': state = 27; break;
                    case 'I': state = 67; break;
                    case 'o': state = 101; break;
                    case 'j': state = 110; break;
                    case 'm': state = 79; break;
                    case 'Y': state = 97; break;
                    case 'Q': state = 95; break;
                    case 'd': state = 90; break;
                    case 'r': state = 26; break;
                    case '1': state = 100; break;
                    case 'l': state = 76; break;
                    case 'H': state = 69; break;
                    case 'h': state = 111; break;
                    case '4': state = 65; break;
                    case 'B': state = 81; break;
                    case '2': state = 72; break;
                    case 'b': state = 28; break;
                    case 'z': state = 102; break;
                    case 'p': state = 94; break;
                    case 'R': state = 112; break;
                    case '7': state = 107; break;
                    case 'n': state = 82; break;
                    case 'w': state = 84; break;
                    case 'U': state = 108; break;
                    case 'N': state = 83; break;
                    case 'L': state = 60; break;
                    case 'K': state = 75; break;
                    case '8': state = 85; break;
                    case 'C': state = 88; break;
                    case '5': state = 62; break;
                    default: return std::find(finalNodes.begin(), finalNodes.end(), state) != finalNodes.end();
                }
                break;
            case 81: 
                switch(letter) {
                    case 'F': state = 77; break;
                    case '9': state = 44; break;
                    case 'W': state = 98; break;
                    case 'f': state = 91; break;
                    case 'u': state = 92; break;
                    case '0': state = 93; break;
                    case 'V': state = 96; break;
                    case 'v': state = 99; break;
                    case 'D': state = 87; break;
                    case 'T': state = 103; break;
                    case 'y': state = 104; break;
                    case 'c': state = 106; break;
                    case 'x': state = 71; break;
                    case 'O': state = 64; break;
                    case 'q': state = 74; break;
                    case 'Z': state = 58; break;
                    case 'A': state = 78; break;
                    case 'a': state = 66; break;
                    case 'M': state = 63; break;
                    case 'S': state = 113; break;
                    case 'i': state = 68; break;
                    case 'E': state = 70; break;
                    case 'g': state = 80; break;
                    case 't': state = 25; break;
                    case 'G': state = 105; break;
                    case '4': state = 65; break;
                    case 'w': state = 84; break;
                    case 'm': state = 79; break;
                    case 'z': state = 102; break;
                    case '3': state = 23; break;
                    case 's': state = 59; break;
                    case 'J': state = 24; break;
                    case 'l': state = 76; break;
                    case 'h': state = 111; break;
                    case '6': state = 27; break;
                    case 'r': state = 26; break;
                    case 'H': state = 69; break;
                    case 'o': state = 101; break;
                    case 'j': state = 110; break;
                    case 'd': state = 90; break;
                    case 'Q': state = 95; break;
                    case 'Y': state = 97; break;
                    case '1': state = 100; break;
                    case '7': state = 107; break;
                    case 'k': state = 89; break;
                    case 'e': state = 73; break;
                    case 'R': state = 112; break;
                    case 'B': state = 81; break;
                    case 'p': state = 94; break;
                    case '8': state = 85; break;
                    case 'b': state = 28; break;
                    case 'I': state = 67; break;
                    case '2': state = 72; break;
                    case 'n': state = 82; break;
                    case 'U': state = 108; break;
                    case 'P': state = 61; break;
                    case 'X': state = 109; break;
                    case 'N': state = 83; break;
                    case 'K': state = 75; break;
                    case 'L': state = 60; break;
                    case 'C': state = 88; break;
                    case '5': state = 62; break;
                    default: return std::find(finalNodes.begin(), finalNodes.end(), state) != finalNodes.end();
                }
                break;
            case 82: 
                switch(letter) {
                    case '9': state = 44; break;
                    case 't': state = 25; break;
                    case 'f': state = 91; break;
                    case 'u': state = 92; break;
                    case '0': state = 93; break;
                    case 'V': state = 96; break;
                    case 'v': state = 99; break;
                    case 'D': state = 87; break;
                    case 'o': state = 101; break;
                    case 'y': state = 104; break;
                    case 'c': state = 106; break;
                    case 'x': state = 71; break;
                    case 'F': state = 77; break;
                    case 'q': state = 74; break;
                    case 'Z': state = 58; break;
                    case 'A': state = 78; break;
                    case 'a': state = 66; break;
                    case 'M': state = 63; break;
                    case 'S': state = 113; break;
                    case 'i': state = 68; break;
                    case 'E': state = 70; break;
                    case 'g': state = 80; break;
                    case 'G': state = 105; break;
                    case 'O': state = 64; break;
                    case '4': state = 65; break;
                    case 'm': state = 79; break;
                    case 'P': state = 61; break;
                    case 'J': state = 24; break;
                    case 'Y': state = 97; break;
                    case 's': state = 59; break;
                    case 'r': state = 26; break;
                    case 'X': state = 109; break;
                    case '3': state = 23; break;
                    case 'd': state = 90; break;
                    case '5': state = 62; break;
                    case 'j': state = 110; break;
                    case '6': state = 27; break;
                    case 'W': state = 98; break;
                    case 'Q': state = 95; break;
                    case 'H': state = 69; break;
                    case 'b': state = 28; break;
                    case 'T': state = 103; break;
                    case '1': state = 100; break;
                    case 'h': state = 111; break;
                    case 'B': state = 81; break;
                    case 'p': state = 94; break;
                    case 'R': state = 112; break;
                    case '2': state = 72; break;
                    case 'n': state = 82; break;
                    case '7': state = 107; break;
                    case 'I': state = 67; break;
                    case 'z': state = 102; break;
                    case 'l': state = 76; break;
                    case 'N': state = 83; break;
                    case 'U': state = 108; break;
                    case 'k': state = 89; break;
                    case 'K': state = 75; break;
                    case 'e': state = 73; break;
                    case '8': state = 85; break;
                    case 'w': state = 84; break;
                    case 'L': state = 60; break;
                    case 'C': state = 88; break;
                    default: return std::find(finalNodes.begin(), finalNodes.end(), state) != finalNodes.end();
                }
                break;
            case 83: 
                switch(letter) {
                    case '9': state = 44; break;
                    case 't': state = 25; break;
                    case 'f': state = 91; break;
                    case 'u': state = 92; break;
                    case '0': state = 93; break;
                    case 'V': state = 96; break;
                    case 'v': state = 99; break;
                    case 'D': state = 87; break;
                    case 'o': state = 101; break;
                    case 'T': state = 103; break;
                    case 'y': state = 104; break;
                    case 'c': state = 106; break;
                    case '4': state = 65; break;
                    case 'x': state = 71; break;
                    case 'q': state = 74; break;
                    case 'Z': state = 58; break;
                    case 'A': state = 78; break;
                    case 'F': state = 77; break;
                    case 'a': state = 66; break;
                    case 'M': state = 63; break;
                    case 'S': state = 113; break;
                    case 'h': state = 111; break;
                    case 'i': state = 68; break;
                    case 'g': state = 80; break;
                    case 'O': state = 64; break;
                    case 'L': state = 60; break;
                    case 'G': state = 105; break;
                    case 'm': state = 79; break;
                    case 'P': state = 61; break;
                    case '5': state = 62; break;
                    case 'J': state = 24; break;
                    case 'C': state = 88; break;
                    case 's': state = 59; break;
                    case 'K': state = 75; break;
                    case 'p': state = 94; break;
                    case 'X': state = 109; break;
                    case 'j': state = 110; break;
                    case 'E': state = 70; break;
                    case 'd': state = 90; break;
                    case 'r': state = 26; break;
                    case 'H': state = 69; break;
                    case '6': state = 27; break;
                    case 'Y': state = 97; break;
                    case 'W': state = 98; break;
                    case 'Q': state = 95; break;
                    case 'z': state = 102; break;
                    case '3': state = 23; break;
                    case 'b': state = 28; break;
                    case 'k': state = 89; break;
                    case '1': state = 100; break;
                    case 'B': state = 81; break;
                    case 'N': state = 83; break;
                    case '7': state = 107; break;
                    case '2': state = 72; break;
                    case 'I': state = 67; break;
                    case 'R': state = 112; break;
                    case 'l': state = 76; break;
                    case 'n': state = 82; break;
                    case 'U': state = 108; break;
                    case 'e': state = 73; break;
                    case '8': state = 85; break;
                    case 'w': state = 84; break;
                    default: return std::find(finalNodes.begin(), finalNodes.end(), state) != finalNodes.end();
                }
                break;
            case 84: 
                switch(letter) {
                    case '9': state = 44; break;
                    case 't': state = 25; break;
                    case 'f': state = 91; break;
                    case 'u': state = 92; break;
                    case '0': state = 93; break;
                    case 'V': state = 96; break;
                    case 'v': state = 99; break;
                    case 'D': state = 87; break;
                    case 'o': state = 101; break;
                    case 'y': state = 104; break;
                    case 'c': state = 106; break;
                    case '4': state = 65; break;
                    case 'x': state = 71; break;
                    case 'h': state = 111; break;
                    case 'g': state = 80; break;
                    case 'E': state = 70; break;
                    case 'i': state = 68; break;
                    case 'L': state = 60; break;
                    case 'S': state = 113; break;
                    case 'a': state = 66; break;
                    case 'Z': state = 58; break;
                    case 'q': state = 74; break;
                    case 'A': state = 78; break;
                    case 'F': state = 77; break;
                    case 'w': state = 84; break;
                    case 'e': state = 73; break;
                    case 'M': state = 63; break;
                    case 'G': state = 105; break;
                    case 'K': state = 75; break;
                    case '8': state = 85; break;
                    case 'b': state = 28; break;
                    case 'd': state = 90; break;
                    case 'X': state = 109; break;
                    case 'r': state = 26; break;
                    case 'P': state = 61; break;
                    case 'Y': state = 97; break;
                    case 'B': state = 81; break;
                    case 'N': state = 83; break;
                    case 'z': state = 102; break;
                    case 'I': state = 67; break;
                    case 'p': state = 94; break;
                    case 'W': state = 98; break;
                    case '5': state = 62; break;
                    case '3': state = 23; break;
                    case 'l': state = 76; break;
                    case 'J': state = 24; break;
                    case '7': state = 107; break;
                    case 'Q': state = 95; break;
                    case 'j': state = 110; break;
                    case '2': state = 72; break;
                    case 'H': state = 69; break;
                    case 'n': state = 82; break;
                    case 'T': state = 103; break;
                    case 'k': state = 89; break;
                    case 'R': state = 112; break;
                    case '1': state = 100; break;
                    case 'U': state = 108; break;
                    case '6': state = 27; break;
                    case 'C': state = 88; break;
                    case 'm': state = 79; break;
                    case 's': state = 59; break;
                    case 'O': state = 64; break;
                    default: return std::find(finalNodes.begin(), finalNodes.end(), state) != finalNodes.end();
                }
                break;
            case 85: 
                switch(letter) {
                    case '9': state = 44; break;
                    case 't': state = 25; break;
                    case 'f': state = 91; break;
                    case 'u': state = 92; break;
                    case '0': state = 93; break;
                    case 'V': state = 96; break;
                    case 'v': state = 99; break;
                    case 'D': state = 87; break;
                    case 'o': state = 101; break;
                    case 'T': state = 103; break;
                    case 'y': state = 104; break;
                    case 'c': state = 106; break;
                    case '4': state = 65; break;
                    case 'x': state = 71; break;
                    case 'h': state = 111; break;
                    case 'g': state = 80; break;
                    case 'E': state = 70; break;
                    case 'i': state = 68; break;
                    case 'L': state = 60; break;
                    case 'S': state = 113; break;
                    case 'a': state = 66; break;
                    case 'F': state = 77; break;
                    case 'Z': state = 58; break;
                    case 'q': state = 74; break;
                    case 'A': state = 78; break;
                    case 'w': state = 84; break;
                    case 'e': state = 73; break;
                    case 'M': state = 63; break;
                    case 'G': state = 105; break;
                    case 'K': state = 75; break;
                    case 'O': state = 64; break;
                    case 'J': state = 24; break;
                    case 'P': state = 61; break;
                    case 'b': state = 28; break;
                    case 'Y': state = 97; break;
                    case '5': state = 62; break;
                    case '3': state = 23; break;
                    case 'z': state = 102; break;
                    case 'p': state = 94; break;
                    case 'm': state = 79; break;
                    case 'd': state = 90; break;
                    case 'r': state = 26; break;
                    case 'B': state = 81; break;
                    case 'W': state = 98; break;
                    case 'I': state = 67; break;
                    case '8': state = 85; break;
                    case '1': state = 100; break;
                    case 'Q': state = 95; break;
                    case '7': state = 107; break;
                    case 'X': state = 109; break;
                    case 'N': state = 83; break;
                    case 'j': state = 110; break;
                    case '2': state = 72; break;
                    case 'H': state = 69; break;
                    case 'n': state = 82; break;
                    case 'R': state = 112; break;
                    case 'l': state = 76; break;
                    case 'U': state = 108; break;
                    case 'k': state = 89; break;
                    case '6': state = 27; break;
                    case 'C': state = 88; break;
                    case 's': state = 59; break;
                    default: return std::find(finalNodes.begin(), finalNodes.end(), state) != finalNodes.end();
                }
                break;
            case 86: 
                switch(letter) {
                    case '9': state = 44; break;
                    case 't': state = 25; break;
                    case 'f': state = 91; break;
                    case 'u': state = 92; break;
                    case '0': state = 93; break;
                    case 'V': state = 96; break;
                    case 'v': state = 99; break;
                    case 'D': state = 87; break;
                    case 'o': state = 101; break;
                    case 'T': state = 103; break;
                    case 'y': state = 104; break;
                    case 'c': state = 106; break;
                    case '4': state = 65; break;
                    case 'x': state = 71; break;
                    case 'F': state = 77; break;
                    case 'q': state = 74; break;
                    case 'Z': state = 58; break;
                    case 'A': state = 78; break;
                    case 'a': state = 66; break;
                    case 'S': state = 113; break;
                    case 'i': state = 68; break;
                    case 'E': state = 70; break;
                    case 'g': state = 80; break;
                    case 'e': state = 73; break;
                    case 'M': state = 63; break;
                    case 'G': state = 105; break;
                    case 'K': state = 75; break;
                    case 'L': state = 60; break;
                    case 'w': state = 84; break;
                    case 'm': state = 79; break;
                    case '3': state = 23; break;
                    case 'r': state = 26; break;
                    case 'Y': state = 97; break;
                    case 'p': state = 94; break;
                    case 'z': state = 102; break;
                    case 'X': state = 109; break;
                    case 'b': state = 28; break;
                    case 'W': state = 98; break;
                    case 'Q': state = 95; break;
                    case 'I': state = 67; break;
                    case '7': state = 107; break;
                    case '1': state = 100; break;
                    case 'J': state = 24; break;
                    case 'k': state = 89; break;
                    case 'B': state = 81; break;
                    case 'O': state = 64; break;
                    case 'h': state = 111; break;
                    case 'l': state = 76; break;
                    case '2': state = 72; break;
                    case 'n': state = 82; break;
                    case 'd': state = 90; break;
                    case 'R': state = 112; break;
                    case '5': state = 62; break;
                    case 'j': state = 110; break;
                    case 'N': state = 83; break;
                    case 'U': state = 108; break;
                    case '6': state = 27; break;
                    case 'H': state = 69; break;
                    case 's': state = 59; break;
                    case 'P': state = 61; break;
                    case 'C': state = 88; break;
                    case '8': state = 85; break;
                    default: return std::find(finalNodes.begin(), finalNodes.end(), state) != finalNodes.end();
                }
                break;
            case 87: 
                switch(letter) {
                    case 'W': state = 98; break;
                    case 'J': state = 24; break;
                    case 'N': state = 83; break;
                    case 'T': state = 103; break;
                    case 'o': state = 101; break;
                    case 'v': state = 99; break;
                    case 'a': state = 66; break;
                    case 'n': state = 82; break;
                    case 'g': state = 80; break;
                    case 'e': state = 73; break;
                    case 'C': state = 88; break;
                    case 't': state = 25; break;
                    case 'P': state = 61; break;
                    case 'V': state = 96; break;
                    case 'b': state = 28; break;
                    case 'z': state = 102; break;
                    case 'h': state = 111; break;
                    case 'u': state = 92; break;
                    case 'Q': state = 95; break;
                    case 'r': state = 26; break;
                    case 'Y': state = 97; break;
                    case 'M': state = 63; break;
                    case 'i': state = 68; break;
                    case 'X': state = 109; break;
                    case 'd': state = 90; break;
                    case 'l': state = 76; break;
                    case '7': state = 107; break;
                    case 'E': state = 70; break;
                    case '4': state = 65; break;
                    case '3': state = 23; break;
                    case 'F': state = 77; break;
                    case '5': state = 62; break;
                    case 'D': state = 87; break;
                    case 'c': state = 106; break;
                    case 'p': state = 94; break;
                    case 'f': state = 91; break;
                    case 'B': state = 81; break;
                    case 'I': state = 67; break;
                    case 'j': state = 110; break;
                    case '6': state = 27; break;
                    case 'y': state = 104; break;
                    case 'q': state = 74; break;
                    case '9': state = 44; break;
                    case 'R': state = 112; break;
                    case 'S': state = 113; break;
                    case 'A': state = 78; break;
                    case 'Z': state = 58; break;
                    case '2': state = 72; break;
                    case 'x': state = 71; break;
                    case 'G': state = 105; break;
                    case 'w': state = 84; break;
                    case '0': state = 93; break;
                    case 'U': state = 108; break;
                    case 's': state = 59; break;
                    case 'k': state = 89; break;
                    case 'm': state = 79; break;
                    case 'K': state = 75; break;
                    case '1': state = 100; break;
                    case 'H': state = 69; break;
                    case 'L': state = 60; break;
                    case 'O': state = 64; break;
                    case '8': state = 85; break;
                    default: return std::find(finalNodes.begin(), finalNodes.end(), state) != finalNodes.end();
                }
                break;
            case 88: 
                switch(letter) {
                    case 's': state = 59; break;
                    case 'z': state = 102; break;
                    case '3': state = 23; break;
                    case 'K': state = 75; break;
                    case 'f': state = 91; break;
                    case 'q': state = 74; break;
                    case 'I': state = 67; break;
                    case 'e': state = 73; break;
                    case 'y': state = 104; break;
                    case 'V': state = 96; break;
                    case 'S': state = 113; break;
                    case 'w': state = 84; break;
                    case 'N': state = 83; break;
                    case '4': state = 65; break;
                    case 'G': state = 105; break;
                    case 't': state = 25; break;
                    case '9': state = 44; break;
                    case 'P': state = 61; break;
                    case 'U': state = 108; break;
                    case 'D': state = 87; break;
                    case '5': state = 62; break;
                    case 'p': state = 94; break;
                    case '7': state = 107; break;
                    case 'n': state = 82; break;
                    case 'L': state = 60; break;
                    case 'j': state = 110; break;
                    case 'c': state = 106; break;
                    case 'x': state = 71; break;
                    case 'i': state = 68; break;
                    case 'o': state = 101; break;
                    case 'Q': state = 95; break;
                    case 'H': state = 69; break;
                    case 'M': state = 63; break;
                    case 'r': state = 26; break;
                    case 'J': state = 24; break;
                    case 'b': state = 28; break;
                    case 'E': state = 70; break;
                    case '0': state = 93; break;
                    case 'Y': state = 97; break;
                    case 'h': state = 111; break;
                    case 'd': state = 90; break;
                    case 'A': state = 78; break;
                    case 'W': state = 98; break;
                    case 'l': state = 76; break;
                    case '6': state = 27; break;
                    case 'Z': state = 58; break;
                    case '8': state = 85; break;
                    case 'm': state = 79; break;
                    case 'X': state = 109; break;
                    case 'k': state = 89; break;
                    case 'g': state = 80; break;
                    case 'a': state = 66; break;
                    case 'R': state = 112; break;
                    case '2': state = 72; break;
                    case 'u': state = 92; break;
                    case '1': state = 100; break;
                    case 'v': state = 99; break;
                    case 'C': state = 88; break;
                    case 'B': state = 81; break;
                    case 'T': state = 103; break;
                    case 'F': state = 77; break;
                    case 'O': state = 64; break;
                    default: return std::find(finalNodes.begin(), finalNodes.end(), state) != finalNodes.end();
                }
                break;
            case 89: 
                switch(letter) {
                    case 's': state = 59; break;
                    case '3': state = 23; break;
                    case 'K': state = 75; break;
                    case 'f': state = 91; break;
                    case 'i': state = 68; break;
                    case 'C': state = 88; break;
                    case 'y': state = 104; break;
                    case 'V': state = 96; break;
                    case 'G': state = 105; break;
                    case 'l': state = 76; break;
                    case 't': state = 25; break;
                    case 'w': state = 84; break;
                    case '7': state = 107; break;
                    case 'D': state = 87; break;
                    case 'P': state = 61; break;
                    case '5': state = 62; break;
                    case 'S': state = 113; break;
                    case 'A': state = 78; break;
                    case 'c': state = 106; break;
                    case 'W': state = 98; break;
                    case 'r': state = 26; break;
                    case 'g': state = 80; break;
                    case 'Q': state = 95; break;
                    case 'L': state = 60; break;
                    case 'o': state = 101; break;
                    case '4': state = 65; break;
                    case 'Y': state = 97; break;
                    case 'H': state = 69; break;
                    case 'I': state = 67; break;
                    case 'J': state = 24; break;
                    case '0': state = 93; break;
                    case 'k': state = 89; break;
                    case 'E': state = 70; break;
                    case 'd': state = 90; break;
                    case 'B': state = 81; break;
                    case 'X': state = 109; break;
                    case 'h': state = 111; break;
                    case 'j': state = 110; break;
                    case 'm': state = 79; break;
                    case '6': state = 27; break;
                    case '9': state = 44; break;
                    case 'p': state = 94; break;
                    case 'z': state = 102; break;
                    case 'x': state = 71; break;
                    case 'u': state = 92; break;
                    case '1': state = 100; break;
                    case 'e': state = 73; break;
                    case 'N': state = 83; break;
                    case 'n': state = 82; break;
                    case 'Z': state = 58; break;
                    case 'a': state = 66; break;
                    case 'b': state = 28; break;
                    case 'U': state = 108; break;
                    case 'v': state = 99; break;
                    case 'M': state = 63; break;
                    case 'O': state = 64; break;
                    case '2': state = 72; break;
                    case 'q': state = 74; break;
                    case 'R': state = 112; break;
                    case 'F': state = 77; break;
                    case 'T': state = 103; break;
                    case '8': state = 85; break;
                    default: return std::find(finalNodes.begin(), finalNodes.end(), state) != finalNodes.end();
                }
                break;
            case 90: 
                switch(letter) {
                    case 't': state = 25; break;
                    case 's': state = 59; break;
                    case '3': state = 23; break;
                    case 'K': state = 75; break;
                    case 'i': state = 68; break;
                    case 'C': state = 88; break;
                    case 'f': state = 91; break;
                    case '4': state = 65; break;
                    case 'l': state = 76; break;
                    case 'J': state = 24; break;
                    case 'q': state = 74; break;
                    case '5': state = 62; break;
                    case 'b': state = 28; break;
                    case 'P': state = 61; break;
                    case 'Z': state = 58; break;
                    case 'G': state = 105; break;
                    case 'E': state = 70; break;
                    case 'g': state = 80; break;
                    case 'S': state = 113; break;
                    case 'r': state = 26; break;
                    case 'w': state = 84; break;
                    case 'H': state = 69; break;
                    case 'o': state = 101; break;
                    case '6': state = 27; break;
                    case 'L': state = 60; break;
                    case 'k': state = 89; break;
                    case 'Q': state = 95; break;
                    case 'h': state = 111; break;
                    case 'z': state = 102; break;
                    case 'N': state = 83; break;
                    case 'p': state = 94; break;
                    case '9': state = 44; break;
                    case '7': state = 107; break;
                    case 'B': state = 81; break;
                    case 'y': state = 104; break;
                    case 'X': state = 109; break;
                    case 'x': state = 71; break;
                    case 'c': state = 106; break;
                    case 'F': state = 77; break;
                    case 'W': state = 98; break;
                    case 'D': state = 87; break;
                    case 'n': state = 82; break;
                    case 'I': state = 67; break;
                    case 'a': state = 66; break;
                    case 'u': state = 92; break;
                    case 'Y': state = 97; break;
                    case 'M': state = 63; break;
                    case 'm': state = 79; break;
                    case '1': state = 100; break;
                    case 'R': state = 112; break;
                    case 'O': state = 64; break;
                    case '8': state = 85; break;
                    case 'U': state = 108; break;
                    case 'j': state = 110; break;
                    case 'v': state = 99; break;
                    case '2': state = 72; break;
                    case 'e': state = 73; break;
                    case 'A': state = 78; break;
                    case 'T': state = 103; break;
                    case 'V': state = 96; break;
                    case '0': state = 93; break;
                    case 'd': state = 90; break;
                    default: return std::find(finalNodes.begin(), finalNodes.end(), state) != finalNodes.end();
                }
                break;
            case 91: 
                switch(letter) {
                    case 's': state = 59; break;
                    case '3': state = 23; break;
                    case 'C': state = 88; break;
                    case 'K': state = 75; break;
                    case 'f': state = 91; break;
                    case 'S': state = 113; break;
                    case '5': state = 62; break;
                    case '4': state = 65; break;
                    case 't': state = 25; break;
                    case 'J': state = 24; break;
                    case 'D': state = 87; break;
                    case 'b': state = 28; break;
                    case 'P': state = 61; break;
                    case 'Z': state = 58; break;
                    case 'G': state = 105; break;
                    case 'E': state = 70; break;
                    case 'Q': state = 95; break;
                    case 'l': state = 76; break;
                    case 'I': state = 67; break;
                    case 'H': state = 69; break;
                    case 'o': state = 101; break;
                    case 'M': state = 63; break;
                    case 'w': state = 84; break;
                    case 'L': state = 60; break;
                    case 'k': state = 89; break;
                    case 'A': state = 78; break;
                    case 'h': state = 111; break;
                    case 'd': state = 90; break;
                    case '6': state = 27; break;
                    case '7': state = 107; break;
                    case 'r': state = 26; break;
                    case 'i': state = 68; break;
                    case 'y': state = 104; break;
                    case 'q': state = 74; break;
                    case 'X': state = 109; break;
                    case 'c': state = 106; break;
                    case 'W': state = 98; break;
                    case 'p': state = 94; break;
                    case '9': state = 44; break;
                    case 'B': state = 81; break;
                    case '2': state = 72; break;
                    case 'x': state = 71; break;
                    case 'm': state = 79; break;
                    case 'N': state = 83; break;
                    case 'R': state = 112; break;
                    case 'a': state = 66; break;
                    case 'u': state = 92; break;
                    case 'n': state = 82; break;
                    case 'U': state = 108; break;
                    case 'F': state = 77; break;
                    case 'Y': state = 97; break;
                    case 'z': state = 102; break;
                    case '8': state = 85; break;
                    case 'g': state = 80; break;
                    case 'j': state = 110; break;
                    case 'e': state = 73; break;
                    case 'O': state = 64; break;
                    case 'T': state = 103; break;
                    case 'V': state = 96; break;
                    case '0': state = 93; break;
                    case '1': state = 100; break;
                    case 'v': state = 99; break;
                    default: return std::find(finalNodes.begin(), finalNodes.end(), state) != finalNodes.end();
                }
                break;
            case 92: 
                switch(letter) {
                    case 's': state = 59; break;
                    case '3': state = 23; break;
                    case 'f': state = 91; break;
                    case 'i': state = 68; break;
                    case 'K': state = 75; break;
                    case '5': state = 62; break;
                    case 'k': state = 89; break;
                    case 'J': state = 24; break;
                    case 't': state = 25; break;
                    case 'Q': state = 95; break;
                    case 'C': state = 88; break;
                    case 'P': state = 61; break;
                    case '7': state = 107; break;
                    case 'Z': state = 58; break;
                    case 'S': state = 113; break;
                    case 'W': state = 98; break;
                    case 'M': state = 63; break;
                    case 'l': state = 76; break;
                    case 'E': state = 70; break;
                    case '6': state = 27; break;
                    case 'o': state = 101; break;
                    case 'H': state = 69; break;
                    case 'q': state = 74; break;
                    case 'v': state = 99; break;
                    case 'b': state = 28; break;
                    case 'z': state = 102; break;
                    case 'r': state = 26; break;
                    case 'w': state = 84; break;
                    case 'c': state = 106; break;
                    case '4': state = 65; break;
                    case 'N': state = 83; break;
                    case 'h': state = 111; break;
                    case '9': state = 44; break;
                    case 'm': state = 79; break;
                    case 'd': state = 90; break;
                    case 'y': state = 104; break;
                    case 'j': state = 110; break;
                    case 'X': state = 109; break;
                    case 'D': state = 87; break;
                    case 'p': state = 94; break;
                    case 'G': state = 105; break;
                    case 'B': state = 81; break;
                    case 'R': state = 112; break;
                    case 'a': state = 66; break;
                    case 'Y': state = 97; break;
                    case 'u': state = 92; break;
                    case 'I': state = 67; break;
                    case 'n': state = 82; break;
                    case 'g': state = 80; break;
                    case 'x': state = 71; break;
                    case 'F': state = 77; break;
                    case 'L': state = 60; break;
                    case 'U': state = 108; break;
                    case 'A': state = 78; break;
                    case '2': state = 72; break;
                    case 'e': state = 73; break;
                    case '8': state = 85; break;
                    case 'T': state = 103; break;
                    case '1': state = 100; break;
                    case 'V': state = 96; break;
                    case '0': state = 93; break;
                    case 'O': state = 64; break;
                    default: return std::find(finalNodes.begin(), finalNodes.end(), state) != finalNodes.end();
                }
                break;
            case 93: 
                switch(letter) {
                    case 'R': state = 112; break;
                    case 's': state = 59; break;
                    case 'K': state = 75; break;
                    case 'i': state = 68; break;
                    case 'e': state = 73; break;
                    case 'f': state = 91; break;
                    case 'C': state = 88; break;
                    case 'J': state = 24; break;
                    case 't': state = 25; break;
                    case 'l': state = 76; break;
                    case 'x': state = 71; break;
                    case '7': state = 107; break;
                    case 'P': state = 61; break;
                    case 'k': state = 89; break;
                    case 'G': state = 105; break;
                    case 'z': state = 102; break;
                    case '3': state = 23; break;
                    case 'H': state = 69; break;
                    case 'S': state = 113; break;
                    case '6': state = 27; break;
                    case '4': state = 65; break;
                    case '5': state = 62; break;
                    case 'p': state = 94; break;
                    case 'N': state = 83; break;
                    case 'o': state = 101; break;
                    case 'E': state = 70; break;
                    case 'v': state = 99; break;
                    case 'b': state = 28; break;
                    case 'q': state = 74; break;
                    case 'd': state = 90; break;
                    case 'M': state = 63; break;
                    case '0': state = 93; break;
                    case 'h': state = 111; break;
                    case 'Y': state = 97; break;
                    case 'u': state = 92; break;
                    case 'g': state = 80; break;
                    case 'U': state = 108; break;
                    case 'w': state = 84; break;
                    case 'X': state = 109; break;
                    case 'D': state = 87; break;
                    case 'c': state = 106; break;
                    case 'Q': state = 95; break;
                    case 'B': state = 81; break;
                    case 'I': state = 67; break;
                    case 'j': state = 110; break;
                    case 'r': state = 26; break;
                    case 'W': state = 98; break;
                    case 'Z': state = 58; break;
                    case '1': state = 100; break;
                    case 'm': state = 79; break;
                    case 'y': state = 104; break;
                    case '9': state = 44; break;
                    case 'L': state = 60; break;
                    case '2': state = 72; break;
                    case 'F': state = 77; break;
                    case 'n': state = 82; break;
                    case 'A': state = 78; break;
                    case '8': state = 85; break;
                    case 'V': state = 96; break;
                    case 'O': state = 64; break;
                    case 'a': state = 66; break;
                    case 'T': state = 103; break;
                    default: return std::find(finalNodes.begin(), finalNodes.end(), state) != finalNodes.end();
                }
                break;
            case 94: 
                switch(letter) {
                    case 'R': state = 112; break;
                    case 's': state = 59; break;
                    case 'i': state = 68; break;
                    case 'K': state = 75; break;
                    case 'T': state = 103; break;
                    case 'f': state = 91; break;
                    case 'Z': state = 58; break;
                    case 'C': state = 88; break;
                    case 'l': state = 76; break;
                    case 't': state = 25; break;
                    case '3': state = 23; break;
                    case 'D': state = 87; break;
                    case '0': state = 93; break;
                    case 'S': state = 113; break;
                    case 'k': state = 89; break;
                    case 'L': state = 60; break;
                    case 'M': state = 63; break;
                    case 'p': state = 94; break;
                    case 'B': state = 81; break;
                    case 'E': state = 70; break;
                    case 'N': state = 83; break;
                    case 'H': state = 69; break;
                    case '6': state = 27; break;
                    case 'P': state = 61; break;
                    case 'v': state = 99; break;
                    case 'J': state = 24; break;
                    case 'd': state = 90; break;
                    case '4': state = 65; break;
                    case 'Q': state = 95; break;
                    case 'z': state = 102; break;
                    case '5': state = 62; break;
                    case 'o': state = 101; break;
                    case 'h': state = 111; break;
                    case 'x': state = 71; break;
                    case 'r': state = 26; break;
                    case 'G': state = 105; break;
                    case 'c': state = 106; break;
                    case 'j': state = 110; break;
                    case 'X': state = 109; break;
                    case 'q': state = 74; break;
                    case 'u': state = 92; break;
                    case 'b': state = 28; break;
                    case '1': state = 100; break;
                    case 'W': state = 98; break;
                    case 'O': state = 64; break;
                    case 'y': state = 104; break;
                    case '9': state = 44; break;
                    case '7': state = 107; break;
                    case 'a': state = 66; break;
                    case 'I': state = 67; break;
                    case 'm': state = 79; break;
                    case 'n': state = 82; break;
                    case 'F': state = 77; break;
                    case 'g': state = 80; break;
                    case '8': state = 85; break;
                    case 'e': state = 73; break;
                    case '2': state = 72; break;
                    case 'A': state = 78; break;
                    case 'w': state = 84; break;
                    case 'U': state = 108; break;
                    case 'V': state = 96; break;
                    case 'Y': state = 97; break;
                    default: return std::find(finalNodes.begin(), finalNodes.end(), state) != finalNodes.end();
                }
                break;
            case 95: 
                switch(letter) {
                    case 's': state = 59; break;
                    case '3': state = 23; break;
                    case 'i': state = 68; break;
                    case 'C': state = 88; break;
                    case 'q': state = 74; break;
                    case 'Z': state = 58; break;
                    case '0': state = 93; break;
                    case 'k': state = 89; break;
                    case 't': state = 25; break;
                    case 'P': state = 61; break;
                    case 'r': state = 26; break;
                    case 'J': state = 24; break;
                    case 'w': state = 84; break;
                    case 'S': state = 113; break;
                    case 'B': state = 81; break;
                    case 'o': state = 101; break;
                    case 'L': state = 60; break;
                    case 'm': state = 79; break;
                    case 'M': state = 63; break;
                    case 'E': state = 70; break;
                    case '4': state = 65; break;
                    case 'd': state = 90; break;
                    case 'l': state = 76; break;
                    case '7': state = 107; break;
                    case '5': state = 62; break;
                    case 'h': state = 111; break;
                    case 'N': state = 83; break;
                    case '6': state = 27; break;
                    case 'x': state = 71; break;
                    case 'W': state = 98; break;
                    case 'H': state = 69; break;
                    case 'e': state = 73; break;
                    case 'u': state = 92; break;
                    case 'Q': state = 95; break;
                    case 'p': state = 94; break;
                    case 'X': state = 109; break;
                    case 'b': state = 28; break;
                    case 'y': state = 104; break;
                    case 'D': state = 87; break;
                    case '9': state = 44; break;
                    case 'c': state = 106; break;
                    case 'Y': state = 97; break;
                    case 'f': state = 91; break;
                    case '2': state = 72; break;
                    case 'F': state = 77; break;
                    case 'v': state = 99; break;
                    case 'I': state = 67; break;
                    case 'A': state = 78; break;
                    case 'n': state = 82; break;
                    case 'R': state = 112; break;
                    case '8': state = 85; break;
                    case 'g': state = 80; break;
                    case 'j': state = 110; break;
                    case 'U': state = 108; break;
                    case 'G': state = 105; break;
                    case 'z': state = 102; break;
                    case '1': state = 100; break;
                    case 'V': state = 96; break;
                    case 'O': state = 64; break;
                    case 'K': state = 75; break;
                    case 'T': state = 103; break;
                    case 'a': state = 66; break;
                    default: return std::find(finalNodes.begin(), finalNodes.end(), state) != finalNodes.end();
                }
                break;
            case 96: 
                switch(letter) {
                    case 'R': state = 112; break;
                    case 'q': state = 74; break;
                    case 'K': state = 75; break;
                    case 'i': state = 68; break;
                    case 'f': state = 91; break;
                    case 'G': state = 105; break;
                    case '7': state = 107; break;
                    case 'J': state = 24; break;
                    case 'B': state = 81; break;
                    case 'l': state = 76; break;
                    case 'w': state = 84; break;
                    case 'S': state = 113; break;
                    case 'p': state = 94; break;
                    case '3': state = 23; break;
                    case 'b': state = 28; break;
                    case '4': state = 65; break;
                    case 'E': state = 70; break;
                    case 't': state = 25; break;
                    case 'I': state = 67; break;
                    case 'C': state = 88; break;
                    case 'o': state = 101; break;
                    case 'L': state = 60; break;
                    case 'r': state = 26; break;
                    case 'z': state = 102; break;
                    case 's': state = 59; break;
                    case 'P': state = 61; break;
                    case 'W': state = 98; break;
                    case 'Z': state = 58; break;
                    case 'h': state = 111; break;
                    case '6': state = 27; break;
                    case 'A': state = 78; break;
                    case '9': state = 44; break;
                    case 'D': state = 87; break;
                    case 'H': state = 69; break;
                    case 'm': state = 79; break;
                    case 'x': state = 71; break;
                    case '0': state = 93; break;
                    case '1': state = 100; break;
                    case 'k': state = 89; break;
                    case 'u': state = 92; break;
                    case 'g': state = 80; break;
                    case 'c': state = 106; break;
                    case 'M': state = 63; break;
                    case 'Y': state = 97; break;
                    case 'F': state = 77; break;
                    case 'v': state = 99; break;
                    case 'n': state = 82; break;
                    case '8': state = 85; break;
                    case 'j': state = 110; break;
                    case 'e': state = 73; break;
                    case '2': state = 72; break;
                    case 'U': state = 108; break;
                    case 'y': state = 104; break;
                    case 'V': state = 96; break;
                    case 'X': state = 109; break;
                    case 'd': state = 90; break;
                    case '5': state = 62; break;
                    case 'O': state = 64; break;
                    case 'Q': state = 95; break;
                    case 'a': state = 66; break;
                    case 'T': state = 103; break;
                    case 'N': state = 83; break;
                    default: return std::find(finalNodes.begin(), finalNodes.end(), state) != finalNodes.end();
                }
                break;
            case 97: 
                switch(letter) {
                    case 'f': state = 91; break;
                    case 'a': state = 66; break;
                    case 'v': state = 99; break;
                    case 'C': state = 88; break;
                    case 'T': state = 103; break;
                    case 'O': state = 64; break;
                    case 'H': state = 69; break;
                    case 'G': state = 105; break;
                    case 'K': state = 75; break;
                    case 'V': state = 96; break;
                    case '0': state = 93; break;
                    case 'J': state = 24; break;
                    case 'l': state = 76; break;
                    case 'P': state = 61; break;
                    case 'I': state = 67; break;
                    case '6': state = 27; break;
                    case '3': state = 23; break;
                    case 'u': state = 92; break;
                    case 'S': state = 113; break;
                    case 'E': state = 70; break;
                    case '7': state = 107; break;
                    case 'Z': state = 58; break;
                    case 'i': state = 68; break;
                    case 'r': state = 26; break;
                    case '1': state = 100; break;
                    case 'o': state = 101; break;
                    case 'e': state = 73; break;
                    case 'L': state = 60; break;
                    case 'z': state = 102; break;
                    case 'X': state = 109; break;
                    case 'd': state = 90; break;
                    case '4': state = 65; break;
                    case 't': state = 25; break;
                    case 'c': state = 106; break;
                    case 'U': state = 108; break;
                    case 'k': state = 89; break;
                    case 'A': state = 78; break;
                    case '9': state = 44; break;
                    case 'g': state = 80; break;
                    case 'N': state = 83; break;
                    case 'p': state = 94; break;
                    case 'b': state = 28; break;
                    case 'j': state = 110; break;
                    case 'M': state = 63; break;
                    case 'n': state = 82; break;
                    case 'R': state = 112; break;
                    case 'Y': state = 97; break;
                    case 'w': state = 84; break;
                    case 'F': state = 77; break;
                    case 'm': state = 79; break;
                    case 'q': state = 74; break;
                    case '8': state = 85; break;
                    case 'B': state = 81; break;
                    case 'h': state = 111; break;
                    case 'x': state = 71; break;
                    case 'y': state = 104; break;
                    case 'D': state = 87; break;
                    case '2': state = 72; break;
                    case 's': state = 59; break;
                    case '5': state = 62; break;
                    case 'Q': state = 95; break;
                    case 'W': state = 98; break;
                    default: return std::find(finalNodes.begin(), finalNodes.end(), state) != finalNodes.end();
                }
                break;
            case 98: 
                switch(letter) {
                    case 'l': state = 76; break;
                    case 'f': state = 91; break;
                    case 'a': state = 66; break;
                    case 'v': state = 99; break;
                    case 'O': state = 64; break;
                    case 'C': state = 88; break;
                    case 'T': state = 103; break;
                    case '9': state = 44; break;
                    case 'V': state = 96; break;
                    case '7': state = 107; break;
                    case 'P': state = 61; break;
                    case 'Q': state = 95; break;
                    case '1': state = 100; break;
                    case 'o': state = 101; break;
                    case 'M': state = 63; break;
                    case 'p': state = 94; break;
                    case 'J': state = 24; break;
                    case '3': state = 23; break;
                    case 'Z': state = 58; break;
                    case 'I': state = 67; break;
                    case 'u': state = 92; break;
                    case 'W': state = 98; break;
                    case 'i': state = 68; break;
                    case '4': state = 65; break;
                    case 'L': state = 60; break;
                    case 'z': state = 102; break;
                    case 'r': state = 26; break;
                    case 'w': state = 84; break;
                    case 'S': state = 113; break;
                    case 'd': state = 90; break;
                    case 'R': state = 112; break;
                    case 'c': state = 106; break;
                    case 'h': state = 111; break;
                    case 'A': state = 78; break;
                    case 'E': state = 70; break;
                    case 'G': state = 105; break;
                    case 'k': state = 89; break;
                    case 'e': state = 73; break;
                    case 'H': state = 69; break;
                    case 't': state = 25; break;
                    case 'Y': state = 97; break;
                    case 'n': state = 82; break;
                    case 'g': state = 80; break;
                    case 'U': state = 108; break;
                    case 'F': state = 77; break;
                    case 'q': state = 74; break;
                    case 'm': state = 79; break;
                    case 'j': state = 110; break;
                    case 'B': state = 81; break;
                    case '8': state = 85; break;
                    case 'x': state = 71; break;
                    case 'y': state = 104; break;
                    case 'D': state = 87; break;
                    case '0': state = 93; break;
                    case '5': state = 62; break;
                    case 'X': state = 109; break;
                    case '2': state = 72; break;
                    case 's': state = 59; break;
                    case 'K': state = 75; break;
                    case '6': state = 27; break;
                    case 'N': state = 83; break;
                    case 'b': state = 28; break;
                    default: return std::find(finalNodes.begin(), finalNodes.end(), state) != finalNodes.end();
                }
                break;
            case 99: 
                switch(letter) {
                    case 'T': state = 103; break;
                    case 'o': state = 101; break;
                    case 'C': state = 88; break;
                    case 'v': state = 99; break;
                    case 'K': state = 75; break;
                    case 'e': state = 73; break;
                    case 'G': state = 105; break;
                    case '7': state = 107; break;
                    case 'E': state = 70; break;
                    case 'O': state = 64; break;
                    case 'g': state = 80; break;
                    case 'w': state = 84; break;
                    case '9': state = 44; break;
                    case 'V': state = 96; break;
                    case 'P': state = 61; break;
                    case 'm': state = 79; break;
                    case '3': state = 23; break;
                    case '1': state = 100; break;
                    case 'u': state = 92; break;
                    case 'J': state = 24; break;
                    case 'd': state = 90; break;
                    case 'i': state = 68; break;
                    case '4': state = 65; break;
                    case 't': state = 25; break;
                    case 'Z': state = 58; break;
                    case 'k': state = 89; break;
                    case 'S': state = 113; break;
                    case 'I': state = 67; break;
                    case 'W': state = 98; break;
                    case 'Y': state = 97; break;
                    case 'H': state = 69; break;
                    case 'l': state = 76; break;
                    case 'r': state = 26; break;
                    case 'R': state = 112; break;
                    case 'z': state = 102; break;
                    case 'N': state = 83; break;
                    case 'c': state = 106; break;
                    case '6': state = 27; break;
                    case 'x': state = 71; break;
                    case 'h': state = 111; break;
                    case 'p': state = 94; break;
                    case '0': state = 93; break;
                    case 'y': state = 104; break;
                    case 'n': state = 82; break;
                    case 'A': state = 78; break;
                    case 'b': state = 28; break;
                    case 'U': state = 108; break;
                    case 'X': state = 109; break;
                    case 'D': state = 87; break;
                    case '8': state = 85; break;
                    case 'B': state = 81; break;
                    case 'j': state = 110; break;
                    case 'M': state = 63; break;
                    case 'a': state = 66; break;
                    case 'q': state = 74; break;
                    case 'F': state = 77; break;
                    case 'f': state = 91; break;
                    case '5': state = 62; break;
                    case 's': state = 59; break;
                    case '2': state = 72; break;
                    case 'L': state = 60; break;
                    case 'Q': state = 95; break;
                    default: return std::find(finalNodes.begin(), finalNodes.end(), state) != finalNodes.end();
                }
                break;
            case 100: 
                switch(letter) {
                    case 'T': state = 103; break;
                    case 'f': state = 91; break;
                    case 'J': state = 24; break;
                    case 'a': state = 66; break;
                    case 'o': state = 101; break;
                    case 'v': state = 99; break;
                    case 'O': state = 64; break;
                    case '1': state = 100; break;
                    case 'C': state = 88; break;
                    case '9': state = 44; break;
                    case '3': state = 23; break;
                    case 'M': state = 63; break;
                    case 'i': state = 68; break;
                    case 'G': state = 105; break;
                    case 'V': state = 96; break;
                    case '6': state = 27; break;
                    case 'q': state = 74; break;
                    case 'g': state = 80; break;
                    case 'l': state = 76; break;
                    case 'x': state = 71; break;
                    case 'P': state = 61; break;
                    case 'W': state = 98; break;
                    case '7': state = 107; break;
                    case 'u': state = 92; break;
                    case 'k': state = 89; break;
                    case 'X': state = 109; break;
                    case 'I': state = 67; break;
                    case 'b': state = 28; break;
                    case 'Z': state = 58; break;
                    case 'Q': state = 95; break;
                    case 'S': state = 113; break;
                    case 'd': state = 90; break;
                    case 'B': state = 81; break;
                    case 'L': state = 60; break;
                    case 'r': state = 26; break;
                    case '4': state = 65; break;
                    case 'H': state = 69; break;
                    case 'U': state = 108; break;
                    case 'h': state = 111; break;
                    case 'e': state = 73; break;
                    case 'w': state = 84; break;
                    case 'z': state = 102; break;
                    case 'N': state = 83; break;
                    case 'A': state = 78; break;
                    case 'D': state = 87; break;
                    case 'R': state = 112; break;
                    case 'n': state = 82; break;
                    case 'y': state = 104; break;
                    case 'c': state = 106; break;
                    case 'p': state = 94; break;
                    case 'Y': state = 97; break;
                    case 't': state = 25; break;
                    case '0': state = 93; break;
                    case 'E': state = 70; break;
                    case '8': state = 85; break;
                    case 'j': state = 110; break;
                    case '5': state = 62; break;
                    case 'F': state = 77; break;
                    case 'm': state = 79; break;
                    case 'K': state = 75; break;
                    case 's': state = 59; break;
                    case '2': state = 72; break;
                    default: return std::find(finalNodes.begin(), finalNodes.end(), state) != finalNodes.end();
                }
                break;
            case 101: 
                switch(letter) {
                    case 'J': state = 24; break;
                    case 'a': state = 66; break;
                    case 'T': state = 103; break;
                    case 'o': state = 101; break;
                    case 'v': state = 99; break;
                    case 'E': state = 70; break;
                    case 'l': state = 76; break;
                    case 'g': state = 80; break;
                    case '3': state = 23; break;
                    case '9': state = 44; break;
                    case 'A': state = 78; break;
                    case '7': state = 107; break;
                    case 'W': state = 98; break;
                    case 'S': state = 113; break;
                    case 'P': state = 61; break;
                    case 'V': state = 96; break;
                    case 'q': state = 74; break;
                    case 'M': state = 63; break;
                    case 'Z': state = 58; break;
                    case 'I': state = 67; break;
                    case 'd': state = 90; break;
                    case 'X': state = 109; break;
                    case 'Y': state = 97; break;
                    case 'G': state = 105; break;
                    case 'u': state = 92; break;
                    case '1': state = 100; break;
                    case 'Q': state = 95; break;
                    case '4': state = 65; break;
                    case 'i': state = 68; break;
                    case 'n': state = 82; break;
                    case 'L': state = 60; break;
                    case 'r': state = 26; break;
                    case 'H': state = 69; break;
                    case 'U': state = 108; break;
                    case 'h': state = 111; break;
                    case '5': state = 62; break;
                    case '2': state = 72; break;
                    case 'b': state = 28; break;
                    case 'k': state = 89; break;
                    case 'x': state = 71; break;
                    case 'z': state = 102; break;
                    case 'y': state = 104; break;
                    case 'c': state = 106; break;
                    case 'D': state = 87; break;
                    case 't': state = 25; break;
                    case 'N': state = 83; break;
                    case 'p': state = 94; break;
                    case 'R': state = 112; break;
                    case 'B': state = 81; break;
                    case '0': state = 93; break;
                    case 'w': state = 84; break;
                    case 'f': state = 91; break;
                    case 'm': state = 79; break;
                    case 'e': state = 73; break;
                    case '8': state = 85; break;
                    case 'F': state = 77; break;
                    case 'K': state = 75; break;
                    case 's': state = 59; break;
                    case '6': state = 27; break;
                    case 'j': state = 110; break;
                    case 'C': state = 88; break;
                    case 'O': state = 64; break;
                    default: return std::find(finalNodes.begin(), finalNodes.end(), state) != finalNodes.end();
                }
                break;
            case 102: 
                switch(letter) {
                    case 'J': state = 24; break;
                    case 'l': state = 76; break;
                    case 'T': state = 103; break;
                    case 'a': state = 66; break;
                    case 'O': state = 64; break;
                    case 'o': state = 101; break;
                    case 'v': state = 99; break;
                    case 'G': state = 105; break;
                    case '9': state = 44; break;
                    case 't': state = 25; break;
                    case 'N': state = 83; break;
                    case 'M': state = 63; break;
                    case '6': state = 27; break;
                    case 'P': state = 61; break;
                    case 'V': state = 96; break;
                    case 'A': state = 78; break;
                    case 'g': state = 80; break;
                    case 'Z': state = 58; break;
                    case 'u': state = 92; break;
                    case '3': state = 23; break;
                    case 'd': state = 90; break;
                    case 'b': state = 28; break;
                    case 'k': state = 89; break;
                    case '1': state = 100; break;
                    case 'W': state = 98; break;
                    case 'I': state = 67; break;
                    case 'S': state = 113; break;
                    case '4': state = 65; break;
                    case 'i': state = 68; break;
                    case 'q': state = 74; break;
                    case 'H': state = 69; break;
                    case 'r': state = 26; break;
                    case 'h': state = 111; break;
                    case 'U': state = 108; break;
                    case 'e': state = 73; break;
                    case 'y': state = 104; break;
                    case '7': state = 107; break;
                    case 'x': state = 71; break;
                    case 'n': state = 82; break;
                    case 'z': state = 102; break;
                    case 'R': state = 112; break;
                    case 'E': state = 70; break;
                    case 'D': state = 87; break;
                    case 'p': state = 94; break;
                    case 'c': state = 106; break;
                    case 'B': state = 81; break;
                    case 'j': state = 110; break;
                    case 'X': state = 109; break;
                    case '5': state = 62; break;
                    case '0': state = 93; break;
                    case 'm': state = 79; break;
                    case 'Y': state = 97; break;
                    case 'w': state = 84; break;
                    case 'f': state = 91; break;
                    case '8': state = 85; break;
                    case 's': state = 59; break;
                    case '2': state = 72; break;
                    case 'F': state = 77; break;
                    case 'L': state = 60; break;
                    case 'K': state = 75; break;
                    case 'Q': state = 95; break;
                    case 'C': state = 88; break;
                    default: return std::find(finalNodes.begin(), finalNodes.end(), state) != finalNodes.end();
                }
                break;
            case 103: 
                switch(letter) {
                    case 'J': state = 24; break;
                    case 'O': state = 64; break;
                    case 'T': state = 103; break;
                    case 'o': state = 101; break;
                    case 'v': state = 99; break;
                    case 'a': state = 66; break;
                    case 'M': state = 63; break;
                    case 'P': state = 61; break;
                    case '9': state = 44; break;
                    case 'V': state = 96; break;
                    case 'g': state = 80; break;
                    case 'S': state = 113; break;
                    case 'e': state = 73; break;
                    case 'w': state = 84; break;
                    case 'u': state = 92; break;
                    case 'W': state = 98; break;
                    case 'X': state = 109; break;
                    case 'd': state = 90; break;
                    case 'I': state = 67; break;
                    case 't': state = 25; break;
                    case '3': state = 23; break;
                    case 'Q': state = 95; break;
                    case 'k': state = 89; break;
                    case 'l': state = 76; break;
                    case 'C': state = 88; break;
                    case 'q': state = 74; break;
                    case 'i': state = 68; break;
                    case '4': state = 65; break;
                    case 'H': state = 69; break;
                    case 'L': state = 60; break;
                    case 'h': state = 111; break;
                    case 'Z': state = 58; break;
                    case 'U': state = 108; break;
                    case 'r': state = 26; break;
                    case 'y': state = 104; break;
                    case 'G': state = 105; break;
                    case '7': state = 107; break;
                    case 'x': state = 71; break;
                    case '2': state = 72; break;
                    case 'A': state = 78; break;
                    case 'z': state = 102; break;
                    case 'n': state = 82; break;
                    case 'B': state = 81; break;
                    case 'R': state = 112; break;
                    case 'b': state = 28; break;
                    case 'c': state = 106; break;
                    case 'E': state = 70; break;
                    case 'p': state = 94; break;
                    case 'j': state = 110; break;
                    case '1': state = 100; break;
                    case 'D': state = 87; break;
                    case 'N': state = 83; break;
                    case '5': state = 62; break;
                    case 'm': state = 79; break;
                    case '8': state = 85; break;
                    case '0': state = 93; break;
                    case 'Y': state = 97; break;
                    case 'f': state = 91; break;
                    case 's': state = 59; break;
                    case 'F': state = 77; break;
                    case 'K': state = 75; break;
                    case '6': state = 27; break;
                    default: return std::find(finalNodes.begin(), finalNodes.end(), state) != finalNodes.end();
                }
                break;
            case 104: 
                switch(letter) {
                    case '3': state = 23; break;
                    case 'J': state = 24; break;
                    case 'O': state = 64; break;
                    case 'T': state = 103; break;
                    case '1': state = 100; break;
                    case 'C': state = 88; break;
                    case 'o': state = 101; break;
                    case 'W': state = 98; break;
                    case 'M': state = 63; break;
                    case 'l': state = 76; break;
                    case 'P': state = 61; break;
                    case 'V': state = 96; break;
                    case 'A': state = 78; break;
                    case 'Y': state = 97; break;
                    case 'e': state = 73; break;
                    case 'S': state = 113; break;
                    case 'H': state = 69; break;
                    case 'X': state = 109; break;
                    case 'I': state = 67; break;
                    case '4': state = 65; break;
                    case 'n': state = 82; break;
                    case 'v': state = 99; break;
                    case 't': state = 25; break;
                    case 'U': state = 108; break;
                    case 'G': state = 105; break;
                    case 'Q': state = 95; break;
                    case 'k': state = 89; break;
                    case 'r': state = 26; break;
                    case 'a': state = 66; break;
                    case 'E': state = 70; break;
                    case 'm': state = 79; break;
                    case 'x': state = 71; break;
                    case 'g': state = 80; break;
                    case 'i': state = 68; break;
                    case '2': state = 72; break;
                    case 'Z': state = 58; break;
                    case '0': state = 93; break;
                    case 'q': state = 74; break;
                    case 'z': state = 102; break;
                    case 'p': state = 94; break;
                    case 'b': state = 28; break;
                    case 'y': state = 104; break;
                    case 'c': state = 106; break;
                    case '7': state = 107; break;
                    case 'h': state = 111; break;
                    case '9': state = 44; break;
                    case 'w': state = 84; break;
                    case 'f': state = 91; break;
                    case 'N': state = 83; break;
                    case '5': state = 62; break;
                    case 'D': state = 87; break;
                    case 'F': state = 77; break;
                    case '6': state = 27; break;
                    case '8': state = 85; break;
                    case 'j': state = 110; break;
                    case 'u': state = 92; break;
                    case 'R': state = 112; break;
                    case 'L': state = 60; break;
                    case 'B': state = 81; break;
                    case 'K': state = 75; break;
                    case 's': state = 59; break;
                    case 'd': state = 90; break;
                    default: return std::find(finalNodes.begin(), finalNodes.end(), state) != finalNodes.end();
                }
                break;
            case 105: 
                switch(letter) {
                    case 'C': state = 88; break;
                    case '3': state = 23; break;
                    case 'J': state = 24; break;
                    case 'T': state = 103; break;
                    case '1': state = 100; break;
                    case 'O': state = 64; break;
                    case 'o': state = 101; break;
                    case 'c': state = 106; break;
                    case 'A': state = 78; break;
                    case 'M': state = 63; break;
                    case 'l': state = 76; break;
                    case 'g': state = 80; break;
                    case 'P': state = 61; break;
                    case 'G': state = 105; break;
                    case 'S': state = 113; break;
                    case 'V': state = 96; break;
                    case 't': state = 25; break;
                    case 'e': state = 73; break;
                    case 'n': state = 82; break;
                    case 'E': state = 70; break;
                    case 'I': state = 67; break;
                    case 'U': state = 108; break;
                    case 'i': state = 68; break;
                    case '4': state = 65; break;
                    case 'v': state = 99; break;
                    case 'r': state = 26; break;
                    case 'b': state = 28; break;
                    case 'Q': state = 95; break;
                    case 'H': state = 69; break;
                    case 'm': state = 79; break;
                    case '6': state = 27; break;
                    case 'Z': state = 58; break;
                    case 'N': state = 83; break;
                    case 'h': state = 111; break;
                    case '9': state = 44; break;
                    case 'F': state = 77; break;
                    case 'x': state = 71; break;
                    case 'B': state = 81; break;
                    case 'R': state = 112; break;
                    case 'p': state = 94; break;
                    case 'w': state = 84; break;
                    case 'y': state = 104; break;
                    case 'd': state = 90; break;
                    case 'q': state = 74; break;
                    case 'z': state = 102; break;
                    case '7': state = 107; break;
                    case 'k': state = 89; break;
                    case 's': state = 59; break;
                    case 'Y': state = 97; break;
                    case '2': state = 72; break;
                    case 'j': state = 110; break;
                    case 'f': state = 91; break;
                    case 'D': state = 87; break;
                    case '5': state = 62; break;
                    case '8': state = 85; break;
                    case 'u': state = 92; break;
                    case 'L': state = 60; break;
                    case 'X': state = 109; break;
                    case '0': state = 93; break;
                    case 'a': state = 66; break;
                    case 'K': state = 75; break;
                    case 'W': state = 98; break;
                    default: return std::find(finalNodes.begin(), finalNodes.end(), state) != finalNodes.end();
                }
                break;
            case 106: 
                switch(letter) {
                    case 'C': state = 88; break;
                    case 'J': state = 24; break;
                    case 'o': state = 101; break;
                    case 'v': state = 99; break;
                    case 'T': state = 103; break;
                    case 'O': state = 64; break;
                    case '1': state = 100; break;
                    case '4': state = 65; break;
                    case 'i': state = 68; break;
                    case 'M': state = 63; break;
                    case 'D': state = 87; break;
                    case 'V': state = 96; break;
                    case 'q': state = 74; break;
                    case 'g': state = 80; break;
                    case 'l': state = 76; break;
                    case 'e': state = 73; break;
                    case '3': state = 23; break;
                    case '7': state = 107; break;
                    case 'A': state = 78; break;
                    case 'E': state = 70; break;
                    case 'U': state = 108; break;
                    case 'G': state = 105; break;
                    case 'I': state = 67; break;
                    case 'P': state = 61; break;
                    case 't': state = 25; break;
                    case 'b': state = 28; break;
                    case 'Q': state = 95; break;
                    case 'H': state = 69; break;
                    case 'r': state = 26; break;
                    case 'Z': state = 58; break;
                    case 'S': state = 113; break;
                    case 'L': state = 60; break;
                    case 'w': state = 84; break;
                    case 'k': state = 89; break;
                    case 'z': state = 102; break;
                    case 'X': state = 109; break;
                    case '2': state = 72; break;
                    case 'p': state = 94; break;
                    case 'c': state = 106; break;
                    case 'x': state = 71; break;
                    case '0': state = 93; break;
                    case 'm': state = 79; break;
                    case '6': state = 27; break;
                    case 'f': state = 91; break;
                    case 'y': state = 104; break;
                    case 'h': state = 111; break;
                    case 'N': state = 83; break;
                    case 'n': state = 82; break;
                    case 'Y': state = 97; break;
                    case 's': state = 59; break;
                    case '9': state = 44; break;
                    case 'd': state = 90; break;
                    case 'u': state = 92; break;
                    case 'R': state = 112; break;
                    case '5': state = 62; break;
                    case 'B': state = 81; break;
                    case 'j': state = 110; break;
                    case '8': state = 85; break;
                    case 'F': state = 77; break;
                    case 'a': state = 66; break;
                    case 'K': state = 75; break;
                    case 'W': state = 98; break;
                    default: return std::find(finalNodes.begin(), finalNodes.end(), state) != finalNodes.end();
                }
                break;
            case 107: 
                switch(letter) {
                    case 'J': state = 24; break;
                    case 'O': state = 64; break;
                    case 'T': state = 103; break;
                    case '1': state = 100; break;
                    case '3': state = 23; break;
                    case 'E': state = 70; break;
                    case 'M': state = 63; break;
                    case 'i': state = 68; break;
                    case 'y': state = 104; break;
                    case 'W': state = 98; break;
                    case 'P': state = 61; break;
                    case 'V': state = 96; break;
                    case 'Q': state = 95; break;
                    case 'A': state = 78; break;
                    case 'U': state = 108; break;
                    case 'N': state = 83; break;
                    case 'I': state = 67; break;
                    case 'w': state = 84; break;
                    case 'r': state = 26; break;
                    case 'Z': state = 58; break;
                    case 'v': state = 99; break;
                    case 'G': state = 105; break;
                    case 't': state = 25; break;
                    case 'S': state = 113; break;
                    case 'c': state = 106; break;
                    case 'k': state = 89; break;
                    case 'H': state = 69; break;
                    case 'o': state = 101; break;
                    case 'C': state = 88; break;
                    case 'h': state = 111; break;
                    case '4': state = 65; break;
                    case 'g': state = 80; break;
                    case 'x': state = 71; break;
                    case '2': state = 72; break;
                    case 'B': state = 81; break;
                    case 'l': state = 76; break;
                    case 'X': state = 109; break;
                    case 'q': state = 74; break;
                    case 'p': state = 94; break;
                    case '7': state = 107; break;
                    case 'Y': state = 97; break;
                    case '0': state = 93; break;
                    case 'n': state = 82; break;
                    case 'm': state = 79; break;
                    case 'e': state = 73; break;
                    case 's': state = 59; break;
                    case '9': state = 44; break;
                    case 'u': state = 92; break;
                    case 'f': state = 91; break;
                    case 'z': state = 102; break;
                    case '5': state = 62; break;
                    case 'L': state = 60; break;
                    case '6': state = 27; break;
                    case 'j': state = 110; break;
                    case 'b': state = 28; break;
                    case 'R': state = 112; break;
                    case 'D': state = 87; break;
                    case 'K': state = 75; break;
                    case '8': state = 85; break;
                    case 'F': state = 77; break;
                    case 'a': state = 66; break;
                    case 'd': state = 90; break;
                    default: return std::find(finalNodes.begin(), finalNodes.end(), state) != finalNodes.end();
                }
                break;
            case 108: 
                switch(letter) {
                    case '3': state = 23; break;
                    case 'J': state = 24; break;
                    case 'f': state = 91; break;
                    case 'T': state = 103; break;
                    case 'o': state = 101; break;
                    case 'v': state = 99; break;
                    case 'a': state = 66; break;
                    case 'C': state = 88; break;
                    case '1': state = 100; break;
                    case 'O': state = 64; break;
                    case 'G': state = 105; break;
                    case 'S': state = 113; break;
                    case 'l': state = 76; break;
                    case 'P': state = 61; break;
                    case 'V': state = 96; break;
                    case 'Y': state = 97; break;
                    case 'M': state = 63; break;
                    case 'e': state = 73; break;
                    case 'p': state = 94; break;
                    case 'r': state = 26; break;
                    case '5': state = 62; break;
                    case 'E': state = 70; break;
                    case '4': state = 65; break;
                    case 'u': state = 92; break;
                    case 'I': state = 67; break;
                    case 'w': state = 84; break;
                    case 'H': state = 69; break;
                    case 't': state = 25; break;
                    case 'd': state = 90; break;
                    case 'Q': state = 95; break;
                    case 'z': state = 102; break;
                    case 'm': state = 79; break;
                    case 'b': state = 28; break;
                    case 'K': state = 75; break;
                    case 'c': state = 106; break;
                    case 'Z': state = 58; break;
                    case 'i': state = 68; break;
                    case 'R': state = 112; break;
                    case 'y': state = 104; break;
                    case 'x': state = 71; break;
                    case 'g': state = 80; break;
                    case 'N': state = 83; break;
                    case 'h': state = 111; break;
                    case 'n': state = 82; break;
                    case 'B': state = 81; break;
                    case '6': state = 27; break;
                    case 'k': state = 89; break;
                    case '7': state = 107; break;
                    case 'A': state = 78; break;
                    case 'q': state = 74; break;
                    case '2': state = 72; break;
                    case 'W': state = 98; break;
                    case 'U': state = 108; break;
                    case '9': state = 44; break;
                    case 'L': state = 60; break;
                    case 'j': state = 110; break;
                    case 's': state = 59; break;
                    case '0': state = 93; break;
                    case 'X': state = 109; break;
                    case 'F': state = 77; break;
                    case '8': state = 85; break;
                    case 'D': state = 87; break;
                    default: return std::find(finalNodes.begin(), finalNodes.end(), state) != finalNodes.end();
                }
                break;
            case 109: 
                switch(letter) {
                    case 'J': state = 24; break;
                    case 'f': state = 91; break;
                    case '3': state = 23; break;
                    case 'o': state = 101; break;
                    case 'v': state = 99; break;
                    case 'T': state = 103; break;
                    case 'C': state = 88; break;
                    case 'S': state = 113; break;
                    case 'G': state = 105; break;
                    case 'l': state = 76; break;
                    case 'P': state = 61; break;
                    case 'E': state = 70; break;
                    case 'y': state = 104; break;
                    case 'p': state = 94; break;
                    case 'V': state = 96; break;
                    case 'c': state = 106; break;
                    case 'Y': state = 97; break;
                    case 'e': state = 73; break;
                    case 't': state = 25; break;
                    case '4': state = 65; break;
                    case 'q': state = 74; break;
                    case 'u': state = 92; break;
                    case 'W': state = 98; break;
                    case 'H': state = 69; break;
                    case 'M': state = 63; break;
                    case 'b': state = 28; break;
                    case 'z': state = 102; break;
                    case 'Q': state = 95; break;
                    case 'r': state = 26; break;
                    case 'i': state = 68; break;
                    case 'R': state = 112; break;
                    case 'x': state = 71; break;
                    case 'g': state = 80; break;
                    case 'Z': state = 58; break;
                    case 'I': state = 67; break;
                    case 'm': state = 79; break;
                    case '5': state = 62; break;
                    case 'A': state = 78; break;
                    case '7': state = 107; break;
                    case 'n': state = 82; break;
                    case 'h': state = 111; break;
                    case 'L': state = 60; break;
                    case 'k': state = 89; break;
                    case '6': state = 27; break;
                    case 'w': state = 84; break;
                    case 'X': state = 109; break;
                    case 'B': state = 81; break;
                    case 'F': state = 77; break;
                    case 'U': state = 108; break;
                    case 'N': state = 83; break;
                    case 'D': state = 87; break;
                    case '9': state = 44; break;
                    case 'd': state = 90; break;
                    case 'j': state = 110; break;
                    case '8': state = 85; break;
                    case '0': state = 93; break;
                    case 'O': state = 64; break;
                    case '2': state = 72; break;
                    case 's': state = 59; break;
                    case 'a': state = 66; break;
                    case '1': state = 100; break;
                    case 'K': state = 75; break;
                    default: return std::find(finalNodes.begin(), finalNodes.end(), state) != finalNodes.end();
                }
                break;
            case 110: 
                switch(letter) {
                    case '3': state = 23; break;
                    case 'J': state = 24; break;
                    case 'f': state = 91; break;
                    case 'T': state = 103; break;
                    case 'a': state = 66; break;
                    case 'o': state = 101; break;
                    case 'v': state = 99; break;
                    case '1': state = 100; break;
                    case 'O': state = 64; break;
                    case 'l': state = 76; break;
                    case 'G': state = 105; break;
                    case 'w': state = 84; break;
                    case 'y': state = 104; break;
                    case 'C': state = 88; break;
                    case 'e': state = 73; break;
                    case 'V': state = 96; break;
                    case 'N': state = 83; break;
                    case '7': state = 107; break;
                    case 't': state = 25; break;
                    case 'd': state = 90; break;
                    case '4': state = 65; break;
                    case '6': state = 27; break;
                    case 'Z': state = 58; break;
                    case '5': state = 62; break;
                    case 'c': state = 106; break;
                    case 'b': state = 28; break;
                    case 'Y': state = 97; break;
                    case 'Q': state = 95; break;
                    case 'I': state = 67; break;
                    case 'S': state = 113; break;
                    case 'P': state = 61; break;
                    case 'M': state = 63; break;
                    case 'm': state = 79; break;
                    case 'z': state = 102; break;
                    case 'p': state = 94; break;
                    case 'E': state = 70; break;
                    case 'i': state = 68; break;
                    case 'r': state = 26; break;
                    case 'U': state = 108; break;
                    case 'k': state = 89; break;
                    case 'h': state = 111; break;
                    case 'g': state = 80; break;
                    case 'x': state = 71; break;
                    case 'R': state = 112; break;
                    case 'H': state = 69; break;
                    case 'n': state = 82; break;
                    case 'B': state = 81; break;
                    case 'A': state = 78; break;
                    case 's': state = 59; break;
                    case 'q': state = 74; break;
                    case '2': state = 72; break;
                    case 'D': state = 87; break;
                    case 'F': state = 77; break;
                    case 'j': state = 110; break;
                    case 'L': state = 60; break;
                    case '9': state = 44; break;
                    case '0': state = 93; break;
                    case 'u': state = 92; break;
                    case 'X': state = 109; break;
                    case '8': state = 85; break;
                    case 'W': state = 98; break;
                    case 'K': state = 75; break;
                    default: return std::find(finalNodes.begin(), finalNodes.end(), state) != finalNodes.end();
                }
                break;
            case 111: 
                switch(letter) {
                    case '3': state = 23; break;
                    case 'f': state = 91; break;
                    case 'J': state = 24; break;
                    case 'T': state = 103; break;
                    case 'o': state = 101; break;
                    case 'v': state = 99; break;
                    case 'a': state = 66; break;
                    case '1': state = 100; break;
                    case 'O': state = 64; break;
                    case 'K': state = 75; break;
                    case 'l': state = 76; break;
                    case 'A': state = 78; break;
                    case 'y': state = 104; break;
                    case 'C': state = 88; break;
                    case 'V': state = 96; break;
                    case 'P': state = 61; break;
                    case 'e': state = 73; break;
                    case 'I': state = 67; break;
                    case 'q': state = 74; break;
                    case 'x': state = 71; break;
                    case 'G': state = 105; break;
                    case 't': state = 25; break;
                    case 'S': state = 113; break;
                    case '4': state = 65; break;
                    case 'd': state = 90; break;
                    case 'W': state = 98; break;
                    case '6': state = 27; break;
                    case '7': state = 107; break;
                    case 'Z': state = 58; break;
                    case '5': state = 62; break;
                    case 'H': state = 69; break;
                    case 'M': state = 63; break;
                    case 'U': state = 108; break;
                    case 'c': state = 106; break;
                    case 'b': state = 28; break;
                    case 'Q': state = 95; break;
                    case 'i': state = 68; break;
                    case 'R': state = 112; break;
                    case 'r': state = 26; break;
                    case 'm': state = 79; break;
                    case 'z': state = 102; break;
                    case 'E': state = 70; break;
                    case 'N': state = 83; break;
                    case 'p': state = 94; break;
                    case 'X': state = 109; break;
                    case 'h': state = 111; break;
                    case 'B': state = 81; break;
                    case 'n': state = 82; break;
                    case 'g': state = 80; break;
                    case 'k': state = 89; break;
                    case '2': state = 72; break;
                    case 'w': state = 84; break;
                    case 'D': state = 87; break;
                    case 'F': state = 77; break;
                    case '9': state = 44; break;
                    case 'L': state = 60; break;
                    case 'Y': state = 97; break;
                    case 'j': state = 110; break;
                    case 'u': state = 92; break;
                    case '0': state = 93; break;
                    case '8': state = 85; break;
                    case 's': state = 59; break;
                    default: return std::find(finalNodes.begin(), finalNodes.end(), state) != finalNodes.end();
                }
                break;
            case 112: 
                switch(letter) {
                    case '9': state = 44; break;
                    case 'K': state = 75; break;
                    case 'C': state = 88; break;
                    case 'a': state = 66; break;
                    case 'z': state = 102; break;
                    case 'V': state = 96; break;
                    case 'v': state = 99; break;
                    case 'X': state = 109; break;
                    case 'J': state = 24; break;
                    case 'G': state = 105; break;
                    case 'm': state = 79; break;
                    case 'b': state = 28; break;
                    case 'q': state = 74; break;
                    case 'R': state = 112; break;
                    case 'W': state = 98; break;
                    case 'H': state = 69; break;
                    case 'I': state = 67; break;
                    case 'Z': state = 58; break;
                    case '7': state = 107; break;
                    case '4': state = 65; break;
                    case '1': state = 100; break;
                    case 'Q': state = 95; break;
                    case 'y': state = 104; break;
                    case 't': state = 25; break;
                    case 'U': state = 108; break;
                    case 'j': state = 110; break;
                    case 'u': state = 92; break;
                    case 'S': state = 113; break;
                    case 'l': state = 76; break;
                    case 'd': state = 90; break;
                    case 'o': state = 101; break;
                    case '2': state = 72; break;
                    case 'P': state = 61; break;
                    case 'M': state = 63; break;
                    case '5': state = 62; break;
                    case '3': state = 23; break;
                    case 'D': state = 87; break;
                    case 'w': state = 84; break;
                    case 'i': state = 68; break;
                    case 'e': state = 73; break;
                    case 'r': state = 26; break;
                    case 'h': state = 111; break;
                    case 'E': state = 70; break;
                    case 'n': state = 82; break;
                    case 'B': state = 81; break;
                    case 'T': state = 103; break;
                    case 'N': state = 83; break;
                    case 'g': state = 80; break;
                    case 'k': state = 89; break;
                    case 'c': state = 106; break;
                    case 'Y': state = 97; break;
                    case 'p': state = 94; break;
                    case '6': state = 27; break;
                    case 'f': state = 91; break;
                    case 'F': state = 77; break;
                    case '8': state = 85; break;
                    case 'A': state = 78; break;
                    case '0': state = 93; break;
                    case 'x': state = 71; break;
                    case 'O': state = 64; break;
                    case 'L': state = 60; break;
                    case 's': state = 59; break;
                    default: return std::find(finalNodes.begin(), finalNodes.end(), state) != finalNodes.end();
                }
                break;
            case 113: 
                switch(letter) {
                    case 'l': state = 76; break;
                    case '1': state = 100; break;
                    case '9': state = 44; break;
                    case 'K': state = 75; break;
                    case 'C': state = 88; break;
                    case 'D': state = 87; break;
                    case 'U': state = 108; break;
                    case 'V': state = 96; break;
                    case 't': state = 25; break;
                    case 'p': state = 94; break;
                    case 'O': state = 64; break;
                    case 'I': state = 67; break;
                    case 'W': state = 98; break;
                    case 'E': state = 70; break;
                    case 'B': state = 81; break;
                    case '7': state = 107; break;
                    case '4': state = 65; break;
                    case 'Q': state = 95; break;
                    case 'y': state = 104; break;
                    case 'J': state = 24; break;
                    case 'z': state = 102; break;
                    case 'S': state = 113; break;
                    case 'G': state = 105; break;
                    case 'i': state = 68; break;
                    case 'v': state = 99; break;
                    case 'b': state = 28; break;
                    case 'n': state = 82; break;
                    case 'j': state = 110; break;
                    case 'u': state = 92; break;
                    case '5': state = 62; break;
                    case 'o': state = 101; break;
                    case 'X': state = 109; break;
                    case 'Z': state = 58; break;
                    case 'c': state = 106; break;
                    case 'P': state = 61; break;
                    case 'M': state = 63; break;
                    case '3': state = 23; break;
                    case 'w': state = 84; break;
                    case 'r': state = 26; break;
                    case 'T': state = 103; break;
                    case 'A': state = 78; break;
                    case 'h': state = 111; break;
                    case 'q': state = 74; break;
                    case 'e': state = 73; break;
                    case 'g': state = 80; break;
                    case 'R': state = 112; break;
                    case 'F': state = 77; break;
                    case 'H': state = 69; break;
                    case 'N': state = 83; break;
                    case '2': state = 72; break;
                    case 'x': state = 71; break;
                    case 'Y': state = 97; break;
                    case 'k': state = 89; break;
                    case 'f': state = 91; break;
                    case '8': state = 85; break;
                    case 'm': state = 79; break;
                    case 'L': state = 60; break;
                    case '0': state = 93; break;
                    case 'a': state = 66; break;
                    case 's': state = 59; break;
                    case 'd': state = 90; break;
                    case '6': state = 27; break;
                    default: return std::find(finalNodes.begin(), finalNodes.end(), state) != finalNodes.end();
                }
                break;
            case 114: 
                switch(letter) {
                    case 'I': state = 6; break;
                    case 'p': state = 14; break;
                    case 'H': state = 5; break;
                    case 'U': state = 22; break;
                    case 'c': state = 12; break;
                    case 'e': state = 10; break;
                    case 'K': state = 45; break;
                    case 'a': state = 8; break;
                    case 'L': state = 56; break;
                    case 'Y': state = 19; break;
                    case 's': state = 4; break;
                    case 'x': state = 30; break;
                    case 'S': state = 11; break;
                    case 'A': state = 53; break;
                    case 'r': state = 49; break;
                    case 'D': state = 0; break;
                    case 'V': state = 20; break;
                    case 'i': state = 29; break;
                    case 'F': state = 42; break;
                    case 'n': state = 37; break;
                    case 'w': state = 33; break;
                    case 'X': state = 86; break;
                    case 't': state = 1; break;
                    case 'Q': state = 17; break;
                    case 'f': state = 3; break;
                    case 'o': state = 39; break;
                    case 'm': state = 43; break;
                    case 'M': state = 9; break;
                    case 'y': state = 31; break;
                    case 'z': state = 34; break;
                    case 'W': state = 18; break;
                    case 'b': state = 52; break;
                    case 'g': state = 50; break;
                    case 'q': state = 35; break;
                    case 'J': state = 2; break;
                    case 'd': state = 41; break;
                    case 'j': state = 55; break;
                    case 'Z': state = 54; break;
                    case 'R': state = 57; break;
                    case 'P': state = 15; break;
                    case 'v': state = 38; break;
                    case 'E': state = 46; break;
                    case 'l': state = 51; break;
                    case 'u': state = 16; break;
                    case 'G': state = 32; break;
                    case 'h': state = 36; break;
                    case 'B': state = 13; break;
                    case 'O': state = 48; break;
                    case 'N': state = 47; break;
                    case 'C': state = 7; break;
                    case 'T': state = 21; break;
                    case 'k': state = 40; break;
                    default: return std::find(finalNodes.begin(), finalNodes.end(), state) != finalNodes.end();
                }
                break;
            default: break;
        }
    }
    return false;
}
bool _20(Input *input){
    std::vector<int> finalNodes = {2, 7, 0, 1, 3, 4, 9, 8, 6, 5};
    int state = 10; // 初始状态
    while(true) {
        char letter = (input->getInput())[0];
        switch(state) {
            case 0: 
                switch(letter) {
                    case '6': state = 8; break;
                    case '0': state = 5; break;
                    case '1': state = 0; break;
                    case '3': state = 1; break;
                    case '9': state = 4; break;
                    case '7': state = 3; break;
                    case '2': state = 6; break;
                    case '8': state = 9; break;
                    case '4': state = 7; break;
                    case '5': state = 2; break;
                    default: return std::find(finalNodes.begin(), finalNodes.end(), state) != finalNodes.end();
                }
                break;
            case 1: 
                switch(letter) {
                    case '3': state = 1; break;
                    case '1': state = 0; break;
                    case '5': state = 2; break;
                    case '7': state = 3; break;
                    case '2': state = 6; break;
                    case '9': state = 4; break;
                    case '6': state = 8; break;
                    case '8': state = 9; break;
                    case '4': state = 7; break;
                    case '0': state = 5; break;
                    default: return std::find(finalNodes.begin(), finalNodes.end(), state) != finalNodes.end();
                }
                break;
            case 2: 
                switch(letter) {
                    case '3': state = 1; break;
                    case '6': state = 8; break;
                    case '5': state = 2; break;
                    case '1': state = 0; break;
                    case '2': state = 6; break;
                    case '8': state = 9; break;
                    case '9': state = 4; break;
                    case '7': state = 3; break;
                    case '4': state = 7; break;
                    case '0': state = 5; break;
                    default: return std::find(finalNodes.begin(), finalNodes.end(), state) != finalNodes.end();
                }
                break;
            case 3: 
                switch(letter) {
                    case '3': state = 1; break;
                    case '5': state = 2; break;
                    case '8': state = 9; break;
                    case '2': state = 6; break;
                    case '0': state = 5; break;
                    case '4': state = 7; break;
                    case '6': state = 8; break;
                    case '7': state = 3; break;
                    case '9': state = 4; break;
                    case '1': state = 0; break;
                    default: return std::find(finalNodes.begin(), finalNodes.end(), state) != finalNodes.end();
                }
                break;
            case 4: 
                switch(letter) {
                    case '8': state = 9; break;
                    case '1': state = 0; break;
                    case '6': state = 8; break;
                    case '7': state = 3; break;
                    case '2': state = 6; break;
                    case '0': state = 5; break;
                    case '3': state = 1; break;
                    case '5': state = 2; break;
                    case '9': state = 4; break;
                    case '4': state = 7; break;
                    default: return std::find(finalNodes.begin(), finalNodes.end(), state) != finalNodes.end();
                }
                break;
            case 5: 
                switch(letter) {
                    case '7': state = 3; break;
                    case '8': state = 9; break;
                    case '5': state = 2; break;
                    case '6': state = 8; break;
                    case '0': state = 5; break;
                    case '3': state = 1; break;
                    case '4': state = 7; break;
                    case '1': state = 0; break;
                    case '2': state = 6; break;
                    case '9': state = 4; break;
                    default: return std::find(finalNodes.begin(), finalNodes.end(), state) != finalNodes.end();
                }
                break;
            case 6: 
                switch(letter) {
                    case '1': state = 0; break;
                    case '9': state = 4; break;
                    case '8': state = 9; break;
                    case '4': state = 7; break;
                    case '5': state = 2; break;
                    case '3': state = 1; break;
                    case '2': state = 6; break;
                    case '7': state = 3; break;
                    case '6': state = 8; break;
                    case '0': state = 5; break;
                    default: return std::find(finalNodes.begin(), finalNodes.end(), state) != finalNodes.end();
                }
                break;
            case 7: 
                switch(letter) {
                    case '1': state = 0; break;
                    case '8': state = 9; break;
                    case '3': state = 1; break;
                    case '5': state = 2; break;
                    case '9': state = 4; break;
                    case '4': state = 7; break;
                    case '7': state = 3; break;
                    case '6': state = 8; break;
                    case '2': state = 6; break;
                    case '0': state = 5; break;
                    default: return std::find(finalNodes.begin(), finalNodes.end(), state) != finalNodes.end();
                }
                break;
            case 8: 
                switch(letter) {
                    case '5': state = 2; break;
                    case '7': state = 3; break;
                    case '4': state = 7; break;
                    case '6': state = 8; break;
                    case '1': state = 0; break;
                    case '8': state = 9; break;
                    case '0': state = 5; break;
                    case '9': state = 4; break;
                    case '3': state = 1; break;
                    case '2': state = 6; break;
                    default: return std::find(finalNodes.begin(), finalNodes.end(), state) != finalNodes.end();
                }
                break;
            case 9: 
                switch(letter) {
                    case '4': state = 7; break;
                    case '9': state = 4; break;
                    case '1': state = 0; break;
                    case '8': state = 9; break;
                    case '3': state = 1; break;
                    case '0': state = 5; break;
                    case '6': state = 8; break;
                    case '7': state = 3; break;
                    case '2': state = 6; break;
                    case '5': state = 2; break;
                    default: return std::find(finalNodes.begin(), finalNodes.end(), state) != finalNodes.end();
                }
                break;
            case 10: 
                switch(letter) {
                    case '4': state = 7; break;
                    case '3': state = 1; break;
                    case '7': state = 3; break;
                    case '0': state = 5; break;
                    case '2': state = 6; break;
                    case '6': state = 8; break;
                    case '8': state = 9; break;
                    case '5': state = 2; break;
                    case '9': state = 4; break;
                    case '1': state = 0; break;
                    default: return std::find(finalNodes.begin(), finalNodes.end(), state) != finalNodes.end();
                }
                break;
            default: break;
        }
    }
    return false;
}
bool _open_comment(Input *input){
    std::vector<int> finalNodes = {0};
    int state = 1; // 初始状态
    while(true) {
        char letter = (input->getInput())[0];
        switch(state) {
            case 0: 
                switch(letter) {
                    default: return std::find(finalNodes.begin(), finalNodes.end(), state) != finalNodes.end();
                }
                break;
            case 1: 
                switch(letter) {
                    case '{': state = 0; break;
                    default: return std::find(finalNodes.begin(), finalNodes.end(), state) != finalNodes.end();
                }
                break;
            default: break;
        }
    }
    return false;
}
bool _close_comment(Input *input){
    std::vector<int> finalNodes = {0};
    int state = 1; // 初始状态
    while(true) {
        char letter = (input->getInput())[0];
        switch(state) {
            case 0: 
                switch(letter) {
                    default: return std::find(finalNodes.begin(), finalNodes.end(), state) != finalNodes.end();
                }
                break;
            case 1: 
                switch(letter) {
                    case '}': state = 0; break;
                    default: return std::find(finalNodes.begin(), finalNodes.end(), state) != finalNodes.end();
                }
                break;
            default: break;
        }
    }
    return false;
}
std::vector<token> getTokens(std::string filename){ 
    Input *input = new Input(filename); 
    std::vector<token> tokens;  
    while(!input->getInput().empty()){ 
        if (!tokens.empty() && tokens.back().name == "_open_comment")
        { 
            if (!_close_comment(input)){input->goBackOneChar(); continue;} 
            else{token newtoken; newtoken.name = "_comment"; tokens.push_back(newtoken); newtoken.name = "_close_comment"; tokens.push_back(newtoken); input->goBackOneChar(); continue;}
        }
        int tokenSize = tokens.size();
        input->goBackOneChar(); 
        char c = (input->getInput())[0]; 
         if(!tokens.empty() && tokens.back().name == "_oneLine_comment_open")
         { 
             if (c != '\n'){ continue;} 
             else{token newtoken; newtoken.name = "_comment"; tokens.push_back(newtoken); continue;}
         }
        if(c == ' ') { token newtoken; newtoken.name = "_space"; tokens.push_back(newtoken); continue;} 
        else if(c == '\t') { token newtoken; newtoken.name = "_tab"; tokens.push_back(newtoken); continue;} 
        else if(c == '\n') {token newtoken; newtoken.name = "_enter"; tokens.push_back(newtoken); continue;} 
        input->goBackOneChar();
        int pos = input->getPos();
        if(_1000(input)) {token newtoken; newtoken.name = "_1000"; newtoken.value = input->getTokenWord(pos);  tokens.push_back(newtoken); input->goBackOneChar(); continue; }  
        else input->goBack(pos);
        if(_1001(input)) {token newtoken; newtoken.name = "_1001"; newtoken.value = input->getTokenWord(pos);  tokens.push_back(newtoken); input->goBackOneChar(); continue; }  
        else input->goBack(pos);
        if(_1002(input)) {token newtoken; newtoken.name = "_1002"; newtoken.value = input->getTokenWord(pos);  tokens.push_back(newtoken); input->goBackOneChar(); continue; }  
        else input->goBack(pos);
        if(_1003(input)) {token newtoken; newtoken.name = "_1003"; newtoken.value = input->getTokenWord(pos);  tokens.push_back(newtoken); input->goBackOneChar(); continue; }  
        else input->goBack(pos);
        if(_1004(input)) {token newtoken; newtoken.name = "_1004"; newtoken.value = input->getTokenWord(pos);  tokens.push_back(newtoken); input->goBackOneChar(); continue; }  
        else input->goBack(pos);
        if(_1005(input)) {token newtoken; newtoken.name = "_1005"; newtoken.value = input->getTokenWord(pos);  tokens.push_back(newtoken); input->goBackOneChar(); continue; }  
        else input->goBack(pos);
        if(_1006(input)) {token newtoken; newtoken.name = "_1006"; newtoken.value = input->getTokenWord(pos);  tokens.push_back(newtoken); input->goBackOneChar(); continue; }  
        else input->goBack(pos);
        if(_1007(input)) {token newtoken; newtoken.name = "_1007"; newtoken.value = input->getTokenWord(pos);  tokens.push_back(newtoken); input->goBackOneChar(); continue; }  
        else input->goBack(pos);
        if(_500(input)) {token newtoken; newtoken.name = "_500"; newtoken.value = input->getTokenWord(pos);  tokens.push_back(newtoken); input->goBackOneChar(); continue; }  
        else input->goBack(pos);
        if(_501(input)) {token newtoken; newtoken.name = "_501"; newtoken.value = input->getTokenWord(pos);  tokens.push_back(newtoken); input->goBackOneChar(); continue; }  
        else input->goBack(pos);
        if(_502(input)) {token newtoken; newtoken.name = "_502"; newtoken.value = input->getTokenWord(pos);  tokens.push_back(newtoken); input->goBackOneChar(); continue; }  
        else input->goBack(pos);
        if(_503(input)) {token newtoken; newtoken.name = "_503"; newtoken.value = input->getTokenWord(pos);  tokens.push_back(newtoken); input->goBackOneChar(); continue; }  
        else input->goBack(pos);
        if(_504(input)) {token newtoken; newtoken.name = "_504"; newtoken.value = input->getTokenWord(pos);  tokens.push_back(newtoken); input->goBackOneChar(); continue; }  
        else input->goBack(pos);
        if(_505(input)) {token newtoken; newtoken.name = "_505"; newtoken.value = input->getTokenWord(pos);  tokens.push_back(newtoken); input->goBackOneChar(); continue; }  
        else input->goBack(pos);
        if(_506(input)) {token newtoken; newtoken.name = "_506"; newtoken.value = input->getTokenWord(pos);  tokens.push_back(newtoken); input->goBackOneChar(); continue; }  
        else input->goBack(pos);
        if(_507(input)) {token newtoken; newtoken.name = "_507"; newtoken.value = input->getTokenWord(pos);  tokens.push_back(newtoken); input->goBackOneChar(); continue; }  
        else input->goBack(pos);
        if(_508(input)) {token newtoken; newtoken.name = "_508"; newtoken.value = input->getTokenWord(pos);  tokens.push_back(newtoken); input->goBackOneChar(); continue; }  
        else input->goBack(pos);
        if(_509(input)) {token newtoken; newtoken.name = "_509"; newtoken.value = input->getTokenWord(pos);  tokens.push_back(newtoken); input->goBackOneChar(); continue; }  
        else input->goBack(pos);
        if(_510(input)) {token newtoken; newtoken.name = "_510"; newtoken.value = input->getTokenWord(pos);  tokens.push_back(newtoken); input->goBackOneChar(); continue; }  
        else input->goBack(pos);
        if(_511(input)) {token newtoken; newtoken.name = "_511"; newtoken.value = input->getTokenWord(pos);  tokens.push_back(newtoken); input->goBackOneChar(); continue; }  
        else input->goBack(pos);
        if(_512(input)) {token newtoken; newtoken.name = "_512"; newtoken.value = input->getTokenWord(pos);  tokens.push_back(newtoken); input->goBackOneChar(); continue; }  
        else input->goBack(pos);
        if(_513(input)) {token newtoken; newtoken.name = "_513"; newtoken.value = input->getTokenWord(pos);  tokens.push_back(newtoken); input->goBackOneChar(); continue; }  
        else input->goBack(pos);
        if(_10(input)) {token newtoken; newtoken.name = "_10"; newtoken.value = input->getTokenWord(pos);  tokens.push_back(newtoken); input->goBackOneChar(); continue; }  
        else input->goBack(pos);
        if(_20(input)) {token newtoken; newtoken.name = "_20"; newtoken.value = input->getTokenWord(pos);  tokens.push_back(newtoken); input->goBackOneChar(); continue; }  
        else input->goBack(pos);
        if(_open_comment(input)) {token newtoken; newtoken.name = "_open_comment"; newtoken.value = input->getTokenWord(pos);  tokens.push_back(newtoken); input->goBackOneChar(); continue; }  
        else input->goBack(pos);
        if(_close_comment(input)) {token newtoken; newtoken.name = "_close_comment"; newtoken.value = input->getTokenWord(pos);  tokens.push_back(newtoken); input->goBackOneChar(); continue; }  
        else input->goBack(pos);
        if (tokens.size() == tokenSize) {
            std::cerr << "Error: Unexpected words" << std::endl; 
            break;
        }
    } 
    return tokens;
}
int main(int argc,char* argv[]){ 
    std::vector<token> tokens = getTokens(argv[1]); 
    for (auto t : tokens){ 
        if (t.name == "_open_comment" || t.name == "_close_comment" || t.name == "_oneLine_comment_open") continue; 
        std::cout << t.name.substr(1) << " " << t.value << std::endl; 
    } 
    return 0; 
} 
