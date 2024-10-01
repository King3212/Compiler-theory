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
    std::vector<int> finalNodes = {6, 7, 45, 12, 14, 0, 36, 19, 5, 22, 17, 54, 52, 16, 13, 18, 4, 11, 21, 33, 8, 2, 51, 20, 49, 41, 35, 56, 10, 46, 100, 9, 86, 68, 64, 109, 83, 98, 23, 3, 1, 15, 57, 82, 70, 44, 75, 85, 55, 88, 53, 50, 87, 76, 107, 108, 72, 74, 110, 81, 71, 73, 102, 43, 104, 84, 25, 113, 26, 62, 91, 32, 112, 61, 90, 31, 27, 105, 89, 30, 94, 95, 67, 96, 37, 97, 38, 99, 40, 77, 106, 47, 65, 69, 79, 80, 28, 92, 59, 24, 103, 58, 60, 111, 34, 93, 63, 101, 42, 39, 29, 66, 78, 48};
    int state = 114; // 初始状态
    while(true) {
        char letter = (input->getInput())[0];
        switch(state) {
            case 0: 
                switch(letter) {
                    case 'L': state = 64; break;
                    case 'T': state = 107; break;
                    case 'X': state = 101; break;
                    case 'J': state = 24; break;
                    case '0': state = 93; break;
                    case 'V': state = 96; break;
                    case '1': state = 100; break;
                    case 'z': state = 109; break;
                    case 'y': state = 105; break;
                    case 'c': state = 113; break;
                    case '4': state = 59; break;
                    case 'F': state = 75; break;
                    case 'h': state = 112; break;
                    case 'i': state = 69; break;
                    case 'n': state = 82; break;
                    case 'p': state = 94; break;
                    case '9': state = 44; break;
                    case 'W': state = 98; break;
                    case '7': state = 102; break;
                    case '6': state = 27; break;
                    case 'k': state = 89; break;
                    case 'H': state = 68; break;
                    case 'v': state = 99; break;
                    case 'a': state = 63; break;
                    case 'R': state = 108; break;
                    case 'g': state = 80; break;
                    case 'q': state = 76; break;
                    case 't': state = 23; break;
                    case 'D': state = 87; break;
                    case 's': state = 61; break;
                    case 'E': state = 70; break;
                    case 'Z': state = 67; break;
                    case 'r': state = 26; break;
                    case 'w': state = 84; break;
                    case 'S': state = 73; break;
                    case 'N': state = 83; break;
                    case '2': state = 72; break;
                    case 'f': state = 91; break;
                    case 'e': state = 60; break;
                    case 'B': state = 78; break;
                    case '3': state = 25; break;
                    case 'P': state = 65; break;
                    case 'u': state = 92; break;
                    case 'O': state = 66; break;
                    case 'Y': state = 97; break;
                    case 'U': state = 103; break;
                    case 'I': state = 74; break;
                    case 'm': state = 77; break;
                    case 'o': state = 106; break;
                    case '5': state = 111; break;
                    case 'C': state = 88; break;
                    case 'A': state = 81; break;
                    case 'G': state = 104; break;
                    case 'x': state = 71; break;
                    case 'l': state = 79; break;
                    case '8': state = 85; break;
                    case 'j': state = 110; break;
                    case 'K': state = 58; break;
                    case 'b': state = 28; break;
                    case 'd': state = 90; break;
                    case 'M': state = 62; break;
                    case 'Q': state = 95; break;
                    default: return std::find(finalNodes.begin(), finalNodes.end(), state) != finalNodes.end();
                }
                break;
            case 1: 
                switch(letter) {
                    case 'J': state = 24; break;
                    case 'C': state = 88; break;
                    case '0': state = 93; break;
                    case 'a': state = 63; break;
                    case 'q': state = 76; break;
                    case 'v': state = 99; break;
                    case '9': state = 44; break;
                    case 'P': state = 65; break;
                    case 'n': state = 82; break;
                    case 'g': state = 80; break;
                    case 's': state = 61; break;
                    case 'R': state = 108; break;
                    case 'm': state = 77; break;
                    case '2': state = 72; break;
                    case 'x': state = 71; break;
                    case 'X': state = 101; break;
                    case '7': state = 102; break;
                    case '4': state = 59; break;
                    case 'y': state = 105; break;
                    case 'D': state = 87; break;
                    case 'V': state = 96; break;
                    case 'p': state = 94; break;
                    case 'f': state = 91; break;
                    case '6': state = 27; break;
                    case 'l': state = 79; break;
                    case 'I': state = 74; break;
                    case 'E': state = 70; break;
                    case 'T': state = 107; break;
                    case 'c': state = 113; break;
                    case 'i': state = 69; break;
                    case 'S': state = 73; break;
                    case 't': state = 23; break;
                    case 'M': state = 62; break;
                    case 'k': state = 89; break;
                    case 'Q': state = 95; break;
                    case 'Z': state = 67; break;
                    case 'F': state = 75; break;
                    case 'A': state = 81; break;
                    case 'N': state = 83; break;
                    case 'G': state = 104; break;
                    case 'e': state = 60; break;
                    case 'h': state = 112; break;
                    case 'B': state = 78; break;
                    case 'r': state = 26; break;
                    case 'u': state = 92; break;
                    case 'O': state = 66; break;
                    case 'U': state = 103; break;
                    case 'K': state = 58; break;
                    case 'o': state = 106; break;
                    case '5': state = 111; break;
                    case '3': state = 25; break;
                    case 'w': state = 84; break;
                    case 'z': state = 109; break;
                    case 'j': state = 110; break;
                    case 'H': state = 68; break;
                    case '1': state = 100; break;
                    case 'W': state = 98; break;
                    case 'Y': state = 97; break;
                    case '8': state = 85; break;
                    case 'd': state = 90; break;
                    case 'b': state = 28; break;
                    case 'L': state = 64; break;
                    default: return std::find(finalNodes.begin(), finalNodes.end(), state) != finalNodes.end();
                }
                break;
            case 2: 
                switch(letter) {
                    case 'J': state = 24; break;
                    case 'C': state = 88; break;
                    case 'a': state = 63; break;
                    case 'L': state = 64; break;
                    case 'F': state = 75; break;
                    case 'X': state = 101; break;
                    case '1': state = 100; break;
                    case '0': state = 93; break;
                    case 'E': state = 70; break;
                    case 't': state = 23; break;
                    case 'n': state = 82; break;
                    case 'g': state = 80; break;
                    case 'P': state = 65; break;
                    case 's': state = 61; break;
                    case 'R': state = 108; break;
                    case 'm': state = 77; break;
                    case '2': state = 72; break;
                    case 'q': state = 76; break;
                    case '7': state = 102; break;
                    case '4': state = 59; break;
                    case 'c': state = 113; break;
                    case 'y': state = 105; break;
                    case 'o': state = 106; break;
                    case 'D': state = 87; break;
                    case 'V': state = 96; break;
                    case 'p': state = 94; break;
                    case 'k': state = 89; break;
                    case 'u': state = 92; break;
                    case 'x': state = 71; break;
                    case 'T': state = 107; break;
                    case 'I': state = 74; break;
                    case '6': state = 27; break;
                    case 'S': state = 73; break;
                    case 'i': state = 69; break;
                    case 'A': state = 81; break;
                    case 'H': state = 68; break;
                    case 'l': state = 79; break;
                    case 'M': state = 62; break;
                    case '3': state = 25; break;
                    case 'e': state = 60; break;
                    case 'G': state = 104; break;
                    case 'f': state = 91; break;
                    case 'h': state = 112; break;
                    case 'Z': state = 67; break;
                    case 'U': state = 103; break;
                    case 'z': state = 109; break;
                    case 'v': state = 99; break;
                    case 'Q': state = 95; break;
                    case '8': state = 85; break;
                    case 'Y': state = 97; break;
                    case 'w': state = 84; break;
                    case '5': state = 111; break;
                    case '9': state = 44; break;
                    case 'O': state = 66; break;
                    case 'j': state = 110; break;
                    case 'b': state = 28; break;
                    case 'K': state = 58; break;
                    case 'W': state = 98; break;
                    case 'B': state = 78; break;
                    case 'r': state = 26; break;
                    case 'N': state = 83; break;
                    case 'd': state = 90; break;
                    default: return std::find(finalNodes.begin(), finalNodes.end(), state) != finalNodes.end();
                }
                break;
            case 3: 
                switch(letter) {
                    case 'C': state = 88; break;
                    case '9': state = 44; break;
                    case 'J': state = 24; break;
                    case 'F': state = 75; break;
                    case 'R': state = 108; break;
                    case 'L': state = 64; break;
                    case 'N': state = 83; break;
                    case 'T': state = 107; break;
                    case 'Q': state = 95; break;
                    case 'q': state = 76; break;
                    case 'X': state = 101; break;
                    case '0': state = 93; break;
                    case 'g': state = 80; break;
                    case 's': state = 61; break;
                    case '2': state = 72; break;
                    case 'm': state = 77; break;
                    case 'x': state = 71; break;
                    case '7': state = 102; break;
                    case '4': state = 59; break;
                    case 'c': state = 113; break;
                    case 'y': state = 105; break;
                    case 'o': state = 106; break;
                    case 'D': state = 87; break;
                    case 'V': state = 96; break;
                    case 'p': state = 94; break;
                    case 'k': state = 89; break;
                    case 'K': state = 58; break;
                    case '3': state = 25; break;
                    case 'P': state = 65; break;
                    case 'E': state = 70; break;
                    case 'I': state = 74; break;
                    case 'a': state = 63; break;
                    case 'l': state = 79; break;
                    case 'e': state = 60; break;
                    case 'G': state = 104; break;
                    case 'S': state = 73; break;
                    case 'i': state = 69; break;
                    case 'A': state = 81; break;
                    case 'M': state = 62; break;
                    case 'Z': state = 67; break;
                    case 'n': state = 82; break;
                    case 'h': state = 112; break;
                    case 'f': state = 91; break;
                    case 'r': state = 26; break;
                    case '8': state = 85; break;
                    case '1': state = 100; break;
                    case 'w': state = 84; break;
                    case '5': state = 111; break;
                    case '6': state = 27; break;
                    case 'W': state = 98; break;
                    case 'B': state = 78; break;
                    case 'H': state = 68; break;
                    case 'O': state = 66; break;
                    case 'z': state = 109; break;
                    case 'j': state = 110; break;
                    case 'v': state = 99; break;
                    case 'u': state = 92; break;
                    case 't': state = 23; break;
                    case 'U': state = 103; break;
                    case 'Y': state = 97; break;
                    case 'b': state = 28; break;
                    case 'd': state = 90; break;
                    default: return std::find(finalNodes.begin(), finalNodes.end(), state) != finalNodes.end();
                }
                break;
            case 4: 
                switch(letter) {
                    case 'y': state = 105; break;
                    case 'c': state = 113; break;
                    case '4': state = 59; break;
                    case 'x': state = 71; break;
                    case 'h': state = 112; break;
                    case 'i': state = 69; break;
                    case 'n': state = 82; break;
                    case 'a': state = 63; break;
                    case 'I': state = 74; break;
                    case 'R': state = 108; break;
                    case 'z': state = 109; break;
                    case 'C': state = 88; break;
                    case 'J': state = 24; break;
                    case 'F': state = 75; break;
                    case 'M': state = 62; break;
                    case '7': state = 102; break;
                    case 'E': state = 70; break;
                    case '1': state = 100; break;
                    case 'K': state = 58; break;
                    case 'e': state = 60; break;
                    case 'H': state = 68; break;
                    case 'v': state = 99; break;
                    case 'X': state = 101; break;
                    case '0': state = 93; break;
                    case '8': state = 85; break;
                    case 't': state = 23; break;
                    case 'V': state = 96; break;
                    case 'p': state = 94; break;
                    case 's': state = 61; break;
                    case 'u': state = 92; break;
                    case 'k': state = 89; break;
                    case 'o': state = 106; break;
                    case '3': state = 25; break;
                    case 'U': state = 103; break;
                    case 'A': state = 81; break;
                    case 'Q': state = 95; break;
                    case 'P': state = 65; break;
                    case 'N': state = 83; break;
                    case 'S': state = 73; break;
                    case 'l': state = 79; break;
                    case 'f': state = 91; break;
                    case 'r': state = 26; break;
                    case '6': state = 27; break;
                    case 'G': state = 104; break;
                    case 'w': state = 84; break;
                    case 'O': state = 66; break;
                    case 'D': state = 87; break;
                    case 'W': state = 98; break;
                    case 'm': state = 77; break;
                    case '5': state = 111; break;
                    case 'b': state = 28; break;
                    case 'Z': state = 67; break;
                    case '9': state = 44; break;
                    case 'q': state = 76; break;
                    case 'd': state = 90; break;
                    case 'L': state = 64; break;
                    case 'j': state = 110; break;
                    case 'B': state = 78; break;
                    case 'Y': state = 97; break;
                    case '2': state = 72; break;
                    case 'T': state = 107; break;
                    case 'g': state = 80; break;
                    default: return std::find(finalNodes.begin(), finalNodes.end(), state) != finalNodes.end();
                }
                break;
            case 5: 
                switch(letter) {
                    case '0': state = 93; break;
                    case 'V': state = 96; break;
                    case 'z': state = 109; break;
                    case 'y': state = 105; break;
                    case 'c': state = 113; break;
                    case '4': state = 59; break;
                    case 'x': state = 71; break;
                    case 'F': state = 75; break;
                    case 'I': state = 74; break;
                    case 'a': state = 63; break;
                    case 'R': state = 108; break;
                    case 'h': state = 112; break;
                    case 'i': state = 69; break;
                    case 'n': state = 82; break;
                    case 'C': state = 88; break;
                    case 'K': state = 58; break;
                    case 'u': state = 92; break;
                    case 'J': state = 24; break;
                    case '7': state = 102; break;
                    case 'Q': state = 95; break;
                    case '1': state = 100; break;
                    case 'X': state = 101; break;
                    case 'g': state = 80; break;
                    case 'H': state = 68; break;
                    case 'B': state = 78; break;
                    case 'e': state = 60; break;
                    case 'm': state = 77; break;
                    case 'q': state = 76; break;
                    case 's': state = 61; break;
                    case '8': state = 85; break;
                    case 'L': state = 64; break;
                    case 'r': state = 26; break;
                    case '3': state = 25; break;
                    case 'P': state = 65; break;
                    case 'l': state = 79; break;
                    case 'N': state = 83; break;
                    case 'S': state = 73; break;
                    case 'v': state = 99; break;
                    case '5': state = 111; break;
                    case 'j': state = 110; break;
                    case '2': state = 72; break;
                    case 'U': state = 103; break;
                    case '6': state = 27; break;
                    case 'E': state = 70; break;
                    case 'w': state = 84; break;
                    case 'Y': state = 97; break;
                    case 'W': state = 98; break;
                    case 'p': state = 94; break;
                    case 'M': state = 62; break;
                    case 'O': state = 66; break;
                    case 'o': state = 106; break;
                    case 'b': state = 28; break;
                    case 'D': state = 87; break;
                    case 'A': state = 81; break;
                    case 't': state = 23; break;
                    case '9': state = 44; break;
                    case 'Z': state = 67; break;
                    case 'k': state = 89; break;
                    case 'f': state = 91; break;
                    case 'd': state = 90; break;
                    case 'T': state = 107; break;
                    case 'G': state = 104; break;
                    default: return std::find(finalNodes.begin(), finalNodes.end(), state) != finalNodes.end();
                }
                break;
            case 6: 
                switch(letter) {
                    case '0': state = 93; break;
                    case 'V': state = 96; break;
                    case 'z': state = 109; break;
                    case 'y': state = 105; break;
                    case 'c': state = 113; break;
                    case '4': state = 59; break;
                    case 'x': state = 71; break;
                    case 'h': state = 112; break;
                    case 'K': state = 58; break;
                    case 'i': state = 69; break;
                    case 'n': state = 82; break;
                    case 'R': state = 108; break;
                    case 'a': state = 63; break;
                    case 'I': state = 74; break;
                    case 'F': state = 75; break;
                    case 'u': state = 92; break;
                    case 'C': state = 88; break;
                    case 'Q': state = 95; break;
                    case '7': state = 102; break;
                    case 'g': state = 80; break;
                    case '1': state = 100; break;
                    case 'L': state = 64; break;
                    case 'd': state = 90; break;
                    case 'e': state = 60; break;
                    case 'v': state = 99; break;
                    case 'X': state = 101; break;
                    case 'T': state = 107; break;
                    case 'M': state = 62; break;
                    case 'q': state = 76; break;
                    case 'D': state = 87; break;
                    case 's': state = 61; break;
                    case 'S': state = 73; break;
                    case '8': state = 85; break;
                    case 'E': state = 70; break;
                    case 'r': state = 26; break;
                    case 'l': state = 79; break;
                    case 'N': state = 83; break;
                    case 'f': state = 91; break;
                    case 'U': state = 103; break;
                    case '6': state = 27; break;
                    case '2': state = 72; break;
                    case '9': state = 44; break;
                    case 'm': state = 77; break;
                    case 't': state = 23; break;
                    case 'Z': state = 67; break;
                    case '3': state = 25; break;
                    case 'W': state = 98; break;
                    case 'p': state = 94; break;
                    case 'H': state = 68; break;
                    case 'J': state = 24; break;
                    case 'k': state = 89; break;
                    case 'P': state = 65; break;
                    case 'o': state = 106; break;
                    case '5': state = 111; break;
                    case 'O': state = 66; break;
                    case 'b': state = 28; break;
                    case 'w': state = 84; break;
                    case 'A': state = 81; break;
                    case 'B': state = 78; break;
                    case 'Y': state = 97; break;
                    case 'j': state = 110; break;
                    case 'G': state = 104; break;
                    default: return std::find(finalNodes.begin(), finalNodes.end(), state) != finalNodes.end();
                }
                break;
            case 7: 
                switch(letter) {
                    case '0': state = 93; break;
                    case 'p': state = 94; break;
                    case 'V': state = 96; break;
                    case '1': state = 100; break;
                    case 'z': state = 109; break;
                    case '4': state = 59; break;
                    case 'x': state = 71; break;
                    case 'h': state = 112; break;
                    case 'i': state = 69; break;
                    case 'n': state = 82; break;
                    case 'R': state = 108; break;
                    case 'a': state = 63; break;
                    case 'F': state = 75; break;
                    case 'L': state = 64; break;
                    case 'c': state = 113; break;
                    case 'y': state = 105; break;
                    case '7': state = 102; break;
                    case 'T': state = 107; break;
                    case 'M': state = 62; break;
                    case 'g': state = 80; break;
                    case 'Q': state = 95; break;
                    case 'd': state = 90; break;
                    case 'A': state = 81; break;
                    case 'e': state = 60; break;
                    case 'X': state = 101; break;
                    case 's': state = 61; break;
                    case '8': state = 85; break;
                    case 't': state = 23; break;
                    case 'D': state = 87; break;
                    case 'E': state = 70; break;
                    case 'C': state = 88; break;
                    case 'r': state = 26; break;
                    case 'S': state = 73; break;
                    case 'l': state = 79; break;
                    case 'N': state = 83; break;
                    case '2': state = 72; break;
                    case 'f': state = 91; break;
                    case 'P': state = 65; break;
                    case 'o': state = 106; break;
                    case '5': state = 111; break;
                    case 'w': state = 84; break;
                    case 'm': state = 77; break;
                    case '3': state = 25; break;
                    case '9': state = 44; break;
                    case 'q': state = 76; break;
                    case 'U': state = 103; break;
                    case 'v': state = 99; break;
                    case 'H': state = 68; break;
                    case 'B': state = 78; break;
                    case 'G': state = 104; break;
                    case 'Z': state = 67; break;
                    case 'u': state = 92; break;
                    case 'O': state = 66; break;
                    case 'b': state = 28; break;
                    case 'J': state = 24; break;
                    case 'j': state = 110; break;
                    case 'k': state = 89; break;
                    case 'Y': state = 97; break;
                    case 'W': state = 98; break;
                    case 'I': state = 74; break;
                    case '6': state = 27; break;
                    case 'K': state = 58; break;
                    default: return std::find(finalNodes.begin(), finalNodes.end(), state) != finalNodes.end();
                }
                break;
            case 8: 
                switch(letter) {
                    case 'x': state = 71; break;
                    case '0': state = 93; break;
                    case 'p': state = 94; break;
                    case 'V': state = 96; break;
                    case '1': state = 100; break;
                    case 'i': state = 69; break;
                    case 'B': state = 78; break;
                    case 'h': state = 112; break;
                    case 'n': state = 82; break;
                    case 'R': state = 108; break;
                    case 'z': state = 109; break;
                    case 'F': state = 75; break;
                    case '4': state = 59; break;
                    case '8': state = 85; break;
                    case 'c': state = 113; break;
                    case 'E': state = 70; break;
                    case 'y': state = 105; break;
                    case 't': state = 23; break;
                    case 'W': state = 98; break;
                    case 'g': state = 80; break;
                    case 'I': state = 74; break;
                    case 'M': state = 62; break;
                    case '7': state = 102; break;
                    case 'J': state = 24; break;
                    case 'X': state = 101; break;
                    case 'e': state = 60; break;
                    case 'K': state = 58; break;
                    case 'Q': state = 95; break;
                    case 'H': state = 68; break;
                    case 'q': state = 76; break;
                    case 'l': state = 79; break;
                    case 'f': state = 91; break;
                    case 'L': state = 64; break;
                    case 's': state = 61; break;
                    case '2': state = 72; break;
                    case 'C': state = 88; break;
                    case 'N': state = 83; break;
                    case 'r': state = 26; break;
                    case 'a': state = 63; break;
                    case 'S': state = 73; break;
                    case 'G': state = 104; break;
                    case 'u': state = 92; break;
                    case 'D': state = 87; break;
                    case 'v': state = 99; break;
                    case 'P': state = 65; break;
                    case 'b': state = 28; break;
                    case 'w': state = 84; break;
                    case 'o': state = 106; break;
                    case 'm': state = 77; break;
                    case 'O': state = 66; break;
                    case '5': state = 111; break;
                    case 'U': state = 103; break;
                    case '9': state = 44; break;
                    case 'Z': state = 67; break;
                    case '6': state = 27; break;
                    case 'A': state = 81; break;
                    case 'd': state = 90; break;
                    case 'j': state = 110; break;
                    case 'Y': state = 97; break;
                    case '3': state = 25; break;
                    case 'k': state = 89; break;
                    case 'T': state = 107; break;
                    default: return std::find(finalNodes.begin(), finalNodes.end(), state) != finalNodes.end();
                }
                break;
            case 9: 
                switch(letter) {
                    case '0': state = 93; break;
                    case 'p': state = 94; break;
                    case 'V': state = 96; break;
                    case '1': state = 100; break;
                    case 'z': state = 109; break;
                    case 'c': state = 113; break;
                    case '4': state = 59; break;
                    case 'x': state = 71; break;
                    case 'i': state = 69; break;
                    case 'n': state = 82; break;
                    case 'R': state = 108; break;
                    case 'F': state = 75; break;
                    case 'y': state = 105; break;
                    case 'K': state = 58; break;
                    case 'I': state = 74; break;
                    case '7': state = 102; break;
                    case 'g': state = 80; break;
                    case 'X': state = 101; break;
                    case 'M': state = 62; break;
                    case 'H': state = 68; break;
                    case 'T': state = 107; break;
                    case 'A': state = 81; break;
                    case 'J': state = 24; break;
                    case '8': state = 85; break;
                    case 'C': state = 88; break;
                    case 's': state = 61; break;
                    case 'd': state = 90; break;
                    case 'q': state = 76; break;
                    case 'h': state = 112; break;
                    case 'N': state = 83; break;
                    case 'Q': state = 95; break;
                    case 'r': state = 26; break;
                    case 'U': state = 103; break;
                    case 'B': state = 78; break;
                    case '6': state = 27; break;
                    case '9': state = 44; break;
                    case 'v': state = 99; break;
                    case 'l': state = 79; break;
                    case 'S': state = 73; break;
                    case 'j': state = 110; break;
                    case 'w': state = 84; break;
                    case 'u': state = 92; break;
                    case 'D': state = 87; break;
                    case 'a': state = 63; break;
                    case 'P': state = 65; break;
                    case 'G': state = 104; break;
                    case 'f': state = 91; break;
                    case 'O': state = 66; break;
                    case 'L': state = 64; break;
                    case 'b': state = 28; break;
                    case 'E': state = 70; break;
                    case '5': state = 111; break;
                    case 't': state = 23; break;
                    case 'm': state = 77; break;
                    case 'Z': state = 67; break;
                    case 'o': state = 106; break;
                    case 'W': state = 98; break;
                    case '3': state = 25; break;
                    case 'k': state = 89; break;
                    case 'Y': state = 97; break;
                    case '2': state = 72; break;
                    case 'e': state = 60; break;
                    default: return std::find(finalNodes.begin(), finalNodes.end(), state) != finalNodes.end();
                }
                break;
            case 10: 
                switch(letter) {
                    case '0': state = 93; break;
                    case 'p': state = 94; break;
                    case 'V': state = 96; break;
                    case '1': state = 100; break;
                    case 'z': state = 109; break;
                    case 'c': state = 113; break;
                    case '4': state = 59; break;
                    case 'i': state = 69; break;
                    case 'K': state = 58; break;
                    case 'h': state = 112; break;
                    case 'n': state = 82; break;
                    case 'R': state = 108; break;
                    case 'x': state = 71; break;
                    case 'F': state = 75; break;
                    case 'E': state = 70; break;
                    case '8': state = 85; break;
                    case 'y': state = 105; break;
                    case 'J': state = 24; break;
                    case 'g': state = 80; break;
                    case 'X': state = 101; break;
                    case 'M': state = 62; break;
                    case 'H': state = 68; break;
                    case '7': state = 102; break;
                    case 'u': state = 92; break;
                    case 'T': state = 107; break;
                    case 'j': state = 110; break;
                    case 'D': state = 87; break;
                    case 'f': state = 91; break;
                    case 'd': state = 90; break;
                    case 'S': state = 73; break;
                    case '2': state = 72; break;
                    case '6': state = 27; break;
                    case 's': state = 61; break;
                    case '3': state = 25; break;
                    case 'r': state = 26; break;
                    case 'l': state = 79; break;
                    case 'Q': state = 95; break;
                    case 'B': state = 78; break;
                    case 'U': state = 103; break;
                    case 'N': state = 83; break;
                    case 'q': state = 76; break;
                    case 't': state = 23; break;
                    case 'L': state = 64; break;
                    case 'a': state = 63; break;
                    case 'w': state = 84; break;
                    case '5': state = 111; break;
                    case 'I': state = 74; break;
                    case 'v': state = 99; break;
                    case 'Y': state = 97; break;
                    case 'C': state = 88; break;
                    case 'O': state = 66; break;
                    case '9': state = 44; break;
                    case 'P': state = 65; break;
                    case 'm': state = 77; break;
                    case 'k': state = 89; break;
                    case 'W': state = 98; break;
                    case 'Z': state = 67; break;
                    case 'G': state = 104; break;
                    case 'o': state = 106; break;
                    case 'e': state = 60; break;
                    case 'b': state = 28; break;
                    case 'A': state = 81; break;
                    default: return std::find(finalNodes.begin(), finalNodes.end(), state) != finalNodes.end();
                }
                break;
            case 11: 
                switch(letter) {
                    case 'X': state = 101; break;
                    case 'J': state = 24; break;
                    case '0': state = 93; break;
                    case 'p': state = 94; break;
                    case 'V': state = 96; break;
                    case '1': state = 100; break;
                    case 'z': state = 109; break;
                    case 'T': state = 107; break;
                    case 'c': state = 113; break;
                    case '4': state = 59; break;
                    case 'x': state = 71; break;
                    case 'h': state = 112; break;
                    case 'i': state = 69; break;
                    case 'n': state = 82; break;
                    case 'F': state = 75; break;
                    case 'q': state = 76; break;
                    case 'K': state = 58; break;
                    case 'y': state = 105; break;
                    case 'R': state = 108; break;
                    case 'C': state = 88; break;
                    case 'W': state = 98; break;
                    case 'A': state = 81; break;
                    case 'N': state = 83; break;
                    case 'a': state = 63; break;
                    case 'M': state = 62; break;
                    case 'g': state = 80; break;
                    case '7': state = 102; break;
                    case '2': state = 72; break;
                    case 'S': state = 73; break;
                    case '8': state = 85; break;
                    case 'm': state = 77; break;
                    case 's': state = 61; break;
                    case 'f': state = 91; break;
                    case 'd': state = 90; break;
                    case '9': state = 44; break;
                    case 't': state = 23; break;
                    case 'Q': state = 95; break;
                    case 'r': state = 26; break;
                    case 'H': state = 68; break;
                    case 'B': state = 78; break;
                    case 'l': state = 79; break;
                    case 'e': state = 60; break;
                    case 'Y': state = 97; break;
                    case '6': state = 27; break;
                    case 'U': state = 103; break;
                    case 'w': state = 84; break;
                    case '5': state = 111; break;
                    case 'v': state = 99; break;
                    case 'I': state = 74; break;
                    case 'L': state = 64; break;
                    case 'O': state = 66; break;
                    case 'u': state = 92; break;
                    case 'P': state = 65; break;
                    case 'k': state = 89; break;
                    case 'G': state = 104; break;
                    case 'Z': state = 67; break;
                    case 'E': state = 70; break;
                    case 'j': state = 110; break;
                    case 'D': state = 87; break;
                    case 'b': state = 28; break;
                    case 'o': state = 106; break;
                    case '3': state = 25; break;
                    default: return std::find(finalNodes.begin(), finalNodes.end(), state) != finalNodes.end();
                }
                break;
            case 12: 
                switch(letter) {
                    case 'X': state = 101; break;
                    case 'L': state = 64; break;
                    case 'J': state = 24; break;
                    case '0': state = 93; break;
                    case 'p': state = 94; break;
                    case 'V': state = 96; break;
                    case '1': state = 100; break;
                    case 'z': state = 109; break;
                    case 'y': state = 105; break;
                    case 'i': state = 69; break;
                    case '8': state = 85; break;
                    case '4': state = 59; break;
                    case 'c': state = 113; break;
                    case 'n': state = 82; break;
                    case 'h': state = 112; break;
                    case 'F': state = 75; break;
                    case 'E': state = 70; break;
                    case 'T': state = 107; break;
                    case 'K': state = 58; break;
                    case 'R': state = 108; break;
                    case 'u': state = 92; break;
                    case 'W': state = 98; break;
                    case 'g': state = 80; break;
                    case 'a': state = 63; break;
                    case '7': state = 102; break;
                    case 'M': state = 62; break;
                    case 's': state = 61; break;
                    case 'N': state = 83; break;
                    case 't': state = 23; break;
                    case '6': state = 27; break;
                    case 'Y': state = 97; break;
                    case 'q': state = 76; break;
                    case 'Q': state = 95; break;
                    case 'S': state = 73; break;
                    case 'B': state = 78; break;
                    case 'Z': state = 67; break;
                    case 'l': state = 79; break;
                    case 'e': state = 60; break;
                    case '2': state = 72; break;
                    case 'A': state = 81; break;
                    case 'f': state = 91; break;
                    case 'P': state = 65; break;
                    case 'D': state = 87; break;
                    case 'x': state = 71; break;
                    case 'r': state = 26; break;
                    case 'G': state = 104; break;
                    case 'j': state = 110; break;
                    case 'd': state = 90; break;
                    case 'w': state = 84; break;
                    case 'H': state = 68; break;
                    case 'O': state = 66; break;
                    case 'U': state = 103; break;
                    case '5': state = 111; break;
                    case 'I': state = 74; break;
                    case 'k': state = 89; break;
                    case 'v': state = 99; break;
                    case 'o': state = 106; break;
                    case '9': state = 44; break;
                    case '3': state = 25; break;
                    case 'b': state = 28; break;
                    case 'm': state = 77; break;
                    case 'C': state = 88; break;
                    default: return std::find(finalNodes.begin(), finalNodes.end(), state) != finalNodes.end();
                }
                break;
            case 13: 
                switch(letter) {
                    case 'X': state = 101; break;
                    case 'R': state = 108; break;
                    case 'J': state = 24; break;
                    case 'f': state = 91; break;
                    case '0': state = 93; break;
                    case 'p': state = 94; break;
                    case 'V': state = 96; break;
                    case '1': state = 100; break;
                    case 'z': state = 109; break;
                    case 'y': state = 105; break;
                    case 'c': state = 113; break;
                    case '4': state = 59; break;
                    case 'F': state = 75; break;
                    case 'h': state = 112; break;
                    case 'i': state = 69; break;
                    case 'n': state = 82; break;
                    case 'L': state = 64; break;
                    case '8': state = 85; break;
                    case 'e': state = 60; break;
                    case 'E': state = 70; break;
                    case 'T': state = 107; break;
                    case 'W': state = 98; break;
                    case 'g': state = 80; break;
                    case 'm': state = 77; break;
                    case 'A': state = 81; break;
                    case 'K': state = 58; break;
                    case 'a': state = 63; break;
                    case 'M': state = 62; break;
                    case 'H': state = 68; break;
                    case 'C': state = 88; break;
                    case 'D': state = 87; break;
                    case 'q': state = 76; break;
                    case '2': state = 72; break;
                    case 'Q': state = 95; break;
                    case 'S': state = 73; break;
                    case 'b': state = 28; break;
                    case '7': state = 102; break;
                    case 'B': state = 78; break;
                    case '3': state = 25; break;
                    case 's': state = 61; break;
                    case 't': state = 23; break;
                    case '6': state = 27; break;
                    case 'G': state = 104; break;
                    case 'O': state = 66; break;
                    case 'w': state = 84; break;
                    case 'P': state = 65; break;
                    case 'r': state = 26; break;
                    case 'k': state = 89; break;
                    case 'u': state = 92; break;
                    case 'x': state = 71; break;
                    case 'l': state = 79; break;
                    case 'o': state = 106; break;
                    case 'v': state = 99; break;
                    case '5': state = 111; break;
                    case 'Y': state = 97; break;
                    case 'j': state = 110; break;
                    case 'Z': state = 67; break;
                    case 'd': state = 90; break;
                    case 'N': state = 83; break;
                    case '9': state = 44; break;
                    case 'I': state = 74; break;
                    case 'U': state = 103; break;
                    default: return std::find(finalNodes.begin(), finalNodes.end(), state) != finalNodes.end();
                }
                break;
            case 14: 
                switch(letter) {
                    case 'f': state = 91; break;
                    case 'X': state = 101; break;
                    case 'a': state = 63; break;
                    case 'J': state = 24; break;
                    case '0': state = 93; break;
                    case 'p': state = 94; break;
                    case 'V': state = 96; break;
                    case '1': state = 100; break;
                    case 'z': state = 109; break;
                    case 'y': state = 105; break;
                    case 'c': state = 113; break;
                    case '4': state = 59; break;
                    case 'x': state = 71; break;
                    case 'F': state = 75; break;
                    case 'R': state = 108; break;
                    case 'h': state = 112; break;
                    case 'i': state = 69; break;
                    case 'E': state = 70; break;
                    case 'n': state = 82; break;
                    case 'L': state = 64; break;
                    case 'e': state = 60; break;
                    case 'T': state = 107; break;
                    case 'm': state = 77; break;
                    case 'W': state = 98; break;
                    case 'g': state = 80; break;
                    case '7': state = 102; break;
                    case 'H': state = 68; break;
                    case 'A': state = 81; break;
                    case 'M': state = 62; break;
                    case 'q': state = 76; break;
                    case 'K': state = 58; break;
                    case 'u': state = 92; break;
                    case 's': state = 61; break;
                    case 'C': state = 88; break;
                    case 't': state = 23; break;
                    case 'Q': state = 95; break;
                    case '8': state = 85; break;
                    case 'N': state = 83; break;
                    case 'S': state = 73; break;
                    case 'B': state = 78; break;
                    case '2': state = 72; break;
                    case 'U': state = 103; break;
                    case 'l': state = 79; break;
                    case 'D': state = 87; break;
                    case 'r': state = 26; break;
                    case '6': state = 27; break;
                    case 'Y': state = 97; break;
                    case '3': state = 25; break;
                    case 'v': state = 99; break;
                    case '5': state = 111; break;
                    case 'P': state = 65; break;
                    case 'j': state = 110; break;
                    case 'G': state = 104; break;
                    case 'O': state = 66; break;
                    case 'o': state = 106; break;
                    case 'Z': state = 67; break;
                    case 'w': state = 84; break;
                    case 'k': state = 89; break;
                    case 'b': state = 28; break;
                    case '9': state = 44; break;
                    case 'd': state = 90; break;
                    case 'I': state = 74; break;
                    default: return std::find(finalNodes.begin(), finalNodes.end(), state) != finalNodes.end();
                }
                break;
            case 15: 
                switch(letter) {
                    case 'n': state = 82; break;
                    case 'J': state = 24; break;
                    case 'C': state = 88; break;
                    case 'L': state = 64; break;
                    case 'N': state = 83; break;
                    case 'E': state = 70; break;
                    case '0': state = 93; break;
                    case 'X': state = 101; break;
                    case 'u': state = 92; break;
                    case 'W': state = 98; break;
                    case '8': state = 85; break;
                    case 'g': state = 80; break;
                    case 'P': state = 65; break;
                    case 's': state = 61; break;
                    case 'R': state = 108; break;
                    case 'S': state = 73; break;
                    case 'M': state = 62; break;
                    case 'q': state = 76; break;
                    case '2': state = 72; break;
                    case 'm': state = 77; break;
                    case 'x': state = 71; break;
                    case '7': state = 102; break;
                    case 'c': state = 113; break;
                    case 'G': state = 104; break;
                    case 'y': state = 105; break;
                    case 'T': state = 107; break;
                    case 'D': state = 87; break;
                    case 'V': state = 96; break;
                    case 'p': state = 94; break;
                    case 'f': state = 91; break;
                    case 'H': state = 68; break;
                    case 'I': state = 74; break;
                    case 'i': state = 69; break;
                    case 'e': state = 60; break;
                    case 'F': state = 75; break;
                    case '4': state = 59; break;
                    case 'Z': state = 67; break;
                    case 'B': state = 78; break;
                    case 'o': state = 106; break;
                    case 'l': state = 79; break;
                    case 'O': state = 66; break;
                    case 'h': state = 112; break;
                    case 'A': state = 81; break;
                    case 'U': state = 103; break;
                    case 'r': state = 26; break;
                    case 'v': state = 99; break;
                    case 'k': state = 89; break;
                    case 'j': state = 110; break;
                    case 't': state = 23; break;
                    case 'z': state = 109; break;
                    case '5': state = 111; break;
                    case 'w': state = 84; break;
                    case '1': state = 100; break;
                    case 'Y': state = 97; break;
                    case '9': state = 44; break;
                    case 'K': state = 58; break;
                    case '6': state = 27; break;
                    case '3': state = 25; break;
                    case 'a': state = 63; break;
                    case 'b': state = 28; break;
                    case 'Q': state = 95; break;
                    case 'd': state = 90; break;
                    default: return std::find(finalNodes.begin(), finalNodes.end(), state) != finalNodes.end();
                }
                break;
            case 16: 
                switch(letter) {
                    case 'T': state = 107; break;
                    case 'X': state = 101; break;
                    case 'J': state = 24; break;
                    case '0': state = 93; break;
                    case 'V': state = 96; break;
                    case 'z': state = 109; break;
                    case 'y': state = 105; break;
                    case 'c': state = 113; break;
                    case '4': state = 59; break;
                    case 'B': state = 78; break;
                    case 'h': state = 112; break;
                    case 'i': state = 69; break;
                    case 'n': state = 82; break;
                    case 'F': state = 75; break;
                    case 'E': state = 70; break;
                    case 'p': state = 94; break;
                    case 'L': state = 64; break;
                    case 'g': state = 80; break;
                    case '1': state = 100; break;
                    case 'R': state = 108; break;
                    case '9': state = 44; break;
                    case 'P': state = 65; break;
                    case 'q': state = 76; break;
                    case 'e': state = 60; break;
                    case '3': state = 25; break;
                    case 'G': state = 104; break;
                    case 'a': state = 63; break;
                    case 'W': state = 98; break;
                    case 'U': state = 103; break;
                    case 'I': state = 74; break;
                    case 's': state = 61; break;
                    case 'v': state = 99; break;
                    case 'M': state = 62; break;
                    case '7': state = 102; break;
                    case '6': state = 27; break;
                    case '8': state = 85; break;
                    case 'Q': state = 95; break;
                    case 'S': state = 73; break;
                    case 't': state = 23; break;
                    case 'u': state = 92; break;
                    case 'K': state = 58; break;
                    case 'N': state = 83; break;
                    case 'Z': state = 67; break;
                    case 'b': state = 28; break;
                    case 'd': state = 90; break;
                    case '5': state = 111; break;
                    case 'x': state = 71; break;
                    case 'j': state = 110; break;
                    case 'o': state = 106; break;
                    case 'w': state = 84; break;
                    case 'm': state = 77; break;
                    case 'l': state = 79; break;
                    case 'r': state = 26; break;
                    case 'A': state = 81; break;
                    case '2': state = 72; break;
                    case 'C': state = 88; break;
                    case 'D': state = 87; break;
                    case 'Y': state = 97; break;
                    case 'f': state = 91; break;
                    case 'k': state = 89; break;
                    case 'H': state = 68; break;
                    case 'O': state = 66; break;
                    default: return std::find(finalNodes.begin(), finalNodes.end(), state) != finalNodes.end();
                }
                break;
            case 17: 
                switch(letter) {
                    case 'T': state = 107; break;
                    case 'X': state = 101; break;
                    case 'J': state = 24; break;
                    case '0': state = 93; break;
                    case 'V': state = 96; break;
                    case 'z': state = 109; break;
                    case 'y': state = 105; break;
                    case 'c': state = 113; break;
                    case '4': state = 59; break;
                    case 'h': state = 112; break;
                    case 'i': state = 69; break;
                    case 'n': state = 82; break;
                    case 'B': state = 78; break;
                    case 'q': state = 76; break;
                    case 'F': state = 75; break;
                    case 'W': state = 98; break;
                    case '9': state = 44; break;
                    case 'p': state = 94; break;
                    case 'H': state = 68; break;
                    case '7': state = 102; break;
                    case 'R': state = 108; break;
                    case 'g': state = 80; break;
                    case 'a': state = 63; break;
                    case 'U': state = 103; break;
                    case 'u': state = 92; break;
                    case 'N': state = 83; break;
                    case 'f': state = 91; break;
                    case 'D': state = 87; break;
                    case 'E': state = 70; break;
                    case 's': state = 61; break;
                    case 't': state = 23; break;
                    case 'Q': state = 95; break;
                    case 'S': state = 73; break;
                    case 'v': state = 99; break;
                    case '2': state = 72; break;
                    case 'Z': state = 67; break;
                    case 'b': state = 28; break;
                    case 'M': state = 62; break;
                    case 'e': state = 60; break;
                    case 'o': state = 106; break;
                    case '6': state = 27; break;
                    case 'P': state = 65; break;
                    case '8': state = 85; break;
                    case '3': state = 25; break;
                    case 'K': state = 58; break;
                    case 'j': state = 110; break;
                    case 'C': state = 88; break;
                    case 'r': state = 26; break;
                    case 'd': state = 90; break;
                    case '5': state = 111; break;
                    case 'O': state = 66; break;
                    case 'L': state = 64; break;
                    case '1': state = 100; break;
                    case 'Y': state = 97; break;
                    case 'x': state = 71; break;
                    case 'G': state = 104; break;
                    case 'w': state = 84; break;
                    case 'I': state = 74; break;
                    case 'A': state = 81; break;
                    case 'l': state = 79; break;
                    case 'k': state = 89; break;
                    case 'm': state = 77; break;
                    default: return std::find(finalNodes.begin(), finalNodes.end(), state) != finalNodes.end();
                }
                break;
            case 18: 
                switch(letter) {
                    case 'T': state = 107; break;
                    case 'X': state = 101; break;
                    case 'J': state = 24; break;
                    case '0': state = 93; break;
                    case 'V': state = 96; break;
                    case 'z': state = 109; break;
                    case 'y': state = 105; break;
                    case 'c': state = 113; break;
                    case '4': state = 59; break;
                    case 'U': state = 103; break;
                    case 'B': state = 78; break;
                    case 'h': state = 112; break;
                    case 'E': state = 70; break;
                    case 'i': state = 69; break;
                    case 'n': state = 82; break;
                    case 'F': state = 75; break;
                    case 'q': state = 76; break;
                    case 'W': state = 98; break;
                    case 't': state = 23; break;
                    case '9': state = 44; break;
                    case 'p': state = 94; break;
                    case 'P': state = 65; break;
                    case '7': state = 102; break;
                    case 'N': state = 83; break;
                    case 'k': state = 89; break;
                    case 'a': state = 63; break;
                    case 'g': state = 80; break;
                    case '1': state = 100; break;
                    case 'f': state = 91; break;
                    case 'x': state = 71; break;
                    case '3': state = 25; break;
                    case 'G': state = 104; break;
                    case 'o': state = 106; break;
                    case 'u': state = 92; break;
                    case 'e': state = 60; break;
                    case 's': state = 61; break;
                    case 'R': state = 108; break;
                    case 'Y': state = 97; break;
                    case 'w': state = 84; break;
                    case 'b': state = 28; break;
                    case 'M': state = 62; break;
                    case 'S': state = 73; break;
                    case '2': state = 72; break;
                    case 'O': state = 66; break;
                    case 'Z': state = 67; break;
                    case 'I': state = 74; break;
                    case 'A': state = 81; break;
                    case 'r': state = 26; break;
                    case 'm': state = 77; break;
                    case '8': state = 85; break;
                    case 'j': state = 110; break;
                    case '5': state = 111; break;
                    case 'D': state = 87; break;
                    case 'l': state = 79; break;
                    case 'Q': state = 95; break;
                    case '6': state = 27; break;
                    case 'L': state = 64; break;
                    case 'd': state = 90; break;
                    case 'H': state = 68; break;
                    case 'K': state = 58; break;
                    case 'C': state = 88; break;
                    case 'v': state = 99; break;
                    default: return std::find(finalNodes.begin(), finalNodes.end(), state) != finalNodes.end();
                }
                break;
            case 19: 
                switch(letter) {
                    case 'T': state = 107; break;
                    case 'X': state = 101; break;
                    case 't': state = 23; break;
                    case 'J': state = 24; break;
                    case '0': state = 93; break;
                    case 'p': state = 94; break;
                    case 'V': state = 96; break;
                    case 'W': state = 98; break;
                    case 'z': state = 109; break;
                    case 'y': state = 105; break;
                    case 'c': state = 113; break;
                    case '4': state = 59; break;
                    case 'U': state = 103; break;
                    case 'P': state = 65; break;
                    case 'h': state = 112; break;
                    case 'E': state = 70; break;
                    case 'i': state = 69; break;
                    case 'n': state = 82; break;
                    case 'B': state = 78; break;
                    case 'q': state = 76; break;
                    case 'I': state = 74; break;
                    case 'F': state = 75; break;
                    case 'A': state = 81; break;
                    case 'a': state = 63; break;
                    case 'u': state = 92; break;
                    case '7': state = 102; break;
                    case 'g': state = 80; break;
                    case '1': state = 100; break;
                    case 'e': state = 60; break;
                    case '9': state = 44; break;
                    case 'r': state = 26; break;
                    case 'N': state = 83; break;
                    case 'H': state = 68; break;
                    case '3': state = 25; break;
                    case 's': state = 61; break;
                    case 'S': state = 73; break;
                    case 'R': state = 108; break;
                    case 'M': state = 62; break;
                    case 'w': state = 84; break;
                    case 'k': state = 89; break;
                    case 'b': state = 28; break;
                    case 'Y': state = 97; break;
                    case 'Z': state = 67; break;
                    case 'O': state = 66; break;
                    case 'd': state = 90; break;
                    case '6': state = 27; break;
                    case 'K': state = 58; break;
                    case 'x': state = 71; break;
                    case 'Q': state = 95; break;
                    case 'm': state = 77; break;
                    case '2': state = 72; break;
                    case 'L': state = 64; break;
                    case '8': state = 85; break;
                    case 'j': state = 110; break;
                    case 'l': state = 79; break;
                    case 'G': state = 104; break;
                    case 'D': state = 87; break;
                    case '5': state = 111; break;
                    case 'f': state = 91; break;
                    case 'v': state = 99; break;
                    case 'o': state = 106; break;
                    case 'C': state = 88; break;
                    default: return std::find(finalNodes.begin(), finalNodes.end(), state) != finalNodes.end();
                }
                break;
            case 20: 
                switch(letter) {
                    case 'T': state = 107; break;
                    case 'J': state = 24; break;
                    case '0': state = 93; break;
                    case 'p': state = 94; break;
                    case 'V': state = 96; break;
                    case 'W': state = 98; break;
                    case '6': state = 27; break;
                    case 'z': state = 109; break;
                    case 'y': state = 105; break;
                    case 'c': state = 113; break;
                    case '4': state = 59; break;
                    case 'q': state = 76; break;
                    case 'F': state = 75; break;
                    case 'h': state = 112; break;
                    case 'B': state = 78; break;
                    case 'i': state = 69; break;
                    case 'n': state = 82; break;
                    case 'a': state = 63; break;
                    case '7': state = 102; break;
                    case 'I': state = 74; break;
                    case 'g': state = 80; break;
                    case 'H': state = 68; break;
                    case 'o': state = 106; break;
                    case 'R': state = 108; break;
                    case 'N': state = 83; break;
                    case 'u': state = 92; break;
                    case '9': state = 44; break;
                    case 'k': state = 89; break;
                    case 'X': state = 101; break;
                    case '3': state = 25; break;
                    case 'f': state = 91; break;
                    case '8': state = 85; break;
                    case 'b': state = 28; break;
                    case 't': state = 23; break;
                    case 'D': state = 87; break;
                    case '2': state = 72; break;
                    case 'e': state = 60; break;
                    case 's': state = 61; break;
                    case 'Q': state = 95; break;
                    case 'M': state = 62; break;
                    case 'S': state = 73; break;
                    case 'U': state = 103; break;
                    case 'm': state = 77; break;
                    case 'Z': state = 67; break;
                    case 'G': state = 104; break;
                    case 'x': state = 71; break;
                    case 'd': state = 90; break;
                    case 'C': state = 88; break;
                    case 'K': state = 58; break;
                    case 'P': state = 65; break;
                    case 'Y': state = 97; break;
                    case 'w': state = 84; break;
                    case 'r': state = 26; break;
                    case 'j': state = 110; break;
                    case 'E': state = 70; break;
                    case 'l': state = 79; break;
                    case '5': state = 111; break;
                    case 'O': state = 66; break;
                    case 'L': state = 64; break;
                    case 'v': state = 99; break;
                    case 'A': state = 81; break;
                    case '1': state = 100; break;
                    default: return std::find(finalNodes.begin(), finalNodes.end(), state) != finalNodes.end();
                }
                break;
            case 21: 
                switch(letter) {
                    case 'X': state = 101; break;
                    case '6': state = 27; break;
                    case 'J': state = 24; break;
                    case '0': state = 93; break;
                    case 'p': state = 94; break;
                    case 'V': state = 96; break;
                    case 'W': state = 98; break;
                    case 'z': state = 109; break;
                    case 'T': state = 107; break;
                    case 'y': state = 105; break;
                    case 'c': state = 113; break;
                    case '4': state = 59; break;
                    case 'F': state = 75; break;
                    case 'q': state = 76; break;
                    case 'I': state = 74; break;
                    case 'h': state = 112; break;
                    case 'i': state = 69; break;
                    case 'E': state = 70; break;
                    case 'n': state = 82; break;
                    case 'B': state = 78; break;
                    case 'l': state = 79; break;
                    case 'a': state = 63; break;
                    case '7': state = 102; break;
                    case 'g': state = 80; break;
                    case 'S': state = 73; break;
                    case '9': state = 44; break;
                    case 'U': state = 103; break;
                    case 'R': state = 108; break;
                    case 'o': state = 106; break;
                    case 'H': state = 68; break;
                    case 'e': state = 60; break;
                    case 'f': state = 91; break;
                    case 'P': state = 65; break;
                    case '3': state = 25; break;
                    case 'Y': state = 97; break;
                    case 't': state = 23; break;
                    case '2': state = 72; break;
                    case 'b': state = 28; break;
                    case 'D': state = 87; break;
                    case 'Q': state = 95; break;
                    case 'M': state = 62; break;
                    case 's': state = 61; break;
                    case '8': state = 85; break;
                    case 'r': state = 26; break;
                    case 'Z': state = 67; break;
                    case 'd': state = 90; break;
                    case 'L': state = 64; break;
                    case 'K': state = 58; break;
                    case 'O': state = 66; break;
                    case 'G': state = 104; break;
                    case 'N': state = 83; break;
                    case 'm': state = 77; break;
                    case 'x': state = 71; break;
                    case 'j': state = 110; break;
                    case 'w': state = 84; break;
                    case 'u': state = 92; break;
                    case '1': state = 100; break;
                    case 'v': state = 99; break;
                    case '5': state = 111; break;
                    case 'A': state = 81; break;
                    case 'k': state = 89; break;
                    case 'C': state = 88; break;
                    default: return std::find(finalNodes.begin(), finalNodes.end(), state) != finalNodes.end();
                }
                break;
            case 22: 
                switch(letter) {
                    case 'T': state = 107; break;
                    case 'X': state = 101; break;
                    case 'J': state = 24; break;
                    case '0': state = 93; break;
                    case 'p': state = 94; break;
                    case 'V': state = 96; break;
                    case 'W': state = 98; break;
                    case 'z': state = 109; break;
                    case 'y': state = 105; break;
                    case 'c': state = 113; break;
                    case '4': state = 59; break;
                    case 'h': state = 112; break;
                    case 'l': state = 79; break;
                    case 'E': state = 70; break;
                    case 'i': state = 69; break;
                    case 'n': state = 82; break;
                    case 'B': state = 78; break;
                    case 'q': state = 76; break;
                    case 'I': state = 74; break;
                    case 'F': state = 75; break;
                    case 'K': state = 58; break;
                    case '7': state = 102; break;
                    case 'H': state = 68; break;
                    case 'a': state = 63; break;
                    case '9': state = 44; break;
                    case 'N': state = 83; break;
                    case 'e': state = 60; break;
                    case '3': state = 25; break;
                    case 'Y': state = 97; break;
                    case 'f': state = 91; break;
                    case '2': state = 72; break;
                    case 'M': state = 62; break;
                    case 'G': state = 104; break;
                    case 'R': state = 108; break;
                    case '8': state = 85; break;
                    case 'O': state = 66; break;
                    case 's': state = 61; break;
                    case 'o': state = 106; break;
                    case 'S': state = 73; break;
                    case 'Q': state = 95; break;
                    case '6': state = 27; break;
                    case 'j': state = 110; break;
                    case 't': state = 23; break;
                    case 'P': state = 65; break;
                    case 'w': state = 84; break;
                    case 'D': state = 87; break;
                    case 'L': state = 64; break;
                    case 'Z': state = 67; break;
                    case 'r': state = 26; break;
                    case 'u': state = 92; break;
                    case 'x': state = 71; break;
                    case 'b': state = 28; break;
                    case 'm': state = 77; break;
                    case '5': state = 111; break;
                    case 'C': state = 88; break;
                    case '1': state = 100; break;
                    case 'v': state = 99; break;
                    case 'A': state = 81; break;
                    case 'g': state = 80; break;
                    case 'k': state = 89; break;
                    case 'd': state = 90; break;
                    case 'U': state = 103; break;
                    default: return std::find(finalNodes.begin(), finalNodes.end(), state) != finalNodes.end();
                }
                break;
            case 23: 
                switch(letter) {
                    case 'J': state = 24; break;
                    case '3': state = 25; break;
                    case 's': state = 61; break;
                    case 'X': state = 101; break;
                    case '9': state = 44; break;
                    case 'f': state = 91; break;
                    case 'u': state = 92; break;
                    case '0': state = 93; break;
                    case 'p': state = 94; break;
                    case 'V': state = 96; break;
                    case 'z': state = 109; break;
                    case 'y': state = 105; break;
                    case '4': state = 59; break;
                    case 'm': state = 77; break;
                    case 'H': state = 68; break;
                    case 'k': state = 89; break;
                    case 'a': state = 63; break;
                    case '7': state = 102; break;
                    case 'Z': state = 67; break;
                    case 'F': state = 75; break;
                    case 'S': state = 73; break;
                    case 'R': state = 108; break;
                    case 'i': state = 69; break;
                    case 'E': state = 70; break;
                    case 'N': state = 83; break;
                    case '1': state = 100; break;
                    case 'Y': state = 97; break;
                    case 'n': state = 82; break;
                    case 'B': state = 78; break;
                    case 'Q': state = 95; break;
                    case 'v': state = 99; break;
                    case 'G': state = 104; break;
                    case 'M': state = 62; break;
                    case 'o': state = 106; break;
                    case 'c': state = 113; break;
                    case '8': state = 85; break;
                    case 'e': state = 60; break;
                    case '6': state = 27; break;
                    case '2': state = 72; break;
                    case 'x': state = 71; break;
                    case 't': state = 23; break;
                    case 'w': state = 84; break;
                    case 'L': state = 64; break;
                    case 'r': state = 26; break;
                    case 'K': state = 58; break;
                    case 'O': state = 66; break;
                    case 'j': state = 110; break;
                    case '5': state = 111; break;
                    case 'b': state = 28; break;
                    case 'I': state = 74; break;
                    case 'T': state = 107; break;
                    case 'h': state = 112; break;
                    case 'd': state = 90; break;
                    case 'q': state = 76; break;
                    case 'A': state = 81; break;
                    case 'D': state = 87; break;
                    case 'U': state = 103; break;
                    case 'W': state = 98; break;
                    case 'P': state = 65; break;
                    case 'g': state = 80; break;
                    case 'l': state = 79; break;
                    case 'C': state = 88; break;
                    default: return std::find(finalNodes.begin(), finalNodes.end(), state) != finalNodes.end();
                }
                break;
            case 24: 
                switch(letter) {
                    case 'J': state = 24; break;
                    case '3': state = 25; break;
                    case 's': state = 61; break;
                    case 'X': state = 101; break;
                    case '9': state = 44; break;
                    case 'f': state = 91; break;
                    case 'u': state = 92; break;
                    case '0': state = 93; break;
                    case 'p': state = 94; break;
                    case 'V': state = 96; break;
                    case 'z': state = 109; break;
                    case 'y': state = 105; break;
                    case '4': state = 59; break;
                    case '2': state = 72; break;
                    case 'a': state = 63; break;
                    case 'S': state = 73; break;
                    case 'R': state = 108; break;
                    case 'U': state = 103; break;
                    case 'P': state = 65; break;
                    case 'F': state = 75; break;
                    case 't': state = 23; break;
                    case 'j': state = 110; break;
                    case 'N': state = 83; break;
                    case '6': state = 27; break;
                    case 'm': state = 77; break;
                    case 'n': state = 82; break;
                    case 'E': state = 70; break;
                    case 'I': state = 74; break;
                    case 'Z': state = 67; break;
                    case 'o': state = 106; break;
                    case 'M': state = 62; break;
                    case 'D': state = 87; break;
                    case 'v': state = 99; break;
                    case 'e': state = 60; break;
                    case 'G': state = 104; break;
                    case 'r': state = 26; break;
                    case 'W': state = 98; break;
                    case 'B': state = 78; break;
                    case 'Q': state = 95; break;
                    case 'c': state = 113; break;
                    case '5': state = 111; break;
                    case 'x': state = 71; break;
                    case 'w': state = 84; break;
                    case 'l': state = 79; break;
                    case 'Y': state = 97; break;
                    case '7': state = 102; break;
                    case '8': state = 85; break;
                    case 'i': state = 69; break;
                    case 'L': state = 64; break;
                    case 'O': state = 66; break;
                    case 'q': state = 76; break;
                    case 'K': state = 58; break;
                    case 'h': state = 112; break;
                    case 'T': state = 107; break;
                    case 'b': state = 28; break;
                    case 'H': state = 68; break;
                    case 'A': state = 81; break;
                    case 'g': state = 80; break;
                    case '1': state = 100; break;
                    case 'C': state = 88; break;
                    case 'd': state = 90; break;
                    case 'k': state = 89; break;
                    default: return std::find(finalNodes.begin(), finalNodes.end(), state) != finalNodes.end();
                }
                break;
            case 25: 
                switch(letter) {
                    case '3': state = 25; break;
                    case 's': state = 61; break;
                    case 'X': state = 101; break;
                    case 'q': state = 76; break;
                    case 'f': state = 91; break;
                    case 'u': state = 92; break;
                    case '0': state = 93; break;
                    case 'p': state = 94; break;
                    case 'V': state = 96; break;
                    case 'z': state = 109; break;
                    case 'y': state = 105; break;
                    case 'S': state = 73; break;
                    case 'a': state = 63; break;
                    case 'R': state = 108; break;
                    case 'J': state = 24; break;
                    case '1': state = 100; break;
                    case '4': state = 59; break;
                    case 'i': state = 69; break;
                    case 'E': state = 70; break;
                    case 'F': state = 75; break;
                    case 't': state = 23; break;
                    case '6': state = 27; break;
                    case 'G': state = 104; break;
                    case 'N': state = 83; break;
                    case 'W': state = 98; break;
                    case '2': state = 72; break;
                    case 'I': state = 74; break;
                    case '8': state = 85; break;
                    case '7': state = 102; break;
                    case 'o': state = 106; break;
                    case 'd': state = 90; break;
                    case 'D': state = 87; break;
                    case 'x': state = 71; break;
                    case 'v': state = 99; break;
                    case 'Z': state = 67; break;
                    case 'B': state = 78; break;
                    case 'U': state = 103; break;
                    case '5': state = 111; break;
                    case 'g': state = 80; break;
                    case 'A': state = 81; break;
                    case 'l': state = 79; break;
                    case 'H': state = 68; break;
                    case 'c': state = 113; break;
                    case 'L': state = 64; break;
                    case 'Q': state = 95; break;
                    case 'j': state = 110; break;
                    case 'r': state = 26; break;
                    case 'K': state = 58; break;
                    case 'e': state = 60; break;
                    case '9': state = 44; break;
                    case 'M': state = 62; break;
                    case 'Y': state = 97; break;
                    case 'C': state = 88; break;
                    case 'b': state = 28; break;
                    case 'm': state = 77; break;
                    case 'h': state = 112; break;
                    case 'w': state = 84; break;
                    case 'O': state = 66; break;
                    case 'T': state = 107; break;
                    case 'k': state = 89; break;
                    case 'n': state = 82; break;
                    case 'P': state = 65; break;
                    default: return std::find(finalNodes.begin(), finalNodes.end(), state) != finalNodes.end();
                }
                break;
            case 26: 
                switch(letter) {
                    case 'J': state = 24; break;
                    case 's': state = 61; break;
                    case 'X': state = 101; break;
                    case 'f': state = 91; break;
                    case 'u': state = 92; break;
                    case '0': state = 93; break;
                    case 'p': state = 94; break;
                    case 'V': state = 96; break;
                    case 'z': state = 109; break;
                    case 'y': state = 105; break;
                    case '4': state = 59; break;
                    case 'H': state = 68; break;
                    case 'a': state = 63; break;
                    case 'S': state = 73; break;
                    case 'R': state = 108; break;
                    case 'P': state = 65; break;
                    case 'E': state = 70; break;
                    case 'l': state = 79; break;
                    case 'm': state = 77; break;
                    case 'U': state = 103; break;
                    case '6': state = 27; break;
                    case 'D': state = 87; break;
                    case 't': state = 23; break;
                    case 'i': state = 69; break;
                    case 'n': state = 82; break;
                    case 'N': state = 83; break;
                    case '3': state = 25; break;
                    case 'I': state = 74; break;
                    case 'v': state = 99; break;
                    case 'W': state = 98; break;
                    case 'j': state = 110; break;
                    case 'Q': state = 95; break;
                    case '7': state = 102; break;
                    case 'o': state = 106; break;
                    case 'M': state = 62; break;
                    case 'e': state = 60; break;
                    case 'G': state = 104; break;
                    case 'K': state = 58; break;
                    case '2': state = 72; break;
                    case 'A': state = 81; break;
                    case 'g': state = 80; break;
                    case 'B': state = 78; break;
                    case 'q': state = 76; break;
                    case 'c': state = 113; break;
                    case 'Z': state = 67; break;
                    case 'x': state = 71; break;
                    case 'r': state = 26; break;
                    case '9': state = 44; break;
                    case 'b': state = 28; break;
                    case 'O': state = 66; break;
                    case 'T': state = 107; break;
                    case 'C': state = 88; break;
                    case 'd': state = 90; break;
                    case 'h': state = 112; break;
                    case 'w': state = 84; break;
                    case 'L': state = 64; break;
                    case '8': state = 85; break;
                    case 'Y': state = 97; break;
                    case 'k': state = 89; break;
                    case '5': state = 111; break;
                    case 'F': state = 75; break;
                    case '1': state = 100; break;
                    default: return std::find(finalNodes.begin(), finalNodes.end(), state) != finalNodes.end();
                }
                break;
            case 27: 
                switch(letter) {
                    case 's': state = 61; break;
                    case '3': state = 25; break;
                    case 'f': state = 91; break;
                    case 'u': state = 92; break;
                    case '0': state = 93; break;
                    case 'p': state = 94; break;
                    case 'V': state = 96; break;
                    case 'z': state = 109; break;
                    case 'y': state = 105; break;
                    case '4': state = 59; break;
                    case 'P': state = 65; break;
                    case 'v': state = 99; break;
                    case 'l': state = 79; break;
                    case 'g': state = 80; break;
                    case 'F': state = 75; break;
                    case 'J': state = 24; break;
                    case 'U': state = 103; break;
                    case 'E': state = 70; break;
                    case 'R': state = 108; break;
                    case 'S': state = 73; break;
                    case 'a': state = 63; break;
                    case 'k': state = 89; break;
                    case 't': state = 23; break;
                    case 'n': state = 82; break;
                    case 'I': state = 74; break;
                    case 'H': state = 68; break;
                    case 'o': state = 106; break;
                    case 'w': state = 84; break;
                    case 'D': state = 87; break;
                    case 'j': state = 110; break;
                    case 'W': state = 98; break;
                    case 'e': state = 60; break;
                    case 'c': state = 113; break;
                    case 'X': state = 101; break;
                    case '7': state = 102; break;
                    case 'i': state = 69; break;
                    case 'Z': state = 67; break;
                    case 'Q': state = 95; break;
                    case 'B': state = 78; break;
                    case 'r': state = 26; break;
                    case 'N': state = 83; break;
                    case '8': state = 85; break;
                    case '9': state = 44; break;
                    case 'b': state = 28; break;
                    case 'O': state = 66; break;
                    case '5': state = 111; break;
                    case 'K': state = 58; break;
                    case 'G': state = 104; break;
                    case 'h': state = 112; break;
                    case 'q': state = 76; break;
                    case 'M': state = 62; break;
                    case 'T': state = 107; break;
                    case 'x': state = 71; break;
                    case 'd': state = 90; break;
                    case '6': state = 27; break;
                    case 'A': state = 81; break;
                    case 'm': state = 77; break;
                    case 'C': state = 88; break;
                    case '1': state = 100; break;
                    case 'Y': state = 97; break;
                    case '2': state = 72; break;
                    case 'L': state = 64; break;
                    default: return std::find(finalNodes.begin(), finalNodes.end(), state) != finalNodes.end();
                }
                break;
            case 28: 
                switch(letter) {
                    case 's': state = 61; break;
                    case '3': state = 25; break;
                    case 'x': state = 71; break;
                    case 'N': state = 83; break;
                    case 'l': state = 79; break;
                    case 'g': state = 80; break;
                    case 'f': state = 91; break;
                    case 'u': state = 92; break;
                    case '0': state = 93; break;
                    case 'p': state = 94; break;
                    case 'Q': state = 95; break;
                    case 'V': state = 96; break;
                    case 'F': state = 75; break;
                    case 'z': state = 109; break;
                    case 'k': state = 89; break;
                    case '4': state = 59; break;
                    case 'P': state = 65; break;
                    case 'J': state = 24; break;
                    case 'S': state = 73; break;
                    case 'R': state = 108; break;
                    case 'H': state = 68; break;
                    case '6': state = 27; break;
                    case 't': state = 23; break;
                    case 'X': state = 101; break;
                    case '2': state = 72; break;
                    case 'D': state = 87; break;
                    case 'q': state = 76; break;
                    case 'y': state = 105; break;
                    case 'M': state = 62; break;
                    case '7': state = 102; break;
                    case 'v': state = 99; break;
                    case '5': state = 111; break;
                    case 'r': state = 26; break;
                    case 'U': state = 103; break;
                    case 'A': state = 81; break;
                    case 'Z': state = 67; break;
                    case 'o': state = 106; break;
                    case 'I': state = 74; break;
                    case 'L': state = 64; break;
                    case 'm': state = 77; break;
                    case 'n': state = 82; break;
                    case '1': state = 100; break;
                    case 'K': state = 58; break;
                    case 'c': state = 113; break;
                    case 'B': state = 78; break;
                    case 'e': state = 60; break;
                    case 'a': state = 63; break;
                    case '9': state = 44; break;
                    case 'b': state = 28; break;
                    case 'T': state = 107; break;
                    case 'O': state = 66; break;
                    case 'G': state = 104; break;
                    case 'j': state = 110; break;
                    case 'i': state = 69; break;
                    case 'E': state = 70; break;
                    case 'h': state = 112; break;
                    case 'C': state = 88; break;
                    case 'Y': state = 97; break;
                    case 'W': state = 98; break;
                    case 'w': state = 84; break;
                    case 'd': state = 90; break;
                    case '8': state = 85; break;
                    default: return std::find(finalNodes.begin(), finalNodes.end(), state) != finalNodes.end();
                }
                break;
            case 29: 
                switch(letter) {
                    case 'F': state = 75; break;
                    case 'T': state = 107; break;
                    case '9': state = 44; break;
                    case 'B': state = 78; break;
                    case 'N': state = 83; break;
                    case 't': state = 23; break;
                    case '0': state = 93; break;
                    case 'V': state = 96; break;
                    case 'z': state = 109; break;
                    case 'X': state = 101; break;
                    case 'y': state = 105; break;
                    case 'E': state = 70; break;
                    case 'a': state = 63; break;
                    case 'f': state = 91; break;
                    case 'R': state = 108; break;
                    case '3': state = 25; break;
                    case 'H': state = 68; break;
                    case 'P': state = 65; break;
                    case '6': state = 27; break;
                    case 'd': state = 90; break;
                    case 'r': state = 26; break;
                    case 'l': state = 79; break;
                    case 'p': state = 94; break;
                    case '4': state = 59; break;
                    case 'A': state = 81; break;
                    case 'k': state = 89; break;
                    case 'Z': state = 67; break;
                    case 'o': state = 106; break;
                    case 'G': state = 104; break;
                    case 'c': state = 113; break;
                    case 'x': state = 71; break;
                    case 's': state = 61; break;
                    case 'g': state = 80; break;
                    case 'S': state = 73; break;
                    case 'e': state = 60; break;
                    case 'M': state = 62; break;
                    case 'I': state = 74; break;
                    case '2': state = 72; break;
                    case 'n': state = 82; break;
                    case 'i': state = 69; break;
                    case 'v': state = 99; break;
                    case 'h': state = 112; break;
                    case 'U': state = 103; break;
                    case 'j': state = 110; break;
                    case 'Q': state = 95; break;
                    case 'C': state = 88; break;
                    case '7': state = 102; break;
                    case 'u': state = 92; break;
                    case '1': state = 100; break;
                    case 'q': state = 76; break;
                    case 'L': state = 64; break;
                    case '5': state = 111; break;
                    case 'O': state = 66; break;
                    case 'K': state = 58; break;
                    case 'D': state = 87; break;
                    case 'J': state = 24; break;
                    case 'b': state = 28; break;
                    case 'W': state = 98; break;
                    case 'm': state = 77; break;
                    case 'Y': state = 97; break;
                    case '8': state = 85; break;
                    case 'w': state = 84; break;
                    default: return std::find(finalNodes.begin(), finalNodes.end(), state) != finalNodes.end();
                }
                break;
            case 30: 
                switch(letter) {
                    case 'T': state = 107; break;
                    case '4': state = 59; break;
                    case '9': state = 44; break;
                    case '1': state = 100; break;
                    case '0': state = 93; break;
                    case 'N': state = 83; break;
                    case 'B': state = 78; break;
                    case 'z': state = 109; break;
                    case 'q': state = 76; break;
                    case 'D': state = 87; break;
                    case 'a': state = 63; break;
                    case 's': state = 61; break;
                    case 'l': state = 79; break;
                    case 'J': state = 24; break;
                    case 'R': state = 108; break;
                    case '8': state = 85; break;
                    case 'I': state = 74; break;
                    case 'm': state = 77; break;
                    case 'A': state = 81; break;
                    case 'x': state = 71; break;
                    case 'Z': state = 67; break;
                    case 'r': state = 26; break;
                    case 'p': state = 94; break;
                    case 'e': state = 60; break;
                    case 'h': state = 112; break;
                    case 'c': state = 113; break;
                    case '3': state = 25; break;
                    case 'g': state = 80; break;
                    case 'P': state = 65; break;
                    case '2': state = 72; break;
                    case '6': state = 27; break;
                    case 'Q': state = 95; break;
                    case 'y': state = 105; break;
                    case 'k': state = 89; break;
                    case 'S': state = 73; break;
                    case 'i': state = 69; break;
                    case 'G': state = 104; break;
                    case 'j': state = 110; break;
                    case 'M': state = 62; break;
                    case 'o': state = 106; break;
                    case 'V': state = 96; break;
                    case 'n': state = 82; break;
                    case 'U': state = 103; break;
                    case '7': state = 102; break;
                    case 'v': state = 99; break;
                    case 'f': state = 91; break;
                    case 'L': state = 64; break;
                    case 'X': state = 101; break;
                    case 't': state = 23; break;
                    case 'Y': state = 97; break;
                    case 'C': state = 88; break;
                    case 'u': state = 92; break;
                    case 'E': state = 70; break;
                    case 'F': state = 75; break;
                    case 'K': state = 58; break;
                    case 'd': state = 90; break;
                    case 'H': state = 68; break;
                    case 'O': state = 66; break;
                    case '5': state = 111; break;
                    case 'b': state = 28; break;
                    case 'w': state = 84; break;
                    case 'W': state = 98; break;
                    default: return std::find(finalNodes.begin(), finalNodes.end(), state) != finalNodes.end();
                }
                break;
            case 31: 
                switch(letter) {
                    case 'F': state = 75; break;
                    case 'T': state = 107; break;
                    case '4': state = 59; break;
                    case 'H': state = 68; break;
                    case 'B': state = 78; break;
                    case 'e': state = 60; break;
                    case '1': state = 100; break;
                    case '0': state = 93; break;
                    case '9': state = 44; break;
                    case 'N': state = 83; break;
                    case 'E': state = 70; break;
                    case 'z': state = 109; break;
                    case 'X': state = 101; break;
                    case 'f': state = 91; break;
                    case 'l': state = 79; break;
                    case 'J': state = 24; break;
                    case 'p': state = 94; break;
                    case 'I': state = 74; break;
                    case 'S': state = 73; break;
                    case '8': state = 85; break;
                    case 'D': state = 87; break;
                    case 'g': state = 80; break;
                    case 'R': state = 108; break;
                    case 'P': state = 65; break;
                    case 'A': state = 81; break;
                    case '3': state = 25; break;
                    case 'Z': state = 67; break;
                    case 'r': state = 26; break;
                    case 'k': state = 89; break;
                    case '6': state = 27; break;
                    case 'c': state = 113; break;
                    case 'y': state = 105; break;
                    case 's': state = 61; break;
                    case 'V': state = 96; break;
                    case 'v': state = 99; break;
                    case 'i': state = 69; break;
                    case 'h': state = 112; break;
                    case 'a': state = 63; break;
                    case 'M': state = 62; break;
                    case 'o': state = 106; break;
                    case 'U': state = 103; break;
                    case '7': state = 102; break;
                    case 'q': state = 76; break;
                    case '5': state = 111; break;
                    case '2': state = 72; break;
                    case 'u': state = 92; break;
                    case 'K': state = 58; break;
                    case 'm': state = 77; break;
                    case 'C': state = 88; break;
                    case 't': state = 23; break;
                    case 'w': state = 84; break;
                    case 'Y': state = 97; break;
                    case 'Q': state = 95; break;
                    case 'd': state = 90; break;
                    case 'b': state = 28; break;
                    case 'L': state = 64; break;
                    case 'n': state = 82; break;
                    case 'j': state = 110; break;
                    case 'x': state = 71; break;
                    case 'O': state = 66; break;
                    case 'G': state = 104; break;
                    case 'W': state = 98; break;
                    default: return std::find(finalNodes.begin(), finalNodes.end(), state) != finalNodes.end();
                }
                break;
            case 32: 
                switch(letter) {
                    case 'F': state = 75; break;
                    case 'T': state = 107; break;
                    case '9': state = 44; break;
                    case '4': state = 59; break;
                    case 'H': state = 68; break;
                    case 'u': state = 92; break;
                    case 'U': state = 103; break;
                    case '0': state = 93; break;
                    case 'N': state = 83; break;
                    case 'E': state = 70; break;
                    case '7': state = 102; break;
                    case 'D': state = 87; break;
                    case 'A': state = 81; break;
                    case 'G': state = 104; break;
                    case 'f': state = 91; break;
                    case 'p': state = 94; break;
                    case 'z': state = 109; break;
                    case 'a': state = 63; break;
                    case 'S': state = 73; break;
                    case '6': state = 27; break;
                    case 'Z': state = 67; break;
                    case 'M': state = 62; break;
                    case 'n': state = 82; break;
                    case 'J': state = 24; break;
                    case 'P': state = 65; break;
                    case 'I': state = 74; break;
                    case 'm': state = 77; break;
                    case 'o': state = 106; break;
                    case 'y': state = 105; break;
                    case 'l': state = 79; break;
                    case 'V': state = 96; break;
                    case 'k': state = 89; break;
                    case 'R': state = 108; break;
                    case 's': state = 61; break;
                    case '1': state = 100; break;
                    case '2': state = 72; break;
                    case 'j': state = 110; break;
                    case 'd': state = 90; break;
                    case '5': state = 111; break;
                    case 'w': state = 84; break;
                    case 'q': state = 76; break;
                    case 'g': state = 80; break;
                    case 'c': state = 113; break;
                    case 'h': state = 112; break;
                    case 'v': state = 99; break;
                    case 'x': state = 71; break;
                    case 'K': state = 58; break;
                    case '3': state = 25; break;
                    case 'W': state = 98; break;
                    case 't': state = 23; break;
                    case 'O': state = 66; break;
                    case 'r': state = 26; break;
                    case 'C': state = 88; break;
                    case 'i': state = 69; break;
                    case 'Q': state = 95; break;
                    case 'e': state = 60; break;
                    case 'Y': state = 97; break;
                    case '8': state = 85; break;
                    case 'X': state = 101; break;
                    case 'b': state = 28; break;
                    case 'B': state = 78; break;
                    case 'L': state = 64; break;
                    default: return std::find(finalNodes.begin(), finalNodes.end(), state) != finalNodes.end();
                }
                break;
            case 33: 
                switch(letter) {
                    case 'E': state = 70; break;
                    case 'F': state = 75; break;
                    case 'n': state = 82; break;
                    case 'H': state = 68; break;
                    case 'N': state = 83; break;
                    case 'X': state = 101; break;
                    case 'z': state = 109; break;
                    case 'A': state = 81; break;
                    case 'D': state = 87; break;
                    case 'C': state = 88; break;
                    case 'S': state = 73; break;
                    case 'p': state = 94; break;
                    case '9': state = 44; break;
                    case '6': state = 27; break;
                    case 'Z': state = 67; break;
                    case 'a': state = 63; break;
                    case 'P': state = 65; break;
                    case '7': state = 102; break;
                    case 'y': state = 105; break;
                    case 'm': state = 77; break;
                    case 'k': state = 89; break;
                    case 'R': state = 108; break;
                    case 'J': state = 24; break;
                    case '4': state = 59; break;
                    case 'V': state = 96; break;
                    case 'o': state = 106; break;
                    case 'c': state = 113; break;
                    case 'g': state = 80; break;
                    case 'G': state = 104; break;
                    case '0': state = 93; break;
                    case 'f': state = 91; break;
                    case 'M': state = 62; break;
                    case 'e': state = 60; break;
                    case 'I': state = 74; break;
                    case '1': state = 100; break;
                    case 's': state = 61; break;
                    case 'l': state = 79; break;
                    case 'U': state = 103; break;
                    case 'w': state = 84; break;
                    case 'q': state = 76; break;
                    case 'd': state = 90; break;
                    case 'W': state = 98; break;
                    case 'h': state = 112; break;
                    case 'T': state = 107; break;
                    case 'u': state = 92; break;
                    case 'O': state = 66; break;
                    case 'v': state = 99; break;
                    case 'x': state = 71; break;
                    case '3': state = 25; break;
                    case '5': state = 111; break;
                    case 'K': state = 58; break;
                    case '2': state = 72; break;
                    case 't': state = 23; break;
                    case 'r': state = 26; break;
                    case 'Q': state = 95; break;
                    case 'i': state = 69; break;
                    case 'j': state = 110; break;
                    case 'Y': state = 97; break;
                    case '8': state = 85; break;
                    case 'b': state = 28; break;
                    case 'B': state = 78; break;
                    case 'L': state = 64; break;
                    default: return std::find(finalNodes.begin(), finalNodes.end(), state) != finalNodes.end();
                }
                break;
            case 34: 
                switch(letter) {
                    case 'F': state = 75; break;
                    case '9': state = 44; break;
                    case 'E': state = 70; break;
                    case 'n': state = 82; break;
                    case 'H': state = 68; break;
                    case 'X': state = 101; break;
                    case 'z': state = 109; break;
                    case 'B': state = 78; break;
                    case 'p': state = 94; break;
                    case 'A': state = 81; break;
                    case 'D': state = 87; break;
                    case '0': state = 93; break;
                    case 'a': state = 63; break;
                    case 'J': state = 24; break;
                    case 'M': state = 62; break;
                    case 'e': state = 60; break;
                    case 'P': state = 65; break;
                    case 'h': state = 112; break;
                    case 'R': state = 108; break;
                    case 'f': state = 91; break;
                    case 'V': state = 96; break;
                    case 'k': state = 89; break;
                    case '3': state = 25; break;
                    case 'Q': state = 95; break;
                    case '4': state = 59; break;
                    case '7': state = 102; break;
                    case 'x': state = 71; break;
                    case 'm': state = 77; break;
                    case 'I': state = 74; break;
                    case '5': state = 111; break;
                    case 's': state = 61; break;
                    case 'G': state = 104; break;
                    case 'g': state = 80; break;
                    case 'O': state = 66; break;
                    case 'j': state = 110; break;
                    case 'y': state = 105; break;
                    case 'U': state = 103; break;
                    case 'l': state = 79; break;
                    case 'q': state = 76; break;
                    case 'c': state = 113; break;
                    case 'd': state = 90; break;
                    case 'Z': state = 67; break;
                    case 'u': state = 92; break;
                    case 'S': state = 73; break;
                    case 'v': state = 99; break;
                    case 'w': state = 84; break;
                    case 'o': state = 106; break;
                    case 'T': state = 107; break;
                    case 'C': state = 88; break;
                    case '1': state = 100; break;
                    case 'W': state = 98; break;
                    case 'r': state = 26; break;
                    case 't': state = 23; break;
                    case 'K': state = 58; break;
                    case 'i': state = 69; break;
                    case '2': state = 72; break;
                    case '8': state = 85; break;
                    case 'Y': state = 97; break;
                    case 'b': state = 28; break;
                    case 'L': state = 64; break;
                    case 'N': state = 83; break;
                    case '6': state = 27; break;
                    default: return std::find(finalNodes.begin(), finalNodes.end(), state) != finalNodes.end();
                }
                break;
            case 35: 
                switch(letter) {
                    case 'F': state = 75; break;
                    case '9': state = 44; break;
                    case 'N': state = 83; break;
                    case 'B': state = 78; break;
                    case 'E': state = 70; break;
                    case 'n': state = 82; break;
                    case 'A': state = 81; break;
                    case 'z': state = 109; break;
                    case 'D': state = 87; break;
                    case 'p': state = 94; break;
                    case 'a': state = 63; break;
                    case 'J': state = 24; break;
                    case 'i': state = 69; break;
                    case 'g': state = 80; break;
                    case 'Z': state = 67; break;
                    case '0': state = 93; break;
                    case 'Y': state = 97; break;
                    case 'R': state = 108; break;
                    case '6': state = 27; break;
                    case 'f': state = 91; break;
                    case 'P': state = 65; break;
                    case 'e': state = 60; break;
                    case 'U': state = 103; break;
                    case 'l': state = 79; break;
                    case 's': state = 61; break;
                    case 'x': state = 71; break;
                    case 'y': state = 105; break;
                    case 'j': state = 110; break;
                    case '1': state = 100; break;
                    case 'h': state = 112; break;
                    case 'k': state = 89; break;
                    case 'V': state = 96; break;
                    case 'G': state = 104; break;
                    case '4': state = 59; break;
                    case '7': state = 102; break;
                    case 'M': state = 62; break;
                    case 'I': state = 74; break;
                    case 'w': state = 84; break;
                    case 'v': state = 99; break;
                    case 'o': state = 106; break;
                    case 'c': state = 113; break;
                    case 'd': state = 90; break;
                    case 'q': state = 76; break;
                    case 'u': state = 92; break;
                    case 'T': state = 107; break;
                    case 'W': state = 98; break;
                    case 'S': state = 73; break;
                    case 'b': state = 28; break;
                    case '5': state = 111; break;
                    case 'C': state = 88; break;
                    case '3': state = 25; break;
                    case 'r': state = 26; break;
                    case 'X': state = 101; break;
                    case 'L': state = 64; break;
                    case '2': state = 72; break;
                    case 't': state = 23; break;
                    case 'O': state = 66; break;
                    case 'H': state = 68; break;
                    case 'Q': state = 95; break;
                    case 'm': state = 77; break;
                    case 'K': state = 58; break;
                    case '8': state = 85; break;
                    default: return std::find(finalNodes.begin(), finalNodes.end(), state) != finalNodes.end();
                }
                break;
            case 36: 
                switch(letter) {
                    case 't': state = 23; break;
                    case 'F': state = 75; break;
                    case 'B': state = 78; break;
                    case 'N': state = 83; break;
                    case 'O': state = 66; break;
                    case 'q': state = 76; break;
                    case 'a': state = 63; break;
                    case 'u': state = 92; break;
                    case 'p': state = 94; break;
                    case 'c': state = 113; break;
                    case 'P': state = 65; break;
                    case 's': state = 61; break;
                    case 'd': state = 90; break;
                    case '0': state = 93; break;
                    case 'l': state = 79; break;
                    case 'R': state = 108; break;
                    case 'J': state = 24; break;
                    case 'j': state = 110; break;
                    case '2': state = 72; break;
                    case 'o': state = 106; break;
                    case 'S': state = 73; break;
                    case 'C': state = 88; break;
                    case 'Z': state = 67; break;
                    case 'I': state = 74; break;
                    case 'x': state = 71; break;
                    case 'U': state = 103; break;
                    case 'h': state = 112; break;
                    case 'f': state = 91; break;
                    case 'D': state = 87; break;
                    case 'V': state = 96; break;
                    case 'A': state = 81; break;
                    case 'y': state = 105; break;
                    case 'm': state = 77; break;
                    case 'k': state = 89; break;
                    case 'G': state = 104; break;
                    case 'Q': state = 95; break;
                    case '4': state = 59; break;
                    case '7': state = 102; break;
                    case 'M': state = 62; break;
                    case 'e': state = 60; break;
                    case 'i': state = 69; break;
                    case 'K': state = 58; break;
                    case '1': state = 100; break;
                    case 'g': state = 80; break;
                    case 'T': state = 107; break;
                    case 'X': state = 101; break;
                    case 'w': state = 84; break;
                    case 'W': state = 98; break;
                    case 'r': state = 26; break;
                    case 'H': state = 68; break;
                    case 'b': state = 28; break;
                    case '3': state = 25; break;
                    case 'Y': state = 97; break;
                    case 'v': state = 99; break;
                    case 'z': state = 109; break;
                    case '5': state = 111; break;
                    case 'L': state = 64; break;
                    case 'E': state = 70; break;
                    case '8': state = 85; break;
                    case '9': state = 44; break;
                    case '6': state = 27; break;
                    case 'n': state = 82; break;
                    default: return std::find(finalNodes.begin(), finalNodes.end(), state) != finalNodes.end();
                }
                break;
            case 37: 
                switch(letter) {
                    case 'F': state = 75; break;
                    case 't': state = 23; break;
                    case 'n': state = 82; break;
                    case 'f': state = 91; break;
                    case 'A': state = 81; break;
                    case 'p': state = 94; break;
                    case 'i': state = 69; break;
                    case '9': state = 44; break;
                    case 'a': state = 63; break;
                    case '0': state = 93; break;
                    case 'v': state = 99; break;
                    case 'd': state = 90; break;
                    case 'l': state = 79; break;
                    case 'R': state = 108; break;
                    case 'e': state = 60; break;
                    case 'M': state = 62; break;
                    case 'I': state = 74; break;
                    case 'Z': state = 67; break;
                    case 'Q': state = 95; break;
                    case '4': state = 59; break;
                    case 'G': state = 104; break;
                    case 'V': state = 96; break;
                    case 'u': state = 92; break;
                    case 'U': state = 103; break;
                    case '2': state = 72; break;
                    case 'c': state = 113; break;
                    case 'P': state = 65; break;
                    case 'k': state = 89; break;
                    case 'x': state = 71; break;
                    case '7': state = 102; break;
                    case 'C': state = 88; break;
                    case 'O': state = 66; break;
                    case 'J': state = 24; break;
                    case 'j': state = 110; break;
                    case 's': state = 61; break;
                    case 'K': state = 58; break;
                    case 'y': state = 105; break;
                    case 'o': state = 106; break;
                    case 'H': state = 68; break;
                    case 'h': state = 112; break;
                    case 'g': state = 80; break;
                    case 'T': state = 107; break;
                    case 'D': state = 87; break;
                    case 'S': state = 73; break;
                    case 'b': state = 28; break;
                    case 'X': state = 101; break;
                    case 'B': state = 78; break;
                    case 'q': state = 76; break;
                    case 'W': state = 98; break;
                    case '3': state = 25; break;
                    case 'r': state = 26; break;
                    case 'm': state = 77; break;
                    case '5': state = 111; break;
                    case 'w': state = 84; break;
                    case 'z': state = 109; break;
                    case 'L': state = 64; break;
                    case '8': state = 85; break;
                    case 'Y': state = 97; break;
                    case '1': state = 100; break;
                    case 'E': state = 70; break;
                    case '6': state = 27; break;
                    case 'N': state = 83; break;
                    default: return std::find(finalNodes.begin(), finalNodes.end(), state) != finalNodes.end();
                }
                break;
            case 38: 
                switch(letter) {
                    case 'C': state = 88; break;
                    case 't': state = 23; break;
                    case 'F': state = 75; break;
                    case '6': state = 27; break;
                    case 'N': state = 83; break;
                    case 'n': state = 82; break;
                    case 'z': state = 109; break;
                    case 'D': state = 87; break;
                    case 'p': state = 94; break;
                    case 'S': state = 73; break;
                    case 'A': state = 81; break;
                    case 'a': state = 63; break;
                    case 'd': state = 90; break;
                    case 'Z': state = 67; break;
                    case 'R': state = 108; break;
                    case 'e': state = 60; break;
                    case 'M': state = 62; break;
                    case 'I': state = 74; break;
                    case 'c': state = 113; break;
                    case 'G': state = 104; break;
                    case 'V': state = 96; break;
                    case 'f': state = 91; break;
                    case 'k': state = 89; break;
                    case 'X': state = 101; break;
                    case 'y': state = 105; break;
                    case 'l': state = 79; break;
                    case 'j': state = 110; break;
                    case '7': state = 102; break;
                    case '4': state = 59; break;
                    case 's': state = 61; break;
                    case '0': state = 93; break;
                    case 'w': state = 84; break;
                    case 'P': state = 65; break;
                    case 'L': state = 64; break;
                    case 'q': state = 76; break;
                    case 'J': state = 24; break;
                    case 'g': state = 80; break;
                    case 'T': state = 107; break;
                    case 'h': state = 112; break;
                    case 'u': state = 92; break;
                    case 'v': state = 99; break;
                    case 'i': state = 69; break;
                    case '2': state = 72; break;
                    case 'x': state = 71; break;
                    case 'W': state = 98; break;
                    case 'U': state = 103; break;
                    case '5': state = 111; break;
                    case '9': state = 44; break;
                    case 'r': state = 26; break;
                    case 'Q': state = 95; break;
                    case '3': state = 25; break;
                    case 'O': state = 66; break;
                    case '8': state = 85; break;
                    case 'Y': state = 97; break;
                    case 'E': state = 70; break;
                    case 'H': state = 68; break;
                    case 'b': state = 28; break;
                    case 'o': state = 106; break;
                    case 'm': state = 77; break;
                    case 'K': state = 58; break;
                    case 'B': state = 78; break;
                    case '1': state = 100; break;
                    default: return std::find(finalNodes.begin(), finalNodes.end(), state) != finalNodes.end();
                }
                break;
            case 39: 
                switch(letter) {
                    case 'C': state = 88; break;
                    case 't': state = 23; break;
                    case 'F': state = 75; break;
                    case '6': state = 27; break;
                    case 'H': state = 68; break;
                    case '9': state = 44; break;
                    case 'J': state = 24; break;
                    case 'a': state = 63; break;
                    case 'A': state = 81; break;
                    case 'p': state = 94; break;
                    case '7': state = 102; break;
                    case 'I': state = 74; break;
                    case 'M': state = 62; break;
                    case 'R': state = 108; break;
                    case 'X': state = 101; break;
                    case 'c': state = 113; break;
                    case 'Z': state = 67; break;
                    case 'l': state = 79; break;
                    case 'V': state = 96; break;
                    case '4': state = 59; break;
                    case 'i': state = 69; break;
                    case 'e': state = 60; break;
                    case 'G': state = 104; break;
                    case 'D': state = 87; break;
                    case 'y': state = 105; break;
                    case 'P': state = 65; break;
                    case 'S': state = 73; break;
                    case 'd': state = 90; break;
                    case 'f': state = 91; break;
                    case '0': state = 93; break;
                    case 'j': state = 110; break;
                    case 'k': state = 89; break;
                    case 's': state = 61; break;
                    case 'm': state = 77; break;
                    case 'U': state = 103; break;
                    case 'L': state = 64; break;
                    case '3': state = 25; break;
                    case 'q': state = 76; break;
                    case 'g': state = 80; break;
                    case 'T': state = 107; break;
                    case 'B': state = 78; break;
                    case 'h': state = 112; break;
                    case 'u': state = 92; break;
                    case 'z': state = 109; break;
                    case 'N': state = 83; break;
                    case 'E': state = 70; break;
                    case 'x': state = 71; break;
                    case 'w': state = 84; break;
                    case '2': state = 72; break;
                    case 'v': state = 99; break;
                    case 'n': state = 82; break;
                    case 'Q': state = 95; break;
                    case 'O': state = 66; break;
                    case 'r': state = 26; break;
                    case 'W': state = 98; break;
                    case '5': state = 111; break;
                    case '8': state = 85; break;
                    case 'o': state = 106; break;
                    case 'Y': state = 97; break;
                    case 'b': state = 28; break;
                    case '1': state = 100; break;
                    case 'K': state = 58; break;
                    default: return std::find(finalNodes.begin(), finalNodes.end(), state) != finalNodes.end();
                }
                break;
            case 40: 
                switch(letter) {
                    case 'C': state = 88; break;
                    case 'F': state = 75; break;
                    case 'E': state = 70; break;
                    case 't': state = 23; break;
                    case 'n': state = 82; break;
                    case 'H': state = 68; break;
                    case 'z': state = 109; break;
                    case 'p': state = 94; break;
                    case 'a': state = 63; break;
                    case 'J': state = 24; break;
                    case 'b': state = 28; break;
                    case '4': state = 59; break;
                    case '9': state = 44; break;
                    case 'M': state = 62; break;
                    case 'R': state = 108; break;
                    case 'g': state = 80; break;
                    case '0': state = 93; break;
                    case 'c': state = 113; break;
                    case 'm': state = 77; break;
                    case 'I': state = 74; break;
                    case '7': state = 102; break;
                    case 'G': state = 104; break;
                    case 'y': state = 105; break;
                    case 'V': state = 96; break;
                    case 'f': state = 91; break;
                    case 'd': state = 90; break;
                    case 'w': state = 84; break;
                    case 'X': state = 101; break;
                    case 'S': state = 73; break;
                    case 'D': state = 87; break;
                    case 'h': state = 112; break;
                    case 'j': state = 110; break;
                    case 'Z': state = 67; break;
                    case '2': state = 72; break;
                    case 'x': state = 71; break;
                    case 's': state = 61; break;
                    case 'P': state = 65; break;
                    case 'o': state = 106; break;
                    case 'A': state = 81; break;
                    case 'k': state = 89; break;
                    case 'u': state = 92; break;
                    case '1': state = 100; break;
                    case 'v': state = 99; break;
                    case 'Q': state = 95; break;
                    case 'U': state = 103; break;
                    case 'T': state = 107; break;
                    case 'l': state = 79; break;
                    case 'L': state = 64; break;
                    case 'O': state = 66; break;
                    case 'N': state = 83; break;
                    case '5': state = 111; break;
                    case 'q': state = 76; break;
                    case 'W': state = 98; break;
                    case '3': state = 25; break;
                    case 'r': state = 26; break;
                    case 'B': state = 78; break;
                    case 'Y': state = 97; break;
                    case 'i': state = 69; break;
                    case '6': state = 27; break;
                    case 'e': state = 60; break;
                    case '8': state = 85; break;
                    case 'K': state = 58; break;
                    default: return std::find(finalNodes.begin(), finalNodes.end(), state) != finalNodes.end();
                }
                break;
            case 41: 
                switch(letter) {
                    case 'F': state = 75; break;
                    case 'C': state = 88; break;
                    case 'T': state = 107; break;
                    case 't': state = 23; break;
                    case '9': state = 44; break;
                    case 'z': state = 109; break;
                    case 'a': state = 63; break;
                    case 'J': state = 24; break;
                    case 'U': state = 103; break;
                    case 'R': state = 108; break;
                    case 'w': state = 84; break;
                    case '4': state = 59; break;
                    case 'n': state = 82; break;
                    case 'c': state = 113; break;
                    case 'y': state = 105; break;
                    case 'Q': state = 95; break;
                    case '7': state = 102; break;
                    case 'I': state = 74; break;
                    case 'M': state = 62; break;
                    case 'p': state = 94; break;
                    case 'h': state = 112; break;
                    case 'H': state = 68; break;
                    case 'S': state = 73; break;
                    case 'm': state = 77; break;
                    case 'X': state = 101; break;
                    case 'j': state = 110; break;
                    case 'g': state = 80; break;
                    case 'V': state = 96; break;
                    case 'e': state = 60; break;
                    case 'G': state = 104; break;
                    case '2': state = 72; break;
                    case 'Z': state = 67; break;
                    case 'o': state = 106; break;
                    case 's': state = 61; break;
                    case 'P': state = 65; break;
                    case 'O': state = 66; break;
                    case '0': state = 93; break;
                    case 'k': state = 89; break;
                    case 'v': state = 99; break;
                    case 'f': state = 91; break;
                    case 'l': state = 79; break;
                    case '6': state = 27; break;
                    case 'L': state = 64; break;
                    case 'N': state = 83; break;
                    case 'D': state = 87; break;
                    case 'q': state = 76; break;
                    case 'b': state = 28; break;
                    case '5': state = 111; break;
                    case 'i': state = 69; break;
                    case 'A': state = 81; break;
                    case 'K': state = 58; break;
                    case 'W': state = 98; break;
                    case 'r': state = 26; break;
                    case 'E': state = 70; break;
                    case 'x': state = 71; break;
                    case 'd': state = 90; break;
                    case '3': state = 25; break;
                    case 'Y': state = 97; break;
                    case 'u': state = 92; break;
                    case '8': state = 85; break;
                    case '1': state = 100; break;
                    case 'B': state = 78; break;
                    default: return std::find(finalNodes.begin(), finalNodes.end(), state) != finalNodes.end();
                }
                break;
            case 42: 
                switch(letter) {
                    case 'F': state = 75; break;
                    case 'C': state = 88; break;
                    case 'T': state = 107; break;
                    case '6': state = 27; break;
                    case 't': state = 23; break;
                    case '9': state = 44; break;
                    case 'N': state = 83; break;
                    case 'B': state = 78; break;
                    case 'a': state = 63; break;
                    case 'U': state = 103; break;
                    case 'J': state = 24; break;
                    case 'p': state = 94; break;
                    case 'n': state = 82; break;
                    case 'g': state = 80; break;
                    case 'R': state = 108; break;
                    case 'M': state = 62; break;
                    case 'I': state = 74; break;
                    case '7': state = 102; break;
                    case '4': state = 59; break;
                    case 'y': state = 105; break;
                    case 'k': state = 89; break;
                    case 'j': state = 110; break;
                    case 'V': state = 96; break;
                    case 'f': state = 91; break;
                    case 'G': state = 104; break;
                    case 'e': state = 60; break;
                    case 'Z': state = 67; break;
                    case 'P': state = 65; break;
                    case 's': state = 61; break;
                    case 'x': state = 71; break;
                    case 'X': state = 101; break;
                    case 'h': state = 112; break;
                    case 'A': state = 81; break;
                    case '1': state = 100; break;
                    case 'S': state = 73; break;
                    case '0': state = 93; break;
                    case 'v': state = 99; break;
                    case 'c': state = 113; break;
                    case 'l': state = 79; break;
                    case 'd': state = 90; break;
                    case 'z': state = 109; break;
                    case 'i': state = 69; break;
                    case 'q': state = 76; break;
                    case 'K': state = 58; break;
                    case 'L': state = 64; break;
                    case '5': state = 111; break;
                    case '2': state = 72; break;
                    case 'u': state = 92; break;
                    case 'D': state = 87; break;
                    case 'H': state = 68; break;
                    case 'Y': state = 97; break;
                    case 'E': state = 70; break;
                    case 'w': state = 84; break;
                    case 'b': state = 28; break;
                    case 'r': state = 26; break;
                    case 'W': state = 98; break;
                    case 'm': state = 77; break;
                    case 'Q': state = 95; break;
                    case '3': state = 25; break;
                    case 'o': state = 106; break;
                    case 'O': state = 66; break;
                    case '8': state = 85; break;
                    default: return std::find(finalNodes.begin(), finalNodes.end(), state) != finalNodes.end();
                }
                break;
            case 43: 
                switch(letter) {
                    case 'C': state = 88; break;
                    case 'n': state = 82; break;
                    case 't': state = 23; break;
                    case '9': state = 44; break;
                    case '7': state = 102; break;
                    case 'F': state = 75; break;
                    case 'H': state = 68; break;
                    case 'f': state = 91; break;
                    case 'J': state = 24; break;
                    case 'U': state = 103; break;
                    case 'a': state = 63; break;
                    case 'G': state = 104; break;
                    case 'z': state = 109; break;
                    case 'T': state = 107; break;
                    case 'I': state = 74; break;
                    case 'm': state = 77; break;
                    case 'M': state = 62; break;
                    case 'R': state = 108; break;
                    case 'g': state = 80; break;
                    case '4': state = 59; break;
                    case 'y': state = 105; break;
                    case 'V': state = 96; break;
                    case 'p': state = 94; break;
                    case '8': state = 85; break;
                    case 'A': state = 81; break;
                    case 'j': state = 110; break;
                    case 'h': state = 112; break;
                    case 'X': state = 101; break;
                    case 'e': state = 60; break;
                    case '0': state = 93; break;
                    case 'd': state = 90; break;
                    case 'Z': state = 67; break;
                    case '6': state = 27; break;
                    case 's': state = 61; break;
                    case 'P': state = 65; break;
                    case 'S': state = 73; break;
                    case 'o': state = 106; break;
                    case '2': state = 72; break;
                    case 'D': state = 87; break;
                    case 'k': state = 89; break;
                    case 'u': state = 92; break;
                    case 'O': state = 66; break;
                    case 'v': state = 99; break;
                    case 'c': state = 113; break;
                    case 'l': state = 79; break;
                    case 'Q': state = 95; break;
                    case 'w': state = 84; break;
                    case 'N': state = 83; break;
                    case 'r': state = 26; break;
                    case 'B': state = 78; break;
                    case 'L': state = 64; break;
                    case 'E': state = 70; break;
                    case 'x': state = 71; break;
                    case 'q': state = 76; break;
                    case 'Y': state = 97; break;
                    case 'W': state = 98; break;
                    case '1': state = 100; break;
                    case 'i': state = 69; break;
                    case '3': state = 25; break;
                    case 'K': state = 58; break;
                    case 'b': state = 28; break;
                    case '5': state = 111; break;
                    default: return std::find(finalNodes.begin(), finalNodes.end(), state) != finalNodes.end();
                }
                break;
            case 44: 
                switch(letter) {
                    case 's': state = 61; break;
                    case 'B': state = 78; break;
                    case '9': state = 44; break;
                    case 'f': state = 91; break;
                    case 'u': state = 92; break;
                    case 'C': state = 88; break;
                    case '0': state = 93; break;
                    case 'p': state = 94; break;
                    case 'V': state = 96; break;
                    case 'z': state = 109; break;
                    case 'y': state = 105; break;
                    case '4': state = 59; break;
                    case 'U': state = 103; break;
                    case 'P': state = 65; break;
                    case 'D': state = 87; break;
                    case 'J': state = 24; break;
                    case 'j': state = 110; break;
                    case 'k': state = 89; break;
                    case '7': state = 102; break;
                    case 'l': state = 79; break;
                    case 'g': state = 80; break;
                    case 'E': state = 70; break;
                    case 'G': state = 104; break;
                    case 'r': state = 26; break;
                    case 'M': state = 62; break;
                    case '8': state = 85; break;
                    case 'R': state = 108; break;
                    case 'n': state = 82; break;
                    case 'i': state = 69; break;
                    case 'A': state = 81; break;
                    case 'c': state = 113; break;
                    case '6': state = 27; break;
                    case 'O': state = 66; break;
                    case 'I': state = 74; break;
                    case 'v': state = 99; break;
                    case 'L': state = 64; break;
                    case 'd': state = 90; break;
                    case 'a': state = 63; break;
                    case 't': state = 23; break;
                    case 'q': state = 76; break;
                    case 'W': state = 98; break;
                    case 'b': state = 28; break;
                    case 'x': state = 71; break;
                    case 'Y': state = 97; break;
                    case 'Q': state = 95; break;
                    case '1': state = 100; break;
                    case '5': state = 111; break;
                    case 'T': state = 107; break;
                    case 'h': state = 112; break;
                    case 'K': state = 58; break;
                    case 'N': state = 83; break;
                    case 'w': state = 84; break;
                    case '3': state = 25; break;
                    case 'o': state = 106; break;
                    case 'F': state = 75; break;
                    case 'Z': state = 67; break;
                    case 'X': state = 101; break;
                    case '2': state = 72; break;
                    case 'H': state = 68; break;
                    case 'm': state = 77; break;
                    case 'e': state = 60; break;
                    case 'S': state = 73; break;
                    default: return std::find(finalNodes.begin(), finalNodes.end(), state) != finalNodes.end();
                }
                break;
            case 45: 
                switch(letter) {
                    case 'n': state = 82; break;
                    case 'E': state = 70; break;
                    case 'D': state = 87; break;
                    case 'B': state = 78; break;
                    case 'O': state = 66; break;
                    case 'z': state = 109; break;
                    case 'A': state = 81; break;
                    case 'V': state = 96; break;
                    case '5': state = 111; break;
                    case 'T': state = 107; break;
                    case 'F': state = 75; break;
                    case '4': state = 59; break;
                    case 'e': state = 60; break;
                    case 'p': state = 94; break;
                    case 'y': state = 105; break;
                    case 'j': state = 110; break;
                    case 'K': state = 58; break;
                    case '0': state = 93; break;
                    case '1': state = 100; break;
                    case 'k': state = 89; break;
                    case 'c': state = 113; break;
                    case 'X': state = 101; break;
                    case 'l': state = 79; break;
                    case 'g': state = 80; break;
                    case 'M': state = 62; break;
                    case 'h': state = 112; break;
                    case 'f': state = 91; break;
                    case 'G': state = 104; break;
                    case '7': state = 102; break;
                    case 'U': state = 103; break;
                    case 'P': state = 65; break;
                    case 's': state = 61; break;
                    case 'i': state = 69; break;
                    case 'R': state = 108; break;
                    case 'S': state = 73; break;
                    case 'm': state = 77; break;
                    case '2': state = 72; break;
                    case 'I': state = 74; break;
                    case 'w': state = 84; break;
                    case 'v': state = 99; break;
                    case '6': state = 27; break;
                    case 'a': state = 63; break;
                    case 'q': state = 76; break;
                    case 'd': state = 90; break;
                    case 'C': state = 88; break;
                    case '9': state = 44; break;
                    case 'Z': state = 67; break;
                    case 'W': state = 98; break;
                    case 'u': state = 92; break;
                    case 'N': state = 83; break;
                    case 'Y': state = 97; break;
                    case 'Q': state = 95; break;
                    case '3': state = 25; break;
                    case 'x': state = 71; break;
                    case 'r': state = 26; break;
                    case 'H': state = 68; break;
                    case 'L': state = 64; break;
                    case 't': state = 23; break;
                    case 'J': state = 24; break;
                    case 'b': state = 28; break;
                    case 'o': state = 106; break;
                    case '8': state = 85; break;
                    default: return std::find(finalNodes.begin(), finalNodes.end(), state) != finalNodes.end();
                }
                break;
            case 46: 
                switch(letter) {
                    case 'F': state = 75; break;
                    case 'n': state = 82; break;
                    case 'E': state = 70; break;
                    case '6': state = 27; break;
                    case 'z': state = 109; break;
                    case 'a': state = 63; break;
                    case 'N': state = 83; break;
                    case 'R': state = 108; break;
                    case 'X': state = 101; break;
                    case 'T': state = 107; break;
                    case '9': state = 44; break;
                    case '0': state = 93; break;
                    case 'V': state = 96; break;
                    case 'x': state = 71; break;
                    case 'c': state = 113; break;
                    case 'Z': state = 67; break;
                    case 'O': state = 66; break;
                    case '1': state = 100; break;
                    case 't': state = 23; break;
                    case 'p': state = 94; break;
                    case 'm': state = 77; break;
                    case 'k': state = 89; break;
                    case 'e': state = 60; break;
                    case 'w': state = 84; break;
                    case 'M': state = 62; break;
                    case 'f': state = 91; break;
                    case 'o': state = 106; break;
                    case 'y': state = 105; break;
                    case 'G': state = 104; break;
                    case 'Q': state = 95; break;
                    case '4': state = 59; break;
                    case '7': state = 102; break;
                    case 'U': state = 103; break;
                    case 'P': state = 65; break;
                    case 'g': state = 80; break;
                    case 's': state = 61; break;
                    case 'h': state = 112; break;
                    case 'j': state = 110; break;
                    case 'i': state = 69; break;
                    case 'S': state = 73; break;
                    case 'A': state = 81; break;
                    case 'I': state = 74; break;
                    case 'v': state = 99; break;
                    case 'l': state = 79; break;
                    case 'K': state = 58; break;
                    case 'C': state = 88; break;
                    case 'u': state = 92; break;
                    case 'H': state = 68; break;
                    case 'b': state = 28; break;
                    case 'q': state = 76; break;
                    case 'D': state = 87; break;
                    case 'W': state = 98; break;
                    case 'r': state = 26; break;
                    case 'J': state = 24; break;
                    case '8': state = 85; break;
                    case 'L': state = 64; break;
                    case 'Y': state = 97; break;
                    case 'd': state = 90; break;
                    case '3': state = 25; break;
                    case '5': state = 111; break;
                    case 'B': state = 78; break;
                    case '2': state = 72; break;
                    default: return std::find(finalNodes.begin(), finalNodes.end(), state) != finalNodes.end();
                }
                break;
            case 47: 
                switch(letter) {
                    case 'u': state = 92; break;
                    case 'F': state = 75; break;
                    case 'E': state = 70; break;
                    case 'n': state = 82; break;
                    case 'D': state = 87; break;
                    case 'w': state = 84; break;
                    case 'z': state = 109; break;
                    case 'O': state = 66; break;
                    case 'M': state = 62; break;
                    case 't': state = 23; break;
                    case '9': state = 44; break;
                    case '4': state = 59; break;
                    case 'J': state = 24; break;
                    case 'B': state = 78; break;
                    case 'L': state = 64; break;
                    case 'U': state = 103; break;
                    case 'p': state = 94; break;
                    case 'k': state = 89; break;
                    case 'c': state = 113; break;
                    case '1': state = 100; break;
                    case '6': state = 27; break;
                    case 'R': state = 108; break;
                    case '0': state = 93; break;
                    case 'T': state = 107; break;
                    case 'f': state = 91; break;
                    case 'V': state = 96; break;
                    case 'o': state = 106; break;
                    case 'y': state = 105; break;
                    case 'G': state = 104; break;
                    case '7': state = 102; break;
                    case 'X': state = 101; break;
                    case 'A': state = 81; break;
                    case 'I': state = 74; break;
                    case '2': state = 72; break;
                    case 'm': state = 77; break;
                    case 'S': state = 73; break;
                    case 'j': state = 110; break;
                    case 'h': state = 112; break;
                    case 's': state = 61; break;
                    case 'P': state = 65; break;
                    case 'g': state = 80; break;
                    case 'l': state = 79; break;
                    case 'v': state = 99; break;
                    case 'a': state = 63; break;
                    case 'd': state = 90; break;
                    case 'C': state = 88; break;
                    case 'Z': state = 67; break;
                    case 'q': state = 76; break;
                    case 'K': state = 58; break;
                    case 'H': state = 68; break;
                    case '5': state = 111; break;
                    case 'Q': state = 95; break;
                    case 'i': state = 69; break;
                    case 'Y': state = 97; break;
                    case 'N': state = 83; break;
                    case '3': state = 25; break;
                    case 'W': state = 98; break;
                    case 'b': state = 28; break;
                    case 'e': state = 60; break;
                    case 'r': state = 26; break;
                    case 'x': state = 71; break;
                    case '8': state = 85; break;
                    default: return std::find(finalNodes.begin(), finalNodes.end(), state) != finalNodes.end();
                }
                break;
            case 48: 
                switch(letter) {
                    case 'F': state = 75; break;
                    case 'E': state = 70; break;
                    case '8': state = 85; break;
                    case 'n': state = 82; break;
                    case '1': state = 100; break;
                    case 'N': state = 83; break;
                    case 'z': state = 109; break;
                    case 'f': state = 91; break;
                    case 'V': state = 96; break;
                    case '0': state = 93; break;
                    case 'r': state = 26; break;
                    case 'S': state = 73; break;
                    case 'b': state = 28; break;
                    case 'B': state = 78; break;
                    case '9': state = 44; break;
                    case '2': state = 72; break;
                    case 'T': state = 107; break;
                    case 'p': state = 94; break;
                    case '4': state = 59; break;
                    case '7': state = 102; break;
                    case 'e': state = 60; break;
                    case 'A': state = 81; break;
                    case 'G': state = 104; break;
                    case 'y': state = 105; break;
                    case 'D': state = 87; break;
                    case 'l': state = 79; break;
                    case 'P': state = 65; break;
                    case 's': state = 61; break;
                    case 'i': state = 69; break;
                    case 'k': state = 89; break;
                    case 'h': state = 112; break;
                    case 'L': state = 64; break;
                    case 'H': state = 68; break;
                    case 'o': state = 106; break;
                    case 'c': state = 113; break;
                    case 'X': state = 101; break;
                    case 'x': state = 71; break;
                    case 'j': state = 110; break;
                    case 'Z': state = 67; break;
                    case 'g': state = 80; break;
                    case 'R': state = 108; break;
                    case 'M': state = 62; break;
                    case 'm': state = 77; break;
                    case 'I': state = 74; break;
                    case 'q': state = 76; break;
                    case 'C': state = 88; break;
                    case 't': state = 23; break;
                    case 'K': state = 58; break;
                    case '6': state = 27; break;
                    case 'v': state = 99; break;
                    case 'Q': state = 95; break;
                    case 'u': state = 92; break;
                    case 'd': state = 90; break;
                    case 'U': state = 103; break;
                    case 'w': state = 84; break;
                    case '3': state = 25; break;
                    case 'Y': state = 97; break;
                    case 'a': state = 63; break;
                    case 'J': state = 24; break;
                    case 'W': state = 98; break;
                    case 'O': state = 66; break;
                    case '5': state = 111; break;
                    default: return std::find(finalNodes.begin(), finalNodes.end(), state) != finalNodes.end();
                }
                break;
            case 49: 
                switch(letter) {
                    case 'C': state = 88; break;
                    case 'a': state = 63; break;
                    case 'O': state = 66; break;
                    case 'N': state = 83; break;
                    case 'T': state = 107; break;
                    case 'U': state = 103; break;
                    case 'r': state = 26; break;
                    case 'X': state = 101; break;
                    case 'b': state = 28; break;
                    case '0': state = 93; break;
                    case 'V': state = 96; break;
                    case 'E': state = 70; break;
                    case '2': state = 72; break;
                    case '8': state = 85; break;
                    case '4': state = 59; break;
                    case 'P': state = 65; break;
                    case '9': state = 44; break;
                    case 'k': state = 89; break;
                    case 's': state = 61; break;
                    case 'u': state = 92; break;
                    case 'A': state = 81; break;
                    case 'y': state = 105; break;
                    case '7': state = 102; break;
                    case 'S': state = 73; break;
                    case 'p': state = 94; break;
                    case 'e': state = 60; break;
                    case 'G': state = 104; break;
                    case 'Z': state = 67; break;
                    case 'm': state = 77; break;
                    case 'h': state = 112; break;
                    case 't': state = 23; break;
                    case 'I': state = 74; break;
                    case 'Q': state = 95; break;
                    case 'o': state = 106; break;
                    case 'c': state = 113; break;
                    case 'x': state = 71; break;
                    case 'M': state = 62; break;
                    case 'R': state = 108; break;
                    case 'j': state = 110; break;
                    case 'l': state = 79; break;
                    case 'g': state = 80; break;
                    case 'J': state = 24; break;
                    case 'f': state = 91; break;
                    case 'q': state = 76; break;
                    case 'z': state = 109; break;
                    case 'D': state = 87; break;
                    case 'L': state = 64; break;
                    case '6': state = 27; break;
                    case 'H': state = 68; break;
                    case 'i': state = 69; break;
                    case '1': state = 100; break;
                    case 'K': state = 58; break;
                    case 'B': state = 78; break;
                    case 'n': state = 82; break;
                    case 'w': state = 84; break;
                    case 'Y': state = 97; break;
                    case 'F': state = 75; break;
                    case 'v': state = 99; break;
                    case 'd': state = 90; break;
                    case '3': state = 25; break;
                    case 'W': state = 98; break;
                    case '5': state = 111; break;
                    default: return std::find(finalNodes.begin(), finalNodes.end(), state) != finalNodes.end();
                }
                break;
            case 50: 
                switch(letter) {
                    case 'C': state = 88; break;
                    case 'a': state = 63; break;
                    case 'F': state = 75; break;
                    case 'r': state = 26; break;
                    case 'N': state = 83; break;
                    case '9': state = 44; break;
                    case 'V': state = 96; break;
                    case 'S': state = 73; break;
                    case '0': state = 93; break;
                    case 'R': state = 108; break;
                    case 't': state = 23; break;
                    case 'M': state = 62; break;
                    case 'G': state = 104; break;
                    case '4': state = 59; break;
                    case 'Q': state = 95; break;
                    case 'p': state = 94; break;
                    case 'x': state = 71; break;
                    case 'X': state = 101; break;
                    case 'h': state = 112; break;
                    case 'T': state = 107; break;
                    case 'A': state = 81; break;
                    case 'Z': state = 67; break;
                    case '7': state = 102; break;
                    case 'u': state = 92; break;
                    case '5': state = 111; break;
                    case 'o': state = 106; break;
                    case 'I': state = 74; break;
                    case 'e': state = 60; break;
                    case 'f': state = 91; break;
                    case 'y': state = 105; break;
                    case 'c': state = 113; break;
                    case 's': state = 61; break;
                    case 'l': state = 79; break;
                    case 'g': state = 80; break;
                    case 'i': state = 69; break;
                    case 'q': state = 76; break;
                    case '2': state = 72; break;
                    case 'm': state = 77; break;
                    case 'J': state = 24; break;
                    case 'P': state = 65; break;
                    case 'O': state = 66; break;
                    case 'D': state = 87; break;
                    case '8': state = 85; break;
                    case 'd': state = 90; break;
                    case 'z': state = 109; break;
                    case 'K': state = 58; break;
                    case 'H': state = 68; break;
                    case 'E': state = 70; break;
                    case 'b': state = 28; break;
                    case 'U': state = 103; break;
                    case 'L': state = 64; break;
                    case '1': state = 100; break;
                    case 'n': state = 82; break;
                    case 'k': state = 89; break;
                    case 'w': state = 84; break;
                    case 'v': state = 99; break;
                    case 'Y': state = 97; break;
                    case '6': state = 27; break;
                    case 'B': state = 78; break;
                    case 'j': state = 110; break;
                    case 'W': state = 98; break;
                    case '3': state = 25; break;
                    default: return std::find(finalNodes.begin(), finalNodes.end(), state) != finalNodes.end();
                }
                break;
            case 51: 
                switch(letter) {
                    case 'E': state = 70; break;
                    case 'C': state = 88; break;
                    case 'a': state = 63; break;
                    case 'F': state = 75; break;
                    case '1': state = 100; break;
                    case '2': state = 72; break;
                    case 't': state = 23; break;
                    case 'V': state = 96; break;
                    case 'r': state = 26; break;
                    case 'R': state = 108; break;
                    case 'b': state = 28; break;
                    case '9': state = 44; break;
                    case 'D': state = 87; break;
                    case 'G': state = 104; break;
                    case 'k': state = 89; break;
                    case '4': state = 59; break;
                    case 'p': state = 94; break;
                    case 'P': state = 65; break;
                    case 'T': state = 107; break;
                    case '7': state = 102; break;
                    case 'x': state = 71; break;
                    case 'h': state = 112; break;
                    case 'M': state = 62; break;
                    case 'X': state = 101; break;
                    case '8': state = 85; break;
                    case 'A': state = 81; break;
                    case 'm': state = 77; break;
                    case '5': state = 111; break;
                    case 'I': state = 74; break;
                    case 'J': state = 24; break;
                    case 'U': state = 103; break;
                    case 'y': state = 105; break;
                    case 'o': state = 106; break;
                    case 'f': state = 91; break;
                    case 'c': state = 113; break;
                    case 'q': state = 76; break;
                    case 'S': state = 73; break;
                    case 's': state = 61; break;
                    case 'i': state = 69; break;
                    case 'l': state = 79; break;
                    case 'g': state = 80; break;
                    case 'Z': state = 67; break;
                    case 'n': state = 82; break;
                    case 'v': state = 99; break;
                    case 'z': state = 109; break;
                    case 'Q': state = 95; break;
                    case '6': state = 27; break;
                    case 'O': state = 66; break;
                    case 'd': state = 90; break;
                    case 'B': state = 78; break;
                    case 'K': state = 58; break;
                    case 'H': state = 68; break;
                    case 'e': state = 60; break;
                    case 'w': state = 84; break;
                    case 'W': state = 98; break;
                    case 'Y': state = 97; break;
                    case 'L': state = 64; break;
                    case 'u': state = 92; break;
                    case '3': state = 25; break;
                    case 'j': state = 110; break;
                    case '0': state = 93; break;
                    case 'N': state = 83; break;
                    default: return std::find(finalNodes.begin(), finalNodes.end(), state) != finalNodes.end();
                }
                break;
            case 52: 
                switch(letter) {
                    case 'C': state = 88; break;
                    case '9': state = 44; break;
                    case 'J': state = 24; break;
                    case 'a': state = 63; break;
                    case 'F': state = 75; break;
                    case 'R': state = 108; break;
                    case 't': state = 23; break;
                    case 'y': state = 105; break;
                    case 'r': state = 26; break;
                    case 'h': state = 112; break;
                    case 'V': state = 96; break;
                    case 'D': state = 87; break;
                    case 'E': state = 70; break;
                    case 'H': state = 68; break;
                    case 'k': state = 89; break;
                    case '4': state = 59; break;
                    case 'p': state = 94; break;
                    case 'M': state = 62; break;
                    case 'T': state = 107; break;
                    case 'Q': state = 95; break;
                    case 'u': state = 92; break;
                    case 'S': state = 73; break;
                    case 'A': state = 81; break;
                    case 'm': state = 77; break;
                    case 'O': state = 66; break;
                    case 'X': state = 101; break;
                    case '7': state = 102; break;
                    case 'Z': state = 67; break;
                    case 'K': state = 58; break;
                    case 'w': state = 84; break;
                    case 'c': state = 113; break;
                    case 'U': state = 103; break;
                    case 'o': state = 106; break;
                    case 'Y': state = 97; break;
                    case 'I': state = 74; break;
                    case 'x': state = 71; break;
                    case 'l': state = 79; break;
                    case 'g': state = 80; break;
                    case 'P': state = 65; break;
                    case 'f': state = 91; break;
                    case 's': state = 61; break;
                    case 'G': state = 104; break;
                    case 'j': state = 110; break;
                    case 'e': state = 60; break;
                    case 'q': state = 76; break;
                    case 'N': state = 83; break;
                    case 'n': state = 82; break;
                    case '5': state = 111; break;
                    case '8': state = 85; break;
                    case '6': state = 27; break;
                    case 'L': state = 64; break;
                    case '1': state = 100; break;
                    case 'B': state = 78; break;
                    case 'i': state = 69; break;
                    case 'z': state = 109; break;
                    case '2': state = 72; break;
                    case 'v': state = 99; break;
                    case 'd': state = 90; break;
                    case '0': state = 93; break;
                    case '3': state = 25; break;
                    case 'b': state = 28; break;
                    case 'W': state = 98; break;
                    default: return std::find(finalNodes.begin(), finalNodes.end(), state) != finalNodes.end();
                }
                break;
            case 53: 
                switch(letter) {
                    case 'E': state = 70; break;
                    case '9': state = 44; break;
                    case 'J': state = 24; break;
                    case 'a': state = 63; break;
                    case '0': state = 93; break;
                    case 'r': state = 26; break;
                    case 'V': state = 96; break;
                    case '7': state = 102; break;
                    case 'D': state = 87; break;
                    case 'h': state = 112; break;
                    case 'M': state = 62; break;
                    case 't': state = 23; break;
                    case 'T': state = 107; break;
                    case 'd': state = 90; break;
                    case '4': state = 59; break;
                    case 'u': state = 92; break;
                    case 'p': state = 94; break;
                    case 'A': state = 81; break;
                    case 'Z': state = 67; break;
                    case 'y': state = 105; break;
                    case 'm': state = 77; break;
                    case 'k': state = 89; break;
                    case 'o': state = 106; break;
                    case 'Y': state = 97; break;
                    case 'f': state = 91; break;
                    case 'X': state = 101; break;
                    case '6': state = 27; break;
                    case 'j': state = 110; break;
                    case 'e': state = 60; break;
                    case 'G': state = 104; break;
                    case 'c': state = 113; break;
                    case 'x': state = 71; break;
                    case 'P': state = 65; break;
                    case 's': state = 61; break;
                    case 'l': state = 79; break;
                    case 'g': state = 80; break;
                    case 'R': state = 108; break;
                    case 'S': state = 73; break;
                    case 'I': state = 74; break;
                    case 'z': state = 109; break;
                    case 'K': state = 58; break;
                    case 'U': state = 103; break;
                    case '1': state = 100; break;
                    case '8': state = 85; break;
                    case 'H': state = 68; break;
                    case 'B': state = 78; break;
                    case 'O': state = 66; break;
                    case 'q': state = 76; break;
                    case '2': state = 72; break;
                    case 'C': state = 88; break;
                    case 'w': state = 84; break;
                    case 'n': state = 82; break;
                    case 'Q': state = 95; break;
                    case 'v': state = 99; break;
                    case 'L': state = 64; break;
                    case 'i': state = 69; break;
                    case '5': state = 111; break;
                    case 'N': state = 83; break;
                    case 'F': state = 75; break;
                    case '3': state = 25; break;
                    case 'b': state = 28; break;
                    case 'W': state = 98; break;
                    default: return std::find(finalNodes.begin(), finalNodes.end(), state) != finalNodes.end();
                }
                break;
            case 54: 
                switch(letter) {
                    case '9': state = 44; break;
                    case 'J': state = 24; break;
                    case 'G': state = 104; break;
                    case '1': state = 100; break;
                    case 'w': state = 84; break;
                    case 'F': state = 75; break;
                    case 'U': state = 103; break;
                    case 'D': state = 87; break;
                    case 'S': state = 73; break;
                    case 'V': state = 96; break;
                    case 'z': state = 109; break;
                    case '3': state = 25; break;
                    case '4': state = 59; break;
                    case 'M': state = 62; break;
                    case 'y': state = 105; break;
                    case 'P': state = 65; break;
                    case 'c': state = 113; break;
                    case 'd': state = 90; break;
                    case 'T': state = 107; break;
                    case 'p': state = 94; break;
                    case 'Z': state = 67; break;
                    case '7': state = 102; break;
                    case 'u': state = 92; break;
                    case 'L': state = 64; break;
                    case 'h': state = 112; break;
                    case 'I': state = 74; break;
                    case 'K': state = 58; break;
                    case 't': state = 23; break;
                    case 'O': state = 66; break;
                    case 'k': state = 89; break;
                    case 'Q': state = 95; break;
                    case 'n': state = 82; break;
                    case 'H': state = 68; break;
                    case 'j': state = 110; break;
                    case 'e': state = 60; break;
                    case 'r': state = 26; break;
                    case 'o': state = 106; break;
                    case 'X': state = 101; break;
                    case 'x': state = 71; break;
                    case 's': state = 61; break;
                    case 'l': state = 79; break;
                    case 'g': state = 80; break;
                    case 'R': state = 108; break;
                    case 'q': state = 76; break;
                    case 'A': state = 81; break;
                    case '2': state = 72; break;
                    case 'm': state = 77; break;
                    case 'f': state = 91; break;
                    case 'B': state = 78; break;
                    case '8': state = 85; break;
                    case 'b': state = 28; break;
                    case 'Y': state = 97; break;
                    case 'E': state = 70; break;
                    case '6': state = 27; break;
                    case 'C': state = 88; break;
                    case 'a': state = 63; break;
                    case 'W': state = 98; break;
                    case 'N': state = 83; break;
                    case 'v': state = 99; break;
                    case '5': state = 111; break;
                    case '0': state = 93; break;
                    case 'i': state = 69; break;
                    default: return std::find(finalNodes.begin(), finalNodes.end(), state) != finalNodes.end();
                }
                break;
            case 55: 
                switch(letter) {
                    case 'J': state = 24; break;
                    case 'a': state = 63; break;
                    case 'F': state = 75; break;
                    case 'r': state = 26; break;
                    case 'D': state = 87; break;
                    case '9': state = 44; break;
                    case 'V': state = 96; break;
                    case '7': state = 102; break;
                    case 'I': state = 74; break;
                    case '4': state = 59; break;
                    case 'd': state = 90; break;
                    case 'M': state = 62; break;
                    case 'T': state = 107; break;
                    case 'y': state = 105; break;
                    case 'w': state = 84; break;
                    case 'S': state = 73; break;
                    case 'p': state = 94; break;
                    case '8': state = 85; break;
                    case 'n': state = 82; break;
                    case 'h': state = 112; break;
                    case 'Z': state = 67; break;
                    case 'o': state = 106; break;
                    case 'u': state = 92; break;
                    case 'Y': state = 97; break;
                    case 'X': state = 101; break;
                    case 'x': state = 71; break;
                    case 't': state = 23; break;
                    case 'k': state = 89; break;
                    case 'O': state = 66; break;
                    case 'H': state = 68; break;
                    case 'j': state = 110; break;
                    case 'G': state = 104; break;
                    case 'c': state = 113; break;
                    case 'm': state = 77; break;
                    case '2': state = 72; break;
                    case 'q': state = 76; break;
                    case 'R': state = 108; break;
                    case 's': state = 61; break;
                    case 'P': state = 65; break;
                    case 'f': state = 91; break;
                    case 'l': state = 79; break;
                    case 'g': state = 80; break;
                    case 'A': state = 81; break;
                    case 'Q': state = 95; break;
                    case '1': state = 100; break;
                    case 'L': state = 64; break;
                    case 'K': state = 58; break;
                    case 'W': state = 98; break;
                    case '5': state = 111; break;
                    case 'z': state = 109; break;
                    case 'E': state = 70; break;
                    case 'e': state = 60; break;
                    case 'B': state = 78; break;
                    case 'b': state = 28; break;
                    case 'U': state = 103; break;
                    case 'N': state = 83; break;
                    case 'C': state = 88; break;
                    case '6': state = 27; break;
                    case 'v': state = 99; break;
                    case '0': state = 93; break;
                    case '3': state = 25; break;
                    case 'i': state = 69; break;
                    default: return std::find(finalNodes.begin(), finalNodes.end(), state) != finalNodes.end();
                }
                break;
            case 56: 
                switch(letter) {
                    case 'J': state = 24; break;
                    case '9': state = 44; break;
                    case 'a': state = 63; break;
                    case 'N': state = 83; break;
                    case 'F': state = 75; break;
                    case 'u': state = 92; break;
                    case 'B': state = 78; break;
                    case 'I': state = 74; break;
                    case 'X': state = 101; break;
                    case 'C': state = 88; break;
                    case 'W': state = 98; break;
                    case 'V': state = 96; break;
                    case 'f': state = 91; break;
                    case 'y': state = 105; break;
                    case 'm': state = 77; break;
                    case 'h': state = 112; break;
                    case 'M': state = 62; break;
                    case 't': state = 23; break;
                    case '7': state = 102; break;
                    case 'p': state = 94; break;
                    case 'D': state = 87; break;
                    case 's': state = 61; break;
                    case 'A': state = 81; break;
                    case '8': state = 85; break;
                    case 'Z': state = 67; break;
                    case 'P': state = 65; break;
                    case '4': state = 59; break;
                    case 'j': state = 110; break;
                    case 'R': state = 108; break;
                    case '5': state = 111; break;
                    case 'T': state = 107; break;
                    case 'x': state = 71; break;
                    case 'o': state = 106; break;
                    case 'd': state = 90; break;
                    case 'r': state = 26; break;
                    case 'k': state = 89; break;
                    case 'Q': state = 95; break;
                    case 'G': state = 104; break;
                    case 'c': state = 113; break;
                    case 'b': state = 28; break;
                    case 'q': state = 76; break;
                    case 'S': state = 73; break;
                    case 'i': state = 69; break;
                    case 'l': state = 79; break;
                    case 'g': state = 80; break;
                    case 'L': state = 64; break;
                    case 'e': state = 60; break;
                    case 'O': state = 66; break;
                    case '2': state = 72; break;
                    case 'K': state = 58; break;
                    case 'v': state = 99; break;
                    case 'Y': state = 97; break;
                    case '1': state = 100; break;
                    case 'n': state = 82; break;
                    case 'E': state = 70; break;
                    case 'H': state = 68; break;
                    case 'z': state = 109; break;
                    case 'U': state = 103; break;
                    case 'w': state = 84; break;
                    case '0': state = 93; break;
                    case '3': state = 25; break;
                    case '6': state = 27; break;
                    default: return std::find(finalNodes.begin(), finalNodes.end(), state) != finalNodes.end();
                }
                break;
            case 57: 
                switch(letter) {
                    case 'J': state = 24; break;
                    case 'C': state = 88; break;
                    case 'r': state = 26; break;
                    case 'U': state = 103; break;
                    case 'H': state = 68; break;
                    case 't': state = 23; break;
                    case 'S': state = 73; break;
                    case 'A': state = 81; break;
                    case 'x': state = 71; break;
                    case 'N': state = 83; break;
                    case 'I': state = 74; break;
                    case 'V': state = 96; break;
                    case 'y': state = 105; break;
                    case 'h': state = 112; break;
                    case 'M': state = 62; break;
                    case '7': state = 102; break;
                    case 'c': state = 113; break;
                    case 'f': state = 91; break;
                    case 'E': state = 70; break;
                    case 'j': state = 110; break;
                    case '0': state = 93; break;
                    case 'u': state = 92; break;
                    case 'k': state = 89; break;
                    case 'T': state = 107; break;
                    case 'd': state = 90; break;
                    case 'X': state = 101; break;
                    case 'W': state = 98; break;
                    case 'Q': state = 95; break;
                    case '4': state = 59; break;
                    case 'e': state = 60; break;
                    case 'Z': state = 67; break;
                    case 'n': state = 82; break;
                    case 'R': state = 108; break;
                    case 'p': state = 94; break;
                    case '2': state = 72; break;
                    case 'm': state = 77; break;
                    case 'F': state = 75; break;
                    case 's': state = 61; break;
                    case 'P': state = 65; break;
                    case 'i': state = 69; break;
                    case 'l': state = 79; break;
                    case 'g': state = 80; break;
                    case 'o': state = 106; break;
                    case 'q': state = 76; break;
                    case '1': state = 100; break;
                    case '5': state = 111; break;
                    case 'D': state = 87; break;
                    case 'L': state = 64; break;
                    case 'b': state = 28; break;
                    case 'v': state = 99; break;
                    case 'z': state = 109; break;
                    case '9': state = 44; break;
                    case '8': state = 85; break;
                    case 'Y': state = 97; break;
                    case 'O': state = 66; break;
                    case 'B': state = 78; break;
                    case 'G': state = 104; break;
                    case 'K': state = 58; break;
                    case 'a': state = 63; break;
                    case 'w': state = 84; break;
                    case '3': state = 25; break;
                    case '6': state = 27; break;
                    default: return std::find(finalNodes.begin(), finalNodes.end(), state) != finalNodes.end();
                }
                break;
            case 58: 
                switch(letter) {
                    case '9': state = 44; break;
                    case 'J': state = 24; break;
                    case 's': state = 61; break;
                    case 'a': state = 63; break;
                    case 'r': state = 26; break;
                    case 'z': state = 109; break;
                    case '2': state = 72; break;
                    case '4': state = 59; break;
                    case 'p': state = 94; break;
                    case 'k': state = 89; break;
                    case 'V': state = 96; break;
                    case 'b': state = 28; break;
                    case 'I': state = 74; break;
                    case '0': state = 93; break;
                    case 'A': state = 81; break;
                    case 'P': state = 65; break;
                    case 'Y': state = 97; break;
                    case 'h': state = 112; break;
                    case 'D': state = 87; break;
                    case 'X': state = 101; break;
                    case 't': state = 23; break;
                    case 'Q': state = 95; break;
                    case 'R': state = 108; break;
                    case 'M': state = 62; break;
                    case 'c': state = 113; break;
                    case 'j': state = 110; break;
                    case 'o': state = 106; break;
                    case 'd': state = 90; break;
                    case 'O': state = 66; break;
                    case 'Z': state = 67; break;
                    case 'N': state = 83; break;
                    case 'm': state = 77; break;
                    case 'n': state = 82; break;
                    case 'e': state = 60; break;
                    case 'q': state = 76; break;
                    case 'v': state = 99; break;
                    case '1': state = 100; break;
                    case 'F': state = 75; break;
                    case 'E': state = 70; break;
                    case 'T': state = 107; break;
                    case 'G': state = 104; break;
                    case '7': state = 102; break;
                    case 'H': state = 68; break;
                    case 'l': state = 79; break;
                    case 'K': state = 58; break;
                    case '8': state = 85; break;
                    case 'g': state = 80; break;
                    case 'C': state = 88; break;
                    case '6': state = 27; break;
                    case 'U': state = 103; break;
                    case 'u': state = 92; break;
                    case '5': state = 111; break;
                    case 'x': state = 71; break;
                    case 'S': state = 73; break;
                    case 'i': state = 69; break;
                    case 'B': state = 78; break;
                    case 'f': state = 91; break;
                    case 'L': state = 64; break;
                    case '3': state = 25; break;
                    case 'y': state = 105; break;
                    case 'W': state = 98; break;
                    case 'w': state = 84; break;
                    default: return std::find(finalNodes.begin(), finalNodes.end(), state) != finalNodes.end();
                }
                break;
            case 59: 
                switch(letter) {
                    case 'F': state = 75; break;
                    case 'r': state = 26; break;
                    case 'C': state = 88; break;
                    case '2': state = 72; break;
                    case 'm': state = 77; break;
                    case 'R': state = 108; break;
                    case 'I': state = 74; break;
                    case 'h': state = 112; break;
                    case 'j': state = 110; break;
                    case 'M': state = 62; break;
                    case '3': state = 25; break;
                    case 'V': state = 96; break;
                    case 'A': state = 81; break;
                    case 'P': state = 65; break;
                    case 's': state = 61; break;
                    case 'l': state = 79; break;
                    case 'E': state = 70; break;
                    case 'T': state = 107; break;
                    case 'D': state = 87; break;
                    case 'N': state = 83; break;
                    case '5': state = 111; break;
                    case 't': state = 23; break;
                    case 'e': state = 60; break;
                    case 'X': state = 101; break;
                    case 'W': state = 98; break;
                    case 'Y': state = 97; break;
                    case 'y': state = 105; break;
                    case 'S': state = 73; break;
                    case '0': state = 93; break;
                    case '4': state = 59; break;
                    case 'Q': state = 95; break;
                    case 'u': state = 92; break;
                    case 'p': state = 94; break;
                    case 'n': state = 82; break;
                    case 'G': state = 104; break;
                    case 'q': state = 76; break;
                    case 'g': state = 80; break;
                    case 'c': state = 113; break;
                    case 'O': state = 66; break;
                    case 'z': state = 109; break;
                    case 'L': state = 64; break;
                    case 'J': state = 24; break;
                    case '1': state = 100; break;
                    case 'k': state = 89; break;
                    case 'K': state = 58; break;
                    case 'U': state = 103; break;
                    case 'o': state = 106; break;
                    case 'Z': state = 67; break;
                    case 'w': state = 84; break;
                    case 'B': state = 78; break;
                    case 'x': state = 71; break;
                    case 'a': state = 63; break;
                    case 'i': state = 69; break;
                    case 'H': state = 68; break;
                    case '8': state = 85; break;
                    case 'v': state = 99; break;
                    case 'b': state = 28; break;
                    case '9': state = 44; break;
                    case '6': state = 27; break;
                    case '7': state = 102; break;
                    case 'd': state = 90; break;
                    case 'f': state = 91; break;
                    default: return std::find(finalNodes.begin(), finalNodes.end(), state) != finalNodes.end();
                }
                break;
            case 60: 
                switch(letter) {
                    case 'J': state = 24; break;
                    case '9': state = 44; break;
                    case 'f': state = 91; break;
                    case 'G': state = 104; break;
                    case 'R': state = 108; break;
                    case 'B': state = 78; break;
                    case 'v': state = 99; break;
                    case 'W': state = 98; break;
                    case 'Y': state = 97; break;
                    case 't': state = 23; break;
                    case 'M': state = 62; break;
                    case '0': state = 93; break;
                    case 'l': state = 79; break;
                    case 'g': state = 80; break;
                    case 'V': state = 96; break;
                    case 'b': state = 28; break;
                    case 'y': state = 105; break;
                    case 'r': state = 26; break;
                    case '4': state = 59; break;
                    case 'Q': state = 95; break;
                    case 'p': state = 94; break;
                    case 'T': state = 107; break;
                    case 'P': state = 65; break;
                    case 's': state = 61; break;
                    case 'n': state = 82; break;
                    case 'q': state = 76; break;
                    case 'e': state = 60; break;
                    case 'x': state = 71; break;
                    case 'F': state = 75; break;
                    case 'I': state = 74; break;
                    case 'z': state = 109; break;
                    case '2': state = 72; break;
                    case '1': state = 100; break;
                    case '3': state = 25; break;
                    case 'd': state = 90; break;
                    case 'c': state = 113; break;
                    case 'A': state = 81; break;
                    case 'K': state = 58; break;
                    case '6': state = 27; break;
                    case 'm': state = 77; break;
                    case '5': state = 111; break;
                    case 'a': state = 63; break;
                    case 'U': state = 103; break;
                    case 'H': state = 68; break;
                    case 'D': state = 87; break;
                    case 'E': state = 70; break;
                    case 'X': state = 101; break;
                    case 'O': state = 66; break;
                    case 'o': state = 106; break;
                    case 'S': state = 73; break;
                    case 'w': state = 84; break;
                    case 'i': state = 69; break;
                    case 'k': state = 89; break;
                    case 'Z': state = 67; break;
                    case 'h': state = 112; break;
                    case 'L': state = 64; break;
                    case '8': state = 85; break;
                    case 'u': state = 92; break;
                    case 'j': state = 110; break;
                    case '7': state = 102; break;
                    case 'N': state = 83; break;
                    case 'C': state = 88; break;
                    default: return std::find(finalNodes.begin(), finalNodes.end(), state) != finalNodes.end();
                }
                break;
            case 61: 
                switch(letter) {
                    case 'J': state = 24; break;
                    case '9': state = 44; break;
                    case 'f': state = 91; break;
                    case 'y': state = 105; break;
                    case 'C': state = 88; break;
                    case 'M': state = 62; break;
                    case 's': state = 61; break;
                    case '7': state = 102; break;
                    case 'p': state = 94; break;
                    case 'B': state = 78; break;
                    case 'S': state = 73; break;
                    case 'W': state = 98; break;
                    case 'H': state = 68; break;
                    case 't': state = 23; break;
                    case 'o': state = 106; break;
                    case 'Y': state = 97; break;
                    case '4': state = 59; break;
                    case '0': state = 93; break;
                    case 'T': state = 107; break;
                    case 'g': state = 80; break;
                    case 'Q': state = 95; break;
                    case 'V': state = 96; break;
                    case 'X': state = 101; break;
                    case 'P': state = 65; break;
                    case 'r': state = 26; break;
                    case 'b': state = 28; break;
                    case 'Z': state = 67; break;
                    case 'i': state = 69; break;
                    case 'q': state = 76; break;
                    case 'd': state = 90; break;
                    case 'e': state = 60; break;
                    case 'm': state = 77; break;
                    case '2': state = 72; break;
                    case 'I': state = 74; break;
                    case '1': state = 100; break;
                    case 'R': state = 108; break;
                    case 'n': state = 82; break;
                    case 'v': state = 99; break;
                    case 'c': state = 113; break;
                    case 'L': state = 64; break;
                    case 'h': state = 112; break;
                    case '6': state = 27; break;
                    case 'w': state = 84; break;
                    case 'D': state = 87; break;
                    case '8': state = 85; break;
                    case 'U': state = 103; break;
                    case 'G': state = 104; break;
                    case 'k': state = 89; break;
                    case 'F': state = 75; break;
                    case 'j': state = 110; break;
                    case '5': state = 111; break;
                    case 'A': state = 81; break;
                    case 'E': state = 70; break;
                    case '3': state = 25; break;
                    case 'l': state = 79; break;
                    case 'O': state = 66; break;
                    case 'z': state = 109; break;
                    case 'a': state = 63; break;
                    case 'x': state = 71; break;
                    case 'K': state = 58; break;
                    case 'u': state = 92; break;
                    case 'N': state = 83; break;
                    default: return std::find(finalNodes.begin(), finalNodes.end(), state) != finalNodes.end();
                }
                break;
            case 62: 
                switch(letter) {
                    case 'J': state = 24; break;
                    case '1': state = 100; break;
                    case 'F': state = 75; break;
                    case '9': state = 44; break;
                    case 'W': state = 98; break;
                    case 'p': state = 94; break;
                    case '7': state = 102; break;
                    case 'z': state = 109; break;
                    case 's': state = 61; break;
                    case 'G': state = 104; break;
                    case 'X': state = 101; break;
                    case '0': state = 93; break;
                    case 'v': state = 99; break;
                    case 'n': state = 82; break;
                    case 'I': state = 74; break;
                    case 'N': state = 83; break;
                    case '4': state = 59; break;
                    case 'c': state = 113; break;
                    case 'V': state = 96; break;
                    case 't': state = 23; break;
                    case 'Q': state = 95; break;
                    case 'y': state = 105; break;
                    case 'x': state = 71; break;
                    case 'T': state = 107; break;
                    case 'B': state = 78; break;
                    case 'Y': state = 97; break;
                    case 'S': state = 73; break;
                    case 'D': state = 87; break;
                    case 'M': state = 62; break;
                    case 'R': state = 108; break;
                    case 'E': state = 70; break;
                    case 'Z': state = 67; break;
                    case 'h': state = 112; break;
                    case '2': state = 72; break;
                    case 'u': state = 92; break;
                    case 'j': state = 110; break;
                    case 'K': state = 58; break;
                    case 'H': state = 68; break;
                    case 'k': state = 89; break;
                    case '5': state = 111; break;
                    case 'L': state = 64; break;
                    case '8': state = 85; break;
                    case 'd': state = 90; break;
                    case 'o': state = 106; break;
                    case '3': state = 25; break;
                    case 'm': state = 77; break;
                    case 'i': state = 69; break;
                    case 'l': state = 79; break;
                    case 'A': state = 81; break;
                    case 'O': state = 66; break;
                    case 'U': state = 103; break;
                    case 'P': state = 65; break;
                    case 'g': state = 80; break;
                    case 'a': state = 63; break;
                    case 'w': state = 84; break;
                    case 'e': state = 60; break;
                    case '6': state = 27; break;
                    case 'b': state = 28; break;
                    case 'q': state = 76; break;
                    case 'r': state = 26; break;
                    case 'f': state = 91; break;
                    case 'C': state = 88; break;
                    default: return std::find(finalNodes.begin(), finalNodes.end(), state) != finalNodes.end();
                }
                break;
            case 63: 
                switch(letter) {
                    case 'J': state = 24; break;
                    case 'l': state = 79; break;
                    case 'F': state = 75; break;
                    case '9': state = 44; break;
                    case 'W': state = 98; break;
                    case '7': state = 102; break;
                    case 'f': state = 91; break;
                    case 'X': state = 101; break;
                    case 'x': state = 71; break;
                    case 'O': state = 66; break;
                    case 's': state = 61; break;
                    case 'p': state = 94; break;
                    case 'V': state = 96; break;
                    case 'i': state = 69; break;
                    case 't': state = 23; break;
                    case 'v': state = 99; break;
                    case 'h': state = 112; break;
                    case 'g': state = 80; break;
                    case '0': state = 93; break;
                    case 'y': state = 105; break;
                    case 'Z': state = 67; break;
                    case 'd': state = 90; break;
                    case '4': state = 59; break;
                    case 'Q': state = 95; break;
                    case 'c': state = 113; break;
                    case 'u': state = 92; break;
                    case 'M': state = 62; break;
                    case 'B': state = 78; break;
                    case 'Y': state = 97; break;
                    case 'S': state = 73; break;
                    case '2': state = 72; break;
                    case 'P': state = 65; break;
                    case 'q': state = 76; break;
                    case 'k': state = 89; break;
                    case '3': state = 25; break;
                    case 'n': state = 82; break;
                    case 'R': state = 108; break;
                    case 'H': state = 68; break;
                    case 'D': state = 87; break;
                    case 'A': state = 81; break;
                    case 'K': state = 58; break;
                    case 'T': state = 107; break;
                    case 'I': state = 74; break;
                    case 'e': state = 60; break;
                    case '6': state = 27; break;
                    case 'j': state = 110; break;
                    case '5': state = 111; break;
                    case 'a': state = 63; break;
                    case 'E': state = 70; break;
                    case 'C': state = 88; break;
                    case '1': state = 100; break;
                    case 'm': state = 77; break;
                    case 'r': state = 26; break;
                    case 'z': state = 109; break;
                    case 'w': state = 84; break;
                    case 'G': state = 104; break;
                    case 'b': state = 28; break;
                    case 'o': state = 106; break;
                    case 'U': state = 103; break;
                    case '8': state = 85; break;
                    case 'L': state = 64; break;
                    case 'N': state = 83; break;
                    default: return std::find(finalNodes.begin(), finalNodes.end(), state) != finalNodes.end();
                }
                break;
            case 64: 
                switch(letter) {
                    case '9': state = 44; break;
                    case 't': state = 23; break;
                    case 'N': state = 83; break;
                    case 'z': state = 109; break;
                    case 'K': state = 58; break;
                    case 'r': state = 26; break;
                    case 'n': state = 82; break;
                    case '6': state = 27; break;
                    case 'W': state = 98; break;
                    case '5': state = 111; break;
                    case 'e': state = 60; break;
                    case 'I': state = 74; break;
                    case 'D': state = 87; break;
                    case 's': state = 61; break;
                    case 'U': state = 103; break;
                    case 'V': state = 96; break;
                    case 'X': state = 101; break;
                    case 'b': state = 28; break;
                    case 'a': state = 63; break;
                    case 'c': state = 113; break;
                    case 'M': state = 62; break;
                    case 'i': state = 69; break;
                    case 'v': state = 99; break;
                    case 'Q': state = 95; break;
                    case '0': state = 93; break;
                    case '3': state = 25; break;
                    case '4': state = 59; break;
                    case 'J': state = 24; break;
                    case 'Y': state = 97; break;
                    case 'h': state = 112; break;
                    case 'G': state = 104; break;
                    case 'S': state = 73; break;
                    case 'R': state = 108; break;
                    case 'p': state = 94; break;
                    case 'T': state = 107; break;
                    case 'q': state = 76; break;
                    case 'j': state = 110; break;
                    case 'k': state = 89; break;
                    case 'O': state = 66; break;
                    case 'B': state = 78; break;
                    case 'E': state = 70; break;
                    case 'P': state = 65; break;
                    case '7': state = 102; break;
                    case 'l': state = 79; break;
                    case 'C': state = 88; break;
                    case '8': state = 85; break;
                    case 'A': state = 81; break;
                    case 'L': state = 64; break;
                    case 'u': state = 92; break;
                    case 'H': state = 68; break;
                    case 'Z': state = 67; break;
                    case 'F': state = 75; break;
                    case 'm': state = 77; break;
                    case '1': state = 100; break;
                    case 'g': state = 80; break;
                    case 'd': state = 90; break;
                    case 'w': state = 84; break;
                    case 'x': state = 71; break;
                    case 'f': state = 91; break;
                    case 'o': state = 106; break;
                    case '2': state = 72; break;
                    case 'y': state = 105; break;
                    default: return std::find(finalNodes.begin(), finalNodes.end(), state) != finalNodes.end();
                }
                break;
            case 65: 
                switch(letter) {
                    case 't': state = 23; break;
                    case 'J': state = 24; break;
                    case 'N': state = 83; break;
                    case 'z': state = 109; break;
                    case '6': state = 27; break;
                    case 'n': state = 82; break;
                    case '5': state = 111; break;
                    case 'K': state = 58; break;
                    case 'f': state = 91; break;
                    case 'y': state = 105; break;
                    case 'q': state = 76; break;
                    case 'G': state = 104; break;
                    case 'I': state = 74; break;
                    case 'U': state = 103; break;
                    case 'b': state = 28; break;
                    case 'T': state = 107; break;
                    case 'c': state = 113; break;
                    case 'v': state = 99; break;
                    case 'M': state = 62; break;
                    case '7': state = 102; break;
                    case '4': state = 59; break;
                    case 'k': state = 89; break;
                    case 'r': state = 26; break;
                    case 's': state = 61; break;
                    case 'Q': state = 95; break;
                    case 'o': state = 106; break;
                    case 'D': state = 87; break;
                    case 'h': state = 112; break;
                    case 'Y': state = 97; break;
                    case 'P': state = 65; break;
                    case 'i': state = 69; break;
                    case 'j': state = 110; break;
                    case '0': state = 93; break;
                    case '3': state = 25; break;
                    case 'w': state = 84; break;
                    case 'p': state = 94; break;
                    case 'S': state = 73; break;
                    case 'W': state = 98; break;
                    case 'C': state = 88; break;
                    case 'g': state = 80; break;
                    case 'E': state = 70; break;
                    case 'X': state = 101; break;
                    case 'O': state = 66; break;
                    case 'B': state = 78; break;
                    case 'L': state = 64; break;
                    case 'l': state = 79; break;
                    case '9': state = 44; break;
                    case 'A': state = 81; break;
                    case '8': state = 85; break;
                    case 'Z': state = 67; break;
                    case 'F': state = 75; break;
                    case 'R': state = 108; break;
                    case 'H': state = 68; break;
                    case 'a': state = 63; break;
                    case 'm': state = 77; break;
                    case 'u': state = 92; break;
                    case 'x': state = 71; break;
                    case 'd': state = 90; break;
                    case 'V': state = 96; break;
                    case 'e': state = 60; break;
                    case '2': state = 72; break;
                    case '1': state = 100; break;
                    default: return std::find(finalNodes.begin(), finalNodes.end(), state) != finalNodes.end();
                }
                break;
            case 66: 
                switch(letter) {
                    case 't': state = 23; break;
                    case 'J': state = 24; break;
                    case 'z': state = 109; break;
                    case '3': state = 25; break;
                    case 'r': state = 26; break;
                    case '6': state = 27; break;
                    case 'n': state = 82; break;
                    case 'K': state = 58; break;
                    case 'f': state = 91; break;
                    case 'y': state = 105; break;
                    case 'X': state = 101; break;
                    case 'W': state = 98; break;
                    case '5': state = 111; break;
                    case 'O': state = 66; break;
                    case 'U': state = 103; break;
                    case 'S': state = 73; break;
                    case 's': state = 61; break;
                    case 'V': state = 96; break;
                    case 'T': state = 107; break;
                    case 'B': state = 78; break;
                    case 'P': state = 65; break;
                    case '7': state = 102; break;
                    case 'm': state = 77; break;
                    case 'M': state = 62; break;
                    case 'x': state = 71; break;
                    case 'G': state = 104; break;
                    case 'c': state = 113; break;
                    case 'D': state = 87; break;
                    case 'v': state = 99; break;
                    case '4': state = 59; break;
                    case 'l': state = 79; break;
                    case 'o': state = 106; break;
                    case 'a': state = 63; break;
                    case 'h': state = 112; break;
                    case 'k': state = 89; break;
                    case 'p': state = 94; break;
                    case '0': state = 93; break;
                    case 'q': state = 76; break;
                    case 'Q': state = 95; break;
                    case 'd': state = 90; break;
                    case 'w': state = 84; break;
                    case 'i': state = 69; break;
                    case 'F': state = 75; break;
                    case 'Z': state = 67; break;
                    case 'I': state = 74; break;
                    case 'b': state = 28; break;
                    case '9': state = 44; break;
                    case 'A': state = 81; break;
                    case 'H': state = 68; break;
                    case 'E': state = 70; break;
                    case 'C': state = 88; break;
                    case 'g': state = 80; break;
                    case 'j': state = 110; break;
                    case 'R': state = 108; break;
                    case 'L': state = 64; break;
                    case '8': state = 85; break;
                    case '2': state = 72; break;
                    case 'u': state = 92; break;
                    case 'Y': state = 97; break;
                    case 'e': state = 60; break;
                    case 'N': state = 83; break;
                    case '1': state = 100; break;
                    default: return std::find(finalNodes.begin(), finalNodes.end(), state) != finalNodes.end();
                }
                break;
            case 67: 
                switch(letter) {
                    case '9': state = 44; break;
                    case 'z': state = 109; break;
                    case 't': state = 23; break;
                    case 'D': state = 87; break;
                    case '6': state = 27; break;
                    case 'n': state = 82; break;
                    case 'y': state = 105; break;
                    case 'K': state = 58; break;
                    case 'W': state = 98; break;
                    case 'g': state = 80; break;
                    case 'U': state = 103; break;
                    case 'S': state = 73; break;
                    case 'X': state = 101; break;
                    case 'T': state = 107; break;
                    case 'P': state = 65; break;
                    case '7': state = 102; break;
                    case 'M': state = 62; break;
                    case 'a': state = 63; break;
                    case 'c': state = 113; break;
                    case 'N': state = 83; break;
                    case 'o': state = 106; break;
                    case 'Q': state = 95; break;
                    case 'J': state = 24; break;
                    case 'G': state = 104; break;
                    case '1': state = 100; break;
                    case '4': state = 59; break;
                    case 'r': state = 26; break;
                    case 'v': state = 99; break;
                    case 'h': state = 112; break;
                    case '3': state = 25; break;
                    case 'Y': state = 97; break;
                    case '0': state = 93; break;
                    case 'B': state = 78; break;
                    case 'H': state = 68; break;
                    case 'p': state = 94; break;
                    case 'O': state = 66; break;
                    case 'w': state = 84; break;
                    case 'k': state = 89; break;
                    case '2': state = 72; break;
                    case 'Z': state = 67; break;
                    case 'F': state = 75; break;
                    case 'd': state = 90; break;
                    case 'q': state = 76; break;
                    case 'I': state = 74; break;
                    case 'R': state = 108; break;
                    case 'L': state = 64; break;
                    case '5': state = 111; break;
                    case '8': state = 85; break;
                    case 'i': state = 69; break;
                    case 'A': state = 81; break;
                    case 'E': state = 70; break;
                    case 'l': state = 79; break;
                    case 'm': state = 77; break;
                    case 's': state = 61; break;
                    case 'x': state = 71; break;
                    case 'u': state = 92; break;
                    case 'b': state = 28; break;
                    case 'j': state = 110; break;
                    case 'V': state = 96; break;
                    case 'C': state = 88; break;
                    case 'e': state = 60; break;
                    case 'f': state = 91; break;
                    default: return std::find(finalNodes.begin(), finalNodes.end(), state) != finalNodes.end();
                }
                break;
            case 68: 
                switch(letter) {
                    case 'z': state = 109; break;
                    case 'N': state = 83; break;
                    case 't': state = 23; break;
                    case 'K': state = 58; break;
                    case 'W': state = 98; break;
                    case '3': state = 25; break;
                    case 'G': state = 104; break;
                    case 'w': state = 84; break;
                    case 'g': state = 80; break;
                    case 's': state = 61; break;
                    case 'J': state = 24; break;
                    case 'V': state = 96; break;
                    case 'S': state = 73; break;
                    case 'M': state = 62; break;
                    case 'h': state = 112; break;
                    case 'r': state = 26; break;
                    case '6': state = 27; break;
                    case 'j': state = 110; break;
                    case '4': state = 59; break;
                    case 'D': state = 87; break;
                    case 'o': state = 106; break;
                    case 'v': state = 99; break;
                    case 'u': state = 92; break;
                    case 'c': state = 113; break;
                    case 'Q': state = 95; break;
                    case 'q': state = 76; break;
                    case 'p': state = 94; break;
                    case 'X': state = 101; break;
                    case 'R': state = 108; break;
                    case 'n': state = 82; break;
                    case 'i': state = 69; break;
                    case 'l': state = 79; break;
                    case 'Y': state = 97; break;
                    case 'I': state = 74; break;
                    case 'B': state = 78; break;
                    case '0': state = 93; break;
                    case '8': state = 85; break;
                    case 'H': state = 68; break;
                    case 'P': state = 65; break;
                    case 'k': state = 89; break;
                    case 'E': state = 70; break;
                    case 'T': state = 107; break;
                    case 'a': state = 63; break;
                    case 'U': state = 103; break;
                    case 'A': state = 81; break;
                    case '1': state = 100; break;
                    case 'Z': state = 67; break;
                    case 'F': state = 75; break;
                    case '9': state = 44; break;
                    case 'L': state = 64; break;
                    case 'm': state = 77; break;
                    case 'C': state = 88; break;
                    case 'f': state = 91; break;
                    case 'x': state = 71; break;
                    case '7': state = 102; break;
                    case 'e': state = 60; break;
                    case 'O': state = 66; break;
                    case '2': state = 72; break;
                    case 'd': state = 90; break;
                    case 'y': state = 105; break;
                    case '5': state = 111; break;
                    case 'b': state = 28; break;
                    default: return std::find(finalNodes.begin(), finalNodes.end(), state) != finalNodes.end();
                }
                break;
            case 69: 
                switch(letter) {
                    case 'z': state = 109; break;
                    case 'N': state = 83; break;
                    case 't': state = 23; break;
                    case 'n': state = 82; break;
                    case '5': state = 111; break;
                    case 'r': state = 26; break;
                    case 'W': state = 98; break;
                    case 'D': state = 87; break;
                    case 'h': state = 112; break;
                    case 'k': state = 89; break;
                    case 'A': state = 81; break;
                    case 'p': state = 94; break;
                    case 'K': state = 58; break;
                    case 'V': state = 96; break;
                    case 'X': state = 101; break;
                    case 'S': state = 73; break;
                    case 'I': state = 74; break;
                    case 'P': state = 65; break;
                    case 'c': state = 113; break;
                    case '6': state = 27; break;
                    case '4': state = 59; break;
                    case 'j': state = 110; break;
                    case 's': state = 61; break;
                    case 'o': state = 106; break;
                    case '3': state = 25; break;
                    case 'O': state = 66; break;
                    case 'v': state = 99; break;
                    case 'J': state = 24; break;
                    case 'M': state = 62; break;
                    case 'u': state = 92; break;
                    case 'Y': state = 97; break;
                    case '0': state = 93; break;
                    case 'a': state = 63; break;
                    case 'E': state = 70; break;
                    case 'G': state = 104; break;
                    case 'x': state = 71; break;
                    case 'q': state = 76; break;
                    case 'Z': state = 67; break;
                    case 'F': state = 75; break;
                    case 'U': state = 103; break;
                    case 'w': state = 84; break;
                    case 'T': state = 107; break;
                    case 'm': state = 77; break;
                    case 'R': state = 108; break;
                    case 'L': state = 64; break;
                    case 'i': state = 69; break;
                    case '9': state = 44; break;
                    case 'H': state = 68; break;
                    case '1': state = 100; break;
                    case 'l': state = 79; break;
                    case 'g': state = 80; break;
                    case 'B': state = 78; break;
                    case '8': state = 85; break;
                    case 'b': state = 28; break;
                    case '7': state = 102; break;
                    case 'f': state = 91; break;
                    case 'Q': state = 95; break;
                    case 'y': state = 105; break;
                    case 'd': state = 90; break;
                    case 'e': state = 60; break;
                    case '2': state = 72; break;
                    case 'C': state = 88; break;
                    default: return std::find(finalNodes.begin(), finalNodes.end(), state) != finalNodes.end();
                }
                break;
            case 70: 
                switch(letter) {
                    case 'z': state = 109; break;
                    case 'N': state = 83; break;
                    case 't': state = 23; break;
                    case '6': state = 27; break;
                    case '0': state = 93; break;
                    case 'V': state = 96; break;
                    case 'H': state = 68; break;
                    case 'K': state = 58; break;
                    case 'E': state = 70; break;
                    case 'a': state = 63; break;
                    case 's': state = 61; break;
                    case 'n': state = 82; break;
                    case 'r': state = 26; break;
                    case 'X': state = 101; break;
                    case 'D': state = 87; break;
                    case 'J': state = 24; break;
                    case 'S': state = 73; break;
                    case 'c': state = 113; break;
                    case 'l': state = 79; break;
                    case 'Q': state = 95; break;
                    case 'o': state = 106; break;
                    case 'p': state = 94; break;
                    case '4': state = 59; break;
                    case 'v': state = 99; break;
                    case 'g': state = 80; break;
                    case 'G': state = 104; break;
                    case '3': state = 25; break;
                    case '7': state = 102; break;
                    case 'M': state = 62; break;
                    case 'Y': state = 97; break;
                    case 'h': state = 112; break;
                    case 'A': state = 81; break;
                    case 'T': state = 107; break;
                    case 'w': state = 84; break;
                    case 'B': state = 78; break;
                    case 'e': state = 60; break;
                    case 'q': state = 76; break;
                    case 'W': state = 98; break;
                    case 'm': state = 77; break;
                    case 'u': state = 92; break;
                    case 'I': state = 74; break;
                    case 'k': state = 89; break;
                    case 'O': state = 66; break;
                    case 'Z': state = 67; break;
                    case 'F': state = 75; break;
                    case '9': state = 44; break;
                    case 'y': state = 105; break;
                    case 'R': state = 108; break;
                    case '8': state = 85; break;
                    case 'L': state = 64; break;
                    case 'C': state = 88; break;
                    case 'U': state = 103; break;
                    case 'P': state = 65; break;
                    case '2': state = 72; break;
                    case 'i': state = 69; break;
                    case 'x': state = 71; break;
                    case 'b': state = 28; break;
                    case 'f': state = 91; break;
                    case '1': state = 100; break;
                    case 'd': state = 90; break;
                    case 'j': state = 110; break;
                    case '5': state = 111; break;
                    default: return std::find(finalNodes.begin(), finalNodes.end(), state) != finalNodes.end();
                }
                break;
            case 71: 
                switch(letter) {
                    case 'z': state = 109; break;
                    case 'N': state = 83; break;
                    case 't': state = 23; break;
                    case 'G': state = 104; break;
                    case '6': state = 27; break;
                    case 'J': state = 24; break;
                    case 'f': state = 91; break;
                    case '0': state = 93; break;
                    case '5': state = 111; break;
                    case 'q': state = 76; break;
                    case 'K': state = 58; break;
                    case 'U': state = 103; break;
                    case 'I': state = 74; break;
                    case 'S': state = 73; break;
                    case 'W': state = 98; break;
                    case 'b': state = 28; break;
                    case 'E': state = 70; break;
                    case 'r': state = 26; break;
                    case 'M': state = 62; break;
                    case 'Q': state = 95; break;
                    case 'v': state = 99; break;
                    case '4': state = 59; break;
                    case 'o': state = 106; break;
                    case 'D': state = 87; break;
                    case 'Y': state = 97; break;
                    case 'l': state = 79; break;
                    case 'X': state = 101; break;
                    case 'h': state = 112; break;
                    case '3': state = 25; break;
                    case 'c': state = 113; break;
                    case 'B': state = 78; break;
                    case 's': state = 61; break;
                    case 'T': state = 107; break;
                    case 'g': state = 80; break;
                    case 'p': state = 94; break;
                    case 'C': state = 88; break;
                    case 'u': state = 92; break;
                    case 'w': state = 84; break;
                    case '9': state = 44; break;
                    case '1': state = 100; break;
                    case 'n': state = 82; break;
                    case 'H': state = 68; break;
                    case 'F': state = 75; break;
                    case 'Z': state = 67; break;
                    case 'y': state = 105; break;
                    case 'x': state = 71; break;
                    case '7': state = 102; break;
                    case 'A': state = 81; break;
                    case 'k': state = 89; break;
                    case 'm': state = 77; break;
                    case 'i': state = 69; break;
                    case '8': state = 85; break;
                    case 'P': state = 65; break;
                    case 'L': state = 64; break;
                    case 'R': state = 108; break;
                    case 'e': state = 60; break;
                    case 'a': state = 63; break;
                    case '2': state = 72; break;
                    case 'O': state = 66; break;
                    case 'V': state = 96; break;
                    case 'd': state = 90; break;
                    case 'j': state = 110; break;
                    default: return std::find(finalNodes.begin(), finalNodes.end(), state) != finalNodes.end();
                }
                break;
            case 72: 
                switch(letter) {
                    case 'K': state = 58; break;
                    case '9': state = 44; break;
                    case 's': state = 61; break;
                    case 'l': state = 79; break;
                    case 'g': state = 80; break;
                    case 'y': state = 105; break;
                    case 'W': state = 98; break;
                    case '1': state = 100; break;
                    case 'B': state = 78; break;
                    case 'O': state = 66; break;
                    case '5': state = 111; break;
                    case 'V': state = 96; break;
                    case '0': state = 93; break;
                    case 'p': state = 94; break;
                    case 't': state = 23; break;
                    case 'G': state = 104; break;
                    case 'I': state = 74; break;
                    case 'z': state = 109; break;
                    case '3': state = 25; break;
                    case 'D': state = 87; break;
                    case 'Y': state = 97; break;
                    case 'Q': state = 95; break;
                    case 'n': state = 82; break;
                    case 'J': state = 24; break;
                    case 'o': state = 106; break;
                    case 'M': state = 62; break;
                    case 'A': state = 81; break;
                    case 'w': state = 84; break;
                    case 'x': state = 71; break;
                    case 'T': state = 107; break;
                    case 'h': state = 112; break;
                    case 'L': state = 64; break;
                    case 'c': state = 113; break;
                    case 'H': state = 68; break;
                    case 'E': state = 70; break;
                    case 'e': state = 60; break;
                    case 'k': state = 89; break;
                    case 'S': state = 73; break;
                    case '2': state = 72; break;
                    case 'X': state = 101; break;
                    case 'R': state = 108; break;
                    case 'C': state = 88; break;
                    case 'm': state = 77; break;
                    case 'U': state = 103; break;
                    case '7': state = 102; break;
                    case 'F': state = 75; break;
                    case '4': state = 59; break;
                    case 'P': state = 65; break;
                    case 'f': state = 91; break;
                    case 'v': state = 99; break;
                    case '8': state = 85; break;
                    case 'd': state = 90; break;
                    case 'q': state = 76; break;
                    case 'i': state = 69; break;
                    case 'u': state = 92; break;
                    case 'N': state = 83; break;
                    case 'j': state = 110; break;
                    case 'r': state = 26; break;
                    case 'Z': state = 67; break;
                    case '6': state = 27; break;
                    case 'b': state = 28; break;
                    case 'a': state = 63; break;
                    default: return std::find(finalNodes.begin(), finalNodes.end(), state) != finalNodes.end();
                }
                break;
            case 73: 
                switch(letter) {
                    case 'F': state = 75; break;
                    case '9': state = 44; break;
                    case 'f': state = 91; break;
                    case '6': state = 27; break;
                    case 'y': state = 105; break;
                    case 'R': state = 108; break;
                    case 'p': state = 94; break;
                    case '4': state = 59; break;
                    case 'G': state = 104; break;
                    case 'I': state = 74; break;
                    case 'T': state = 107; break;
                    case 'B': state = 78; break;
                    case 'J': state = 24; break;
                    case 'A': state = 81; break;
                    case 'S': state = 73; break;
                    case 'V': state = 96; break;
                    case 'r': state = 26; break;
                    case 'W': state = 98; break;
                    case 'Q': state = 95; break;
                    case 'c': state = 113; break;
                    case 'o': state = 106; break;
                    case 'M': state = 62; break;
                    case 'm': state = 77; break;
                    case 'H': state = 68; break;
                    case 'g': state = 80; break;
                    case 'i': state = 69; break;
                    case '3': state = 25; break;
                    case 'n': state = 82; break;
                    case 'l': state = 79; break;
                    case 'v': state = 99; break;
                    case 'D': state = 87; break;
                    case '0': state = 93; break;
                    case 'L': state = 64; break;
                    case 'z': state = 109; break;
                    case 'X': state = 101; break;
                    case '7': state = 102; break;
                    case 't': state = 23; break;
                    case '5': state = 111; break;
                    case 'E': state = 70; break;
                    case 'h': state = 112; break;
                    case 'k': state = 89; break;
                    case '2': state = 72; break;
                    case 'a': state = 63; break;
                    case 'q': state = 76; break;
                    case 'j': state = 110; break;
                    case 'e': state = 60; break;
                    case 'w': state = 84; break;
                    case '1': state = 100; break;
                    case 'Z': state = 67; break;
                    case 'x': state = 71; break;
                    case 's': state = 61; break;
                    case 'K': state = 58; break;
                    case 'O': state = 66; break;
                    case 'Y': state = 97; break;
                    case 'u': state = 92; break;
                    case 'N': state = 83; break;
                    case 'P': state = 65; break;
                    case 'd': state = 90; break;
                    case 'U': state = 103; break;
                    case '8': state = 85; break;
                    case 'b': state = 28; break;
                    case 'C': state = 88; break;
                    default: return std::find(finalNodes.begin(), finalNodes.end(), state) != finalNodes.end();
                }
                break;
            case 74: 
                switch(letter) {
                    case 'K': state = 58; break;
                    case '3': state = 25; break;
                    case '6': state = 27; break;
                    case 'O': state = 66; break;
                    case 'y': state = 105; break;
                    case 'z': state = 109; break;
                    case 'J': state = 24; break;
                    case 'p': state = 94; break;
                    case 'V': state = 96; break;
                    case 'I': state = 74; break;
                    case 't': state = 23; break;
                    case 'P': state = 65; break;
                    case 'r': state = 26; break;
                    case 'W': state = 98; break;
                    case 'Y': state = 97; break;
                    case 'D': state = 87; break;
                    case '4': state = 59; break;
                    case 'H': state = 68; break;
                    case 'l': state = 79; break;
                    case 'n': state = 82; break;
                    case 'Z': state = 67; break;
                    case 'A': state = 81; break;
                    case '0': state = 93; break;
                    case 'Q': state = 95; break;
                    case 's': state = 61; break;
                    case 'R': state = 108; break;
                    case 'w': state = 84; break;
                    case '8': state = 85; break;
                    case 'h': state = 112; break;
                    case 'X': state = 101; break;
                    case 'M': state = 62; break;
                    case 'c': state = 113; break;
                    case '5': state = 111; break;
                    case '7': state = 102; break;
                    case 'F': state = 75; break;
                    case 'u': state = 92; break;
                    case 'm': state = 77; break;
                    case 'v': state = 99; break;
                    case 'T': state = 107; break;
                    case 'j': state = 110; break;
                    case 'o': state = 106; break;
                    case 'i': state = 69; break;
                    case 'a': state = 63; break;
                    case 'e': state = 60; break;
                    case 'S': state = 73; break;
                    case '9': state = 44; break;
                    case 'b': state = 28; break;
                    case 'q': state = 76; break;
                    case '2': state = 72; break;
                    case 'E': state = 70; break;
                    case 'k': state = 89; break;
                    case '1': state = 100; break;
                    case 'g': state = 80; break;
                    case 'C': state = 88; break;
                    case 'L': state = 64; break;
                    case 'x': state = 71; break;
                    case 'G': state = 104; break;
                    case 'U': state = 103; break;
                    case 'B': state = 78; break;
                    case 'f': state = 91; break;
                    case 'd': state = 90; break;
                    case 'N': state = 83; break;
                    default: return std::find(finalNodes.begin(), finalNodes.end(), state) != finalNodes.end();
                }
                break;
            case 75: 
                switch(letter) {
                    case 'K': state = 58; break;
                    case '9': state = 44; break;
                    case 'o': state = 106; break;
                    case 'r': state = 26; break;
                    case 'N': state = 83; break;
                    case '3': state = 25; break;
                    case 'y': state = 105; break;
                    case 'O': state = 66; break;
                    case 'z': state = 109; break;
                    case 'D': state = 87; break;
                    case 'p': state = 94; break;
                    case 'n': state = 82; break;
                    case 'T': state = 107; break;
                    case 'V': state = 96; break;
                    case 'I': state = 74; break;
                    case 't': state = 23; break;
                    case 'G': state = 104; break;
                    case 'E': state = 70; break;
                    case 's': state = 61; break;
                    case 'j': state = 110; break;
                    case 'W': state = 98; break;
                    case 'Y': state = 97; break;
                    case '4': state = 59; break;
                    case 'l': state = 79; break;
                    case 'x': state = 71; break;
                    case 'g': state = 80; break;
                    case 'v': state = 99; break;
                    case '1': state = 100; break;
                    case 'Z': state = 67; break;
                    case 'A': state = 81; break;
                    case 'J': state = 24; break;
                    case 'M': state = 62; break;
                    case 'Q': state = 95; break;
                    case '0': state = 93; break;
                    case 'S': state = 73; break;
                    case '6': state = 27; break;
                    case 'h': state = 112; break;
                    case 'L': state = 64; break;
                    case 'f': state = 91; break;
                    case 'P': state = 65; break;
                    case 'U': state = 103; break;
                    case '7': state = 102; break;
                    case '5': state = 111; break;
                    case '8': state = 85; break;
                    case 'm': state = 77; break;
                    case 'X': state = 101; break;
                    case 'R': state = 108; break;
                    case 'w': state = 84; break;
                    case 'H': state = 68; break;
                    case 'e': state = 60; break;
                    case 'F': state = 75; break;
                    case 'k': state = 89; break;
                    case 'c': state = 113; break;
                    case 'q': state = 76; break;
                    case 'u': state = 92; break;
                    case 'C': state = 88; break;
                    case 'i': state = 69; break;
                    case 'B': state = 78; break;
                    case '2': state = 72; break;
                    case 'a': state = 63; break;
                    case 'd': state = 90; break;
                    case 'b': state = 28; break;
                    default: return std::find(finalNodes.begin(), finalNodes.end(), state) != finalNodes.end();
                }
                break;
            case 76: 
                switch(letter) {
                    case 'K': state = 58; break;
                    case 'F': state = 75; break;
                    case 'w': state = 84; break;
                    case 'k': state = 89; break;
                    case 'N': state = 83; break;
                    case 'o': state = 106; break;
                    case 'r': state = 26; break;
                    case '3': state = 25; break;
                    case '6': state = 27; break;
                    case 'v': state = 99; break;
                    case 'W': state = 98; break;
                    case 'f': state = 91; break;
                    case 'y': state = 105; break;
                    case 'T': state = 107; break;
                    case 'A': state = 81; break;
                    case 'z': state = 109; break;
                    case 'a': state = 63; break;
                    case 's': state = 61; break;
                    case 'S': state = 73; break;
                    case 'Q': state = 95; break;
                    case 'm': state = 77; break;
                    case '4': state = 59; break;
                    case 'j': state = 110; break;
                    case 'p': state = 94; break;
                    case '1': state = 100; break;
                    case 't': state = 23; break;
                    case 'G': state = 104; break;
                    case 'n': state = 82; break;
                    case 'D': state = 87; break;
                    case 'l': state = 79; break;
                    case 'J': state = 24; break;
                    case '0': state = 93; break;
                    case 'h': state = 112; break;
                    case 'B': state = 78; break;
                    case 'I': state = 74; break;
                    case 'e': state = 60; break;
                    case 'M': state = 62; break;
                    case 'R': state = 108; break;
                    case '7': state = 102; break;
                    case 'X': state = 101; break;
                    case 'E': state = 70; break;
                    case '2': state = 72; break;
                    case 'H': state = 68; break;
                    case 'Z': state = 67; break;
                    case '5': state = 111; break;
                    case 'd': state = 90; break;
                    case '9': state = 44; break;
                    case 'i': state = 69; break;
                    case 'g': state = 80; break;
                    case 'q': state = 76; break;
                    case 'c': state = 113; break;
                    case 'L': state = 64; break;
                    case '8': state = 85; break;
                    case 'P': state = 65; break;
                    case 'C': state = 88; break;
                    case 'x': state = 71; break;
                    case 'U': state = 103; break;
                    case 'Y': state = 97; break;
                    case 'V': state = 96; break;
                    case 'u': state = 92; break;
                    case 'b': state = 28; break;
                    case 'O': state = 66; break;
                    default: return std::find(finalNodes.begin(), finalNodes.end(), state) != finalNodes.end();
                }
                break;
            case 77: 
                switch(letter) {
                    case 'K': state = 58; break;
                    case 'F': state = 75; break;
                    case 'o': state = 106; break;
                    case 'N': state = 83; break;
                    case 'r': state = 26; break;
                    case '3': state = 25; break;
                    case 'y': state = 105; break;
                    case '6': state = 27; break;
                    case 'v': state = 99; break;
                    case 'O': state = 66; break;
                    case 'W': state = 98; break;
                    case '0': state = 93; break;
                    case 'z': state = 109; break;
                    case 'A': state = 81; break;
                    case 'P': state = 65; break;
                    case 'V': state = 96; break;
                    case 's': state = 61; break;
                    case 'c': state = 113; break;
                    case 'Y': state = 97; break;
                    case 't': state = 23; break;
                    case 'Q': state = 95; break;
                    case '4': state = 59; break;
                    case 'n': state = 82; break;
                    case 'G': state = 104; break;
                    case 'D': state = 87; break;
                    case 'l': state = 79; break;
                    case 'j': state = 110; break;
                    case 'X': state = 101; break;
                    case 'I': state = 74; break;
                    case 'm': state = 77; break;
                    case '9': state = 44; break;
                    case 'Z': state = 67; break;
                    case 'R': state = 108; break;
                    case 'u': state = 92; break;
                    case '1': state = 100; break;
                    case 'T': state = 107; break;
                    case 'h': state = 112; break;
                    case 'e': state = 60; break;
                    case 'a': state = 63; break;
                    case 'M': state = 62; break;
                    case 'H': state = 68; break;
                    case '2': state = 72; break;
                    case 'k': state = 89; break;
                    case 'p': state = 94; break;
                    case 'J': state = 24; break;
                    case 'f': state = 91; break;
                    case 'w': state = 84; break;
                    case 'S': state = 73; break;
                    case '7': state = 102; break;
                    case 'q': state = 76; break;
                    case 'i': state = 69; break;
                    case 'E': state = 70; break;
                    case '8': state = 85; break;
                    case 'C': state = 88; break;
                    case 'g': state = 80; break;
                    case 'x': state = 71; break;
                    case 'U': state = 103; break;
                    case 'B': state = 78; break;
                    case '5': state = 111; break;
                    case 'd': state = 90; break;
                    case 'L': state = 64; break;
                    case 'b': state = 28; break;
                    default: return std::find(finalNodes.begin(), finalNodes.end(), state) != finalNodes.end();
                }
                break;
            case 78: 
                switch(letter) {
                    case 'K': state = 58; break;
                    case 'N': state = 83; break;
                    case 'y': state = 105; break;
                    case '6': state = 27; break;
                    case 'r': state = 26; break;
                    case '3': state = 25; break;
                    case 'U': state = 103; break;
                    case 'z': state = 109; break;
                    case 'V': state = 96; break;
                    case 'j': state = 110; break;
                    case 'i': state = 69; break;
                    case 'c': state = 113; break;
                    case 'Q': state = 95; break;
                    case 'X': state = 101; break;
                    case 'v': state = 99; break;
                    case 'f': state = 91; break;
                    case 'G': state = 104; break;
                    case 'S': state = 73; break;
                    case '0': state = 93; break;
                    case 'J': state = 24; break;
                    case 'D': state = 87; break;
                    case 'l': state = 79; break;
                    case 'h': state = 112; break;
                    case 's': state = 61; break;
                    case '4': state = 59; break;
                    case 'M': state = 62; break;
                    case 'Y': state = 97; break;
                    case 'm': state = 77; break;
                    case 'R': state = 108; break;
                    case 'p': state = 94; break;
                    case 'B': state = 78; break;
                    case 'A': state = 81; break;
                    case 'I': state = 74; break;
                    case 'n': state = 82; break;
                    case 'T': state = 107; break;
                    case 'k': state = 89; break;
                    case 'g': state = 80; break;
                    case 'P': state = 65; break;
                    case 'H': state = 68; break;
                    case 'o': state = 106; break;
                    case '8': state = 85; break;
                    case 'e': state = 60; break;
                    case '7': state = 102; break;
                    case 'Z': state = 67; break;
                    case 'a': state = 63; break;
                    case 'E': state = 70; break;
                    case 't': state = 23; break;
                    case '9': state = 44; break;
                    case '2': state = 72; break;
                    case 'w': state = 84; break;
                    case 'q': state = 76; break;
                    case 'x': state = 71; break;
                    case 'F': state = 75; break;
                    case '5': state = 111; break;
                    case 'C': state = 88; break;
                    case 'u': state = 92; break;
                    case '1': state = 100; break;
                    case 'd': state = 90; break;
                    case 'W': state = 98; break;
                    case 'b': state = 28; break;
                    case 'O': state = 66; break;
                    case 'L': state = 64; break;
                    default: return std::find(finalNodes.begin(), finalNodes.end(), state) != finalNodes.end();
                }
                break;
            case 79: 
                switch(letter) {
                    case 'K': state = 58; break;
                    case 'N': state = 83; break;
                    case 'r': state = 26; break;
                    case 'W': state = 98; break;
                    case '6': state = 27; break;
                    case 'y': state = 105; break;
                    case '3': state = 25; break;
                    case 'O': state = 66; break;
                    case 'V': state = 96; break;
                    case 'k': state = 89; break;
                    case 'z': state = 109; break;
                    case 'Q': state = 95; break;
                    case 'c': state = 113; break;
                    case 'd': state = 90; break;
                    case '4': state = 59; break;
                    case 'i': state = 69; break;
                    case 'M': state = 62; break;
                    case 'G': state = 104; break;
                    case 'J': state = 24; break;
                    case 't': state = 23; break;
                    case 'f': state = 91; break;
                    case '5': state = 111; break;
                    case 'X': state = 101; break;
                    case 'D': state = 87; break;
                    case '0': state = 93; break;
                    case 'U': state = 103; break;
                    case 'j': state = 110; break;
                    case 'o': state = 106; break;
                    case 's': state = 61; break;
                    case 'I': state = 74; break;
                    case 'R': state = 108; break;
                    case 'B': state = 78; break;
                    case 'T': state = 107; break;
                    case 'l': state = 79; break;
                    case 'E': state = 70; break;
                    case 'h': state = 112; break;
                    case '9': state = 44; break;
                    case 'F': state = 75; break;
                    case 'w': state = 84; break;
                    case 'L': state = 64; break;
                    case 'n': state = 82; break;
                    case '2': state = 72; break;
                    case 'Z': state = 67; break;
                    case '7': state = 102; break;
                    case '8': state = 85; break;
                    case 'g': state = 80; break;
                    case 'P': state = 65; break;
                    case 'p': state = 94; break;
                    case 'e': state = 60; break;
                    case 'Y': state = 97; break;
                    case '1': state = 100; break;
                    case 'S': state = 73; break;
                    case 'm': state = 77; break;
                    case 'H': state = 68; break;
                    case 'q': state = 76; break;
                    case 'C': state = 88; break;
                    case 'A': state = 81; break;
                    case 'x': state = 71; break;
                    case 'a': state = 63; break;
                    case 'b': state = 28; break;
                    case 'v': state = 99; break;
                    case 'u': state = 92; break;
                    default: return std::find(finalNodes.begin(), finalNodes.end(), state) != finalNodes.end();
                }
                break;
            case 80: 
                switch(letter) {
                    case 'K': state = 58; break;
                    case 'F': state = 75; break;
                    case 'v': state = 99; break;
                    case '9': state = 44; break;
                    case 'y': state = 105; break;
                    case 'C': state = 88; break;
                    case 'W': state = 98; break;
                    case 'f': state = 91; break;
                    case 'I': state = 74; break;
                    case '5': state = 111; break;
                    case 'k': state = 89; break;
                    case 'n': state = 82; break;
                    case 'z': state = 109; break;
                    case 'e': state = 60; break;
                    case 'A': state = 81; break;
                    case 'V': state = 96; break;
                    case '4': state = 59; break;
                    case 'S': state = 73; break;
                    case 'i': state = 69; break;
                    case 'm': state = 77; break;
                    case 'T': state = 107; break;
                    case 't': state = 23; break;
                    case 'r': state = 26; break;
                    case '6': state = 27; break;
                    case '3': state = 25; break;
                    case 'M': state = 62; break;
                    case 'P': state = 65; break;
                    case 'X': state = 101; break;
                    case 'o': state = 106; break;
                    case 'h': state = 112; break;
                    case 'H': state = 68; break;
                    case 'l': state = 79; break;
                    case 'E': state = 70; break;
                    case 'J': state = 24; break;
                    case 'B': state = 78; break;
                    case 'D': state = 87; break;
                    case 's': state = 61; break;
                    case '2': state = 72; break;
                    case 'c': state = 113; break;
                    case 'a': state = 63; break;
                    case 'R': state = 108; break;
                    case 'j': state = 110; break;
                    case 'Z': state = 67; break;
                    case 'Y': state = 97; break;
                    case 'g': state = 80; break;
                    case 'q': state = 76; break;
                    case 'L': state = 64; break;
                    case 'G': state = 104; break;
                    case 'U': state = 103; break;
                    case 'b': state = 28; break;
                    case '8': state = 85; break;
                    case 'Q': state = 95; break;
                    case '7': state = 102; break;
                    case 'N': state = 83; break;
                    case 'd': state = 90; break;
                    case 'x': state = 71; break;
                    case 'O': state = 66; break;
                    case 'p': state = 94; break;
                    case '0': state = 93; break;
                    case 'w': state = 84; break;
                    case '1': state = 100; break;
                    case 'u': state = 92; break;
                    default: return std::find(finalNodes.begin(), finalNodes.end(), state) != finalNodes.end();
                }
                break;
            case 81: 
                switch(letter) {
                    case 'K': state = 58; break;
                    case '9': state = 44; break;
                    case 'F': state = 75; break;
                    case 'v': state = 99; break;
                    case 'q': state = 76; break;
                    case 'n': state = 82; break;
                    case 'T': state = 107; break;
                    case 'A': state = 81; break;
                    case 'V': state = 96; break;
                    case 'D': state = 87; break;
                    case 'k': state = 89; break;
                    case '4': state = 59; break;
                    case 'i': state = 69; break;
                    case 't': state = 23; break;
                    case 'z': state = 109; break;
                    case 'X': state = 101; break;
                    case '3': state = 25; break;
                    case '6': state = 27; break;
                    case 'r': state = 26; break;
                    case 'P': state = 65; break;
                    case 'o': state = 106; break;
                    case '0': state = 93; break;
                    case 'W': state = 98; break;
                    case 'h': state = 112; break;
                    case 'M': state = 62; break;
                    case 'l': state = 79; break;
                    case 'c': state = 113; break;
                    case 'J': state = 24; break;
                    case 'e': state = 60; break;
                    case 'w': state = 84; break;
                    case 'C': state = 88; break;
                    case 'H': state = 68; break;
                    case '2': state = 72; break;
                    case 'E': state = 70; break;
                    case 'B': state = 78; break;
                    case 'U': state = 103; break;
                    case 'R': state = 108; break;
                    case 'S': state = 73; break;
                    case 'L': state = 64; break;
                    case 'O': state = 66; break;
                    case 'm': state = 77; break;
                    case 'u': state = 92; break;
                    case 'Z': state = 67; break;
                    case 'j': state = 110; break;
                    case 'I': state = 74; break;
                    case '8': state = 85; break;
                    case 'p': state = 94; break;
                    case 'd': state = 90; break;
                    case 'Q': state = 95; break;
                    case 'a': state = 63; break;
                    case 'g': state = 80; break;
                    case 's': state = 61; break;
                    case 'b': state = 28; break;
                    case '1': state = 100; break;
                    case 'Y': state = 97; break;
                    case '7': state = 102; break;
                    case 'N': state = 83; break;
                    case 'x': state = 71; break;
                    case 'G': state = 104; break;
                    case 'f': state = 91; break;
                    case 'y': state = 105; break;
                    case '5': state = 111; break;
                    default: return std::find(finalNodes.begin(), finalNodes.end(), state) != finalNodes.end();
                }
                break;
            case 82: 
                switch(letter) {
                    case '9': state = 44; break;
                    case 'F': state = 75; break;
                    case 'v': state = 99; break;
                    case 'O': state = 66; break;
                    case 'z': state = 109; break;
                    case 'T': state = 107; break;
                    case 'q': state = 76; break;
                    case 'V': state = 96; break;
                    case 'w': state = 84; break;
                    case 'A': state = 81; break;
                    case 'N': state = 83; break;
                    case 'S': state = 73; break;
                    case 'M': state = 62; break;
                    case 'r': state = 26; break;
                    case '0': state = 93; break;
                    case 'l': state = 79; break;
                    case 'n': state = 82; break;
                    case 'K': state = 58; break;
                    case '4': state = 59; break;
                    case '5': state = 111; break;
                    case '3': state = 25; break;
                    case 'P': state = 65; break;
                    case 'D': state = 87; break;
                    case 'i': state = 69; break;
                    case 'W': state = 98; break;
                    case 'h': state = 112; break;
                    case 'o': state = 106; break;
                    case 'j': state = 110; break;
                    case 'e': state = 60; break;
                    case 'u': state = 92; break;
                    case 's': state = 61; break;
                    case 'E': state = 70; break;
                    case 'Q': state = 95; break;
                    case 't': state = 23; break;
                    case 'C': state = 88; break;
                    case 'c': state = 113; break;
                    case 'k': state = 89; break;
                    case 'm': state = 77; break;
                    case 'X': state = 101; break;
                    case 'U': state = 103; break;
                    case 'H': state = 68; break;
                    case 'f': state = 91; break;
                    case '2': state = 72; break;
                    case 'B': state = 78; break;
                    case 'Y': state = 97; break;
                    case 'Z': state = 67; break;
                    case 'g': state = 80; break;
                    case 'R': state = 108; break;
                    case '8': state = 85; break;
                    case 'I': state = 74; break;
                    case 'p': state = 94; break;
                    case 'L': state = 64; break;
                    case 'x': state = 71; break;
                    case 'a': state = 63; break;
                    case 'd': state = 90; break;
                    case 'J': state = 24; break;
                    case '7': state = 102; break;
                    case 'G': state = 104; break;
                    case 'y': state = 105; break;
                    case 'b': state = 28; break;
                    case '6': state = 27; break;
                    case '1': state = 100; break;
                    default: return std::find(finalNodes.begin(), finalNodes.end(), state) != finalNodes.end();
                }
                break;
            case 83: 
                switch(letter) {
                    case 'F': state = 75; break;
                    case '9': state = 44; break;
                    case 'N': state = 83; break;
                    case 'v': state = 99; break;
                    case 'C': state = 88; break;
                    case 'f': state = 91; break;
                    case 'Q': state = 95; break;
                    case '4': state = 59; break;
                    case 'T': state = 107; break;
                    case 'w': state = 84; break;
                    case 'z': state = 109; break;
                    case 'G': state = 104; break;
                    case 'S': state = 73; break;
                    case 'V': state = 96; break;
                    case 'A': state = 81; break;
                    case 'n': state = 82; break;
                    case 'B': state = 78; break;
                    case 't': state = 23; break;
                    case 'D': state = 87; break;
                    case 'e': state = 60; break;
                    case 'Y': state = 97; break;
                    case 'b': state = 28; break;
                    case '0': state = 93; break;
                    case '3': state = 25; break;
                    case 'r': state = 26; break;
                    case '5': state = 111; break;
                    case 'E': state = 70; break;
                    case '6': state = 27; break;
                    case 'W': state = 98; break;
                    case 'M': state = 62; break;
                    case 'i': state = 69; break;
                    case 'h': state = 112; break;
                    case 'o': state = 106; break;
                    case 'P': state = 65; break;
                    case 'K': state = 58; break;
                    case 'Z': state = 67; break;
                    case 'p': state = 94; break;
                    case 'j': state = 110; break;
                    case 'L': state = 64; break;
                    case 'R': state = 108; break;
                    case 'X': state = 101; break;
                    case 'J': state = 24; break;
                    case 'H': state = 68; break;
                    case '8': state = 85; break;
                    case 'q': state = 76; break;
                    case 'l': state = 79; break;
                    case 'I': state = 74; break;
                    case 'g': state = 80; break;
                    case 'a': state = 63; break;
                    case 's': state = 61; break;
                    case 'U': state = 103; break;
                    case 'k': state = 89; break;
                    case 'm': state = 77; break;
                    case '2': state = 72; break;
                    case 'c': state = 113; break;
                    case '7': state = 102; break;
                    case 'd': state = 90; break;
                    case 'O': state = 66; break;
                    case 'x': state = 71; break;
                    case '1': state = 100; break;
                    case 'y': state = 105; break;
                    case 'u': state = 92; break;
                    default: return std::find(finalNodes.begin(), finalNodes.end(), state) != finalNodes.end();
                }
                break;
            case 84: 
                switch(letter) {
                    case 't': state = 23; break;
                    case 'F': state = 75; break;
                    case '9': state = 44; break;
                    case 's': state = 61; break;
                    case 'z': state = 109; break;
                    case 'v': state = 99; break;
                    case 'b': state = 28; break;
                    case 'f': state = 91; break;
                    case 'T': state = 107; break;
                    case 'k': state = 89; break;
                    case 'G': state = 104; break;
                    case 'n': state = 82; break;
                    case 'C': state = 88; break;
                    case '1': state = 100; break;
                    case 'B': state = 78; break;
                    case 'S': state = 73; break;
                    case 'L': state = 64; break;
                    case '4': state = 59; break;
                    case '3': state = 25; break;
                    case 'i': state = 69; break;
                    case 'W': state = 98; break;
                    case 'M': state = 62; break;
                    case 'y': state = 105; break;
                    case 'J': state = 24; break;
                    case 'A': state = 81; break;
                    case 'H': state = 68; break;
                    case 'N': state = 83; break;
                    case 'g': state = 80; break;
                    case 'r': state = 26; break;
                    case 'Y': state = 97; break;
                    case 'K': state = 58; break;
                    case 'P': state = 65; break;
                    case 'I': state = 74; break;
                    case '8': state = 85; break;
                    case 'X': state = 101; break;
                    case '2': state = 72; break;
                    case 'e': state = 60; break;
                    case 'm': state = 77; break;
                    case 'Q': state = 95; break;
                    case 'h': state = 112; break;
                    case 'q': state = 76; break;
                    case 'Z': state = 67; break;
                    case 'R': state = 108; break;
                    case 'c': state = 113; break;
                    case 'd': state = 90; break;
                    case 'O': state = 66; break;
                    case 'E': state = 70; break;
                    case 'w': state = 84; break;
                    case 'a': state = 63; break;
                    case '7': state = 102; break;
                    case 'U': state = 103; break;
                    case 'j': state = 110; break;
                    case 'l': state = 79; break;
                    case '6': state = 27; break;
                    case 'o': state = 106; break;
                    case 'D': state = 87; break;
                    case 'x': state = 71; break;
                    case 'V': state = 96; break;
                    case 'p': state = 94; break;
                    case '5': state = 111; break;
                    case '0': state = 93; break;
                    case 'u': state = 92; break;
                    default: return std::find(finalNodes.begin(), finalNodes.end(), state) != finalNodes.end();
                }
                break;
            case 85: 
                switch(letter) {
                    case 't': state = 23; break;
                    case '9': state = 44; break;
                    case 'F': state = 75; break;
                    case 's': state = 61; break;
                    case 'v': state = 99; break;
                    case 'z': state = 109; break;
                    case 'C': state = 88; break;
                    case 'y': state = 105; break;
                    case 'T': state = 107; break;
                    case 'R': state = 108; break;
                    case 'A': state = 81; break;
                    case 'V': state = 96; break;
                    case 'B': state = 78; break;
                    case 'e': state = 60; break;
                    case 'S': state = 73; break;
                    case 'P': state = 65; break;
                    case 'M': state = 62; break;
                    case '4': state = 59; break;
                    case 'W': state = 98; break;
                    case '3': state = 25; break;
                    case 'c': state = 113; break;
                    case 'i': state = 69; break;
                    case '2': state = 72; break;
                    case 'J': state = 24; break;
                    case 'r': state = 26; break;
                    case 'h': state = 112; break;
                    case 'I': state = 74; break;
                    case 'Y': state = 97; break;
                    case '8': state = 85; break;
                    case 'q': state = 76; break;
                    case 'K': state = 58; break;
                    case 'w': state = 84; break;
                    case 'Z': state = 67; break;
                    case 'Q': state = 95; break;
                    case 'p': state = 94; break;
                    case 'd': state = 90; break;
                    case 'n': state = 82; break;
                    case 'N': state = 83; break;
                    case '6': state = 27; break;
                    case 'X': state = 101; break;
                    case 'a': state = 63; break;
                    case 'u': state = 92; break;
                    case 'L': state = 64; break;
                    case 'D': state = 87; break;
                    case 'G': state = 104; break;
                    case '1': state = 100; break;
                    case 'm': state = 77; break;
                    case 'E': state = 70; break;
                    case 'l': state = 79; break;
                    case 'o': state = 106; break;
                    case 'g': state = 80; break;
                    case '0': state = 93; break;
                    case '7': state = 102; break;
                    case 'H': state = 68; break;
                    case 'U': state = 103; break;
                    case 'x': state = 71; break;
                    case 'f': state = 91; break;
                    case '5': state = 111; break;
                    case 'k': state = 89; break;
                    case 'O': state = 66; break;
                    case 'b': state = 28; break;
                    case 'j': state = 110; break;
                    default: return std::find(finalNodes.begin(), finalNodes.end(), state) != finalNodes.end();
                }
                break;
            case 86: 
                switch(letter) {
                    case '9': state = 44; break;
                    case 'F': state = 75; break;
                    case 's': state = 61; break;
                    case 'f': state = 91; break;
                    case 'u': state = 92; break;
                    case '0': state = 93; break;
                    case 'V': state = 96; break;
                    case 'v': state = 99; break;
                    case '1': state = 100; break;
                    case 'D': state = 87; break;
                    case 'y': state = 105; break;
                    case 'c': state = 113; break;
                    case 'x': state = 71; break;
                    case 'O': state = 66; break;
                    case 'A': state = 81; break;
                    case 'a': state = 63; break;
                    case 'S': state = 73; break;
                    case 'i': state = 69; break;
                    case 'E': state = 70; break;
                    case 'l': state = 79; break;
                    case 'g': state = 80; break;
                    case '3': state = 25; break;
                    case 'P': state = 65; break;
                    case '4': state = 59; break;
                    case 'K': state = 58; break;
                    case 'B': state = 78; break;
                    case 'j': state = 110; break;
                    case 'e': state = 60; break;
                    case 'I': state = 74; break;
                    case 'G': state = 104; break;
                    case 'n': state = 82; break;
                    case 'T': state = 107; break;
                    case 't': state = 23; break;
                    case 'H': state = 68; break;
                    case 'W': state = 98; break;
                    case 'J': state = 24; break;
                    case 'Z': state = 67; break;
                    case 'M': state = 62; break;
                    case 'X': state = 101; break;
                    case 'z': state = 109; break;
                    case 'o': state = 106; break;
                    case 'Y': state = 97; break;
                    case '7': state = 102; break;
                    case 'N': state = 83; break;
                    case 'p': state = 94; break;
                    case '6': state = 27; break;
                    case 'r': state = 26; break;
                    case '2': state = 72; break;
                    case 'd': state = 90; break;
                    case 'R': state = 108; break;
                    case 'h': state = 112; break;
                    case 'L': state = 64; break;
                    case '8': state = 85; break;
                    case 'U': state = 103; break;
                    case 'q': state = 76; break;
                    case 'C': state = 88; break;
                    case 'm': state = 77; break;
                    case 'k': state = 89; break;
                    case 'w': state = 84; break;
                    case 'Q': state = 95; break;
                    case '5': state = 111; break;
                    case 'b': state = 28; break;
                    default: return std::find(finalNodes.begin(), finalNodes.end(), state) != finalNodes.end();
                }
                break;
            case 87: 
                switch(letter) {
                    case 'z': state = 109; break;
                    case 's': state = 61; break;
                    case '9': state = 44; break;
                    case 'k': state = 89; break;
                    case 'f': state = 91; break;
                    case 'u': state = 92; break;
                    case 'B': state = 78; break;
                    case 'C': state = 88; break;
                    case 'n': state = 82; break;
                    case 'G': state = 104; break;
                    case 'g': state = 80; break;
                    case 'R': state = 108; break;
                    case 'S': state = 73; break;
                    case 'e': state = 60; break;
                    case 'I': state = 74; break;
                    case 'x': state = 71; break;
                    case '3': state = 25; break;
                    case 't': state = 23; break;
                    case 'q': state = 76; break;
                    case 'c': state = 113; break;
                    case 'b': state = 28; break;
                    case 'J': state = 24; break;
                    case 'M': state = 62; break;
                    case 'X': state = 101; break;
                    case 'H': state = 68; break;
                    case 'r': state = 26; break;
                    case '4': state = 59; break;
                    case '5': state = 111; break;
                    case '6': state = 27; break;
                    case 'm': state = 77; break;
                    case 'v': state = 99; break;
                    case 'l': state = 79; break;
                    case 'i': state = 69; break;
                    case 'W': state = 98; break;
                    case '2': state = 72; break;
                    case 'h': state = 112; break;
                    case 'E': state = 70; break;
                    case 'K': state = 58; break;
                    case 'D': state = 87; break;
                    case '7': state = 102; break;
                    case 'N': state = 83; break;
                    case 'L': state = 64; break;
                    case 'T': state = 107; break;
                    case 'P': state = 65; break;
                    case '1': state = 100; break;
                    case 'Z': state = 67; break;
                    case 'F': state = 75; break;
                    case 'd': state = 90; break;
                    case 'U': state = 103; break;
                    case 'O': state = 66; break;
                    case 'o': state = 106; break;
                    case 'y': state = 105; break;
                    case 'A': state = 81; break;
                    case '8': state = 85; break;
                    case 'Q': state = 95; break;
                    case 'Y': state = 97; break;
                    case 'V': state = 96; break;
                    case 'j': state = 110; break;
                    case 'p': state = 94; break;
                    case '0': state = 93; break;
                    case 'a': state = 63; break;
                    case 'w': state = 84; break;
                    default: return std::find(finalNodes.begin(), finalNodes.end(), state) != finalNodes.end();
                }
                break;
            case 88: 
                switch(letter) {
                    case 's': state = 61; break;
                    case '3': state = 25; break;
                    case 'K': state = 58; break;
                    case '9': state = 44; break;
                    case 'f': state = 91; break;
                    case 'u': state = 92; break;
                    case '0': state = 93; break;
                    case 'p': state = 94; break;
                    case 'V': state = 96; break;
                    case 'F': state = 75; break;
                    case 'v': state = 99; break;
                    case 'o': state = 106; break;
                    case 'z': state = 109; break;
                    case '5': state = 111; break;
                    case 'k': state = 89; break;
                    case 'y': state = 105; break;
                    case '4': state = 59; break;
                    case 'x': state = 71; break;
                    case 'P': state = 65; break;
                    case 'J': state = 24; break;
                    case '8': state = 85; break;
                    case 'I': state = 74; break;
                    case 'w': state = 84; break;
                    case 'A': state = 81; break;
                    case 'n': state = 82; break;
                    case 'W': state = 98; break;
                    case 't': state = 23; break;
                    case 'H': state = 68; break;
                    case 'M': state = 62; break;
                    case '6': state = 27; break;
                    case 'O': state = 66; break;
                    case 'g': state = 80; break;
                    case 'm': state = 77; break;
                    case 'Y': state = 97; break;
                    case 'X': state = 101; break;
                    case 'q': state = 76; break;
                    case 'h': state = 112; break;
                    case 'Q': state = 95; break;
                    case '1': state = 100; break;
                    case 'B': state = 78; break;
                    case 'c': state = 113; break;
                    case 'i': state = 69; break;
                    case 'G': state = 104; break;
                    case 'L': state = 64; break;
                    case 'r': state = 26; break;
                    case 'D': state = 87; break;
                    case 'd': state = 90; break;
                    case 'Z': state = 67; break;
                    case 'b': state = 28; break;
                    case 'T': state = 107; break;
                    case 'U': state = 103; break;
                    case 'S': state = 73; break;
                    case 'C': state = 88; break;
                    case 'j': state = 110; break;
                    case '2': state = 72; break;
                    case 'N': state = 83; break;
                    case 'a': state = 63; break;
                    case 'e': state = 60; break;
                    case 'R': state = 108; break;
                    case 'E': state = 70; break;
                    case 'l': state = 79; break;
                    case '7': state = 102; break;
                    default: return std::find(finalNodes.begin(), finalNodes.end(), state) != finalNodes.end();
                }
                break;
            case 89: 
                switch(letter) {
                    case 's': state = 61; break;
                    case 'C': state = 88; break;
                    case 'r': state = 26; break;
                    case 'f': state = 91; break;
                    case 'u': state = 92; break;
                    case '0': state = 93; break;
                    case 'p': state = 94; break;
                    case 'V': state = 96; break;
                    case 'v': state = 99; break;
                    case 'z': state = 109; break;
                    case 'y': state = 105; break;
                    case '4': state = 59; break;
                    case '3': state = 25; break;
                    case 'W': state = 98; break;
                    case 'x': state = 71; break;
                    case 'P': state = 65; break;
                    case 'l': state = 79; break;
                    case 'U': state = 103; break;
                    case 'N': state = 83; break;
                    case 'J': state = 24; break;
                    case 'A': state = 81; break;
                    case 'G': state = 104; break;
                    case 'I': state = 74; break;
                    case 'c': state = 113; break;
                    case 'o': state = 106; break;
                    case 'j': state = 110; break;
                    case 'F': state = 75; break;
                    case 'w': state = 84; break;
                    case 't': state = 23; break;
                    case 'E': state = 70; break;
                    case 'M': state = 62; break;
                    case 'q': state = 76; break;
                    case '7': state = 102; break;
                    case 'm': state = 77; break;
                    case 'Y': state = 97; break;
                    case 'n': state = 82; break;
                    case 'O': state = 66; break;
                    case 'g': state = 80; break;
                    case 'D': state = 87; break;
                    case 'i': state = 69; break;
                    case 'h': state = 112; break;
                    case 'b': state = 28; break;
                    case '9': state = 44; break;
                    case 'K': state = 58; break;
                    case '6': state = 27; break;
                    case '1': state = 100; break;
                    case 'S': state = 73; break;
                    case 'k': state = 89; break;
                    case 'Q': state = 95; break;
                    case 'L': state = 64; break;
                    case 'H': state = 68; break;
                    case 'd': state = 90; break;
                    case '8': state = 85; break;
                    case '5': state = 111; break;
                    case '2': state = 72; break;
                    case 'T': state = 107; break;
                    case 'X': state = 101; break;
                    case 'Z': state = 67; break;
                    case 'a': state = 63; break;
                    case 'e': state = 60; break;
                    case 'R': state = 108; break;
                    case 'B': state = 78; break;
                    default: return std::find(finalNodes.begin(), finalNodes.end(), state) != finalNodes.end();
                }
                break;
            case 90: 
                switch(letter) {
                    case 's': state = 61; break;
                    case 'K': state = 58; break;
                    case 'F': state = 75; break;
                    case 'C': state = 88; break;
                    case 'f': state = 91; break;
                    case 'u': state = 92; break;
                    case '0': state = 93; break;
                    case 'p': state = 94; break;
                    case 'V': state = 96; break;
                    case 'Y': state = 97; break;
                    case 'J': state = 24; break;
                    case 'o': state = 106; break;
                    case 'z': state = 109; break;
                    case 'Q': state = 95; break;
                    case '3': state = 25; break;
                    case 'y': state = 105; break;
                    case 'a': state = 63; break;
                    case 'k': state = 89; break;
                    case 'O': state = 66; break;
                    case 'Z': state = 67; break;
                    case 'I': state = 74; break;
                    case 'e': state = 60; break;
                    case 'A': state = 81; break;
                    case 'c': state = 113; break;
                    case 't': state = 23; break;
                    case 'H': state = 68; break;
                    case 'W': state = 98; break;
                    case 'M': state = 62; break;
                    case 'E': state = 70; break;
                    case 'B': state = 78; break;
                    case 'D': state = 87; break;
                    case 'l': state = 79; break;
                    case 'S': state = 73; break;
                    case 'v': state = 99; break;
                    case 'g': state = 80; break;
                    case 'P': state = 65; break;
                    case 'n': state = 82; break;
                    case 'i': state = 69; break;
                    case 'h': state = 112; break;
                    case 'L': state = 64; break;
                    case 'G': state = 104; break;
                    case 'r': state = 26; break;
                    case 'm': state = 77; break;
                    case '6': state = 27; break;
                    case 'b': state = 28; break;
                    case '9': state = 44; break;
                    case '7': state = 102; break;
                    case '1': state = 100; break;
                    case 'w': state = 84; break;
                    case 'd': state = 90; break;
                    case 'T': state = 107; break;
                    case 'X': state = 101; break;
                    case 'x': state = 71; break;
                    case 'q': state = 76; break;
                    case '8': state = 85; break;
                    case '5': state = 111; break;
                    case '4': state = 59; break;
                    case 'U': state = 103; break;
                    case 'j': state = 110; break;
                    case 'R': state = 108; break;
                    case 'N': state = 83; break;
                    case '2': state = 72; break;
                    default: return std::find(finalNodes.begin(), finalNodes.end(), state) != finalNodes.end();
                }
                break;
            case 91: 
                switch(letter) {
                    case 's': state = 61; break;
                    case '3': state = 25; break;
                    case 'D': state = 87; break;
                    case 'k': state = 89; break;
                    case 'F': state = 75; break;
                    case 'C': state = 88; break;
                    case 'f': state = 91; break;
                    case 'u': state = 92; break;
                    case '0': state = 93; break;
                    case 'p': state = 94; break;
                    case 'V': state = 96; break;
                    case 'Y': state = 97; break;
                    case 'J': state = 24; break;
                    case 'z': state = 109; break;
                    case 'y': state = 105; break;
                    case 'G': state = 104; break;
                    case '4': state = 59; break;
                    case 'X': state = 101; break;
                    case 'c': state = 113; break;
                    case 'B': state = 78; break;
                    case 'I': state = 74; break;
                    case 'A': state = 81; break;
                    case 'g': state = 80; break;
                    case 'l': state = 79; break;
                    case 'W': state = 98; break;
                    case 'i': state = 69; break;
                    case 'E': state = 70; break;
                    case 't': state = 23; break;
                    case 'M': state = 62; break;
                    case '8': state = 85; break;
                    case 'd': state = 90; break;
                    case 'n': state = 82; break;
                    case 'P': state = 65; break;
                    case 'w': state = 84; break;
                    case 'v': state = 99; break;
                    case 'm': state = 77; break;
                    case '7': state = 102; break;
                    case 'r': state = 26; break;
                    case 'b': state = 28; break;
                    case '9': state = 44; break;
                    case 'L': state = 64; break;
                    case 'U': state = 103; break;
                    case '6': state = 27; break;
                    case '5': state = 111; break;
                    case 'T': state = 107; break;
                    case 'h': state = 112; break;
                    case 'Q': state = 95; break;
                    case 'S': state = 73; break;
                    case 'o': state = 106; break;
                    case 'K': state = 58; break;
                    case 'Z': state = 67; break;
                    case 'R': state = 108; break;
                    case 'e': state = 60; break;
                    case 'a': state = 63; break;
                    case 'j': state = 110; break;
                    case 'q': state = 76; break;
                    case '2': state = 72; break;
                    case 'H': state = 68; break;
                    case '1': state = 100; break;
                    case 'N': state = 83; break;
                    case 'O': state = 66; break;
                    case 'x': state = 71; break;
                    default: return std::find(finalNodes.begin(), finalNodes.end(), state) != finalNodes.end();
                }
                break;
            case 92: 
                switch(letter) {
                    case '5': state = 111; break;
                    case 'D': state = 87; break;
                    case 'k': state = 89; break;
                    case 'F': state = 75; break;
                    case 'f': state = 91; break;
                    case 'u': state = 92; break;
                    case 'C': state = 88; break;
                    case 'J': state = 24; break;
                    case '0': state = 93; break;
                    case 'p': state = 94; break;
                    case 'V': state = 96; break;
                    case 'v': state = 99; break;
                    case 'o': state = 106; break;
                    case 'z': state = 109; break;
                    case 'y': state = 105; break;
                    case 'G': state = 104; break;
                    case 'r': state = 26; break;
                    case 'q': state = 76; break;
                    case 'I': state = 74; break;
                    case 's': state = 61; break;
                    case 'e': state = 60; break;
                    case 'S': state = 73; break;
                    case 'R': state = 108; break;
                    case '3': state = 25; break;
                    case 'l': state = 79; break;
                    case 'M': state = 62; break;
                    case 'i': state = 69; break;
                    case 'H': state = 68; break;
                    case 'n': state = 82; break;
                    case 'c': state = 113; break;
                    case 'd': state = 90; break;
                    case 'm': state = 77; break;
                    case 'h': state = 112; break;
                    case '2': state = 72; break;
                    case 'A': state = 81; break;
                    case 'P': state = 65; break;
                    case 'N': state = 83; break;
                    case 't': state = 23; break;
                    case 'E': state = 70; break;
                    case 'Z': state = 67; break;
                    case 'g': state = 80; break;
                    case 'L': state = 64; break;
                    case '1': state = 100; break;
                    case 'Q': state = 95; break;
                    case 'a': state = 63; break;
                    case 'T': state = 107; break;
                    case 'Y': state = 97; break;
                    case 'K': state = 58; break;
                    case 'b': state = 28; break;
                    case '9': state = 44; break;
                    case 'X': state = 101; break;
                    case 'x': state = 71; break;
                    case 'w': state = 84; break;
                    case '7': state = 102; break;
                    case 'j': state = 110; break;
                    case '6': state = 27; break;
                    case 'B': state = 78; break;
                    case '8': state = 85; break;
                    case 'O': state = 66; break;
                    case 'U': state = 103; break;
                    case '4': state = 59; break;
                    case 'W': state = 98; break;
                    default: return std::find(finalNodes.begin(), finalNodes.end(), state) != finalNodes.end();
                }
                break;
            case 93: 
                switch(letter) {
                    case '3': state = 25; break;
                    case 'U': state = 103; break;
                    case 'x': state = 71; break;
                    case 'X': state = 101; break;
                    case 'N': state = 83; break;
                    case 'l': state = 79; break;
                    case 'g': state = 80; break;
                    case 'P': state = 65; break;
                    case 'Z': state = 67; break;
                    case 'w': state = 84; break;
                    case '7': state = 102; break;
                    case 'c': state = 113; break;
                    case 'G': state = 104; break;
                    case 'I': state = 74; break;
                    case 'z': state = 109; break;
                    case 'y': state = 105; break;
                    case 'S': state = 73; break;
                    case 'e': state = 60; break;
                    case 'R': state = 108; break;
                    case 'F': state = 75; break;
                    case '2': state = 72; break;
                    case 'm': state = 77; break;
                    case 'i': state = 69; break;
                    case '0': state = 93; break;
                    case 'p': state = 94; break;
                    case 'H': state = 68; break;
                    case 'M': state = 62; break;
                    case 'D': state = 87; break;
                    case 't': state = 23; break;
                    case 'O': state = 66; break;
                    case 'E': state = 70; break;
                    case '6': state = 27; break;
                    case 'd': state = 90; break;
                    case 'o': state = 106; break;
                    case 'L': state = 64; break;
                    case 'v': state = 99; break;
                    case 'h': state = 112; break;
                    case 'n': state = 82; break;
                    case 'A': state = 81; break;
                    case 'a': state = 63; break;
                    case 'Q': state = 95; break;
                    case '9': state = 44; break;
                    case 'b': state = 28; break;
                    case 'T': state = 107; break;
                    case '4': state = 59; break;
                    case 's': state = 61; break;
                    case '5': state = 111; break;
                    case 'K': state = 58; break;
                    case 'q': state = 76; break;
                    case '8': state = 85; break;
                    case 'j': state = 110; break;
                    case 'B': state = 78; break;
                    case '1': state = 100; break;
                    case 'W': state = 98; break;
                    case 'V': state = 96; break;
                    case 'u': state = 92; break;
                    case 'f': state = 91; break;
                    case 'k': state = 89; break;
                    case 'C': state = 88; break;
                    case 'Y': state = 97; break;
                    case 'r': state = 26; break;
                    case 'J': state = 24; break;
                    default: return std::find(finalNodes.begin(), finalNodes.end(), state) != finalNodes.end();
                }
                break;
            case 94: 
                switch(letter) {
                    case '3': state = 25; break;
                    case 'f': state = 91; break;
                    case 'u': state = 92; break;
                    case 'C': state = 88; break;
                    case 'G': state = 104; break;
                    case 'F': state = 75; break;
                    case 'g': state = 80; break;
                    case 'I': state = 74; break;
                    case 'B': state = 78; break;
                    case 'R': state = 108; break;
                    case 'S': state = 73; break;
                    case 'e': state = 60; break;
                    case 'l': state = 79; break;
                    case 'p': state = 94; break;
                    case 'o': state = 106; break;
                    case 't': state = 23; break;
                    case 'm': state = 77; break;
                    case 'i': state = 69; break;
                    case 'n': state = 82; break;
                    case 'M': state = 62; break;
                    case '2': state = 72; break;
                    case '0': state = 93; break;
                    case 'H': state = 68; break;
                    case 'r': state = 26; break;
                    case 'v': state = 99; break;
                    case 'P': state = 65; break;
                    case 'h': state = 112; break;
                    case 'A': state = 81; break;
                    case 's': state = 61; break;
                    case 'L': state = 64; break;
                    case 'E': state = 70; break;
                    case 'T': state = 107; break;
                    case 'q': state = 76; break;
                    case 'x': state = 71; break;
                    case 'Q': state = 95; break;
                    case 'b': state = 28; break;
                    case '9': state = 44; break;
                    case '5': state = 111; break;
                    case 'k': state = 89; break;
                    case 'w': state = 84; break;
                    case 'D': state = 87; break;
                    case 'd': state = 90; break;
                    case 'a': state = 63; break;
                    case 'K': state = 58; break;
                    case 'N': state = 83; break;
                    case '8': state = 85; break;
                    case '6': state = 27; break;
                    case 'Z': state = 67; break;
                    case 'c': state = 113; break;
                    case '7': state = 102; break;
                    case 'j': state = 110; break;
                    case 'O': state = 66; break;
                    case 'X': state = 101; break;
                    case 'U': state = 103; break;
                    case '4': state = 59; break;
                    case 'y': state = 105; break;
                    case 'J': state = 24; break;
                    case 'z': state = 109; break;
                    case '1': state = 100; break;
                    case 'W': state = 98; break;
                    case 'Y': state = 97; break;
                    case 'V': state = 96; break;
                    default: return std::find(finalNodes.begin(), finalNodes.end(), state) != finalNodes.end();
                }
                break;
            case 95: 
                switch(letter) {
                    case '3': state = 25; break;
                    case 'r': state = 26; break;
                    case 'o': state = 106; break;
                    case 'f': state = 91; break;
                    case 'u': state = 92; break;
                    case 'D': state = 87; break;
                    case 'k': state = 89; break;
                    case 'A': state = 81; break;
                    case 'S': state = 73; break;
                    case 'g': state = 80; break;
                    case 'p': state = 94; break;
                    case 'I': state = 74; break;
                    case 'R': state = 108; break;
                    case 's': state = 61; break;
                    case '7': state = 102; break;
                    case 'l': state = 79; break;
                    case 'F': state = 75; break;
                    case 'n': state = 82; break;
                    case 'i': state = 69; break;
                    case 'M': state = 62; break;
                    case 'w': state = 84; break;
                    case '0': state = 93; break;
                    case '2': state = 72; break;
                    case 't': state = 23; break;
                    case 'E': state = 70; break;
                    case 'm': state = 77; break;
                    case 'e': state = 60; break;
                    case 'v': state = 99; break;
                    case '8': state = 85; break;
                    case 'J': state = 24; break;
                    case 'Q': state = 95; break;
                    case 'L': state = 64; break;
                    case 'P': state = 65; break;
                    case 'N': state = 83; break;
                    case 'G': state = 104; break;
                    case 'c': state = 113; break;
                    case 'x': state = 71; break;
                    case 'H': state = 68; break;
                    case 'Z': state = 67; break;
                    case '9': state = 44; break;
                    case 'b': state = 28; break;
                    case '6': state = 27; break;
                    case 'X': state = 101; break;
                    case 'B': state = 78; break;
                    case 'K': state = 58; break;
                    case 'q': state = 76; break;
                    case 'j': state = 110; break;
                    case 'd': state = 90; break;
                    case 'a': state = 63; break;
                    case 'h': state = 112; break;
                    case 'O': state = 66; break;
                    case 'U': state = 103; break;
                    case '4': state = 59; break;
                    case 'y': state = 105; break;
                    case 'T': state = 107; break;
                    case 'z': state = 109; break;
                    case '1': state = 100; break;
                    case 'W': state = 98; break;
                    case 'Y': state = 97; break;
                    case 'V': state = 96; break;
                    case '5': state = 111; break;
                    case 'C': state = 88; break;
                    default: return std::find(finalNodes.begin(), finalNodes.end(), state) != finalNodes.end();
                }
                break;
            case 96: 
                switch(letter) {
                    case '3': state = 25; break;
                    case 'a': state = 63; break;
                    case 'D': state = 87; break;
                    case 'k': state = 89; break;
                    case 'f': state = 91; break;
                    case 'o': state = 106; break;
                    case 'u': state = 92; break;
                    case 'T': state = 107; break;
                    case 'y': state = 105; break;
                    case 'P': state = 65; break;
                    case 'l': state = 79; break;
                    case 'I': state = 74; break;
                    case 'i': state = 69; break;
                    case 'R': state = 108; break;
                    case 'e': state = 60; break;
                    case 'g': state = 80; break;
                    case '2': state = 72; break;
                    case 't': state = 23; break;
                    case 'v': state = 99; break;
                    case 'S': state = 73; break;
                    case 'G': state = 104; break;
                    case 'E': state = 70; break;
                    case 'F': state = 75; break;
                    case 'x': state = 71; break;
                    case 'q': state = 76; break;
                    case 'X': state = 101; break;
                    case 'B': state = 78; break;
                    case '7': state = 102; break;
                    case 'p': state = 94; break;
                    case 'M': state = 62; break;
                    case 'C': state = 88; break;
                    case '8': state = 85; break;
                    case 'U': state = 103; break;
                    case 'Z': state = 67; break;
                    case 'Q': state = 95; break;
                    case 'n': state = 82; break;
                    case 'J': state = 24; break;
                    case 'A': state = 81; break;
                    case '4': state = 59; break;
                    case 'z': state = 109; break;
                    case 'b': state = 28; break;
                    case 'm': state = 77; break;
                    case 'L': state = 64; break;
                    case 'd': state = 90; break;
                    case 'w': state = 84; break;
                    case 'H': state = 68; break;
                    case 'r': state = 26; break;
                    case '6': state = 27; break;
                    case 'h': state = 112; break;
                    case '9': state = 44; break;
                    case 's': state = 61; break;
                    case 'K': state = 58; break;
                    case 'O': state = 66; break;
                    case '5': state = 111; break;
                    case 'c': state = 113; break;
                    case 'j': state = 110; break;
                    case 'W': state = 98; break;
                    case 'Y': state = 97; break;
                    case 'V': state = 96; break;
                    case '0': state = 93; break;
                    case 'N': state = 83; break;
                    case '1': state = 100; break;
                    default: return std::find(finalNodes.begin(), finalNodes.end(), state) != finalNodes.end();
                }
                break;
            case 97: 
                switch(letter) {
                    case 'f': state = 91; break;
                    case 'l': state = 79; break;
                    case 'F': state = 75; break;
                    case '9': state = 44; break;
                    case 'B': state = 78; break;
                    case 'o': state = 106; break;
                    case 'u': state = 92; break;
                    case 'W': state = 98; break;
                    case 'a': state = 63; break;
                    case 'k': state = 89; break;
                    case 'h': state = 112; break;
                    case 'I': state = 74; break;
                    case 'X': state = 101; break;
                    case 'q': state = 76; break;
                    case '2': state = 72; break;
                    case 'A': state = 81; break;
                    case 'S': state = 73; break;
                    case 'R': state = 108; break;
                    case 'g': state = 80; break;
                    case '3': state = 25; break;
                    case 'e': state = 60; break;
                    case 'x': state = 71; break;
                    case 'E': state = 70; break;
                    case 'M': state = 62; break;
                    case 'c': state = 113; break;
                    case 'i': state = 69; break;
                    case 'b': state = 28; break;
                    case '8': state = 85; break;
                    case 'y': state = 105; break;
                    case 'C': state = 88; break;
                    case 'P': state = 65; break;
                    case 'r': state = 26; break;
                    case 'p': state = 94; break;
                    case 't': state = 23; break;
                    case '5': state = 111; break;
                    case 'Z': state = 67; break;
                    case 'n': state = 82; break;
                    case '4': state = 59; break;
                    case '6': state = 27; break;
                    case 'D': state = 87; break;
                    case 'L': state = 64; break;
                    case 'v': state = 99; break;
                    case 'z': state = 109; break;
                    case 's': state = 61; break;
                    case 'J': state = 24; break;
                    case 'H': state = 68; break;
                    case '7': state = 102; break;
                    case 'm': state = 77; break;
                    case 'w': state = 84; break;
                    case '1': state = 100; break;
                    case 'O': state = 66; break;
                    case 'N': state = 83; break;
                    case 'd': state = 90; break;
                    case 'G': state = 104; break;
                    case 'T': state = 107; break;
                    case 'j': state = 110; break;
                    case 'Y': state = 97; break;
                    case 'V': state = 96; break;
                    case 'Q': state = 95; break;
                    case '0': state = 93; break;
                    case 'U': state = 103; break;
                    case 'K': state = 58; break;
                    default: return std::find(finalNodes.begin(), finalNodes.end(), state) != finalNodes.end();
                }
                break;
            case 98: 
                switch(letter) {
                    case 'f': state = 91; break;
                    case 'Q': state = 95; break;
                    case 'N': state = 83; break;
                    case '9': state = 44; break;
                    case 'B': state = 78; break;
                    case 'W': state = 98; break;
                    case 'u': state = 92; break;
                    case 'o': state = 106; break;
                    case 'a': state = 63; break;
                    case 'k': state = 89; break;
                    case 'q': state = 76; break;
                    case 'I': state = 74; break;
                    case 'A': state = 81; break;
                    case 'h': state = 112; break;
                    case 'z': state = 109; break;
                    case 'e': state = 60; break;
                    case 'S': state = 73; break;
                    case 'R': state = 108; break;
                    case 'g': state = 80; break;
                    case 'l': state = 79; break;
                    case 'd': state = 90; break;
                    case 'M': state = 62; break;
                    case 'U': state = 103; break;
                    case 'x': state = 71; break;
                    case 'v': state = 99; break;
                    case 'G': state = 104; break;
                    case 'F': state = 75; break;
                    case 'E': state = 70; break;
                    case 'r': state = 26; break;
                    case 'p': state = 94; break;
                    case '2': state = 72; break;
                    case 'c': state = 113; break;
                    case 'w': state = 84; break;
                    case '8': state = 85; break;
                    case '7': state = 102; break;
                    case 'n': state = 82; break;
                    case 'P': state = 65; break;
                    case 'J': state = 24; break;
                    case 'i': state = 69; break;
                    case 't': state = 23; break;
                    case '4': state = 59; break;
                    case '3': state = 25; break;
                    case '5': state = 111; break;
                    case 'T': state = 107; break;
                    case '6': state = 27; break;
                    case '1': state = 100; break;
                    case 'b': state = 28; break;
                    case 'D': state = 87; break;
                    case 'C': state = 88; break;
                    case 'Z': state = 67; break;
                    case 'y': state = 105; break;
                    case 'H': state = 68; break;
                    case 'L': state = 64; break;
                    case 's': state = 61; break;
                    case 'm': state = 77; break;
                    case 'j': state = 110; break;
                    case 'X': state = 101; break;
                    case 'Y': state = 97; break;
                    case 'V': state = 96; break;
                    case '0': state = 93; break;
                    case 'K': state = 58; break;
                    case 'O': state = 66; break;
                    default: return std::find(finalNodes.begin(), finalNodes.end(), state) != finalNodes.end();
                }
                break;
            case 99: 
                switch(letter) {
                    case '9': state = 44; break;
                    case 'B': state = 78; break;
                    case 'f': state = 91; break;
                    case 'u': state = 92; break;
                    case 'k': state = 89; break;
                    case 'a': state = 63; break;
                    case 'I': state = 74; break;
                    case 'g': state = 80; break;
                    case 'M': state = 62; break;
                    case 'R': state = 108; break;
                    case 'S': state = 73; break;
                    case 'A': state = 81; break;
                    case 'q': state = 76; break;
                    case 'e': state = 60; break;
                    case 'x': state = 71; break;
                    case 'l': state = 79; break;
                    case '3': state = 25; break;
                    case 'U': state = 103; break;
                    case 'v': state = 99; break;
                    case 'h': state = 112; break;
                    case 'G': state = 104; break;
                    case 'X': state = 101; break;
                    case 'F': state = 75; break;
                    case 'E': state = 70; break;
                    case 'p': state = 94; break;
                    case 'i': state = 69; break;
                    case '2': state = 72; break;
                    case 'P': state = 65; break;
                    case 'Q': state = 95; break;
                    case 'c': state = 113; break;
                    case '5': state = 111; break;
                    case 't': state = 23; break;
                    case '4': state = 59; break;
                    case '6': state = 27; break;
                    case 'b': state = 28; break;
                    case 'T': state = 107; break;
                    case 'Z': state = 67; break;
                    case 'K': state = 58; break;
                    case 'w': state = 84; break;
                    case 'O': state = 66; break;
                    case 'D': state = 87; break;
                    case 'y': state = 105; break;
                    case 'H': state = 68; break;
                    case 'd': state = 90; break;
                    case 'm': state = 77; break;
                    case 'o': state = 106; break;
                    case '1': state = 100; break;
                    case '7': state = 102; break;
                    case 's': state = 61; break;
                    case 'J': state = 24; break;
                    case 'z': state = 109; break;
                    case 'L': state = 64; break;
                    case 'n': state = 82; break;
                    case 'r': state = 26; break;
                    case '8': state = 85; break;
                    case 'C': state = 88; break;
                    case 'j': state = 110; break;
                    case 'W': state = 98; break;
                    case 'Y': state = 97; break;
                    case 'V': state = 96; break;
                    case 'N': state = 83; break;
                    case '0': state = 93; break;
                    default: return std::find(finalNodes.begin(), finalNodes.end(), state) != finalNodes.end();
                }
                break;
            case 100: 
                switch(letter) {
                    case 'O': state = 66; break;
                    case 'x': state = 71; break;
                    case 'g': state = 80; break;
                    case 'B': state = 78; break;
                    case 'Z': state = 67; break;
                    case 'a': state = 63; break;
                    case 'D': state = 87; break;
                    case 'P': state = 65; break;
                    case 'l': state = 79; break;
                    case 'I': state = 74; break;
                    case 'f': state = 91; break;
                    case 'z': state = 109; break;
                    case 'E': state = 70; break;
                    case 'R': state = 108; break;
                    case 'e': state = 60; break;
                    case 'S': state = 73; break;
                    case 'K': state = 58; break;
                    case 'X': state = 101; break;
                    case 'V': state = 96; break;
                    case 'n': state = 82; break;
                    case 'M': state = 62; break;
                    case 'A': state = 81; break;
                    case 'G': state = 104; break;
                    case 'o': state = 106; break;
                    case '5': state = 111; break;
                    case 'p': state = 94; break;
                    case 'b': state = 28; break;
                    case 'c': state = 113; break;
                    case 'F': state = 75; break;
                    case 't': state = 23; break;
                    case '3': state = 25; break;
                    case '8': state = 85; break;
                    case '4': state = 59; break;
                    case 'u': state = 92; break;
                    case 'i': state = 69; break;
                    case 'w': state = 84; break;
                    case '2': state = 72; break;
                    case 'y': state = 105; break;
                    case 'r': state = 26; break;
                    case 'h': state = 112; break;
                    case 'T': state = 107; break;
                    case '0': state = 93; break;
                    case 'H': state = 68; break;
                    case 's': state = 61; break;
                    case '1': state = 100; break;
                    case 'C': state = 88; break;
                    case 'J': state = 24; break;
                    case 'v': state = 99; break;
                    case 'q': state = 76; break;
                    case 'L': state = 64; break;
                    case 'j': state = 110; break;
                    case 'Q': state = 95; break;
                    case 'Y': state = 97; break;
                    case '7': state = 102; break;
                    case 'd': state = 90; break;
                    case 'm': state = 77; break;
                    case 'W': state = 98; break;
                    case 'k': state = 89; break;
                    case 'U': state = 103; break;
                    case '9': state = 44; break;
                    case '6': state = 27; break;
                    case 'N': state = 83; break;
                    default: return std::find(finalNodes.begin(), finalNodes.end(), state) != finalNodes.end();
                }
                break;
            case 101: 
                switch(letter) {
                    case 'J': state = 24; break;
                    case 'D': state = 87; break;
                    case '9': state = 44; break;
                    case 'k': state = 89; break;
                    case 'f': state = 91; break;
                    case 'T': state = 107; break;
                    case 'S': state = 73; break;
                    case 'q': state = 76; break;
                    case 'O': state = 66; break;
                    case 'K': state = 58; break;
                    case 'x': state = 71; break;
                    case 'z': state = 109; break;
                    case '5': state = 111; break;
                    case 'M': state = 62; break;
                    case 'o': state = 106; break;
                    case 'P': state = 65; break;
                    case 'b': state = 28; break;
                    case 'p': state = 94; break;
                    case 'F': state = 75; break;
                    case 't': state = 23; break;
                    case 'G': state = 104; break;
                    case 'A': state = 81; break;
                    case 'E': state = 70; break;
                    case '3': state = 25; break;
                    case 'a': state = 63; break;
                    case 'c': state = 113; break;
                    case '4': state = 59; break;
                    case 'i': state = 69; break;
                    case 'r': state = 26; break;
                    case 'I': state = 74; break;
                    case 'l': state = 79; break;
                    case '6': state = 27; break;
                    case '2': state = 72; break;
                    case 'W': state = 98; break;
                    case '1': state = 100; break;
                    case 'w': state = 84; break;
                    case 'y': state = 105; break;
                    case 'X': state = 101; break;
                    case '7': state = 102; break;
                    case 'Q': state = 95; break;
                    case 'U': state = 103; break;
                    case 'h': state = 112; break;
                    case 'Z': state = 67; break;
                    case 'H': state = 68; break;
                    case '8': state = 85; break;
                    case 'm': state = 77; break;
                    case 'e': state = 60; break;
                    case 'C': state = 88; break;
                    case 'g': state = 80; break;
                    case 'v': state = 99; break;
                    case 'n': state = 82; break;
                    case 'j': state = 110; break;
                    case 'R': state = 108; break;
                    case 'd': state = 90; break;
                    case 's': state = 61; break;
                    case 'L': state = 64; break;
                    case 'N': state = 83; break;
                    case 'Y': state = 97; break;
                    case 'V': state = 96; break;
                    case '0': state = 93; break;
                    case 'u': state = 92; break;
                    case 'B': state = 78; break;
                    default: return std::find(finalNodes.begin(), finalNodes.end(), state) != finalNodes.end();
                }
                break;
            case 102: 
                switch(letter) {
                    case 'J': state = 24; break;
                    case 'o': state = 106; break;
                    case '9': state = 44; break;
                    case 'd': state = 90; break;
                    case 'a': state = 63; break;
                    case 'k': state = 89; break;
                    case 'f': state = 91; break;
                    case 'I': state = 74; break;
                    case 'S': state = 73; break;
                    case '6': state = 27; break;
                    case 'h': state = 112; break;
                    case '2': state = 72; break;
                    case 'q': state = 76; break;
                    case 'x': state = 71; break;
                    case 'l': state = 79; break;
                    case 'z': state = 109; break;
                    case 'M': state = 62; break;
                    case 'R': state = 108; break;
                    case '3': state = 25; break;
                    case 'Y': state = 97; break;
                    case 'F': state = 75; break;
                    case 'r': state = 26; break;
                    case 'b': state = 28; break;
                    case 'G': state = 104; break;
                    case 's': state = 61; break;
                    case 't': state = 23; break;
                    case 'A': state = 81; break;
                    case '4': state = 59; break;
                    case '5': state = 111; break;
                    case 'p': state = 94; break;
                    case 'Z': state = 67; break;
                    case 'E': state = 70; break;
                    case 'e': state = 60; break;
                    case 'g': state = 80; break;
                    case 'H': state = 68; break;
                    case 'i': state = 69; break;
                    case 'D': state = 87; break;
                    case 'c': state = 113; break;
                    case 'w': state = 84; break;
                    case 'B': state = 78; break;
                    case 'n': state = 82; break;
                    case 'L': state = 64; break;
                    case 'P': state = 65; break;
                    case '1': state = 100; break;
                    case 'T': state = 107; break;
                    case 'y': state = 105; break;
                    case 'Q': state = 95; break;
                    case '7': state = 102; break;
                    case 'v': state = 99; break;
                    case 'j': state = 110; break;
                    case 'O': state = 66; break;
                    case 'W': state = 98; break;
                    case 'X': state = 101; break;
                    case 'N': state = 83; break;
                    case 'K': state = 58; break;
                    case 'm': state = 77; break;
                    case '8': state = 85; break;
                    case 'V': state = 96; break;
                    case '0': state = 93; break;
                    case 'U': state = 103; break;
                    case 'u': state = 92; break;
                    case 'C': state = 88; break;
                    default: return std::find(finalNodes.begin(), finalNodes.end(), state) != finalNodes.end();
                }
                break;
            case 103: 
                switch(letter) {
                    case 'l': state = 79; break;
                    case 'F': state = 75; break;
                    case 'o': state = 106; break;
                    case '9': state = 44; break;
                    case 'K': state = 58; break;
                    case 'a': state = 63; break;
                    case 'f': state = 91; break;
                    case 'B': state = 78; break;
                    case '6': state = 27; break;
                    case 'S': state = 73; break;
                    case '5': state = 111; break;
                    case 'h': state = 112; break;
                    case 'U': state = 103; break;
                    case 'R': state = 108; break;
                    case 'z': state = 109; break;
                    case 'x': state = 71; break;
                    case 'q': state = 76; break;
                    case '3': state = 25; break;
                    case 'g': state = 80; break;
                    case 's': state = 61; break;
                    case 'Y': state = 97; break;
                    case 'M': state = 62; break;
                    case 'P': state = 65; break;
                    case 'Z': state = 67; break;
                    case 't': state = 23; break;
                    case '7': state = 102; break;
                    case 'G': state = 104; break;
                    case 'i': state = 69; break;
                    case 'A': state = 81; break;
                    case 'J': state = 24; break;
                    case 'd': state = 90; break;
                    case 'r': state = 26; break;
                    case 'E': state = 70; break;
                    case '4': state = 59; break;
                    case 'T': state = 107; break;
                    case 'y': state = 105; break;
                    case 'I': state = 74; break;
                    case 'c': state = 113; break;
                    case 'p': state = 94; break;
                    case '8': state = 85; break;
                    case 'v': state = 99; break;
                    case 'n': state = 82; break;
                    case 'W': state = 98; break;
                    case 'e': state = 60; break;
                    case 'D': state = 87; break;
                    case 'w': state = 84; break;
                    case 'H': state = 68; break;
                    case 'j': state = 110; break;
                    case 'Q': state = 95; break;
                    case 'b': state = 28; break;
                    case 'k': state = 89; break;
                    case '1': state = 100; break;
                    case 'L': state = 64; break;
                    case '2': state = 72; break;
                    case 'm': state = 77; break;
                    case 'X': state = 101; break;
                    case 'V': state = 96; break;
                    case '0': state = 93; break;
                    case 'C': state = 88; break;
                    case 'N': state = 83; break;
                    case 'O': state = 66; break;
                    case 'u': state = 92; break;
                    default: return std::find(finalNodes.begin(), finalNodes.end(), state) != finalNodes.end();
                }
                break;
            case 104: 
                switch(letter) {
                    case '3': state = 25; break;
                    case 'o': state = 106; break;
                    case 's': state = 61; break;
                    case 'F': state = 75; break;
                    case '9': state = 44; break;
                    case 'a': state = 63; break;
                    case 'k': state = 89; break;
                    case 'l': state = 79; break;
                    case 'I': state = 74; break;
                    case 'B': state = 78; break;
                    case 'q': state = 76; break;
                    case 'x': state = 71; break;
                    case 'e': state = 60; break;
                    case 'R': state = 108; break;
                    case 'g': state = 80; break;
                    case 't': state = 23; break;
                    case 'U': state = 103; break;
                    case 'P': state = 65; break;
                    case 'M': state = 62; break;
                    case '6': state = 27; break;
                    case 'S': state = 73; break;
                    case 'h': state = 112; break;
                    case 'n': state = 82; break;
                    case '4': state = 59; break;
                    case 'G': state = 104; break;
                    case 'y': state = 105; break;
                    case '8': state = 85; break;
                    case '5': state = 111; break;
                    case 'Z': state = 67; break;
                    case 'C': state = 88; break;
                    case '2': state = 72; break;
                    case 'b': state = 28; break;
                    case 'p': state = 94; break;
                    case 'L': state = 64; break;
                    case 'H': state = 68; break;
                    case 'E': state = 70; break;
                    case 'z': state = 109; break;
                    case 'J': state = 24; break;
                    case 'W': state = 98; break;
                    case 'i': state = 69; break;
                    case 'T': state = 107; break;
                    case 'r': state = 26; break;
                    case 'Q': state = 95; break;
                    case 'N': state = 83; break;
                    case 'm': state = 77; break;
                    case 'v': state = 99; break;
                    case 'K': state = 58; break;
                    case 'c': state = 113; break;
                    case 'w': state = 84; break;
                    case 'j': state = 110; break;
                    case 'X': state = 101; break;
                    case 'O': state = 66; break;
                    case '1': state = 100; break;
                    case 'D': state = 87; break;
                    case 'A': state = 81; break;
                    case '7': state = 102; break;
                    case 'Y': state = 97; break;
                    case 'V': state = 96; break;
                    case '0': state = 93; break;
                    case 'd': state = 90; break;
                    case 'u': state = 92; break;
                    case 'f': state = 91; break;
                    default: return std::find(finalNodes.begin(), finalNodes.end(), state) != finalNodes.end();
                }
                break;
            case 105: 
                switch(letter) {
                    case 'C': state = 88; break;
                    case '3': state = 25; break;
                    case 'B': state = 78; break;
                    case 'o': state = 106; break;
                    case 'F': state = 75; break;
                    case '9': state = 44; break;
                    case 's': state = 61; break;
                    case 'f': state = 91; break;
                    case 'h': state = 112; break;
                    case 'I': state = 74; break;
                    case 'S': state = 73; break;
                    case 'R': state = 108; break;
                    case 'v': state = 99; break;
                    case 'g': state = 80; break;
                    case 'l': state = 79; break;
                    case 'q': state = 76; break;
                    case 'e': state = 60; break;
                    case 'P': state = 65; break;
                    case 'x': state = 71; break;
                    case 'U': state = 103; break;
                    case 't': state = 23; break;
                    case 'Y': state = 97; break;
                    case 'M': state = 62; break;
                    case '6': state = 27; break;
                    case 'n': state = 82; break;
                    case 'K': state = 58; break;
                    case '8': state = 85; break;
                    case 'y': state = 105; break;
                    case '4': state = 59; break;
                    case 'a': state = 63; break;
                    case 'G': state = 104; break;
                    case 'c': state = 113; break;
                    case '2': state = 72; break;
                    case 'b': state = 28; break;
                    case 'E': state = 70; break;
                    case 'W': state = 98; break;
                    case 'i': state = 69; break;
                    case 'T': state = 107; break;
                    case 'J': state = 24; break;
                    case 'Z': state = 67; break;
                    case 'z': state = 109; break;
                    case '7': state = 102; break;
                    case 'm': state = 77; break;
                    case 'w': state = 84; break;
                    case '5': state = 111; break;
                    case 'D': state = 87; break;
                    case 'L': state = 64; break;
                    case 'H': state = 68; break;
                    case 'Q': state = 95; break;
                    case 'k': state = 89; break;
                    case 'j': state = 110; break;
                    case 'r': state = 26; break;
                    case 'X': state = 101; break;
                    case 'N': state = 83; break;
                    case 'A': state = 81; break;
                    case 'O': state = 66; break;
                    case '1': state = 100; break;
                    case 'V': state = 96; break;
                    case 'p': state = 94; break;
                    case '0': state = 93; break;
                    case 'd': state = 90; break;
                    case 'u': state = 92; break;
                    default: return std::find(finalNodes.begin(), finalNodes.end(), state) != finalNodes.end();
                }
                break;
            case 106: 
                switch(letter) {
                    case 'C': state = 88; break;
                    case '3': state = 25; break;
                    case 'o': state = 106; break;
                    case 'F': state = 75; break;
                    case '9': state = 44; break;
                    case 'k': state = 89; break;
                    case 'f': state = 91; break;
                    case 'u': state = 92; break;
                    case 's': state = 61; break;
                    case 'y': state = 105; break;
                    case 'K': state = 58; break;
                    case 'P': state = 65; break;
                    case 'I': state = 74; break;
                    case 'e': state = 60; break;
                    case 'S': state = 73; break;
                    case 'R': state = 108; break;
                    case '8': state = 85; break;
                    case 'g': state = 80; break;
                    case 'l': state = 79; break;
                    case 't': state = 23; break;
                    case 'x': state = 71; break;
                    case 'U': state = 103; break;
                    case 'M': state = 62; break;
                    case 'Z': state = 67; break;
                    case 'h': state = 112; break;
                    case 'n': state = 82; break;
                    case 'c': state = 113; break;
                    case 'b': state = 28; break;
                    case 'E': state = 70; break;
                    case 'G': state = 104; break;
                    case 'a': state = 63; break;
                    case 'X': state = 101; break;
                    case 'L': state = 64; break;
                    case 'j': state = 110; break;
                    case '2': state = 72; break;
                    case '6': state = 27; break;
                    case 'T': state = 107; break;
                    case 'J': state = 24; break;
                    case 'W': state = 98; break;
                    case 'v': state = 99; break;
                    case 'i': state = 69; break;
                    case 'q': state = 76; break;
                    case 'w': state = 84; break;
                    case 'Q': state = 95; break;
                    case 'N': state = 83; break;
                    case 'H': state = 68; break;
                    case 'p': state = 94; break;
                    case 'B': state = 78; break;
                    case 'D': state = 87; break;
                    case 'r': state = 26; break;
                    case 'O': state = 66; break;
                    case '5': state = 111; break;
                    case 'm': state = 77; break;
                    case 'A': state = 81; break;
                    case '7': state = 102; break;
                    case '4': state = 59; break;
                    case '1': state = 100; break;
                    case 'z': state = 109; break;
                    case 'V': state = 96; break;
                    case 'd': state = 90; break;
                    case '0': state = 93; break;
                    case 'Y': state = 97; break;
                    default: return std::find(finalNodes.begin(), finalNodes.end(), state) != finalNodes.end();
                }
                break;
            case 107: 
                switch(letter) {
                    case '3': state = 25; break;
                    case 'o': state = 106; break;
                    case '9': state = 44; break;
                    case 's': state = 61; break;
                    case 'k': state = 89; break;
                    case 'f': state = 91; break;
                    case 'a': state = 63; break;
                    case 'u': state = 92; break;
                    case 'g': state = 80; break;
                    case 'R': state = 108; break;
                    case 'S': state = 73; break;
                    case 'e': state = 60; break;
                    case 'B': state = 78; break;
                    case 'I': state = 74; break;
                    case 'c': state = 113; break;
                    case 'x': state = 71; break;
                    case 'X': state = 101; break;
                    case 'U': state = 103; break;
                    case 'l': state = 79; break;
                    case 'W': state = 98; break;
                    case 'M': state = 62; break;
                    case 't': state = 23; break;
                    case 'z': state = 109; break;
                    case 'K': state = 58; break;
                    case 'b': state = 28; break;
                    case '7': state = 102; break;
                    case 'E': state = 70; break;
                    case 'P': state = 65; break;
                    case 'y': state = 105; break;
                    case 'H': state = 68; break;
                    case '4': state = 59; break;
                    case '2': state = 72; break;
                    case '6': state = 27; break;
                    case '5': state = 111; break;
                    case 'h': state = 112; break;
                    case 'C': state = 88; break;
                    case 'J': state = 24; break;
                    case 'i': state = 69; break;
                    case 'A': state = 81; break;
                    case 'T': state = 107; break;
                    case 'N': state = 83; break;
                    case '8': state = 85; break;
                    case 'L': state = 64; break;
                    case 'n': state = 82; break;
                    case 'v': state = 99; break;
                    case 'F': state = 75; break;
                    case 'Q': state = 95; break;
                    case '1': state = 100; break;
                    case 'D': state = 87; break;
                    case 'j': state = 110; break;
                    case 'm': state = 77; break;
                    case 'G': state = 104; break;
                    case 'q': state = 76; break;
                    case 'Z': state = 67; break;
                    case 'r': state = 26; break;
                    case 'Y': state = 97; break;
                    case 'O': state = 66; break;
                    case 'w': state = 84; break;
                    case 'V': state = 96; break;
                    case 'p': state = 94; break;
                    case 'd': state = 90; break;
                    case '0': state = 93; break;
                    default: return std::find(finalNodes.begin(), finalNodes.end(), state) != finalNodes.end();
                }
                break;
            case 108: 
                switch(letter) {
                    case '3': state = 25; break;
                    case 'B': state = 78; break;
                    case 'o': state = 106; break;
                    case 'F': state = 75; break;
                    case 'p': state = 94; break;
                    case 's': state = 61; break;
                    case '2': state = 72; break;
                    case 'q': state = 76; break;
                    case 'J': state = 24; break;
                    case 'h': state = 112; break;
                    case 'l': state = 79; break;
                    case 'V': state = 96; break;
                    case 't': state = 23; break;
                    case 'G': state = 104; break;
                    case 'P': state = 65; break;
                    case 'M': state = 62; break;
                    case '4': state = 59; break;
                    case 'c': state = 113; break;
                    case 'U': state = 103; break;
                    case 'E': state = 70; break;
                    case 'a': state = 63; break;
                    case 'y': state = 105; break;
                    case 'X': state = 101; break;
                    case 'u': state = 92; break;
                    case 'w': state = 84; break;
                    case 'x': state = 71; break;
                    case 'z': state = 109; break;
                    case 'i': state = 69; break;
                    case 'n': state = 82; break;
                    case '8': state = 85; break;
                    case 'g': state = 80; break;
                    case '7': state = 102; break;
                    case 'R': state = 108; break;
                    case 'H': state = 68; break;
                    case '6': state = 27; break;
                    case 'S': state = 73; break;
                    case 'N': state = 83; break;
                    case 'j': state = 110; break;
                    case '1': state = 100; break;
                    case 'Y': state = 97; break;
                    case 'D': state = 87; break;
                    case 'K': state = 58; break;
                    case 'm': state = 77; break;
                    case 'r': state = 26; break;
                    case 'Q': state = 95; break;
                    case 'v': state = 99; break;
                    case 'I': state = 74; break;
                    case 'A': state = 81; break;
                    case 'Z': state = 67; break;
                    case '0': state = 93; break;
                    case 'C': state = 88; break;
                    case 'L': state = 64; break;
                    case 'T': state = 107; break;
                    case '5': state = 111; break;
                    case 'k': state = 89; break;
                    case 'W': state = 98; break;
                    case 'e': state = 60; break;
                    case 'O': state = 66; break;
                    case 'f': state = 91; break;
                    case 'b': state = 28; break;
                    case 'd': state = 90; break;
                    case '9': state = 44; break;
                    default: return std::find(finalNodes.begin(), finalNodes.end(), state) != finalNodes.end();
                }
                break;
            case 109: 
                switch(letter) {
                    case '3': state = 25; break;
                    case 'o': state = 106; break;
                    case 'F': state = 75; break;
                    case '9': state = 44; break;
                    case 'f': state = 91; break;
                    case 'u': state = 92; break;
                    case 'L': state = 64; break;
                    case 'C': state = 88; break;
                    case 'g': state = 80; break;
                    case 'P': state = 65; break;
                    case 'R': state = 108; break;
                    case 'S': state = 73; break;
                    case 'I': state = 74; break;
                    case 'Z': state = 67; break;
                    case 'l': state = 79; break;
                    case 'x': state = 71; break;
                    case 'G': state = 104; break;
                    case 't': state = 23; break;
                    case 'e': state = 60; break;
                    case 'X': state = 101; break;
                    case 'h': state = 112; break;
                    case 'v': state = 99; break;
                    case 'c': state = 113; break;
                    case 'M': state = 62; break;
                    case '2': state = 72; break;
                    case '4': state = 59; break;
                    case 's': state = 61; break;
                    case 'E': state = 70; break;
                    case 'j': state = 110; break;
                    case 'y': state = 105; break;
                    case 'A': state = 81; break;
                    case 'K': state = 58; break;
                    case 'n': state = 82; break;
                    case 'i': state = 69; break;
                    case 'b': state = 28; break;
                    case '6': state = 27; break;
                    case 'd': state = 90; break;
                    case 'U': state = 103; break;
                    case 'r': state = 26; break;
                    case 'm': state = 77; break;
                    case 'q': state = 76; break;
                    case 'w': state = 84; break;
                    case 'Y': state = 97; break;
                    case 'D': state = 87; break;
                    case 'H': state = 68; break;
                    case 'J': state = 24; break;
                    case '7': state = 102; break;
                    case 'B': state = 78; break;
                    case 'T': state = 107; break;
                    case '8': state = 85; break;
                    case '5': state = 111; break;
                    case 'N': state = 83; break;
                    case '1': state = 100; break;
                    case 'Q': state = 95; break;
                    case 'k': state = 89; break;
                    case 'O': state = 66; break;
                    case 'z': state = 109; break;
                    case 'W': state = 98; break;
                    case 'V': state = 96; break;
                    case 'p': state = 94; break;
                    case 'a': state = 63; break;
                    case '0': state = 93; break;
                    default: return std::find(finalNodes.begin(), finalNodes.end(), state) != finalNodes.end();
                }
                break;
            case 110: 
                switch(letter) {
                    case 'f': state = 91; break;
                    case 'K': state = 58; break;
                    case 'F': state = 75; break;
                    case 'B': state = 78; break;
                    case '5': state = 111; break;
                    case '9': state = 44; break;
                    case 'R': state = 108; break;
                    case 'l': state = 79; break;
                    case 't': state = 23; break;
                    case 'h': state = 112; break;
                    case 'I': state = 74; break;
                    case 'S': state = 73; break;
                    case 'V': state = 96; break;
                    case 'q': state = 76; break;
                    case '3': state = 25; break;
                    case 'y': state = 105; break;
                    case 'c': state = 113; break;
                    case 'r': state = 26; break;
                    case 'X': state = 101; break;
                    case 'a': state = 63; break;
                    case '4': state = 59; break;
                    case 'M': state = 62; break;
                    case 'b': state = 28; break;
                    case 's': state = 61; break;
                    case 'A': state = 81; break;
                    case 'x': state = 71; break;
                    case '6': state = 27; break;
                    case 'P': state = 65; break;
                    case 'E': state = 70; break;
                    case 'o': state = 106; break;
                    case 'g': state = 80; break;
                    case 'Z': state = 67; break;
                    case 'U': state = 103; break;
                    case 'e': state = 60; break;
                    case 'm': state = 77; break;
                    case 'G': state = 104; break;
                    case 'i': state = 69; break;
                    case 'n': state = 82; break;
                    case 'J': state = 24; break;
                    case 'j': state = 110; break;
                    case 'W': state = 98; break;
                    case 'D': state = 87; break;
                    case 'd': state = 90; break;
                    case '7': state = 102; break;
                    case 'N': state = 83; break;
                    case 'w': state = 84; break;
                    case 'H': state = 68; break;
                    case 'C': state = 88; break;
                    case 'v': state = 99; break;
                    case '8': state = 85; break;
                    case 'T': state = 107; break;
                    case 'p': state = 94; break;
                    case '0': state = 93; break;
                    case 'Q': state = 95; break;
                    case '2': state = 72; break;
                    case 'Y': state = 97; break;
                    case 'O': state = 66; break;
                    case 'k': state = 89; break;
                    case 'z': state = 109; break;
                    case 'u': state = 92; break;
                    case 'L': state = 64; break;
                    case '1': state = 100; break;
                    default: return std::find(finalNodes.begin(), finalNodes.end(), state) != finalNodes.end();
                }
                break;
            case 111: 
                switch(letter) {
                    case 'B': state = 78; break;
                    case 'F': state = 75; break;
                    case 'L': state = 64; break;
                    case '9': state = 44; break;
                    case '6': state = 27; break;
                    case 'R': state = 108; break;
                    case 'q': state = 76; break;
                    case 'T': state = 107; break;
                    case 'W': state = 98; break;
                    case 'y': state = 105; break;
                    case 't': state = 23; break;
                    case 'l': state = 79; break;
                    case 'o': state = 106; break;
                    case 'h': state = 112; break;
                    case 'D': state = 87; break;
                    case 'z': state = 109; break;
                    case 'V': state = 96; break;
                    case 'I': state = 74; break;
                    case 'A': state = 81; break;
                    case 'a': state = 63; break;
                    case 'u': state = 92; break;
                    case 'P': state = 65; break;
                    case 'X': state = 101; break;
                    case '5': state = 111; break;
                    case '4': state = 59; break;
                    case 's': state = 61; break;
                    case 'r': state = 26; break;
                    case 'M': state = 62; break;
                    case 'b': state = 28; break;
                    case 'E': state = 70; break;
                    case '3': state = 25; break;
                    case 'S': state = 73; break;
                    case 'Y': state = 97; break;
                    case 'n': state = 82; break;
                    case 'g': state = 80; break;
                    case '2': state = 72; break;
                    case 'U': state = 103; break;
                    case 'j': state = 110; break;
                    case 'e': state = 60; break;
                    case 'c': state = 113; break;
                    case 'x': state = 71; break;
                    case 'J': state = 24; break;
                    case 'm': state = 77; break;
                    case 'N': state = 83; break;
                    case 'i': state = 69; break;
                    case '8': state = 85; break;
                    case 'Q': state = 95; break;
                    case 'Z': state = 67; break;
                    case '7': state = 102; break;
                    case 'H': state = 68; break;
                    case 'G': state = 104; break;
                    case 'p': state = 94; break;
                    case 'k': state = 89; break;
                    case 'v': state = 99; break;
                    case 'K': state = 58; break;
                    case 'C': state = 88; break;
                    case 'O': state = 66; break;
                    case '1': state = 100; break;
                    case '0': state = 93; break;
                    case 'd': state = 90; break;
                    case 'w': state = 84; break;
                    case 'f': state = 91; break;
                    default: return std::find(finalNodes.begin(), finalNodes.end(), state) != finalNodes.end();
                }
                break;
            case 112: 
                switch(letter) {
                    case 'O': state = 66; break;
                    case 'F': state = 75; break;
                    case 'W': state = 98; break;
                    case 'K': state = 58; break;
                    case 'C': state = 88; break;
                    case 'z': state = 109; break;
                    case 'p': state = 94; break;
                    case 'M': state = 62; break;
                    case 'q': state = 76; break;
                    case '7': state = 102; break;
                    case 'G': state = 104; break;
                    case 'I': state = 74; break;
                    case 'l': state = 79; break;
                    case 'S': state = 73; break;
                    case '6': state = 27; break;
                    case 'n': state = 82; break;
                    case 'V': state = 96; break;
                    case 'Q': state = 95; break;
                    case 'y': state = 105; break;
                    case '1': state = 100; break;
                    case 'i': state = 69; break;
                    case 'c': state = 113; break;
                    case 'x': state = 71; break;
                    case 'u': state = 92; break;
                    case '4': state = 59; break;
                    case 't': state = 23; break;
                    case 'X': state = 101; break;
                    case 'N': state = 83; break;
                    case 'P': state = 65; break;
                    case 'Z': state = 67; break;
                    case '3': state = 25; break;
                    case 'E': state = 70; break;
                    case 'T': state = 107; break;
                    case 'R': state = 108; break;
                    case 'r': state = 26; break;
                    case 'o': state = 106; break;
                    case 'b': state = 28; break;
                    case 's': state = 61; break;
                    case 'j': state = 110; break;
                    case 'D': state = 87; break;
                    case 'g': state = 80; break;
                    case '5': state = 111; break;
                    case 'B': state = 78; break;
                    case 'Y': state = 97; break;
                    case 'J': state = 24; break;
                    case 'm': state = 77; break;
                    case 'v': state = 99; break;
                    case 'H': state = 68; break;
                    case 'a': state = 63; break;
                    case '9': state = 44; break;
                    case 'w': state = 84; break;
                    case 'A': state = 81; break;
                    case '2': state = 72; break;
                    case '8': state = 85; break;
                    case 'k': state = 89; break;
                    case 'h': state = 112; break;
                    case 'e': state = 60; break;
                    case 'U': state = 103; break;
                    case '0': state = 93; break;
                    case 'L': state = 64; break;
                    case 'd': state = 90; break;
                    case 'f': state = 91; break;
                    default: return std::find(finalNodes.begin(), finalNodes.end(), state) != finalNodes.end();
                }
                break;
            case 113: 
                switch(letter) {
                    case 'F': state = 75; break;
                    case 'g': state = 80; break;
                    case 'W': state = 98; break;
                    case 'z': state = 109; break;
                    case 'Z': state = 67; break;
                    case 'q': state = 76; break;
                    case 'R': state = 108; break;
                    case 'h': state = 112; break;
                    case 'X': state = 101; break;
                    case 'A': state = 81; break;
                    case 't': state = 23; break;
                    case 'e': state = 60; break;
                    case 'I': state = 74; break;
                    case 'l': state = 79; break;
                    case 'V': state = 96; break;
                    case 'Q': state = 95; break;
                    case 'S': state = 73; break;
                    case '3': state = 25; break;
                    case 'w': state = 84; break;
                    case 'y': state = 105; break;
                    case 'H': state = 68; break;
                    case 'n': state = 82; break;
                    case '0': state = 93; break;
                    case 'G': state = 104; break;
                    case '1': state = 100; break;
                    case 'c': state = 113; break;
                    case 's': state = 61; break;
                    case 'M': state = 62; break;
                    case 'r': state = 26; break;
                    case 'i': state = 69; break;
                    case 'E': state = 70; break;
                    case 'x': state = 71; break;
                    case '4': state = 59; break;
                    case 'j': state = 110; break;
                    case 'u': state = 92; break;
                    case 'J': state = 24; break;
                    case 'L': state = 64; break;
                    case 'o': state = 106; break;
                    case 'P': state = 65; break;
                    case '2': state = 72; break;
                    case 'm': state = 77; break;
                    case '5': state = 111; break;
                    case 'D': state = 87; break;
                    case 'K': state = 58; break;
                    case '7': state = 102; break;
                    case 'N': state = 83; break;
                    case 'O': state = 66; break;
                    case 'Y': state = 97; break;
                    case 'T': state = 107; break;
                    case 'p': state = 94; break;
                    case 'B': state = 78; break;
                    case '9': state = 44; break;
                    case 'v': state = 99; break;
                    case 'f': state = 91; break;
                    case 'd': state = 90; break;
                    case 'k': state = 89; break;
                    case 'U': state = 103; break;
                    case 'b': state = 28; break;
                    case '8': state = 85; break;
                    case 'C': state = 88; break;
                    case 'a': state = 63; break;
                    case '6': state = 27; break;
                    default: return std::find(finalNodes.begin(), finalNodes.end(), state) != finalNodes.end();
                }
                break;
            case 114: 
                switch(letter) {
                    case 'I': state = 6; break;
                    case 'p': state = 14; break;
                    case 'D': state = 0; break;
                    case 'Y': state = 19; break;
                    case 'H': state = 5; break;
                    case 'U': state = 22; break;
                    case 'Q': state = 17; break;
                    case 'Z': state = 54; break;
                    case 'u': state = 16; break;
                    case 'E': state = 46; break;
                    case 'X': state = 86; break;
                    case 'd': state = 41; break;
                    case 'c': state = 12; break;
                    case 's': state = 4; break;
                    case 'P': state = 15; break;
                    case 'T': state = 21; break;
                    case 'M': state = 9; break;
                    case 'F': state = 42; break;
                    case 'j': state = 55; break;
                    case 'w': state = 33; break;
                    case 'L': state = 56; break;
                    case 't': state = 1; break;
                    case 'G': state = 32; break;
                    case 'J': state = 2; break;
                    case 'y': state = 31; break;
                    case 'f': state = 3; break;
                    case 'm': state = 43; break;
                    case 'o': state = 39; break;
                    case 'e': state = 10; break;
                    case 'N': state = 47; break;
                    case 'x': state = 30; break;
                    case 'i': state = 29; break;
                    case 'z': state = 34; break;
                    case 'O': state = 48; break;
                    case 'A': state = 53; break;
                    case 'S': state = 11; break;
                    case 'n': state = 37; break;
                    case 'g': state = 50; break;
                    case 'k': state = 40; break;
                    case 'R': state = 57; break;
                    case 'V': state = 20; break;
                    case 'B': state = 13; break;
                    case 'C': state = 7; break;
                    case 'W': state = 18; break;
                    case 'l': state = 51; break;
                    case 'r': state = 49; break;
                    case 'q': state = 35; break;
                    case 'a': state = 8; break;
                    case 'K': state = 45; break;
                    case 'h': state = 36; break;
                    case 'v': state = 38; break;
                    case 'b': state = 52; break;
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
