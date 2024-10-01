#include "getInput.h" 
#include <iostream> 
#include <vector> 
#include <string> 
#include <algorithm>
using namespace std; 



bool _if(Input *input){
    std::vector<int> finalNodes = {1, 2};
    int state = 0; // 初始状态
    while(true) {
        char letter = (input->getInput())[0];
        switch(state) {
            case 0: 
                switch(letter) {
                    case 'i': state = 3; break;
                    case 'I': state = 4; break;
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
                    default: return std::find(finalNodes.begin(), finalNodes.end(), state) != finalNodes.end();
                }
                break;
            case 3: 
                switch(letter) {
                    case 'F': state = 2; break;
                    case 'f': state = 1; break;
                    default: return std::find(finalNodes.begin(), finalNodes.end(), state) != finalNodes.end();
                }
                break;
            case 4: 
                switch(letter) {
                    case 'f': state = 1; break;
                    case 'F': state = 2; break;
                    default: return std::find(finalNodes.begin(), finalNodes.end(), state) != finalNodes.end();
                }
                break;
            default: break;
        }
    }
    return false;
}
bool _then(Input *input){
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
                    case 'e': state = 7; break;
                    case 'E': state = 8; break;
                    default: return std::find(finalNodes.begin(), finalNodes.end(), state) != finalNodes.end();
                }
                break;
            case 3: 
                switch(letter) {
                    case 'E': state = 8; break;
                    case 'e': state = 7; break;
                    default: return std::find(finalNodes.begin(), finalNodes.end(), state) != finalNodes.end();
                }
                break;
            case 4: 
                switch(letter) {
                    case 'T': state = 6; break;
                    case 't': state = 5; break;
                    default: return std::find(finalNodes.begin(), finalNodes.end(), state) != finalNodes.end();
                }
                break;
            case 5: 
                switch(letter) {
                    case 'h': state = 2; break;
                    case 'H': state = 3; break;
                    default: return std::find(finalNodes.begin(), finalNodes.end(), state) != finalNodes.end();
                }
                break;
            case 6: 
                switch(letter) {
                    case 'H': state = 3; break;
                    case 'h': state = 2; break;
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
bool _else(Input *input){
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
                    case 's': state = 7; break;
                    case 'S': state = 8; break;
                    default: return std::find(finalNodes.begin(), finalNodes.end(), state) != finalNodes.end();
                }
                break;
            case 6: 
                switch(letter) {
                    case 'e': state = 2; break;
                    case 'E': state = 3; break;
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
                    case 'E': state = 1; break;
                    case 'e': state = 0; break;
                    default: return std::find(finalNodes.begin(), finalNodes.end(), state) != finalNodes.end();
                }
                break;
            default: break;
        }
    }
    return false;
}
bool _end(Input *input){
    std::vector<int> finalNodes = {1, 2};
    int state = 4; // 初始状态
    while(true) {
        char letter = (input->getInput())[0];
        switch(state) {
            case 0: 
                switch(letter) {
                    case 'd': state = 1; break;
                    case 'D': state = 2; break;
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
                    default: return std::find(finalNodes.begin(), finalNodes.end(), state) != finalNodes.end();
                }
                break;
            case 3: 
                switch(letter) {
                    case 'D': state = 2; break;
                    case 'd': state = 1; break;
                    default: return std::find(finalNodes.begin(), finalNodes.end(), state) != finalNodes.end();
                }
                break;
            case 4: 
                switch(letter) {
                    case 'e': state = 5; break;
                    case 'E': state = 6; break;
                    default: return std::find(finalNodes.begin(), finalNodes.end(), state) != finalNodes.end();
                }
                break;
            case 5: 
                switch(letter) {
                    case 'N': state = 3; break;
                    case 'n': state = 0; break;
                    default: return std::find(finalNodes.begin(), finalNodes.end(), state) != finalNodes.end();
                }
                break;
            case 6: 
                switch(letter) {
                    case 'n': state = 0; break;
                    case 'N': state = 3; break;
                    default: return std::find(finalNodes.begin(), finalNodes.end(), state) != finalNodes.end();
                }
                break;
            default: break;
        }
    }
    return false;
}
bool _repeat(Input *input){
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
                    case 'T': state = 1; break;
                    case 't': state = 0; break;
                    default: return std::find(finalNodes.begin(), finalNodes.end(), state) != finalNodes.end();
                }
                break;
            case 3: 
                switch(letter) {
                    case 't': state = 0; break;
                    case 'T': state = 1; break;
                    default: return std::find(finalNodes.begin(), finalNodes.end(), state) != finalNodes.end();
                }
                break;
            case 4: 
                switch(letter) {
                    case 'a': state = 2; break;
                    case 'A': state = 3; break;
                    default: return std::find(finalNodes.begin(), finalNodes.end(), state) != finalNodes.end();
                }
                break;
            case 5: 
                switch(letter) {
                    case 'A': state = 3; break;
                    case 'a': state = 2; break;
                    default: return std::find(finalNodes.begin(), finalNodes.end(), state) != finalNodes.end();
                }
                break;
            case 6: 
                switch(letter) {
                    case 'p': state = 10; break;
                    case 'P': state = 11; break;
                    default: return std::find(finalNodes.begin(), finalNodes.end(), state) != finalNodes.end();
                }
                break;
            case 7: 
                switch(letter) {
                    case 'p': state = 10; break;
                    case 'P': state = 11; break;
                    default: return std::find(finalNodes.begin(), finalNodes.end(), state) != finalNodes.end();
                }
                break;
            case 8: 
                switch(letter) {
                    case 'R': state = 12; break;
                    case 'r': state = 9; break;
                    default: return std::find(finalNodes.begin(), finalNodes.end(), state) != finalNodes.end();
                }
                break;
            case 9: 
                switch(letter) {
                    case 'E': state = 7; break;
                    case 'e': state = 6; break;
                    default: return std::find(finalNodes.begin(), finalNodes.end(), state) != finalNodes.end();
                }
                break;
            case 10: 
                switch(letter) {
                    case 'E': state = 5; break;
                    case 'e': state = 4; break;
                    default: return std::find(finalNodes.begin(), finalNodes.end(), state) != finalNodes.end();
                }
                break;
            case 11: 
                switch(letter) {
                    case 'E': state = 5; break;
                    case 'e': state = 4; break;
                    default: return std::find(finalNodes.begin(), finalNodes.end(), state) != finalNodes.end();
                }
                break;
            case 12: 
                switch(letter) {
                    case 'e': state = 6; break;
                    case 'E': state = 7; break;
                    default: return std::find(finalNodes.begin(), finalNodes.end(), state) != finalNodes.end();
                }
                break;
            default: break;
        }
    }
    return false;
}
bool _until(Input *input){
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
                    case 'i': state = 4; break;
                    case 'I': state = 5; break;
                    default: return std::find(finalNodes.begin(), finalNodes.end(), state) != finalNodes.end();
                }
                break;
            case 3: 
                switch(letter) {
                    case 'I': state = 5; break;
                    case 'i': state = 4; break;
                    default: return std::find(finalNodes.begin(), finalNodes.end(), state) != finalNodes.end();
                }
                break;
            case 4: 
                switch(letter) {
                    case 'l': state = 0; break;
                    case 'L': state = 1; break;
                    default: return std::find(finalNodes.begin(), finalNodes.end(), state) != finalNodes.end();
                }
                break;
            case 5: 
                switch(letter) {
                    case 'L': state = 1; break;
                    case 'l': state = 0; break;
                    default: return std::find(finalNodes.begin(), finalNodes.end(), state) != finalNodes.end();
                }
                break;
            case 6: 
                switch(letter) {
                    case 'u': state = 9; break;
                    case 'U': state = 10; break;
                    default: return std::find(finalNodes.begin(), finalNodes.end(), state) != finalNodes.end();
                }
                break;
            case 7: 
                switch(letter) {
                    case 'T': state = 3; break;
                    case 't': state = 2; break;
                    default: return std::find(finalNodes.begin(), finalNodes.end(), state) != finalNodes.end();
                }
                break;
            case 8: 
                switch(letter) {
                    case 't': state = 2; break;
                    case 'T': state = 3; break;
                    default: return std::find(finalNodes.begin(), finalNodes.end(), state) != finalNodes.end();
                }
                break;
            case 9: 
                switch(letter) {
                    case 'N': state = 8; break;
                    case 'n': state = 7; break;
                    default: return std::find(finalNodes.begin(), finalNodes.end(), state) != finalNodes.end();
                }
                break;
            case 10: 
                switch(letter) {
                    case 'n': state = 7; break;
                    case 'N': state = 8; break;
                    default: return std::find(finalNodes.begin(), finalNodes.end(), state) != finalNodes.end();
                }
                break;
            default: break;
        }
    }
    return false;
}
bool _read(Input *input){
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
                    case 'E': state = 7; break;
                    case 'e': state = 6; break;
                    default: return std::find(finalNodes.begin(), finalNodes.end(), state) != finalNodes.end();
                }
                break;
            case 3: 
                switch(letter) {
                    case 'e': state = 6; break;
                    case 'E': state = 7; break;
                    default: return std::find(finalNodes.begin(), finalNodes.end(), state) != finalNodes.end();
                }
                break;
            case 4: 
                switch(letter) {
                    case 'd': state = 0; break;
                    case 'D': state = 1; break;
                    default: return std::find(finalNodes.begin(), finalNodes.end(), state) != finalNodes.end();
                }
                break;
            case 5: 
                switch(letter) {
                    case 'd': state = 0; break;
                    case 'D': state = 1; break;
                    default: return std::find(finalNodes.begin(), finalNodes.end(), state) != finalNodes.end();
                }
                break;
            case 6: 
                switch(letter) {
                    case 'a': state = 4; break;
                    case 'A': state = 5; break;
                    default: return std::find(finalNodes.begin(), finalNodes.end(), state) != finalNodes.end();
                }
                break;
            case 7: 
                switch(letter) {
                    case 'A': state = 5; break;
                    case 'a': state = 4; break;
                    default: return std::find(finalNodes.begin(), finalNodes.end(), state) != finalNodes.end();
                }
                break;
            case 8: 
                switch(letter) {
                    case 'r': state = 2; break;
                    case 'R': state = 3; break;
                    default: return std::find(finalNodes.begin(), finalNodes.end(), state) != finalNodes.end();
                }
                break;
            default: break;
        }
    }
    return false;
}
bool _write(Input *input){
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
                    case 'E': state = 1; break;
                    case 'e': state = 0; break;
                    default: return std::find(finalNodes.begin(), finalNodes.end(), state) != finalNodes.end();
                }
                break;
            case 3: 
                switch(letter) {
                    case 'e': state = 0; break;
                    case 'E': state = 1; break;
                    default: return std::find(finalNodes.begin(), finalNodes.end(), state) != finalNodes.end();
                }
                break;
            case 4: 
                switch(letter) {
                    case 't': state = 2; break;
                    case 'T': state = 3; break;
                    default: return std::find(finalNodes.begin(), finalNodes.end(), state) != finalNodes.end();
                }
                break;
            case 5: 
                switch(letter) {
                    case 'T': state = 3; break;
                    case 't': state = 2; break;
                    default: return std::find(finalNodes.begin(), finalNodes.end(), state) != finalNodes.end();
                }
                break;
            case 6: 
                switch(letter) {
                    case 'W': state = 10; break;
                    case 'w': state = 9; break;
                    default: return std::find(finalNodes.begin(), finalNodes.end(), state) != finalNodes.end();
                }
                break;
            case 7: 
                switch(letter) {
                    case 'i': state = 4; break;
                    case 'I': state = 5; break;
                    default: return std::find(finalNodes.begin(), finalNodes.end(), state) != finalNodes.end();
                }
                break;
            case 8: 
                switch(letter) {
                    case 'i': state = 4; break;
                    case 'I': state = 5; break;
                    default: return std::find(finalNodes.begin(), finalNodes.end(), state) != finalNodes.end();
                }
                break;
            case 9: 
                switch(letter) {
                    case 'R': state = 8; break;
                    case 'r': state = 7; break;
                    default: return std::find(finalNodes.begin(), finalNodes.end(), state) != finalNodes.end();
                }
                break;
            case 10: 
                switch(letter) {
                    case 'r': state = 7; break;
                    case 'R': state = 8; break;
                    default: return std::find(finalNodes.begin(), finalNodes.end(), state) != finalNodes.end();
                }
                break;
            default: break;
        }
    }
    return false;
}
bool _plus(Input *input){
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
bool _minus(Input *input){
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
bool _multiply(Input *input){
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
bool _divide(Input *input){
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
bool _mod(Input *input){
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
bool _power(Input *input){
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
bool _less(Input *input){
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
bool _not_equal(Input *input){
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
                    case '<': state = 2; break;
                    default: return std::find(finalNodes.begin(), finalNodes.end(), state) != finalNodes.end();
                }
                break;
            case 2: 
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
bool _less_equal(Input *input){
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
                    case '<': state = 2; break;
                    default: return std::find(finalNodes.begin(), finalNodes.end(), state) != finalNodes.end();
                }
                break;
            case 2: 
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
bool _greater_equal(Input *input){
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
                    case '>': state = 2; break;
                    default: return std::find(finalNodes.begin(), finalNodes.end(), state) != finalNodes.end();
                }
                break;
            case 2: 
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
bool _greater(Input *input){
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
bool _equal(Input *input){
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
bool _semicolon(Input *input){
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
bool _assign(Input *input){
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
                    case ':': state = 2; break;
                    default: return std::find(finalNodes.begin(), finalNodes.end(), state) != finalNodes.end();
                }
                break;
            case 2: 
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
bool _identifier(Input *input){
    std::vector<int> finalNodes = {0, 21, 17, 18, 16, 27, 15, 20, 19, 22, 25, 24, 23, 14, 1, 4, 5, 6, 3, 8, 2, 7, 9, 10, 11, 12, 13};
    int state = 29; // 初始状态
    while(true) {
        char letter = (input->getInput())[0];
        switch(state) {
            case 0: 
                switch(letter) {
                    case 'a': state = 26; break;
                    default: return std::find(finalNodes.begin(), finalNodes.end(), state) != finalNodes.end();
                }
                break;
            case 1: 
                switch(letter) {
                    case 'a': state = 26; break;
                    default: return std::find(finalNodes.begin(), finalNodes.end(), state) != finalNodes.end();
                }
                break;
            case 2: 
                switch(letter) {
                    case 'a': state = 26; break;
                    default: return std::find(finalNodes.begin(), finalNodes.end(), state) != finalNodes.end();
                }
                break;
            case 3: 
                switch(letter) {
                    case 'a': state = 26; break;
                    default: return std::find(finalNodes.begin(), finalNodes.end(), state) != finalNodes.end();
                }
                break;
            case 4: 
                switch(letter) {
                    case 'a': state = 26; break;
                    default: return std::find(finalNodes.begin(), finalNodes.end(), state) != finalNodes.end();
                }
                break;
            case 5: 
                switch(letter) {
                    case 'a': state = 26; break;
                    default: return std::find(finalNodes.begin(), finalNodes.end(), state) != finalNodes.end();
                }
                break;
            case 6: 
                switch(letter) {
                    case 'a': state = 26; break;
                    default: return std::find(finalNodes.begin(), finalNodes.end(), state) != finalNodes.end();
                }
                break;
            case 7: 
                switch(letter) {
                    case 'a': state = 26; break;
                    default: return std::find(finalNodes.begin(), finalNodes.end(), state) != finalNodes.end();
                }
                break;
            case 8: 
                switch(letter) {
                    case 'a': state = 26; break;
                    default: return std::find(finalNodes.begin(), finalNodes.end(), state) != finalNodes.end();
                }
                break;
            case 9: 
                switch(letter) {
                    case 'a': state = 26; break;
                    default: return std::find(finalNodes.begin(), finalNodes.end(), state) != finalNodes.end();
                }
                break;
            case 10: 
                switch(letter) {
                    case 'a': state = 26; break;
                    default: return std::find(finalNodes.begin(), finalNodes.end(), state) != finalNodes.end();
                }
                break;
            case 11: 
                switch(letter) {
                    case 'a': state = 26; break;
                    default: return std::find(finalNodes.begin(), finalNodes.end(), state) != finalNodes.end();
                }
                break;
            case 12: 
                switch(letter) {
                    case 'a': state = 26; break;
                    default: return std::find(finalNodes.begin(), finalNodes.end(), state) != finalNodes.end();
                }
                break;
            case 13: 
                switch(letter) {
                    case 'a': state = 26; break;
                    default: return std::find(finalNodes.begin(), finalNodes.end(), state) != finalNodes.end();
                }
                break;
            case 14: 
                switch(letter) {
                    case 'a': state = 26; break;
                    default: return std::find(finalNodes.begin(), finalNodes.end(), state) != finalNodes.end();
                }
                break;
            case 15: 
                switch(letter) {
                    case 'a': state = 26; break;
                    default: return std::find(finalNodes.begin(), finalNodes.end(), state) != finalNodes.end();
                }
                break;
            case 16: 
                switch(letter) {
                    case 'a': state = 26; break;
                    default: return std::find(finalNodes.begin(), finalNodes.end(), state) != finalNodes.end();
                }
                break;
            case 17: 
                switch(letter) {
                    case 'a': state = 26; break;
                    default: return std::find(finalNodes.begin(), finalNodes.end(), state) != finalNodes.end();
                }
                break;
            case 18: 
                switch(letter) {
                    case 'a': state = 26; break;
                    default: return std::find(finalNodes.begin(), finalNodes.end(), state) != finalNodes.end();
                }
                break;
            case 19: 
                switch(letter) {
                    case 'a': state = 26; break;
                    default: return std::find(finalNodes.begin(), finalNodes.end(), state) != finalNodes.end();
                }
                break;
            case 20: 
                switch(letter) {
                    case 'a': state = 26; break;
                    default: return std::find(finalNodes.begin(), finalNodes.end(), state) != finalNodes.end();
                }
                break;
            case 21: 
                switch(letter) {
                    case 'a': state = 26; break;
                    default: return std::find(finalNodes.begin(), finalNodes.end(), state) != finalNodes.end();
                }
                break;
            case 22: 
                switch(letter) {
                    case 'a': state = 26; break;
                    default: return std::find(finalNodes.begin(), finalNodes.end(), state) != finalNodes.end();
                }
                break;
            case 23: 
                switch(letter) {
                    case 'a': state = 26; break;
                    default: return std::find(finalNodes.begin(), finalNodes.end(), state) != finalNodes.end();
                }
                break;
            case 24: 
                switch(letter) {
                    case 'a': state = 26; break;
                    default: return std::find(finalNodes.begin(), finalNodes.end(), state) != finalNodes.end();
                }
                break;
            case 25: 
                switch(letter) {
                    case 'a': state = 26; break;
                    default: return std::find(finalNodes.begin(), finalNodes.end(), state) != finalNodes.end();
                }
                break;
            case 26: 
                switch(letter) {
                    case '-': state = 28; break;
                    default: return std::find(finalNodes.begin(), finalNodes.end(), state) != finalNodes.end();
                }
                break;
            case 27: 
                switch(letter) {
                    case 'a': state = 26; break;
                    default: return std::find(finalNodes.begin(), finalNodes.end(), state) != finalNodes.end();
                }
                break;
            case 28: 
                switch(letter) {
                    case 'z': state = 25; break;
                    default: return std::find(finalNodes.begin(), finalNodes.end(), state) != finalNodes.end();
                }
                break;
            case 29: 
                switch(letter) {
                    case 't': state = 17; break;
                    case 'm': state = 18; break;
                    case 'k': state = 16; break;
                    case 'o': state = 27; break;
                    case 'n': state = 15; break;
                    case 'u': state = 20; break;
                    case 'p': state = 21; break;
                    case 'h': state = 19; break;
                    case 'q': state = 22; break;
                    case 'x': state = 24; break;
                    case 'z': state = 5; break;
                    case 'j': state = 4; break;
                    case 'f': state = 23; break;
                    case 'b': state = 1; break;
                    case 'g': state = 8; break;
                    case 'w': state = 6; break;
                    case 'd': state = 0; break;
                    case 'i': state = 2; break;
                    case 'l': state = 7; break;
                    case 'e': state = 3; break;
                    case 'r': state = 9; break;
                    case 's': state = 11; break;
                    case 'y': state = 10; break;
                    case 'v': state = 12; break;
                    case 'c': state = 13; break;
                    case 'a': state = 14; break;
                    default: return std::find(finalNodes.begin(), finalNodes.end(), state) != finalNodes.end();
                }
                break;
            default: break;
        }
    }
    return false;
}
bool _number(Input *input){
    std::vector<int> finalNodes = {2, 7, 0, 1, 3, 4, 9, 8, 6, 5};
    int state = 10; // 初始状态
    while(true) {
        char letter = (input->getInput())[0];
        switch(state) {
            case 0: 
                switch(letter) {
                    case '1': state = 0; break;
                    case '5': state = 2; break;
                    case '9': state = 4; break;
                    case '7': state = 3; break;
                    case '3': state = 1; break;
                    case '4': state = 7; break;
                    case '0': state = 5; break;
                    case '2': state = 6; break;
                    case '6': state = 8; break;
                    case '8': state = 9; break;
                    default: return std::find(finalNodes.begin(), finalNodes.end(), state) != finalNodes.end();
                }
                break;
            case 1: 
                switch(letter) {
                    case '7': state = 3; break;
                    case '3': state = 1; break;
                    case '1': state = 0; break;
                    case '5': state = 2; break;
                    case '4': state = 7; break;
                    case '0': state = 5; break;
                    case '2': state = 6; break;
                    case '6': state = 8; break;
                    case '8': state = 9; break;
                    case '9': state = 4; break;
                    default: return std::find(finalNodes.begin(), finalNodes.end(), state) != finalNodes.end();
                }
                break;
            case 2: 
                switch(letter) {
                    case '5': state = 2; break;
                    case '3': state = 1; break;
                    case '1': state = 0; break;
                    case '9': state = 4; break;
                    case '7': state = 3; break;
                    case '2': state = 6; break;
                    case '4': state = 7; break;
                    case '6': state = 8; break;
                    case '0': state = 5; break;
                    case '8': state = 9; break;
                    default: return std::find(finalNodes.begin(), finalNodes.end(), state) != finalNodes.end();
                }
                break;
            case 3: 
                switch(letter) {
                    case '9': state = 4; break;
                    case '7': state = 3; break;
                    case '5': state = 2; break;
                    case '8': state = 9; break;
                    case '3': state = 1; break;
                    case '2': state = 6; break;
                    case '4': state = 7; break;
                    case '0': state = 5; break;
                    case '1': state = 0; break;
                    case '6': state = 8; break;
                    default: return std::find(finalNodes.begin(), finalNodes.end(), state) != finalNodes.end();
                }
                break;
            case 4: 
                switch(letter) {
                    case '3': state = 1; break;
                    case '9': state = 4; break;
                    case '8': state = 9; break;
                    case '4': state = 7; break;
                    case '0': state = 5; break;
                    case '6': state = 8; break;
                    case '5': state = 2; break;
                    case '2': state = 6; break;
                    case '7': state = 3; break;
                    case '1': state = 0; break;
                    default: return std::find(finalNodes.begin(), finalNodes.end(), state) != finalNodes.end();
                }
                break;
            case 5: 
                switch(letter) {
                    case '6': state = 8; break;
                    case '0': state = 5; break;
                    case '2': state = 6; break;
                    case '8': state = 9; break;
                    case '4': state = 7; break;
                    case '3': state = 1; break;
                    case '7': state = 3; break;
                    case '1': state = 0; break;
                    case '9': state = 4; break;
                    case '5': state = 2; break;
                    default: return std::find(finalNodes.begin(), finalNodes.end(), state) != finalNodes.end();
                }
                break;
            case 6: 
                switch(letter) {
                    case '6': state = 8; break;
                    case '8': state = 9; break;
                    case '2': state = 6; break;
                    case '0': state = 5; break;
                    case '4': state = 7; break;
                    case '5': state = 2; break;
                    case '7': state = 3; break;
                    case '3': state = 1; break;
                    case '1': state = 0; break;
                    case '9': state = 4; break;
                    default: return std::find(finalNodes.begin(), finalNodes.end(), state) != finalNodes.end();
                }
                break;
            case 7: 
                switch(letter) {
                    case '8': state = 9; break;
                    case '9': state = 4; break;
                    case '4': state = 7; break;
                    case '7': state = 3; break;
                    case '3': state = 1; break;
                    case '6': state = 8; break;
                    case '2': state = 6; break;
                    case '5': state = 2; break;
                    case '1': state = 0; break;
                    case '0': state = 5; break;
                    default: return std::find(finalNodes.begin(), finalNodes.end(), state) != finalNodes.end();
                }
                break;
            case 8: 
                switch(letter) {
                    case '4': state = 7; break;
                    case '6': state = 8; break;
                    case '7': state = 3; break;
                    case '0': state = 5; break;
                    case '3': state = 1; break;
                    case '8': state = 9; break;
                    case '1': state = 0; break;
                    case '5': state = 2; break;
                    case '9': state = 4; break;
                    case '2': state = 6; break;
                    default: return std::find(finalNodes.begin(), finalNodes.end(), state) != finalNodes.end();
                }
                break;
            case 9: 
                switch(letter) {
                    case '9': state = 4; break;
                    case '2': state = 6; break;
                    case '4': state = 7; break;
                    case '5': state = 2; break;
                    case '3': state = 1; break;
                    case '0': state = 5; break;
                    case '8': state = 9; break;
                    case '1': state = 0; break;
                    case '7': state = 3; break;
                    case '6': state = 8; break;
                    default: return std::find(finalNodes.begin(), finalNodes.end(), state) != finalNodes.end();
                }
                break;
            case 10: 
                switch(letter) {
                    case '4': state = 7; break;
                    case '0': state = 5; break;
                    case '2': state = 6; break;
                    case '7': state = 3; break;
                    case '8': state = 9; break;
                    case '5': state = 2; break;
                    case '9': state = 4; break;
                    case '3': state = 1; break;
                    case '6': state = 8; break;
                    case '1': state = 0; break;
                    default: return std::find(finalNodes.begin(), finalNodes.end(), state) != finalNodes.end();
                }
                break;
            default: break;
        }
    }
    return false;
}
std::vector<std::string> token(){ 
    Input *input = new Input("./temp.txt"); 
    std::vector<std::string> tokens;  
    while(!input->getInput().empty()){ 
        if (!tokens.empty() && tokens.back() == "_open_comment")
        { 
            if (!_close_comment(input)){input->goBackOneChar(); continue;} 
            else{tokens.push_back("_comment"); tokens.push_back("_close_commnet"); input->goBackOneChar(); continue;}
        }
        int tokenSize = tokens.size();
        input->goBackOneChar(); 
        char c = (input->getInput())[0]; 
         if(!tokens.empty() && tokens.back() == "_oneLine_comment_open")
         { 
             if (c != '\n'){ continue;} 
             else{tokens.push_back("_comment");continue;}
         }
        if(c == ' ') {tokens.push_back("_space"); continue;} 
        else if(c == '\t') {tokens.push_back("_tab"); continue;} 
        else if(c == '\n') {tokens.push_back("_enter"); continue;} 
        input->goBackOneChar();
        int pos = input->getPos();
        if(_if(input)) { tokens.push_back("_if"); input->goBackOneChar(); continue; }  
        else input->goBack(pos);
        if(_then(input)) { tokens.push_back("_then"); input->goBackOneChar(); continue; }  
        else input->goBack(pos);
        if(_else(input)) { tokens.push_back("_else"); input->goBackOneChar(); continue; }  
        else input->goBack(pos);
        if(_end(input)) { tokens.push_back("_end"); input->goBackOneChar(); continue; }  
        else input->goBack(pos);
        if(_repeat(input)) { tokens.push_back("_repeat"); input->goBackOneChar(); continue; }  
        else input->goBack(pos);
        if(_until(input)) { tokens.push_back("_until"); input->goBackOneChar(); continue; }  
        else input->goBack(pos);
        if(_read(input)) { tokens.push_back("_read"); input->goBackOneChar(); continue; }  
        else input->goBack(pos);
        if(_write(input)) { tokens.push_back("_write"); input->goBackOneChar(); continue; }  
        else input->goBack(pos);
        if(_plus(input)) { tokens.push_back("_plus"); input->goBackOneChar(); continue; }  
        else input->goBack(pos);
        if(_minus(input)) { tokens.push_back("_minus"); input->goBackOneChar(); continue; }  
        else input->goBack(pos);
        if(_multiply(input)) { tokens.push_back("_multiply"); input->goBackOneChar(); continue; }  
        else input->goBack(pos);
        if(_divide(input)) { tokens.push_back("_divide"); input->goBackOneChar(); continue; }  
        else input->goBack(pos);
        if(_mod(input)) { tokens.push_back("_mod"); input->goBackOneChar(); continue; }  
        else input->goBack(pos);
        if(_power(input)) { tokens.push_back("_power"); input->goBackOneChar(); continue; }  
        else input->goBack(pos);
        if(_less(input)) { tokens.push_back("_less"); input->goBackOneChar(); continue; }  
        else input->goBack(pos);
        if(_not_equal(input)) { tokens.push_back("_not_equal"); input->goBackOneChar(); continue; }  
        else input->goBack(pos);
        if(_less_equal(input)) { tokens.push_back("_less_equal"); input->goBackOneChar(); continue; }  
        else input->goBack(pos);
        if(_greater_equal(input)) { tokens.push_back("_greater_equal"); input->goBackOneChar(); continue; }  
        else input->goBack(pos);
        if(_greater(input)) { tokens.push_back("_greater"); input->goBackOneChar(); continue; }  
        else input->goBack(pos);
        if(_equal(input)) { tokens.push_back("_equal"); input->goBackOneChar(); continue; }  
        else input->goBack(pos);
        if(_open_comment(input)) { tokens.push_back("_open_comment"); input->goBackOneChar(); continue; }  
        else input->goBack(pos);
        if(_close_comment(input)) { tokens.push_back("_close_comment"); input->goBackOneChar(); continue; }  
        else input->goBack(pos);
        if(_semicolon(input)) { tokens.push_back("_semicolon"); input->goBackOneChar(); continue; }  
        else input->goBack(pos);
        if(_assign(input)) { tokens.push_back("_assign"); input->goBackOneChar(); continue; }  
        else input->goBack(pos);
        if(_identifier(input)) { tokens.push_back("_identifier"); input->goBackOneChar(); continue; }  
        else input->goBack(pos);
        if(_number(input)) { tokens.push_back("_number"); input->goBackOneChar(); continue; }  
        else input->goBack(pos);
        if (tokens.size() == tokenSize) {
            std::cerr << "Error: Unexpected words" << std::endl; 
            break;
        }
    } 
    return tokens;
}
int main(){
    for(auto t : token()){
        cout << t << " ";
    }
    cout << endl;
}
