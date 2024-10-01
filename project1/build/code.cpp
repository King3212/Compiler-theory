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
                    case '�': state = 2; break;
                    default: return std::find(finalNodes.begin(), finalNodes.end(), state) != finalNodes.end();
                }
                break;
            case 2: 
                switch(letter) {
                    case '�': state = 3; break;
                    default: return std::find(finalNodes.begin(), finalNodes.end(), state) != finalNodes.end();
                }
                break;
            case 3: 
                switch(letter) {
                    case '�': state = 0; break;
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
    std::vector<int> finalNodes = {115, 111, 112, 109, 114, 110, 113, 117, 107, 116, 106, 108};
    int state = 115; // 初始状态
    while(true) {
        char letter = (input->getInput())[0];
        switch(state) {
            case 0: 
                switch(letter) {
                    case ' ': state = 105; break;
                    default: return std::find(finalNodes.begin(), finalNodes.end(), state) != finalNodes.end();
                }
                break;
            case 1: 
                switch(letter) {
                    case ' ': state = 105; break;
                    default: return std::find(finalNodes.begin(), finalNodes.end(), state) != finalNodes.end();
                }
                break;
            case 2: 
                switch(letter) {
                    case ' ': state = 105; break;
                    default: return std::find(finalNodes.begin(), finalNodes.end(), state) != finalNodes.end();
                }
                break;
            case 3: 
                switch(letter) {
                    case ' ': state = 105; break;
                    default: return std::find(finalNodes.begin(), finalNodes.end(), state) != finalNodes.end();
                }
                break;
            case 4: 
                switch(letter) {
                    case ' ': state = 105; break;
                    default: return std::find(finalNodes.begin(), finalNodes.end(), state) != finalNodes.end();
                }
                break;
            case 5: 
                switch(letter) {
                    case ' ': state = 105; break;
                    default: return std::find(finalNodes.begin(), finalNodes.end(), state) != finalNodes.end();
                }
                break;
            case 6: 
                switch(letter) {
                    case ' ': state = 105; break;
                    default: return std::find(finalNodes.begin(), finalNodes.end(), state) != finalNodes.end();
                }
                break;
            case 7: 
                switch(letter) {
                    case ' ': state = 105; break;
                    default: return std::find(finalNodes.begin(), finalNodes.end(), state) != finalNodes.end();
                }
                break;
            case 8: 
                switch(letter) {
                    case ' ': state = 105; break;
                    default: return std::find(finalNodes.begin(), finalNodes.end(), state) != finalNodes.end();
                }
                break;
            case 9: 
                switch(letter) {
                    case ' ': state = 105; break;
                    default: return std::find(finalNodes.begin(), finalNodes.end(), state) != finalNodes.end();
                }
                break;
            case 10: 
                switch(letter) {
                    case ' ': state = 105; break;
                    default: return std::find(finalNodes.begin(), finalNodes.end(), state) != finalNodes.end();
                }
                break;
            case 11: 
                switch(letter) {
                    case ' ': state = 105; break;
                    default: return std::find(finalNodes.begin(), finalNodes.end(), state) != finalNodes.end();
                }
                break;
            case 12: 
                switch(letter) {
                    case ' ': state = 105; break;
                    default: return std::find(finalNodes.begin(), finalNodes.end(), state) != finalNodes.end();
                }
                break;
            case 13: 
                switch(letter) {
                    case ' ': state = 105; break;
                    default: return std::find(finalNodes.begin(), finalNodes.end(), state) != finalNodes.end();
                }
                break;
            case 14: 
                switch(letter) {
                    case ' ': state = 105; break;
                    default: return std::find(finalNodes.begin(), finalNodes.end(), state) != finalNodes.end();
                }
                break;
            case 15: 
                switch(letter) {
                    case ' ': state = 105; break;
                    default: return std::find(finalNodes.begin(), finalNodes.end(), state) != finalNodes.end();
                }
                break;
            case 16: 
                switch(letter) {
                    case ' ': state = 105; break;
                    default: return std::find(finalNodes.begin(), finalNodes.end(), state) != finalNodes.end();
                }
                break;
            case 17: 
                switch(letter) {
                    case ' ': state = 105; break;
                    default: return std::find(finalNodes.begin(), finalNodes.end(), state) != finalNodes.end();
                }
                break;
            case 18: 
                switch(letter) {
                    case ' ': state = 105; break;
                    default: return std::find(finalNodes.begin(), finalNodes.end(), state) != finalNodes.end();
                }
                break;
            case 19: 
                switch(letter) {
                    case ' ': state = 105; break;
                    default: return std::find(finalNodes.begin(), finalNodes.end(), state) != finalNodes.end();
                }
                break;
            case 20: 
                switch(letter) {
                    case ' ': state = 105; break;
                    default: return std::find(finalNodes.begin(), finalNodes.end(), state) != finalNodes.end();
                }
                break;
            case 21: 
                switch(letter) {
                    case ' ': state = 105; break;
                    default: return std::find(finalNodes.begin(), finalNodes.end(), state) != finalNodes.end();
                }
                break;
            case 22: 
                switch(letter) {
                    case ' ': state = 105; break;
                    default: return std::find(finalNodes.begin(), finalNodes.end(), state) != finalNodes.end();
                }
                break;
            case 23: 
                switch(letter) {
                    case ' ': state = 105; break;
                    default: return std::find(finalNodes.begin(), finalNodes.end(), state) != finalNodes.end();
                }
                break;
            case 24: 
                switch(letter) {
                    case ' ': state = 105; break;
                    default: return std::find(finalNodes.begin(), finalNodes.end(), state) != finalNodes.end();
                }
                break;
            case 25: 
                switch(letter) {
                    case ' ': state = 105; break;
                    default: return std::find(finalNodes.begin(), finalNodes.end(), state) != finalNodes.end();
                }
                break;
            case 26: 
                switch(letter) {
                    case ' ': state = 105; break;
                    default: return std::find(finalNodes.begin(), finalNodes.end(), state) != finalNodes.end();
                }
                break;
            case 27: 
                switch(letter) {
                    case ' ': state = 105; break;
                    default: return std::find(finalNodes.begin(), finalNodes.end(), state) != finalNodes.end();
                }
                break;
            case 28: 
                switch(letter) {
                    case ' ': state = 105; break;
                    default: return std::find(finalNodes.begin(), finalNodes.end(), state) != finalNodes.end();
                }
                break;
            case 29: 
                switch(letter) {
                    case ' ': state = 105; break;
                    default: return std::find(finalNodes.begin(), finalNodes.end(), state) != finalNodes.end();
                }
                break;
            case 30: 
                switch(letter) {
                    case ' ': state = 105; break;
                    default: return std::find(finalNodes.begin(), finalNodes.end(), state) != finalNodes.end();
                }
                break;
            case 31: 
                switch(letter) {
                    case ' ': state = 105; break;
                    default: return std::find(finalNodes.begin(), finalNodes.end(), state) != finalNodes.end();
                }
                break;
            case 32: 
                switch(letter) {
                    case ' ': state = 105; break;
                    default: return std::find(finalNodes.begin(), finalNodes.end(), state) != finalNodes.end();
                }
                break;
            case 33: 
                switch(letter) {
                    case ' ': state = 105; break;
                    default: return std::find(finalNodes.begin(), finalNodes.end(), state) != finalNodes.end();
                }
                break;
            case 34: 
                switch(letter) {
                    case ' ': state = 105; break;
                    default: return std::find(finalNodes.begin(), finalNodes.end(), state) != finalNodes.end();
                }
                break;
            case 35: 
                switch(letter) {
                    case ' ': state = 105; break;
                    default: return std::find(finalNodes.begin(), finalNodes.end(), state) != finalNodes.end();
                }
                break;
            case 36: 
                switch(letter) {
                    case ' ': state = 105; break;
                    default: return std::find(finalNodes.begin(), finalNodes.end(), state) != finalNodes.end();
                }
                break;
            case 37: 
                switch(letter) {
                    case ' ': state = 105; break;
                    default: return std::find(finalNodes.begin(), finalNodes.end(), state) != finalNodes.end();
                }
                break;
            case 38: 
                switch(letter) {
                    case ' ': state = 105; break;
                    default: return std::find(finalNodes.begin(), finalNodes.end(), state) != finalNodes.end();
                }
                break;
            case 39: 
                switch(letter) {
                    case ' ': state = 105; break;
                    default: return std::find(finalNodes.begin(), finalNodes.end(), state) != finalNodes.end();
                }
                break;
            case 40: 
                switch(letter) {
                    case ' ': state = 105; break;
                    default: return std::find(finalNodes.begin(), finalNodes.end(), state) != finalNodes.end();
                }
                break;
            case 41: 
                switch(letter) {
                    case ' ': state = 105; break;
                    default: return std::find(finalNodes.begin(), finalNodes.end(), state) != finalNodes.end();
                }
                break;
            case 42: 
                switch(letter) {
                    case ' ': state = 105; break;
                    default: return std::find(finalNodes.begin(), finalNodes.end(), state) != finalNodes.end();
                }
                break;
            case 43: 
                switch(letter) {
                    case ' ': state = 105; break;
                    default: return std::find(finalNodes.begin(), finalNodes.end(), state) != finalNodes.end();
                }
                break;
            case 44: 
                switch(letter) {
                    case ' ': state = 105; break;
                    default: return std::find(finalNodes.begin(), finalNodes.end(), state) != finalNodes.end();
                }
                break;
            case 45: 
                switch(letter) {
                    case ' ': state = 105; break;
                    default: return std::find(finalNodes.begin(), finalNodes.end(), state) != finalNodes.end();
                }
                break;
            case 46: 
                switch(letter) {
                    case ' ': state = 105; break;
                    default: return std::find(finalNodes.begin(), finalNodes.end(), state) != finalNodes.end();
                }
                break;
            case 47: 
                switch(letter) {
                    case ' ': state = 105; break;
                    default: return std::find(finalNodes.begin(), finalNodes.end(), state) != finalNodes.end();
                }
                break;
            case 48: 
                switch(letter) {
                    case ' ': state = 105; break;
                    default: return std::find(finalNodes.begin(), finalNodes.end(), state) != finalNodes.end();
                }
                break;
            case 49: 
                switch(letter) {
                    case ' ': state = 105; break;
                    default: return std::find(finalNodes.begin(), finalNodes.end(), state) != finalNodes.end();
                }
                break;
            case 50: 
                switch(letter) {
                    case ' ': state = 105; break;
                    default: return std::find(finalNodes.begin(), finalNodes.end(), state) != finalNodes.end();
                }
                break;
            case 51: 
                switch(letter) {
                    case ' ': state = 105; break;
                    default: return std::find(finalNodes.begin(), finalNodes.end(), state) != finalNodes.end();
                }
                break;
            case 52: 
                switch(letter) {
                    case ' ': state = 116; break;
                    default: return std::find(finalNodes.begin(), finalNodes.end(), state) != finalNodes.end();
                }
                break;
            case 53: 
                switch(letter) {
                    case ' ': state = 116; break;
                    default: return std::find(finalNodes.begin(), finalNodes.end(), state) != finalNodes.end();
                }
                break;
            case 54: 
                switch(letter) {
                    case ' ': state = 116; break;
                    default: return std::find(finalNodes.begin(), finalNodes.end(), state) != finalNodes.end();
                }
                break;
            case 55: 
                switch(letter) {
                    case ' ': state = 116; break;
                    default: return std::find(finalNodes.begin(), finalNodes.end(), state) != finalNodes.end();
                }
                break;
            case 56: 
                switch(letter) {
                    case ' ': state = 116; break;
                    default: return std::find(finalNodes.begin(), finalNodes.end(), state) != finalNodes.end();
                }
                break;
            case 57: 
                switch(letter) {
                    case ' ': state = 116; break;
                    default: return std::find(finalNodes.begin(), finalNodes.end(), state) != finalNodes.end();
                }
                break;
            case 58: 
                switch(letter) {
                    case ' ': state = 116; break;
                    default: return std::find(finalNodes.begin(), finalNodes.end(), state) != finalNodes.end();
                }
                break;
            case 59: 
                switch(letter) {
                    case ' ': state = 116; break;
                    default: return std::find(finalNodes.begin(), finalNodes.end(), state) != finalNodes.end();
                }
                break;
            case 60: 
                switch(letter) {
                    case ' ': state = 116; break;
                    default: return std::find(finalNodes.begin(), finalNodes.end(), state) != finalNodes.end();
                }
                break;
            case 61: 
                switch(letter) {
                    case ' ': state = 116; break;
                    default: return std::find(finalNodes.begin(), finalNodes.end(), state) != finalNodes.end();
                }
                break;
            case 62: 
                switch(letter) {
                    case ' ': state = 116; break;
                    default: return std::find(finalNodes.begin(), finalNodes.end(), state) != finalNodes.end();
                }
                break;
            case 63: 
                switch(letter) {
                    case ' ': state = 116; break;
                    default: return std::find(finalNodes.begin(), finalNodes.end(), state) != finalNodes.end();
                }
                break;
            case 64: 
                switch(letter) {
                    case ' ': state = 116; break;
                    default: return std::find(finalNodes.begin(), finalNodes.end(), state) != finalNodes.end();
                }
                break;
            case 65: 
                switch(letter) {
                    case ' ': state = 116; break;
                    default: return std::find(finalNodes.begin(), finalNodes.end(), state) != finalNodes.end();
                }
                break;
            case 66: 
                switch(letter) {
                    case ' ': state = 116; break;
                    default: return std::find(finalNodes.begin(), finalNodes.end(), state) != finalNodes.end();
                }
                break;
            case 67: 
                switch(letter) {
                    case ' ': state = 116; break;
                    default: return std::find(finalNodes.begin(), finalNodes.end(), state) != finalNodes.end();
                }
                break;
            case 68: 
                switch(letter) {
                    case ' ': state = 116; break;
                    default: return std::find(finalNodes.begin(), finalNodes.end(), state) != finalNodes.end();
                }
                break;
            case 69: 
                switch(letter) {
                    case ' ': state = 116; break;
                    default: return std::find(finalNodes.begin(), finalNodes.end(), state) != finalNodes.end();
                }
                break;
            case 70: 
                switch(letter) {
                    case ' ': state = 116; break;
                    default: return std::find(finalNodes.begin(), finalNodes.end(), state) != finalNodes.end();
                }
                break;
            case 71: 
                switch(letter) {
                    case ' ': state = 116; break;
                    default: return std::find(finalNodes.begin(), finalNodes.end(), state) != finalNodes.end();
                }
                break;
            case 72: 
                switch(letter) {
                    case ' ': state = 116; break;
                    default: return std::find(finalNodes.begin(), finalNodes.end(), state) != finalNodes.end();
                }
                break;
            case 73: 
                switch(letter) {
                    case ' ': state = 116; break;
                    default: return std::find(finalNodes.begin(), finalNodes.end(), state) != finalNodes.end();
                }
                break;
            case 74: 
                switch(letter) {
                    case ' ': state = 116; break;
                    default: return std::find(finalNodes.begin(), finalNodes.end(), state) != finalNodes.end();
                }
                break;
            case 75: 
                switch(letter) {
                    case ' ': state = 116; break;
                    default: return std::find(finalNodes.begin(), finalNodes.end(), state) != finalNodes.end();
                }
                break;
            case 76: 
                switch(letter) {
                    case ' ': state = 116; break;
                    default: return std::find(finalNodes.begin(), finalNodes.end(), state) != finalNodes.end();
                }
                break;
            case 77: 
                switch(letter) {
                    case ' ': state = 116; break;
                    default: return std::find(finalNodes.begin(), finalNodes.end(), state) != finalNodes.end();
                }
                break;
            case 78: 
                switch(letter) {
                    case ' ': state = 116; break;
                    default: return std::find(finalNodes.begin(), finalNodes.end(), state) != finalNodes.end();
                }
                break;
            case 79: 
                switch(letter) {
                    case ' ': state = 116; break;
                    default: return std::find(finalNodes.begin(), finalNodes.end(), state) != finalNodes.end();
                }
                break;
            case 80: 
                switch(letter) {
                    case ' ': state = 116; break;
                    default: return std::find(finalNodes.begin(), finalNodes.end(), state) != finalNodes.end();
                }
                break;
            case 81: 
                switch(letter) {
                    case ' ': state = 116; break;
                    default: return std::find(finalNodes.begin(), finalNodes.end(), state) != finalNodes.end();
                }
                break;
            case 82: 
                switch(letter) {
                    case ' ': state = 116; break;
                    default: return std::find(finalNodes.begin(), finalNodes.end(), state) != finalNodes.end();
                }
                break;
            case 83: 
                switch(letter) {
                    case ' ': state = 116; break;
                    default: return std::find(finalNodes.begin(), finalNodes.end(), state) != finalNodes.end();
                }
                break;
            case 84: 
                switch(letter) {
                    case ' ': state = 116; break;
                    default: return std::find(finalNodes.begin(), finalNodes.end(), state) != finalNodes.end();
                }
                break;
            case 85: 
                switch(letter) {
                    case ' ': state = 116; break;
                    default: return std::find(finalNodes.begin(), finalNodes.end(), state) != finalNodes.end();
                }
                break;
            case 86: 
                switch(letter) {
                    case ' ': state = 116; break;
                    default: return std::find(finalNodes.begin(), finalNodes.end(), state) != finalNodes.end();
                }
                break;
            case 87: 
                switch(letter) {
                    case ' ': state = 116; break;
                    default: return std::find(finalNodes.begin(), finalNodes.end(), state) != finalNodes.end();
                }
                break;
            case 88: 
                switch(letter) {
                    case ' ': state = 116; break;
                    default: return std::find(finalNodes.begin(), finalNodes.end(), state) != finalNodes.end();
                }
                break;
            case 89: 
                switch(letter) {
                    case ' ': state = 116; break;
                    default: return std::find(finalNodes.begin(), finalNodes.end(), state) != finalNodes.end();
                }
                break;
            case 90: 
                switch(letter) {
                    case ' ': state = 116; break;
                    default: return std::find(finalNodes.begin(), finalNodes.end(), state) != finalNodes.end();
                }
                break;
            case 91: 
                switch(letter) {
                    case ' ': state = 116; break;
                    default: return std::find(finalNodes.begin(), finalNodes.end(), state) != finalNodes.end();
                }
                break;
            case 92: 
                switch(letter) {
                    case ' ': state = 116; break;
                    default: return std::find(finalNodes.begin(), finalNodes.end(), state) != finalNodes.end();
                }
                break;
            case 93: 
                switch(letter) {
                    case ' ': state = 116; break;
                    default: return std::find(finalNodes.begin(), finalNodes.end(), state) != finalNodes.end();
                }
                break;
            case 94: 
                switch(letter) {
                    case ' ': state = 116; break;
                    default: return std::find(finalNodes.begin(), finalNodes.end(), state) != finalNodes.end();
                }
                break;
            case 95: 
                switch(letter) {
                    case ' ': state = 116; break;
                    default: return std::find(finalNodes.begin(), finalNodes.end(), state) != finalNodes.end();
                }
                break;
            case 96: 
                switch(letter) {
                    case ' ': state = 116; break;
                    default: return std::find(finalNodes.begin(), finalNodes.end(), state) != finalNodes.end();
                }
                break;
            case 97: 
                switch(letter) {
                    case ' ': state = 116; break;
                    default: return std::find(finalNodes.begin(), finalNodes.end(), state) != finalNodes.end();
                }
                break;
            case 98: 
                switch(letter) {
                    case ' ': state = 116; break;
                    default: return std::find(finalNodes.begin(), finalNodes.end(), state) != finalNodes.end();
                }
                break;
            case 99: 
                switch(letter) {
                    case ' ': state = 116; break;
                    default: return std::find(finalNodes.begin(), finalNodes.end(), state) != finalNodes.end();
                }
                break;
            case 100: 
                switch(letter) {
                    case ' ': state = 116; break;
                    default: return std::find(finalNodes.begin(), finalNodes.end(), state) != finalNodes.end();
                }
                break;
            case 101: 
                switch(letter) {
                    case ' ': state = 116; break;
                    default: return std::find(finalNodes.begin(), finalNodes.end(), state) != finalNodes.end();
                }
                break;
            case 102: 
                switch(letter) {
                    case ' ': state = 116; break;
                    default: return std::find(finalNodes.begin(), finalNodes.end(), state) != finalNodes.end();
                }
                break;
            case 103: 
                switch(letter) {
                    case ' ': state = 116; break;
                    default: return std::find(finalNodes.begin(), finalNodes.end(), state) != finalNodes.end();
                }
                break;
            case 104: 
                switch(letter) {
                    case '9': state = 111; break;
                    case '3': state = 114; break;
                    case '4': state = 107; break;
                    case '0': state = 108; break;
                    case '5': state = 113; break;
                    case '2': state = 106; break;
                    case '1': state = 117; break;
                    case '7': state = 112; break;
                    case '8': state = 110; break;
                    case '6': state = 109; break;
                    default: return std::find(finalNodes.begin(), finalNodes.end(), state) != finalNodes.end();
                }
                break;
            case 105: 
                switch(letter) {
                    case 'L': state = 62; break;
                    case 'a': state = 79; break;
                    case 'n': state = 84; break;
                    case 'W': state = 81; break;
                    case 'e': state = 96; break;
                    case 'J': state = 98; break;
                    case 'D': state = 90; break;
                    case 'F': state = 78; break;
                    case 'i': state = 69; break;
                    case 'z': state = 95; break;
                    case 'l': state = 61; break;
                    case 'Y': state = 89; break;
                    case 'R': state = 58; break;
                    case 'r': state = 75; break;
                    case 'O': state = 74; break;
                    case 'j': state = 60; break;
                    case 'H': state = 87; break;
                    case 'I': state = 83; break;
                    case 'c': state = 77; break;
                    case 'K': state = 71; break;
                    case 'N': state = 72; break;
                    case 'G': state = 55; break;
                    case 'x': state = 65; break;
                    case 'm': state = 52; break;
                    case ' ': state = 104; break;
                    case 't': state = 94; break;
                    case 'h': state = 86; break;
                    case 'M': state = 85; break;
                    case 'w': state = 97; break;
                    case 'v': state = 99; break;
                    case 'A': state = 68; break;
                    case 'f': state = 91; break;
                    case 'E': state = 67; break;
                    case 's': state = 102; break;
                    case 'P': state = 54; break;
                    case 'k': state = 82; break;
                    case 'q': state = 103; break;
                    case 'B': state = 53; break;
                    case 'g': state = 57; break;
                    case 'Z': state = 64; break;
                    case 'p': state = 88; break;
                    case 'S': state = 63; break;
                    case 'u': state = 92; break;
                    case 'b': state = 73; break;
                    case 'X': state = 66; break;
                    case 'U': state = 59; break;
                    case 'Q': state = 93; break;
                    case 'V': state = 100; break;
                    case 'T': state = 76; break;
                    case 'y': state = 56; break;
                    case 'o': state = 101; break;
                    case 'd': state = 80; break;
                    case 'C': state = 70; break;
                    default: return std::find(finalNodes.begin(), finalNodes.end(), state) != finalNodes.end();
                }
                break;
            case 106: 
                switch(letter) {
                    case 'i': state = 29; break;
                    case 'W': state = 11; break;
                    case 'J': state = 44; break;
                    case 'n': state = 8; break;
                    case 'm': state = 31; break;
                    case 'z': state = 35; break;
                    case 'j': state = 41; break;
                    case 'k': state = 0; break;
                    case 'Q': state = 14; break;
                    case 'O': state = 26; break;
                    case 's': state = 45; break;
                    case 'M': state = 51; break;
                    case 'E': state = 30; break;
                    case 'b': state = 22; break;
                    case 'R': state = 40; break;
                    case 'K': state = 28; break;
                    case 'N': state = 18; break;
                    case 'f': state = 46; break;
                    case 'v': state = 1; break;
                    case 'u': state = 4; break;
                    case 'l': state = 23; break;
                    case 'h': state = 7; break;
                    case 'T': state = 21; break;
                    case 'c': state = 20; break;
                    case 'a': state = 49; break;
                    case 'e': state = 50; break;
                    case 'S': state = 36; break;
                    case 'Y': state = 12; break;
                    case 'p': state = 6; break;
                    case 'g': state = 24; break;
                    case 'A': state = 37; break;
                    case 'X': state = 16; break;
                    case 'B': state = 19; break;
                    case 'x': state = 27; break;
                    case 'w': state = 9; break;
                    case 'P': state = 42; break;
                    case 't': state = 43; break;
                    case 'I': state = 48; break;
                    case 'U': state = 15; break;
                    case 'V': state = 13; break;
                    case 'y': state = 33; break;
                    case 'Z': state = 38; break;
                    case 'G': state = 34; break;
                    case 'L': state = 39; break;
                    case 'H': state = 47; break;
                    case 'd': state = 10; break;
                    case 'F': state = 32; break;
                    case 'C': state = 17; break;
                    case 'q': state = 3; break;
                    case 'D': state = 5; break;
                    case 'r': state = 25; break;
                    case 'o': state = 2; break;
                    default: return std::find(finalNodes.begin(), finalNodes.end(), state) != finalNodes.end();
                }
                break;
            case 107: 
                switch(letter) {
                    case 'W': state = 11; break;
                    case 'H': state = 47; break;
                    case 's': state = 45; break;
                    case 'M': state = 51; break;
                    case 'k': state = 0; break;
                    case 'z': state = 35; break;
                    case 'T': state = 21; break;
                    case 'R': state = 40; break;
                    case 'l': state = 23; break;
                    case 'U': state = 15; break;
                    case 'C': state = 17; break;
                    case 'i': state = 29; break;
                    case 'J': state = 44; break;
                    case 'E': state = 30; break;
                    case 'f': state = 46; break;
                    case 'v': state = 1; break;
                    case 'S': state = 36; break;
                    case 'g': state = 24; break;
                    case 'V': state = 13; break;
                    case 'a': state = 49; break;
                    case 'c': state = 20; break;
                    case 'e': state = 50; break;
                    case 'n': state = 8; break;
                    case 'I': state = 48; break;
                    case 'L': state = 39; break;
                    case 'b': state = 22; break;
                    case 'y': state = 33; break;
                    case 'q': state = 3; break;
                    case 'u': state = 4; break;
                    case 'h': state = 7; break;
                    case 'r': state = 25; break;
                    case 'Y': state = 12; break;
                    case 'N': state = 18; break;
                    case 'K': state = 28; break;
                    case 'x': state = 27; break;
                    case 'A': state = 37; break;
                    case 'X': state = 16; break;
                    case 'Q': state = 14; break;
                    case 'd': state = 10; break;
                    case 'F': state = 32; break;
                    case 'j': state = 41; break;
                    case 't': state = 43; break;
                    case 'Z': state = 38; break;
                    case 'G': state = 34; break;
                    case 'B': state = 19; break;
                    case 'D': state = 5; break;
                    case 'p': state = 6; break;
                    case 'w': state = 9; break;
                    case 'O': state = 26; break;
                    case 'm': state = 31; break;
                    case 'P': state = 42; break;
                    case 'o': state = 2; break;
                    default: return std::find(finalNodes.begin(), finalNodes.end(), state) != finalNodes.end();
                }
                break;
            case 108: 
                switch(letter) {
                    case 'i': state = 29; break;
                    case 'J': state = 44; break;
                    case 'B': state = 19; break;
                    case 'L': state = 39; break;
                    case 'U': state = 15; break;
                    case 'b': state = 22; break;
                    case 'R': state = 40; break;
                    case 'Q': state = 14; break;
                    case 'w': state = 9; break;
                    case 'f': state = 46; break;
                    case 'T': state = 21; break;
                    case 'A': state = 37; break;
                    case 'V': state = 13; break;
                    case 's': state = 45; break;
                    case 'N': state = 18; break;
                    case 'v': state = 1; break;
                    case 'x': state = 27; break;
                    case 'P': state = 42; break;
                    case 'I': state = 48; break;
                    case 'g': state = 24; break;
                    case 'q': state = 3; break;
                    case 'm': state = 31; break;
                    case 'E': state = 30; break;
                    case 'p': state = 6; break;
                    case 'M': state = 51; break;
                    case 'Y': state = 12; break;
                    case 'O': state = 26; break;
                    case 'a': state = 49; break;
                    case 'r': state = 25; break;
                    case 'n': state = 8; break;
                    case 'F': state = 32; break;
                    case 'u': state = 4; break;
                    case 'j': state = 41; break;
                    case 'z': state = 35; break;
                    case 'h': state = 7; break;
                    case 'W': state = 11; break;
                    case 'K': state = 28; break;
                    case 'c': state = 20; break;
                    case 'S': state = 36; break;
                    case 'o': state = 2; break;
                    case 'H': state = 47; break;
                    case 'Z': state = 38; break;
                    case 'G': state = 34; break;
                    case 'l': state = 23; break;
                    case 'e': state = 50; break;
                    case 'y': state = 33; break;
                    case 'k': state = 0; break;
                    case 'X': state = 16; break;
                    case 'd': state = 10; break;
                    case 'D': state = 5; break;
                    case 'C': state = 17; break;
                    case 't': state = 43; break;
                    default: return std::find(finalNodes.begin(), finalNodes.end(), state) != finalNodes.end();
                }
                break;
            case 109: 
                switch(letter) {
                    case 'I': state = 48; break;
                    case 'P': state = 42; break;
                    case 'i': state = 29; break;
                    case 'E': state = 30; break;
                    case 'r': state = 25; break;
                    case 'N': state = 18; break;
                    case 'f': state = 46; break;
                    case 'O': state = 26; break;
                    case 'J': state = 44; break;
                    case 'n': state = 8; break;
                    case 'B': state = 19; break;
                    case 'b': state = 22; break;
                    case 'q': state = 3; break;
                    case 'K': state = 28; break;
                    case 's': state = 45; break;
                    case 'T': state = 21; break;
                    case 'x': state = 27; break;
                    case 'Q': state = 14; break;
                    case 'V': state = 13; break;
                    case 'Y': state = 12; break;
                    case 'U': state = 15; break;
                    case 'm': state = 31; break;
                    case 'R': state = 40; break;
                    case 'h': state = 7; break;
                    case 'k': state = 0; break;
                    case 'c': state = 20; break;
                    case 'C': state = 17; break;
                    case 'z': state = 35; break;
                    case 'v': state = 1; break;
                    case 'Z': state = 38; break;
                    case 'G': state = 34; break;
                    case 'A': state = 37; break;
                    case 'S': state = 36; break;
                    case 'd': state = 10; break;
                    case 'L': state = 39; break;
                    case 'g': state = 24; break;
                    case 'u': state = 4; break;
                    case 'e': state = 50; break;
                    case 'M': state = 51; break;
                    case 'H': state = 47; break;
                    case 'j': state = 41; break;
                    case 'p': state = 6; break;
                    case 'l': state = 23; break;
                    case 'w': state = 9; break;
                    case 'o': state = 2; break;
                    case 'F': state = 32; break;
                    case 'a': state = 49; break;
                    case 'D': state = 5; break;
                    case 'X': state = 16; break;
                    case 'W': state = 11; break;
                    case 't': state = 43; break;
                    case 'y': state = 33; break;
                    default: return std::find(finalNodes.begin(), finalNodes.end(), state) != finalNodes.end();
                }
                break;
            case 110: 
                switch(letter) {
                    case 'i': state = 29; break;
                    case 'K': state = 28; break;
                    case 'J': state = 44; break;
                    case 'w': state = 9; break;
                    case 'T': state = 21; break;
                    case 'N': state = 18; break;
                    case 'H': state = 47; break;
                    case 'g': state = 24; break;
                    case 'V': state = 13; break;
                    case 'W': state = 11; break;
                    case 'r': state = 25; break;
                    case 'O': state = 26; break;
                    case 's': state = 45; break;
                    case 'a': state = 49; break;
                    case 'k': state = 0; break;
                    case 'M': state = 51; break;
                    case 'n': state = 8; break;
                    case 'G': state = 34; break;
                    case 'Z': state = 38; break;
                    case 'E': state = 30; break;
                    case 'm': state = 31; break;
                    case 'U': state = 15; break;
                    case 'S': state = 36; break;
                    case 'u': state = 4; break;
                    case 'y': state = 33; break;
                    case 'L': state = 39; break;
                    case 'C': state = 17; break;
                    case 'D': state = 5; break;
                    case 'B': state = 19; break;
                    case 'P': state = 42; break;
                    case 'F': state = 32; break;
                    case 't': state = 43; break;
                    case 'z': state = 35; break;
                    case 'x': state = 27; break;
                    case 'A': state = 37; break;
                    case 'j': state = 41; break;
                    case 'o': state = 2; break;
                    case 'l': state = 23; break;
                    case 'I': state = 48; break;
                    case 'X': state = 16; break;
                    case 'v': state = 1; break;
                    case 'h': state = 7; break;
                    case 'd': state = 10; break;
                    case 'p': state = 6; break;
                    case 'Y': state = 12; break;
                    case 'e': state = 50; break;
                    case 'R': state = 40; break;
                    case 'q': state = 3; break;
                    case 'f': state = 46; break;
                    case 'Q': state = 14; break;
                    case 'b': state = 22; break;
                    case 'c': state = 20; break;
                    default: return std::find(finalNodes.begin(), finalNodes.end(), state) != finalNodes.end();
                }
                break;
            case 111: 
                switch(letter) {
                    case 'T': state = 21; break;
                    case 'g': state = 24; break;
                    case 'i': state = 29; break;
                    case 'K': state = 28; break;
                    case 'J': state = 44; break;
                    case 'f': state = 46; break;
                    case 's': state = 45; break;
                    case 'w': state = 9; break;
                    case 'M': state = 51; break;
                    case 'L': state = 39; break;
                    case 'R': state = 40; break;
                    case 'F': state = 32; break;
                    case 'V': state = 13; break;
                    case 'H': state = 47; break;
                    case 'c': state = 20; break;
                    case 'r': state = 25; break;
                    case 'O': state = 26; break;
                    case 'e': state = 50; break;
                    case 'U': state = 15; break;
                    case 'q': state = 3; break;
                    case 'a': state = 49; break;
                    case 'n': state = 8; break;
                    case 'l': state = 23; break;
                    case 'N': state = 18; break;
                    case 'C': state = 17; break;
                    case 'x': state = 27; break;
                    case 'G': state = 34; break;
                    case 'Z': state = 38; break;
                    case 'P': state = 42; break;
                    case 'E': state = 30; break;
                    case 'k': state = 0; break;
                    case 'b': state = 22; break;
                    case 'I': state = 48; break;
                    case 'h': state = 7; break;
                    case 'S': state = 36; break;
                    case 'm': state = 31; break;
                    case 'X': state = 16; break;
                    case 'z': state = 35; break;
                    case 'y': state = 33; break;
                    case 'W': state = 11; break;
                    case 'A': state = 37; break;
                    case 'v': state = 1; break;
                    case 'j': state = 41; break;
                    case 'o': state = 2; break;
                    case 'd': state = 10; break;
                    case 'B': state = 19; break;
                    case 'Q': state = 14; break;
                    case 't': state = 43; break;
                    case 'Y': state = 12; break;
                    case 'p': state = 6; break;
                    case 'D': state = 5; break;
                    case 'u': state = 4; break;
                    default: return std::find(finalNodes.begin(), finalNodes.end(), state) != finalNodes.end();
                }
                break;
            case 112: 
                switch(letter) {
                    case 'k': state = 0; break;
                    case 'I': state = 48; break;
                    case 'H': state = 47; break;
                    case 'N': state = 18; break;
                    case 'T': state = 21; break;
                    case 'J': state = 44; break;
                    case 'f': state = 46; break;
                    case 'C': state = 17; break;
                    case 'S': state = 36; break;
                    case 'L': state = 39; break;
                    case 'i': state = 29; break;
                    case 'U': state = 15; break;
                    case 'B': state = 19; break;
                    case 'E': state = 30; break;
                    case 'e': state = 50; break;
                    case 'r': state = 25; break;
                    case 'o': state = 2; break;
                    case 'w': state = 9; break;
                    case 'l': state = 23; break;
                    case 'u': state = 4; break;
                    case 'j': state = 41; break;
                    case 'W': state = 11; break;
                    case 'q': state = 3; break;
                    case 'Y': state = 12; break;
                    case 'h': state = 7; break;
                    case 'y': state = 33; break;
                    case 'K': state = 28; break;
                    case 's': state = 45; break;
                    case 'D': state = 5; break;
                    case 'a': state = 49; break;
                    case 'z': state = 35; break;
                    case 't': state = 43; break;
                    case 'v': state = 1; break;
                    case 'O': state = 26; break;
                    case 'P': state = 42; break;
                    case 'm': state = 31; break;
                    case 'V': state = 13; break;
                    case 'F': state = 32; break;
                    case 'A': state = 37; break;
                    case 'M': state = 51; break;
                    case 'c': state = 20; break;
                    case 'R': state = 40; break;
                    case 'G': state = 34; break;
                    case 'g': state = 24; break;
                    case 'x': state = 27; break;
                    case 'd': state = 10; break;
                    case 'b': state = 22; break;
                    case 'n': state = 8; break;
                    case 'X': state = 16; break;
                    case 'Z': state = 38; break;
                    case 'Q': state = 14; break;
                    case 'p': state = 6; break;
                    default: return std::find(finalNodes.begin(), finalNodes.end(), state) != finalNodes.end();
                }
                break;
            case 113: 
                switch(letter) {
                    case 'G': state = 34; break;
                    case 'N': state = 18; break;
                    case 'H': state = 47; break;
                    case 'I': state = 48; break;
                    case 'U': state = 15; break;
                    case 'L': state = 39; break;
                    case 'k': state = 0; break;
                    case 'S': state = 36; break;
                    case 's': state = 45; break;
                    case 'u': state = 4; break;
                    case 'w': state = 9; break;
                    case 'T': state = 21; break;
                    case 'B': state = 19; break;
                    case 'W': state = 11; break;
                    case 'C': state = 17; break;
                    case 'e': state = 50; break;
                    case 'D': state = 5; break;
                    case 'm': state = 31; break;
                    case 'q': state = 3; break;
                    case 'O': state = 26; break;
                    case 'F': state = 32; break;
                    case 'A': state = 37; break;
                    case 'R': state = 40; break;
                    case 'E': state = 30; break;
                    case 'b': state = 22; break;
                    case 'V': state = 13; break;
                    case 'd': state = 10; break;
                    case 'a': state = 49; break;
                    case 'y': state = 33; break;
                    case 'z': state = 35; break;
                    case 'f': state = 46; break;
                    case 'x': state = 27; break;
                    case 'g': state = 24; break;
                    case 'i': state = 29; break;
                    case 'J': state = 44; break;
                    case 'P': state = 42; break;
                    case 'K': state = 28; break;
                    case 'j': state = 41; break;
                    case 'r': state = 25; break;
                    case 'o': state = 2; break;
                    case 'n': state = 8; break;
                    case 'p': state = 6; break;
                    case 't': state = 43; break;
                    case 'l': state = 23; break;
                    case 'X': state = 16; break;
                    case 'v': state = 1; break;
                    case 'c': state = 20; break;
                    case 'h': state = 7; break;
                    case 'Y': state = 12; break;
                    case 'M': state = 51; break;
                    case 'Q': state = 14; break;
                    case 'Z': state = 38; break;
                    default: return std::find(finalNodes.begin(), finalNodes.end(), state) != finalNodes.end();
                }
                break;
            case 114: 
                switch(letter) {
                    case 'G': state = 34; break;
                    case 'J': state = 44; break;
                    case 'r': state = 25; break;
                    case 'g': state = 24; break;
                    case 'z': state = 35; break;
                    case 'W': state = 11; break;
                    case 'U': state = 15; break;
                    case 'l': state = 23; break;
                    case 'b': state = 22; break;
                    case 'm': state = 31; break;
                    case 'I': state = 48; break;
                    case 'f': state = 46; break;
                    case 'q': state = 3; break;
                    case 'w': state = 9; break;
                    case 'C': state = 17; break;
                    case 'k': state = 0; break;
                    case 'A': state = 37; break;
                    case 'E': state = 30; break;
                    case 'i': state = 29; break;
                    case 'N': state = 18; break;
                    case 'L': state = 39; break;
                    case 'P': state = 42; break;
                    case 'X': state = 16; break;
                    case 'B': state = 19; break;
                    case 'K': state = 28; break;
                    case 'j': state = 41; break;
                    case 's': state = 45; break;
                    case 'T': state = 21; break;
                    case 'y': state = 33; break;
                    case 'V': state = 13; break;
                    case 'M': state = 51; break;
                    case 'S': state = 36; break;
                    case 'n': state = 8; break;
                    case 'd': state = 10; break;
                    case 'F': state = 32; break;
                    case 'v': state = 1; break;
                    case 'O': state = 26; break;
                    case 'o': state = 2; break;
                    case 'D': state = 5; break;
                    case 'p': state = 6; break;
                    case 't': state = 43; break;
                    case 'R': state = 40; break;
                    case 'h': state = 7; break;
                    case 'u': state = 4; break;
                    case 'Z': state = 38; break;
                    case 'Q': state = 14; break;
                    case 'a': state = 49; break;
                    case 'x': state = 27; break;
                    case 'H': state = 47; break;
                    case 'e': state = 50; break;
                    case 'Y': state = 12; break;
                    case 'c': state = 20; break;
                    default: return std::find(finalNodes.begin(), finalNodes.end(), state) != finalNodes.end();
                }
                break;
            case 115: 
                switch(letter) {
                    case 'l': state = 23; break;
                    case 'a': state = 49; break;
                    case 'E': state = 30; break;
                    case 'W': state = 11; break;
                    case 'e': state = 50; break;
                    case 'J': state = 44; break;
                    case 'h': state = 7; break;
                    case 'H': state = 47; break;
                    case 'c': state = 20; break;
                    case 'v': state = 1; break;
                    case 'C': state = 17; break;
                    case 'w': state = 9; break;
                    case 'p': state = 6; break;
                    case 'L': state = 39; break;
                    case 'b': state = 22; break;
                    case 'o': state = 2; break;
                    case 'u': state = 4; break;
                    case 'A': state = 37; break;
                    case 'z': state = 35; break;
                    case 'm': state = 31; break;
                    case 'g': state = 24; break;
                    case 'r': state = 25; break;
                    case 'R': state = 40; break;
                    case 'y': state = 33; break;
                    case 'k': state = 0; break;
                    case 'O': state = 26; break;
                    case 'K': state = 28; break;
                    case 'B': state = 19; break;
                    case 'F': state = 32; break;
                    case 'j': state = 41; break;
                    case 'I': state = 48; break;
                    case 'S': state = 36; break;
                    case 'n': state = 8; break;
                    case 'V': state = 13; break;
                    case 'N': state = 18; break;
                    case 'q': state = 3; break;
                    case 'M': state = 51; break;
                    case 'P': state = 42; break;
                    case 't': state = 43; break;
                    case 'T': state = 21; break;
                    case 'f': state = 46; break;
                    case 'D': state = 5; break;
                    case 's': state = 45; break;
                    case 'G': state = 34; break;
                    case 'x': state = 27; break;
                    case 'i': state = 29; break;
                    case 'U': state = 15; break;
                    case 'X': state = 16; break;
                    case 'Y': state = 12; break;
                    case 'Z': state = 38; break;
                    case 'Q': state = 14; break;
                    case 'd': state = 10; break;
                    default: return std::find(finalNodes.begin(), finalNodes.end(), state) != finalNodes.end();
                }
                break;
            case 116: 
                switch(letter) {
                    case 'L': state = 39; break;
                    case 'E': state = 30; break;
                    case 'n': state = 8; break;
                    case 'i': state = 29; break;
                    case 'K': state = 28; break;
                    case 'C': state = 17; break;
                    case 'F': state = 32; break;
                    case 'x': state = 27; break;
                    case 'l': state = 23; break;
                    case 'B': state = 19; break;
                    case 'w': state = 9; break;
                    case 'O': state = 26; break;
                    case 'g': state = 24; break;
                    case 'H': state = 47; break;
                    case 'T': state = 21; break;
                    case 'S': state = 36; break;
                    case 'p': state = 6; break;
                    case 'm': state = 31; break;
                    case 'b': state = 22; break;
                    case 'z': state = 35; break;
                    case 't': state = 43; break;
                    case 'D': state = 5; break;
                    case 'd': state = 10; break;
                    case 'Y': state = 12; break;
                    case 'o': state = 2; break;
                    case 'X': state = 16; break;
                    case 'u': state = 4; break;
                    case 'v': state = 1; break;
                    case 'y': state = 33; break;
                    case 'h': state = 7; break;
                    case 'c': state = 20; break;
                    case 'I': state = 48; break;
                    case 'k': state = 0; break;
                    case 'a': state = 49; break;
                    case 'J': state = 44; break;
                    case 'Z': state = 38; break;
                    case 'Q': state = 14; break;
                    case 'U': state = 15; break;
                    case 'A': state = 37; break;
                    case 'N': state = 18; break;
                    case 'R': state = 40; break;
                    case 'V': state = 13; break;
                    case 'P': state = 42; break;
                    case 'f': state = 46; break;
                    case 'q': state = 3; break;
                    case 'M': state = 51; break;
                    case 'j': state = 41; break;
                    case 'r': state = 25; break;
                    case 'G': state = 34; break;
                    case 'e': state = 50; break;
                    case 'W': state = 11; break;
                    case 's': state = 45; break;
                    default: return std::find(finalNodes.begin(), finalNodes.end(), state) != finalNodes.end();
                }
                break;
            case 117: 
                switch(letter) {
                    case 'r': state = 25; break;
                    case 'R': state = 40; break;
                    case 'w': state = 9; break;
                    case 'k': state = 0; break;
                    case 'n': state = 8; break;
                    case 'a': state = 49; break;
                    case 'I': state = 48; break;
                    case 'H': state = 47; break;
                    case 't': state = 43; break;
                    case 'J': state = 44; break;
                    case 'B': state = 19; break;
                    case 'W': state = 11; break;
                    case 'p': state = 6; break;
                    case 'f': state = 46; break;
                    case 'U': state = 15; break;
                    case 'M': state = 51; break;
                    case 'q': state = 3; break;
                    case 'g': state = 24; break;
                    case 'L': state = 39; break;
                    case 'e': state = 50; break;
                    case 'x': state = 27; break;
                    case 'j': state = 41; break;
                    case 'X': state = 16; break;
                    case 'o': state = 2; break;
                    case 'V': state = 13; break;
                    case 'C': state = 17; break;
                    case 'z': state = 35; break;
                    case 'Q': state = 14; break;
                    case 'Z': state = 38; break;
                    case 'O': state = 26; break;
                    case 'T': state = 21; break;
                    case 'v': state = 1; break;
                    case 'l': state = 23; break;
                    case 'm': state = 31; break;
                    case 'Y': state = 12; break;
                    case 'D': state = 5; break;
                    case 'h': state = 7; break;
                    case 'i': state = 29; break;
                    case 'y': state = 33; break;
                    case 'd': state = 10; break;
                    case 'K': state = 28; break;
                    case 's': state = 45; break;
                    case 'N': state = 18; break;
                    case 'c': state = 20; break;
                    case 'F': state = 32; break;
                    case 'S': state = 36; break;
                    case 'u': state = 4; break;
                    case 'b': state = 22; break;
                    case 'A': state = 37; break;
                    case 'P': state = 42; break;
                    case 'E': state = 30; break;
                    case 'G': state = 34; break;
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
        int tokenSize = tokens.size();
        input->goBackOneChar(); 
        char c = (input->getInput())[0]; 
        if(c == ' ' || c == '\n') continue; 
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
