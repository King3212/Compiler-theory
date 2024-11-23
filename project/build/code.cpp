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



bool _if(Input *input){
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
                    case 'f': state = 0; break;
                    default: return std::find(finalNodes.begin(), finalNodes.end(), state) != finalNodes.end();
                }
                break;
            case 2: 
                switch(letter) {
                    case 'i': state = 1; break;
                    default: return std::find(finalNodes.begin(), finalNodes.end(), state) != finalNodes.end();
                }
                break;
            default: break;
        }
    }
    return false;
}
bool _then(Input *input){
    std::vector<int> finalNodes = {0};
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
                    case 'n': state = 0; break;
                    default: return std::find(finalNodes.begin(), finalNodes.end(), state) != finalNodes.end();
                }
                break;
            case 2: 
                switch(letter) {
                    case 'e': state = 1; break;
                    default: return std::find(finalNodes.begin(), finalNodes.end(), state) != finalNodes.end();
                }
                break;
            case 3: 
                switch(letter) {
                    case 'h': state = 2; break;
                    default: return std::find(finalNodes.begin(), finalNodes.end(), state) != finalNodes.end();
                }
                break;
            case 4: 
                switch(letter) {
                    case 't': state = 3; break;
                    default: return std::find(finalNodes.begin(), finalNodes.end(), state) != finalNodes.end();
                }
                break;
            default: break;
        }
    }
    return false;
}
bool _else(Input *input){
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
                    case 's': state = 3; break;
                    default: return std::find(finalNodes.begin(), finalNodes.end(), state) != finalNodes.end();
                }
                break;
            case 2: 
                switch(letter) {
                    case 'e': state = 4; break;
                    default: return std::find(finalNodes.begin(), finalNodes.end(), state) != finalNodes.end();
                }
                break;
            case 3: 
                switch(letter) {
                    case 'e': state = 0; break;
                    default: return std::find(finalNodes.begin(), finalNodes.end(), state) != finalNodes.end();
                }
                break;
            case 4: 
                switch(letter) {
                    case 'l': state = 1; break;
                    default: return std::find(finalNodes.begin(), finalNodes.end(), state) != finalNodes.end();
                }
                break;
            default: break;
        }
    }
    return false;
}
bool _while(Input *input){
    std::vector<int> finalNodes = {0};
    int state = 5; // 初始状态
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
                    case 'e': state = 0; break;
                    default: return std::find(finalNodes.begin(), finalNodes.end(), state) != finalNodes.end();
                }
                break;
            case 2: 
                switch(letter) {
                    case 'i': state = 3; break;
                    default: return std::find(finalNodes.begin(), finalNodes.end(), state) != finalNodes.end();
                }
                break;
            case 3: 
                switch(letter) {
                    case 'l': state = 1; break;
                    default: return std::find(finalNodes.begin(), finalNodes.end(), state) != finalNodes.end();
                }
                break;
            case 4: 
                switch(letter) {
                    case 'h': state = 2; break;
                    default: return std::find(finalNodes.begin(), finalNodes.end(), state) != finalNodes.end();
                }
                break;
            case 5: 
                switch(letter) {
                    case 'w': state = 4; break;
                    default: return std::find(finalNodes.begin(), finalNodes.end(), state) != finalNodes.end();
                }
                break;
            default: break;
        }
    }
    return false;
}
bool _do(Input *input){
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
                    case 'o': state = 0; break;
                    default: return std::find(finalNodes.begin(), finalNodes.end(), state) != finalNodes.end();
                }
                break;
            case 2: 
                switch(letter) {
                    case 'd': state = 1; break;
                    default: return std::find(finalNodes.begin(), finalNodes.end(), state) != finalNodes.end();
                }
                break;
            default: break;
        }
    }
    return false;
}
bool _return(Input *input){
    std::vector<int> finalNodes = {0};
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
                    case 'n': state = 0; break;
                    default: return std::find(finalNodes.begin(), finalNodes.end(), state) != finalNodes.end();
                }
                break;
            case 2: 
                switch(letter) {
                    case 'e': state = 6; break;
                    default: return std::find(finalNodes.begin(), finalNodes.end(), state) != finalNodes.end();
                }
                break;
            case 3: 
                switch(letter) {
                    case 'u': state = 5; break;
                    default: return std::find(finalNodes.begin(), finalNodes.end(), state) != finalNodes.end();
                }
                break;
            case 4: 
                switch(letter) {
                    case 'r': state = 2; break;
                    default: return std::find(finalNodes.begin(), finalNodes.end(), state) != finalNodes.end();
                }
                break;
            case 5: 
                switch(letter) {
                    case 'r': state = 1; break;
                    default: return std::find(finalNodes.begin(), finalNodes.end(), state) != finalNodes.end();
                }
                break;
            case 6: 
                switch(letter) {
                    case 't': state = 3; break;
                    default: return std::find(finalNodes.begin(), finalNodes.end(), state) != finalNodes.end();
                }
                break;
            default: break;
        }
    }
    return false;
}
bool _void(Input *input){
    std::vector<int> finalNodes = {0};
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
                    case 'd': state = 0; break;
                    default: return std::find(finalNodes.begin(), finalNodes.end(), state) != finalNodes.end();
                }
                break;
            case 2: 
                switch(letter) {
                    case 'i': state = 1; break;
                    default: return std::find(finalNodes.begin(), finalNodes.end(), state) != finalNodes.end();
                }
                break;
            case 3: 
                switch(letter) {
                    case 'o': state = 2; break;
                    default: return std::find(finalNodes.begin(), finalNodes.end(), state) != finalNodes.end();
                }
                break;
            case 4: 
                switch(letter) {
                    case 'v': state = 3; break;
                    default: return std::find(finalNodes.begin(), finalNodes.end(), state) != finalNodes.end();
                }
                break;
            default: break;
        }
    }
    return false;
}
bool _int(Input *input){
    std::vector<int> finalNodes = {0};
    int state = 3; // 初始状态
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
                    case 't': state = 0; break;
                    default: return std::find(finalNodes.begin(), finalNodes.end(), state) != finalNodes.end();
                }
                break;
            case 2: 
                switch(letter) {
                    case 'n': state = 1; break;
                    default: return std::find(finalNodes.begin(), finalNodes.end(), state) != finalNodes.end();
                }
                break;
            case 3: 
                switch(letter) {
                    case 'i': state = 2; break;
                    default: return std::find(finalNodes.begin(), finalNodes.end(), state) != finalNodes.end();
                }
                break;
            default: break;
        }
    }
    return false;
}
bool _float(Input *input){
    std::vector<int> finalNodes = {0};
    int state = 5; // 初始状态
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
                    case 't': state = 0; break;
                    default: return std::find(finalNodes.begin(), finalNodes.end(), state) != finalNodes.end();
                }
                break;
            case 2: 
                switch(letter) {
                    case 'a': state = 1; break;
                    default: return std::find(finalNodes.begin(), finalNodes.end(), state) != finalNodes.end();
                }
                break;
            case 3: 
                switch(letter) {
                    case 'o': state = 2; break;
                    default: return std::find(finalNodes.begin(), finalNodes.end(), state) != finalNodes.end();
                }
                break;
            case 4: 
                switch(letter) {
                    case 'l': state = 3; break;
                    default: return std::find(finalNodes.begin(), finalNodes.end(), state) != finalNodes.end();
                }
                break;
            case 5: 
                switch(letter) {
                    case 'f': state = 4; break;
                    default: return std::find(finalNodes.begin(), finalNodes.end(), state) != finalNodes.end();
                }
                break;
            default: break;
        }
    }
    return false;
}
bool _double(Input *input){
    std::vector<int> finalNodes = {0};
    int state = 3; // 初始状态
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
                    case 'e': state = 0; break;
                    default: return std::find(finalNodes.begin(), finalNodes.end(), state) != finalNodes.end();
                }
                break;
            case 2: 
                switch(letter) {
                    case 'l': state = 1; break;
                    default: return std::find(finalNodes.begin(), finalNodes.end(), state) != finalNodes.end();
                }
                break;
            case 3: 
                switch(letter) {
                    case 'd': state = 6; break;
                    default: return std::find(finalNodes.begin(), finalNodes.end(), state) != finalNodes.end();
                }
                break;
            case 4: 
                switch(letter) {
                    case 'b': state = 2; break;
                    default: return std::find(finalNodes.begin(), finalNodes.end(), state) != finalNodes.end();
                }
                break;
            case 5: 
                switch(letter) {
                    case 'u': state = 4; break;
                    default: return std::find(finalNodes.begin(), finalNodes.end(), state) != finalNodes.end();
                }
                break;
            case 6: 
                switch(letter) {
                    case 'o': state = 5; break;
                    default: return std::find(finalNodes.begin(), finalNodes.end(), state) != finalNodes.end();
                }
                break;
            default: break;
        }
    }
    return false;
}
bool _add(Input *input){
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
bool _oneLine_comment_open(Input *input){
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
                    case '/': state = 2; break;
                    default: return std::find(finalNodes.begin(), finalNodes.end(), state) != finalNodes.end();
                }
                break;
            case 2: 
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
bool _open_comment(Input *input){
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
                    case '*': state = 0; break;
                    default: return std::find(finalNodes.begin(), finalNodes.end(), state) != finalNodes.end();
                }
                break;
            case 2: 
                switch(letter) {
                    case '/': state = 1; break;
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
                    case '/': state = 0; break;
                    default: return std::find(finalNodes.begin(), finalNodes.end(), state) != finalNodes.end();
                }
                break;
            case 2: 
                switch(letter) {
                    case '*': state = 1; break;
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
bool _less_equal(Input *input){
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
bool _greater_equal(Input *input){
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
                    case '=': state = 2; break;
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
bool _not_equal(Input *input){
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
                    case '!': state = 1; break;
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
                    case '=': state = 0; break;
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
bool _comma(Input *input){
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
                    case ',': state = 0; break;
                    default: return std::find(finalNodes.begin(), finalNodes.end(), state) != finalNodes.end();
                }
                break;
            default: break;
        }
    }
    return false;
}
bool _left_paren(Input *input){
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
                    case '(': state = 0; break;
                    default: return std::find(finalNodes.begin(), finalNodes.end(), state) != finalNodes.end();
                }
                break;
            default: break;
        }
    }
    return false;
}
bool _right_paren(Input *input){
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
                    case ')': state = 0; break;
                    default: return std::find(finalNodes.begin(), finalNodes.end(), state) != finalNodes.end();
                }
                break;
            default: break;
        }
    }
    return false;
}
bool _left_bracket(Input *input){
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
                    case '[': state = 0; break;
                    default: return std::find(finalNodes.begin(), finalNodes.end(), state) != finalNodes.end();
                }
                break;
            default: break;
        }
    }
    return false;
}
bool _right_bracket(Input *input){
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
                    case ']': state = 0; break;
                    default: return std::find(finalNodes.begin(), finalNodes.end(), state) != finalNodes.end();
                }
                break;
            default: break;
        }
    }
    return false;
}
bool _left_brace(Input *input){
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
bool _right_brace(Input *input){
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
bool _id(Input *input){
    std::vector<int> finalNodes = {10, 11, 12, 13, 23, 14, 17, 21, 50, 0, 20, 44, 22, 5, 34, 39, 18, 9, 56, 16, 38, 8, 87, 19, 31, 80, 2, 101, 81, 32, 104, 110, 24, 86, 82, 65, 7, 6, 66, 74, 28, 55, 4, 3, 75, 1, 15, 58, 57, 107, 54, 53, 83, 114, 91, 85, 52, 63, 92, 33, 108, 49, 115, 25, 84, 109, 97, 89, 30, 73, 102, 43, 59, 88, 29, 111, 100, 41, 71, 64, 61, 69, 95, 36, 70, 67, 45, 103, 106, 47, 77, 72, 62, 113, 26, 98, 93, 96, 37, 60, 94, 35, 68, 78, 105, 46, 90, 112, 27, 79, 99, 40, 42, 76, 48, 51};
    int state = 116; // 初始状态
    while(true) {
        char letter = (input->getInput())[0];
        switch(state) {
            case 0: 
                switch(letter) {
                    case 'p': state = 95; break;
                    case 'W': state = 74; break;
                    case '8': state = 65; break;
                    case 'V': state = 25; break;
                    case 's': state = 28; break;
                    case '7': state = 111; break;
                    case '0': state = 69; break;
                    case 'x': state = 88; break;
                    case 'y': state = 84; break;
                    case 'r': state = 93; break;
                    case 'F': state = 82; break;
                    case 'm': state = 92; break;
                    case 'q': state = 91; break;
                    case 'H': state = 85; break;
                    case 'I': state = 63; break;
                    case 'E': state = 98; break;
                    case 'i': state = 112; break;
                    case '6': state = 66; break;
                    case 'n': state = 86; break;
                    case 'T': state = 110; break;
                    case '1': state = 79; break;
                    case '_': state = 72; break;
                    case 'a': state = 75; break;
                    case 'j': state = 26; break;
                    case 't': state = 78; break;
                    case 'u': state = 105; break;
                    case '9': state = 107; break;
                    case 'X': state = 64; break;
                    case 'D': state = 27; break;
                    case 'P': state = 59; break;
                    case 'L': state = 99; break;
                    case 'A': state = 102; break;
                    case '4': state = 77; break;
                    case 'g': state = 73; break;
                    case 'U': state = 71; break;
                    case 'c': state = 108; break;
                    case 'z': state = 94; break;
                    case 'C': state = 80; break;
                    case 'd': state = 70; break;
                    case 'h': state = 24; break;
                    case 'f': state = 76; break;
                    case 'o': state = 109; break;
                    case '3': state = 96; break;
                    case 'S': state = 45; break;
                    case 'Z': state = 89; break;
                    case 'G': state = 103; break;
                    case 'J': state = 60; break;
                    case 'v': state = 90; break;
                    case 'b': state = 61; break;
                    case 'k': state = 83; break;
                    case 'O': state = 81; break;
                    case 'M': state = 113; break;
                    case 'w': state = 68; break;
                    case 'l': state = 97; break;
                    case 'e': state = 106; break;
                    case 'K': state = 101; break;
                    case 'B': state = 62; break;
                    case 'N': state = 104; break;
                    case 'R': state = 29; break;
                    case '5': state = 114; break;
                    case 'Q': state = 100; break;
                    case 'Y': state = 115; break;
                    case '2': state = 67; break;
                    default: return std::find(finalNodes.begin(), finalNodes.end(), state) != finalNodes.end();
                }
                break;
            case 1: 
                switch(letter) {
                    case 'N': state = 104; break;
                    case 'K': state = 101; break;
                    case '5': state = 114; break;
                    case 'X': state = 64; break;
                    case 'V': state = 25; break;
                    case 'o': state = 109; break;
                    case 'D': state = 27; break;
                    case 'W': state = 74; break;
                    case 'A': state = 102; break;
                    case '_': state = 72; break;
                    case 'z': state = 94; break;
                    case '3': state = 96; break;
                    case 'm': state = 92; break;
                    case 'q': state = 91; break;
                    case 'E': state = 98; break;
                    case 'M': state = 113; break;
                    case 'c': state = 108; break;
                    case 'I': state = 63; break;
                    case 't': state = 78; break;
                    case 'U': state = 71; break;
                    case 's': state = 28; break;
                    case '0': state = 69; break;
                    case 'Q': state = 100; break;
                    case 'a': state = 75; break;
                    case 'j': state = 26; break;
                    case 'P': state = 59; break;
                    case '7': state = 111; break;
                    case 'k': state = 83; break;
                    case 'S': state = 45; break;
                    case 'x': state = 88; break;
                    case 'r': state = 93; break;
                    case '9': state = 107; break;
                    case 'p': state = 95; break;
                    case 'w': state = 68; break;
                    case '4': state = 77; break;
                    case 'u': state = 105; break;
                    case 'y': state = 84; break;
                    case 'i': state = 112; break;
                    case 'f': state = 76; break;
                    case 'v': state = 90; break;
                    case 'G': state = 103; break;
                    case 'g': state = 73; break;
                    case 'l': state = 97; break;
                    case '2': state = 67; break;
                    case 'H': state = 85; break;
                    case 'n': state = 86; break;
                    case 'Y': state = 115; break;
                    case '1': state = 79; break;
                    case 'C': state = 80; break;
                    case 'Z': state = 89; break;
                    case '8': state = 65; break;
                    case '6': state = 66; break;
                    case 'd': state = 70; break;
                    case 'F': state = 82; break;
                    case 'T': state = 110; break;
                    case 'J': state = 60; break;
                    case 'b': state = 61; break;
                    case 'h': state = 24; break;
                    case 'e': state = 106; break;
                    case 'R': state = 29; break;
                    case 'B': state = 62; break;
                    case 'O': state = 81; break;
                    case 'L': state = 99; break;
                    default: return std::find(finalNodes.begin(), finalNodes.end(), state) != finalNodes.end();
                }
                break;
            case 2: 
                switch(letter) {
                    case 'N': state = 104; break;
                    case 'K': state = 101; break;
                    case '5': state = 114; break;
                    case 'X': state = 64; break;
                    case '0': state = 69; break;
                    case '3': state = 96; break;
                    case 'G': state = 103; break;
                    case 'A': state = 102; break;
                    case 'W': state = 74; break;
                    case 'M': state = 113; break;
                    case '9': state = 107; break;
                    case 'D': state = 27; break;
                    case 's': state = 28; break;
                    case 'z': state = 94; break;
                    case 'm': state = 92; break;
                    case 'q': state = 91; break;
                    case 'v': state = 90; break;
                    case 'E': state = 98; break;
                    case 'V': state = 25; break;
                    case 'k': state = 83; break;
                    case '_': state = 72; break;
                    case 'y': state = 84; break;
                    case 'x': state = 88; break;
                    case 'p': state = 95; break;
                    case '7': state = 111; break;
                    case 'U': state = 71; break;
                    case 'l': state = 97; break;
                    case 'g': state = 73; break;
                    case 'j': state = 26; break;
                    case 'Z': state = 89; break;
                    case '2': state = 67; break;
                    case 'f': state = 76; break;
                    case 'r': state = 93; break;
                    case 'H': state = 85; break;
                    case 'Q': state = 100; break;
                    case 'c': state = 108; break;
                    case 'I': state = 63; break;
                    case 'S': state = 45; break;
                    case 'o': state = 109; break;
                    case 'w': state = 68; break;
                    case 'P': state = 59; break;
                    case 'T': state = 110; break;
                    case 'i': state = 112; break;
                    case 'd': state = 70; break;
                    case 'u': state = 105; break;
                    case '4': state = 77; break;
                    case 'n': state = 86; break;
                    case 't': state = 78; break;
                    case 'F': state = 82; break;
                    case 'B': state = 62; break;
                    case '8': state = 65; break;
                    case 'C': state = 80; break;
                    case 'b': state = 61; break;
                    case 'a': state = 75; break;
                    case 'R': state = 29; break;
                    case 'L': state = 99; break;
                    case '6': state = 66; break;
                    case 'J': state = 60; break;
                    case 'h': state = 24; break;
                    case '1': state = 79; break;
                    case 'e': state = 106; break;
                    case 'Y': state = 115; break;
                    case 'O': state = 81; break;
                    default: return std::find(finalNodes.begin(), finalNodes.end(), state) != finalNodes.end();
                }
                break;
            case 3: 
                switch(letter) {
                    case 'z': state = 94; break;
                    case 'K': state = 101; break;
                    case '5': state = 114; break;
                    case 'N': state = 104; break;
                    case 'C': state = 80; break;
                    case 'o': state = 109; break;
                    case '4': state = 77; break;
                    case '8': state = 65; break;
                    case 'F': state = 82; break;
                    case 'n': state = 86; break;
                    case 'D': state = 27; break;
                    case 'a': state = 75; break;
                    case 'm': state = 92; break;
                    case '9': state = 107; break;
                    case 'R': state = 29; break;
                    case 't': state = 78; break;
                    case 'r': state = 93; break;
                    case 's': state = 28; break;
                    case 'A': state = 102; break;
                    case 'E': state = 98; break;
                    case '2': state = 67; break;
                    case 'j': state = 26; break;
                    case 'M': state = 113; break;
                    case '1': state = 79; break;
                    case 'U': state = 71; break;
                    case '7': state = 111; break;
                    case '_': state = 72; break;
                    case 'y': state = 84; break;
                    case 'G': state = 103; break;
                    case 'H': state = 85; break;
                    case 'q': state = 91; break;
                    case 'v': state = 90; break;
                    case 'x': state = 88; break;
                    case '3': state = 96; break;
                    case 'p': state = 95; break;
                    case 'g': state = 73; break;
                    case 'Z': state = 89; break;
                    case 'V': state = 25; break;
                    case 'k': state = 83; break;
                    case 'P': state = 59; break;
                    case '0': state = 69; break;
                    case 'I': state = 63; break;
                    case 'W': state = 74; break;
                    case 'X': state = 64; break;
                    case 'f': state = 76; break;
                    case 'S': state = 45; break;
                    case 'l': state = 97; break;
                    case 'w': state = 68; break;
                    case 'i': state = 112; break;
                    case 'B': state = 62; break;
                    case 'u': state = 105; break;
                    case 'd': state = 70; break;
                    case 'c': state = 108; break;
                    case 'Q': state = 100; break;
                    case 'T': state = 110; break;
                    case 'Y': state = 115; break;
                    case '6': state = 66; break;
                    case 'b': state = 61; break;
                    case 'h': state = 24; break;
                    case 'J': state = 60; break;
                    case 'e': state = 106; break;
                    case 'O': state = 81; break;
                    case 'L': state = 99; break;
                    default: return std::find(finalNodes.begin(), finalNodes.end(), state) != finalNodes.end();
                }
                break;
            case 4: 
                switch(letter) {
                    case 'z': state = 94; break;
                    case 'K': state = 101; break;
                    case 'X': state = 64; break;
                    case '8': state = 65; break;
                    case 'D': state = 27; break;
                    case 'S': state = 45; break;
                    case 'u': state = 105; break;
                    case '_': state = 72; break;
                    case '0': state = 69; break;
                    case 'y': state = 84; break;
                    case 'q': state = 91; break;
                    case 'm': state = 92; break;
                    case 'E': state = 98; break;
                    case '7': state = 111; break;
                    case 'U': state = 71; break;
                    case 'A': state = 102; break;
                    case 'v': state = 90; break;
                    case 'x': state = 88; break;
                    case '3': state = 96; break;
                    case 'l': state = 97; break;
                    case 'g': state = 73; break;
                    case 'j': state = 26; break;
                    case 'p': state = 95; break;
                    case 'P': state = 59; break;
                    case 'W': state = 74; break;
                    case '2': state = 67; break;
                    case 'V': state = 25; break;
                    case 'a': state = 75; break;
                    case '4': state = 77; break;
                    case 'T': state = 110; break;
                    case 'c': state = 108; break;
                    case 'F': state = 82; break;
                    case 'r': state = 93; break;
                    case 's': state = 28; break;
                    case 'H': state = 85; break;
                    case 'b': state = 61; break;
                    case 'k': state = 83; break;
                    case 'I': state = 63; break;
                    case 'f': state = 76; break;
                    case 'M': state = 113; break;
                    case 'o': state = 109; break;
                    case 'L': state = 99; break;
                    case 'Q': state = 100; break;
                    case 'Z': state = 89; break;
                    case 'C': state = 80; break;
                    case 'w': state = 68; break;
                    case 'e': state = 106; break;
                    case 't': state = 78; break;
                    case 'G': state = 103; break;
                    case 'Y': state = 115; break;
                    case 'B': state = 62; break;
                    case '9': state = 107; break;
                    case 'h': state = 24; break;
                    case '6': state = 66; break;
                    case '1': state = 79; break;
                    case '5': state = 114; break;
                    case 'R': state = 29; break;
                    case 'N': state = 104; break;
                    case 'd': state = 70; break;
                    case 'i': state = 112; break;
                    case 'O': state = 81; break;
                    case 'n': state = 86; break;
                    case 'J': state = 60; break;
                    default: return std::find(finalNodes.begin(), finalNodes.end(), state) != finalNodes.end();
                }
                break;
            case 5: 
                switch(letter) {
                    case '5': state = 114; break;
                    case 'X': state = 64; break;
                    case '3': state = 96; break;
                    case 'F': state = 82; break;
                    case 'S': state = 45; break;
                    case '0': state = 69; break;
                    case 'D': state = 27; break;
                    case 'T': state = 110; break;
                    case '8': state = 65; break;
                    case 'y': state = 84; break;
                    case 'q': state = 91; break;
                    case 'l': state = 97; break;
                    case 'M': state = 113; break;
                    case 'm': state = 92; break;
                    case 'c': state = 108; break;
                    case 'z': state = 94; break;
                    case 't': state = 78; break;
                    case 'j': state = 26; break;
                    case 'p': state = 95; break;
                    case '1': state = 79; break;
                    case 'E': state = 98; break;
                    case 'A': state = 102; break;
                    case 'v': state = 90; break;
                    case 'Z': state = 89; break;
                    case '_': state = 72; break;
                    case 'x': state = 88; break;
                    case '7': state = 111; break;
                    case 'U': state = 71; break;
                    case 'I': state = 63; break;
                    case 's': state = 28; break;
                    case 'V': state = 25; break;
                    case '4': state = 77; break;
                    case 'g': state = 73; break;
                    case 'k': state = 83; break;
                    case '2': state = 67; break;
                    case 'P': state = 59; break;
                    case '6': state = 66; break;
                    case 'r': state = 93; break;
                    case 'H': state = 85; break;
                    case 'f': state = 76; break;
                    case 'w': state = 68; break;
                    case 'd': state = 70; break;
                    case 'Y': state = 115; break;
                    case 'i': state = 112; break;
                    case 'u': state = 105; break;
                    case 'N': state = 104; break;
                    case 'O': state = 81; break;
                    case 'h': state = 24; break;
                    case 'C': state = 80; break;
                    case 'J': state = 60; break;
                    case 'W': state = 74; break;
                    case 'o': state = 109; break;
                    case 'b': state = 61; break;
                    case 'e': state = 106; break;
                    case 'G': state = 103; break;
                    case 'B': state = 62; break;
                    case 'R': state = 29; break;
                    case 'K': state = 101; break;
                    case 'Q': state = 100; break;
                    case 'a': state = 75; break;
                    case 'L': state = 99; break;
                    case '9': state = 107; break;
                    case 'n': state = 86; break;
                    default: return std::find(finalNodes.begin(), finalNodes.end(), state) != finalNodes.end();
                }
                break;
            case 6: 
                switch(letter) {
                    case 'N': state = 104; break;
                    case '0': state = 69; break;
                    case 'S': state = 45; break;
                    case 'G': state = 103; break;
                    case 'M': state = 113; break;
                    case '3': state = 96; break;
                    case 'W': state = 74; break;
                    case 'D': state = 27; break;
                    case 'A': state = 102; break;
                    case 'q': state = 91; break;
                    case 'e': state = 106; break;
                    case '7': state = 111; break;
                    case 'U': state = 71; break;
                    case '_': state = 72; break;
                    case 'y': state = 84; break;
                    case 'v': state = 90; break;
                    case 'z': state = 94; break;
                    case 'x': state = 88; break;
                    case 't': state = 78; break;
                    case 'g': state = 73; break;
                    case 'j': state = 26; break;
                    case 'm': state = 92; break;
                    case 'E': state = 98; break;
                    case 'H': state = 85; break;
                    case 'p': state = 95; break;
                    case '4': state = 77; break;
                    case 'I': state = 63; break;
                    case 'Z': state = 89; break;
                    case 'V': state = 25; break;
                    case 'J': state = 60; break;
                    case 'k': state = 83; break;
                    case 's': state = 28; break;
                    case 'f': state = 76; break;
                    case '2': state = 67; break;
                    case 'w': state = 68; break;
                    case 'Y': state = 115; break;
                    case 'r': state = 93; break;
                    case 'c': state = 108; break;
                    case 'b': state = 61; break;
                    case 'l': state = 97; break;
                    case 'X': state = 64; break;
                    case 'i': state = 112; break;
                    case 'P': state = 59; break;
                    case '5': state = 114; break;
                    case 'O': state = 81; break;
                    case 'u': state = 105; break;
                    case 'a': state = 75; break;
                    case '1': state = 79; break;
                    case 'K': state = 101; break;
                    case 'Q': state = 100; break;
                    case '8': state = 65; break;
                    case 'R': state = 29; break;
                    case 'B': state = 62; break;
                    case 'd': state = 70; break;
                    case '9': state = 107; break;
                    case '6': state = 66; break;
                    case 'L': state = 99; break;
                    case 'T': state = 110; break;
                    case 'h': state = 24; break;
                    case 'o': state = 109; break;
                    case 'F': state = 82; break;
                    case 'C': state = 80; break;
                    case 'n': state = 86; break;
                    default: return std::find(finalNodes.begin(), finalNodes.end(), state) != finalNodes.end();
                }
                break;
            case 7: 
                switch(letter) {
                    case 'r': state = 93; break;
                    case 'V': state = 25; break;
                    case '0': state = 69; break;
                    case 'y': state = 84; break;
                    case '8': state = 65; break;
                    case 'a': state = 75; break;
                    case '4': state = 77; break;
                    case 't': state = 78; break;
                    case '2': state = 67; break;
                    case 'S': state = 45; break;
                    case 'o': state = 109; break;
                    case '3': state = 96; break;
                    case 'g': state = 73; break;
                    case 'e': state = 106; break;
                    case 'D': state = 27; break;
                    case 'W': state = 74; break;
                    case '9': state = 107; break;
                    case 'z': state = 94; break;
                    case 'n': state = 86; break;
                    case 'M': state = 113; break;
                    case 'v': state = 90; break;
                    case 'E': state = 98; break;
                    case 'A': state = 102; break;
                    case 'j': state = 26; break;
                    case 'm': state = 92; break;
                    case 'x': state = 88; break;
                    case '_': state = 72; break;
                    case 'p': state = 95; break;
                    case 'w': state = 68; break;
                    case 's': state = 28; break;
                    case 'H': state = 85; break;
                    case 'f': state = 76; break;
                    case 'k': state = 83; break;
                    case 'I': state = 63; break;
                    case 'c': state = 108; break;
                    case 'X': state = 64; break;
                    case 'P': state = 59; break;
                    case 'i': state = 112; break;
                    case 'Y': state = 115; break;
                    case 'Z': state = 89; break;
                    case 'J': state = 60; break;
                    case 'F': state = 82; break;
                    case 'K': state = 101; break;
                    case 'O': state = 81; break;
                    case 'q': state = 91; break;
                    case '6': state = 66; break;
                    case '7': state = 111; break;
                    case 'l': state = 97; break;
                    case 'L': state = 99; break;
                    case '5': state = 114; break;
                    case 'h': state = 24; break;
                    case 'b': state = 61; break;
                    case 'Q': state = 100; break;
                    case 'C': state = 80; break;
                    case 'd': state = 70; break;
                    case 'u': state = 105; break;
                    case 'B': state = 62; break;
                    case '1': state = 79; break;
                    case 'G': state = 103; break;
                    case 'N': state = 104; break;
                    case 'R': state = 29; break;
                    case 'T': state = 110; break;
                    case 'U': state = 71; break;
                    default: return std::find(finalNodes.begin(), finalNodes.end(), state) != finalNodes.end();
                }
                break;
            case 8: 
                switch(letter) {
                    case 'i': state = 112; break;
                    case 'm': state = 92; break;
                    case 'F': state = 82; break;
                    case '0': state = 69; break;
                    case 'r': state = 93; break;
                    case 'x': state = 88; break;
                    case 'q': state = 91; break;
                    case 'V': state = 25; break;
                    case '8': state = 65; break;
                    case 'y': state = 84; break;
                    case 'E': state = 98; break;
                    case 'I': state = 63; break;
                    case 'H': state = 85; break;
                    case 'n': state = 86; break;
                    case '4': state = 77; break;
                    case 'k': state = 83; break;
                    case '2': state = 67; break;
                    case 'a': state = 75; break;
                    case 'P': state = 59; break;
                    case 's': state = 28; break;
                    case 'C': state = 80; break;
                    case 'S': state = 45; break;
                    case 'N': state = 104; break;
                    case 'R': state = 29; break;
                    case '9': state = 107; break;
                    case 'U': state = 71; break;
                    case '1': state = 79; break;
                    case 'M': state = 113; break;
                    case 't': state = 78; break;
                    case 'W': state = 74; break;
                    case '_': state = 72; break;
                    case 'o': state = 109; break;
                    case 'J': state = 60; break;
                    case 'c': state = 108; break;
                    case 'p': state = 95; break;
                    case 'h': state = 24; break;
                    case 'v': state = 90; break;
                    case 'f': state = 76; break;
                    case 'w': state = 68; break;
                    case 'O': state = 81; break;
                    case 'D': state = 27; break;
                    case 'A': state = 102; break;
                    case '3': state = 96; break;
                    case 'g': state = 73; break;
                    case 'd': state = 70; break;
                    case 'Y': state = 115; break;
                    case 'Z': state = 89; break;
                    case 'T': state = 110; break;
                    case 'b': state = 61; break;
                    case 'Q': state = 100; break;
                    case '6': state = 66; break;
                    case 'G': state = 103; break;
                    case '7': state = 111; break;
                    case 'K': state = 101; break;
                    case 'j': state = 26; break;
                    case 'l': state = 97; break;
                    case 'B': state = 62; break;
                    case 'u': state = 105; break;
                    case '5': state = 114; break;
                    case 'e': state = 106; break;
                    case 'X': state = 64; break;
                    case 'z': state = 94; break;
                    case 'L': state = 99; break;
                    default: return std::find(finalNodes.begin(), finalNodes.end(), state) != finalNodes.end();
                }
                break;
            case 9: 
                switch(letter) {
                    case 'F': state = 82; break;
                    case 's': state = 28; break;
                    case 'n': state = 86; break;
                    case 'q': state = 91; break;
                    case 'I': state = 63; break;
                    case 'H': state = 85; break;
                    case 'i': state = 112; break;
                    case 'E': state = 98; break;
                    case '8': state = 65; break;
                    case '0': state = 69; break;
                    case 'y': state = 84; break;
                    case 'V': state = 25; break;
                    case 'r': state = 93; break;
                    case 'm': state = 92; break;
                    case 'x': state = 88; break;
                    case '1': state = 79; break;
                    case 'K': state = 101; break;
                    case 'g': state = 73; break;
                    case 'C': state = 80; break;
                    case '_': state = 72; break;
                    case 'J': state = 60; break;
                    case 'D': state = 27; break;
                    case 'N': state = 104; break;
                    case '2': state = 67; break;
                    case 'u': state = 105; break;
                    case 'a': state = 75; break;
                    case 'R': state = 29; break;
                    case 'P': state = 59; break;
                    case '3': state = 96; break;
                    case 'k': state = 83; break;
                    case 'e': state = 106; break;
                    case 'O': state = 81; break;
                    case 'w': state = 68; break;
                    case 'c': state = 108; break;
                    case 'M': state = 113; break;
                    case 'W': state = 74; break;
                    case 'j': state = 26; break;
                    case 'A': state = 102; break;
                    case 'z': state = 94; break;
                    case 'o': state = 109; break;
                    case 'Z': state = 89; break;
                    case '4': state = 77; break;
                    case 'f': state = 76; break;
                    case 't': state = 78; break;
                    case 'B': state = 62; break;
                    case 'l': state = 97; break;
                    case 'S': state = 45; break;
                    case 'T': state = 110; break;
                    case '6': state = 66; break;
                    case 'v': state = 90; break;
                    case 'Q': state = 100; break;
                    case 'h': state = 24; break;
                    case 'b': state = 61; break;
                    case 'X': state = 64; break;
                    case 'L': state = 99; break;
                    case 'G': state = 103; break;
                    case 'd': state = 70; break;
                    case '9': state = 107; break;
                    case 'p': state = 95; break;
                    case 'Y': state = 115; break;
                    case '7': state = 111; break;
                    case 'U': state = 71; break;
                    case '5': state = 114; break;
                    default: return std::find(finalNodes.begin(), finalNodes.end(), state) != finalNodes.end();
                }
                break;
            case 10: 
                switch(letter) {
                    case 'q': state = 91; break;
                    case 'V': state = 25; break;
                    case 'f': state = 76; break;
                    case 'H': state = 85; break;
                    case 'I': state = 63; break;
                    case 'r': state = 93; break;
                    case '0': state = 69; break;
                    case 's': state = 28; break;
                    case '8': state = 65; break;
                    case 'y': state = 84; break;
                    case 'n': state = 86; break;
                    case 'F': state = 82; break;
                    case 'm': state = 92; break;
                    case 'i': state = 112; break;
                    case 'E': state = 98; break;
                    case 'x': state = 88; break;
                    case 'K': state = 101; break;
                    case 'C': state = 80; break;
                    case '_': state = 72; break;
                    case 'J': state = 60; break;
                    case 'o': state = 109; break;
                    case 'D': state = 27; break;
                    case 'N': state = 104; break;
                    case 'u': state = 105; break;
                    case '2': state = 67; break;
                    case 'a': state = 75; break;
                    case '3': state = 96; break;
                    case 'P': state = 59; break;
                    case 'k': state = 83; break;
                    case 'e': state = 106; break;
                    case 'M': state = 113; break;
                    case 'Z': state = 89; break;
                    case 'W': state = 74; break;
                    case 'l': state = 97; break;
                    case 'z': state = 94; break;
                    case 'c': state = 108; break;
                    case 'v': state = 90; break;
                    case '6': state = 66; break;
                    case 'b': state = 61; break;
                    case 'O': state = 81; break;
                    case 'w': state = 68; break;
                    case 'T': state = 110; break;
                    case '1': state = 79; break;
                    case 'd': state = 70; break;
                    case 'A': state = 102; break;
                    case 'p': state = 95; break;
                    case 'B': state = 62; break;
                    case 'X': state = 64; break;
                    case 'R': state = 29; break;
                    case '4': state = 77; break;
                    case 'Q': state = 100; break;
                    case 'S': state = 45; break;
                    case 't': state = 78; break;
                    case 'j': state = 26; break;
                    case 'G': state = 103; break;
                    case 'L': state = 99; break;
                    case 'h': state = 24; break;
                    case '7': state = 111; break;
                    case 'g': state = 73; break;
                    case 'Y': state = 115; break;
                    case '5': state = 114; break;
                    case '9': state = 107; break;
                    case 'U': state = 71; break;
                    default: return std::find(finalNodes.begin(), finalNodes.end(), state) != finalNodes.end();
                }
                break;
            case 11: 
                switch(letter) {
                    case 'H': state = 85; break;
                    case 'i': state = 112; break;
                    case 'E': state = 98; break;
                    case '8': state = 65; break;
                    case 'V': state = 25; break;
                    case 's': state = 28; break;
                    case 'r': state = 93; break;
                    case 'x': state = 88; break;
                    case 'n': state = 86; break;
                    case 'y': state = 84; break;
                    case 'f': state = 76; break;
                    case 'F': state = 82; break;
                    case 'm': state = 92; break;
                    case '0': state = 69; break;
                    case 'I': state = 63; break;
                    case 'q': state = 91; break;
                    case 'W': state = 74; break;
                    case 'K': state = 101; break;
                    case 'g': state = 73; break;
                    case 'C': state = 80; break;
                    case '_': state = 72; break;
                    case 'J': state = 60; break;
                    case 'D': state = 27; break;
                    case '2': state = 67; break;
                    case 'u': state = 105; break;
                    case 'o': state = 109; break;
                    case 'a': state = 75; break;
                    case 'N': state = 104; break;
                    case 'X': state = 64; break;
                    case 'P': state = 59; break;
                    case 'R': state = 29; break;
                    case 'k': state = 83; break;
                    case 'T': state = 110; break;
                    case 'v': state = 90; break;
                    case 'j': state = 26; break;
                    case 'M': state = 113; break;
                    case 'S': state = 45; break;
                    case 't': state = 78; break;
                    case 'c': state = 108; break;
                    case 'Z': state = 89; break;
                    case 'p': state = 95; break;
                    case '3': state = 96; break;
                    case '1': state = 79; break;
                    case 'A': state = 102; break;
                    case 'l': state = 97; break;
                    case '6': state = 66; break;
                    case 'B': state = 62; break;
                    case 'Q': state = 100; break;
                    case '4': state = 77; break;
                    case 'b': state = 61; break;
                    case 'd': state = 70; break;
                    case 'w': state = 68; break;
                    case 'Y': state = 115; break;
                    case 'L': state = 99; break;
                    case 'h': state = 24; break;
                    case 'G': state = 103; break;
                    case '7': state = 111; break;
                    case 'e': state = 106; break;
                    case '9': state = 107; break;
                    case 'U': state = 71; break;
                    case 'z': state = 94; break;
                    case 'O': state = 81; break;
                    case '5': state = 114; break;
                    default: return std::find(finalNodes.begin(), finalNodes.end(), state) != finalNodes.end();
                }
                break;
            case 12: 
                switch(letter) {
                    case 'x': state = 88; break;
                    case 'y': state = 84; break;
                    case '8': state = 65; break;
                    case 'q': state = 91; break;
                    case 'V': state = 25; break;
                    case 'H': state = 85; break;
                    case 'I': state = 63; break;
                    case 'i': state = 112; break;
                    case 'm': state = 92; break;
                    case 'F': state = 82; break;
                    case 'C': state = 80; break;
                    case '0': state = 69; break;
                    case 'r': state = 93; break;
                    case 'n': state = 86; break;
                    case 'K': state = 101; break;
                    case 'E': state = 98; break;
                    case '_': state = 72; break;
                    case 't': state = 78; break;
                    case 'D': state = 27; break;
                    case 'u': state = 105; break;
                    case 'o': state = 109; break;
                    case '2': state = 67; break;
                    case 'a': state = 75; break;
                    case 'P': state = 59; break;
                    case 'Z': state = 89; break;
                    case 'k': state = 83; break;
                    case '1': state = 79; break;
                    case 'J': state = 60; break;
                    case 'v': state = 90; break;
                    case 'p': state = 95; break;
                    case 'A': state = 102; break;
                    case 'M': state = 113; break;
                    case 'S': state = 45; break;
                    case 's': state = 28; break;
                    case 'X': state = 64; break;
                    case 'z': state = 94; break;
                    case '3': state = 96; break;
                    case 'f': state = 76; break;
                    case 'g': state = 73; break;
                    case 'R': state = 29; break;
                    case 'Q': state = 100; break;
                    case 'c': state = 108; break;
                    case 'l': state = 97; break;
                    case 'j': state = 26; break;
                    case '4': state = 77; break;
                    case 'G': state = 103; break;
                    case 'T': state = 110; break;
                    case 'e': state = 106; break;
                    case 'W': state = 74; break;
                    case 'B': state = 62; break;
                    case '6': state = 66; break;
                    case 'Y': state = 115; break;
                    case 'L': state = 99; break;
                    case 'N': state = 104; break;
                    case 'h': state = 24; break;
                    case 'd': state = 70; break;
                    case '9': state = 107; break;
                    case '7': state = 111; break;
                    case 'b': state = 61; break;
                    case 'U': state = 71; break;
                    case '5': state = 114; break;
                    case 'w': state = 68; break;
                    case 'O': state = 81; break;
                    default: return std::find(finalNodes.begin(), finalNodes.end(), state) != finalNodes.end();
                }
                break;
            case 13: 
                switch(letter) {
                    case 'y': state = 84; break;
                    case '8': state = 65; break;
                    case 's': state = 28; break;
                    case 'x': state = 88; break;
                    case 'm': state = 92; break;
                    case 'F': state = 82; break;
                    case 'n': state = 86; break;
                    case 'q': state = 91; break;
                    case 'g': state = 73; break;
                    case 'V': state = 25; break;
                    case 'r': state = 93; break;
                    case 'I': state = 63; break;
                    case 'H': state = 85; break;
                    case 'i': state = 112; break;
                    case '0': state = 69; break;
                    case '6': state = 66; break;
                    case 'K': state = 101; break;
                    case 'C': state = 80; break;
                    case '2': state = 67; break;
                    case '_': state = 72; break;
                    case 'a': state = 75; break;
                    case 'o': state = 109; break;
                    case '1': state = 79; break;
                    case 'z': state = 94; break;
                    case 'X': state = 64; break;
                    case 'A': state = 102; break;
                    case 'M': state = 113; break;
                    case 'v': state = 90; break;
                    case 'p': state = 95; break;
                    case 'W': state = 74; break;
                    case 'J': state = 60; break;
                    case 'L': state = 99; break;
                    case 'U': state = 71; break;
                    case 'S': state = 45; break;
                    case '3': state = 96; break;
                    case 'f': state = 76; break;
                    case 'R': state = 29; break;
                    case 'Q': state = 100; break;
                    case 'Z': state = 89; break;
                    case 'c': state = 108; break;
                    case 'N': state = 104; break;
                    case 'E': state = 98; break;
                    case 'b': state = 61; break;
                    case 't': state = 78; break;
                    case 'd': state = 70; break;
                    case 'e': state = 106; break;
                    case 'l': state = 97; break;
                    case 'B': state = 62; break;
                    case 'k': state = 83; break;
                    case 'G': state = 103; break;
                    case 'O': state = 81; break;
                    case 'w': state = 68; break;
                    case 'h': state = 24; break;
                    case 'T': state = 110; break;
                    case '4': state = 77; break;
                    case '5': state = 114; break;
                    case 'j': state = 26; break;
                    case '7': state = 111; break;
                    case 'u': state = 105; break;
                    case '9': state = 107; break;
                    case 'D': state = 27; break;
                    case 'P': state = 59; break;
                    case 'Y': state = 115; break;
                    default: return std::find(finalNodes.begin(), finalNodes.end(), state) != finalNodes.end();
                }
                break;
            case 14: 
                switch(letter) {
                    case 'n': state = 86; break;
                    case 'q': state = 91; break;
                    case 'I': state = 63; break;
                    case 'H': state = 85; break;
                    case 'i': state = 112; break;
                    case '8': state = 65; break;
                    case 'V': state = 25; break;
                    case 'm': state = 92; break;
                    case 'r': state = 93; break;
                    case '0': state = 69; break;
                    case 'x': state = 88; break;
                    case 'y': state = 84; break;
                    case 's': state = 28; break;
                    case 'F': state = 82; break;
                    case 'E': state = 98; break;
                    case '6': state = 66; break;
                    case '7': state = 111; break;
                    case 'K': state = 101; break;
                    case '1': state = 79; break;
                    case '_': state = 72; break;
                    case 'a': state = 75; break;
                    case 'N': state = 104; break;
                    case 'X': state = 64; break;
                    case 'z': state = 94; break;
                    case 'Z': state = 89; break;
                    case 'A': state = 102; break;
                    case 'D': state = 27; break;
                    case '3': state = 96; break;
                    case 'o': state = 109; break;
                    case 'h': state = 24; break;
                    case 'c': state = 108; break;
                    case 'p': state = 95; break;
                    case 'v': state = 90; break;
                    case 'J': state = 60; break;
                    case 'T': state = 110; break;
                    case 'U': state = 71; break;
                    case 'd': state = 70; break;
                    case 'g': state = 73; break;
                    case 'f': state = 76; break;
                    case 'S': state = 45; break;
                    case '2': state = 67; break;
                    case 'O': state = 81; break;
                    case 'w': state = 68; break;
                    case 'Q': state = 100; break;
                    case 'R': state = 29; break;
                    case 'C': state = 80; break;
                    case 't': state = 78; break;
                    case 'e': state = 106; break;
                    case 'M': state = 113; break;
                    case 'l': state = 97; break;
                    case '9': state = 107; break;
                    case '4': state = 77; break;
                    case 'W': state = 74; break;
                    case 'L': state = 99; break;
                    case 'k': state = 83; break;
                    case '5': state = 114; break;
                    case 'Y': state = 115; break;
                    case 'B': state = 62; break;
                    case 'b': state = 61; break;
                    case 'j': state = 26; break;
                    case 'u': state = 105; break;
                    case 'G': state = 103; break;
                    case 'P': state = 59; break;
                    default: return std::find(finalNodes.begin(), finalNodes.end(), state) != finalNodes.end();
                }
                break;
            case 15: 
                switch(letter) {
                    case 'X': state = 64; break;
                    case 'K': state = 101; break;
                    case 'z': state = 94; break;
                    case '0': state = 69; break;
                    case 'n': state = 86; break;
                    case 'N': state = 104; break;
                    case 'C': state = 80; break;
                    case 'e': state = 106; break;
                    case 'A': state = 102; break;
                    case 'M': state = 113; break;
                    case 'h': state = 24; break;
                    case 'J': state = 60; break;
                    case 'o': state = 109; break;
                    case 'F': state = 82; break;
                    case 'D': state = 27; break;
                    case 'W': state = 74; break;
                    case '8': state = 65; break;
                    case '_': state = 72; break;
                    case 'q': state = 91; break;
                    case 'G': state = 103; break;
                    case 's': state = 28; break;
                    case '7': state = 111; break;
                    case 'y': state = 84; break;
                    case 'U': state = 71; break;
                    case 'd': state = 70; break;
                    case 'p': state = 95; break;
                    case '3': state = 96; break;
                    case 'k': state = 83; break;
                    case 'I': state = 63; break;
                    case 'f': state = 76; break;
                    case 'j': state = 26; break;
                    case 'O': state = 81; break;
                    case 'V': state = 25; break;
                    case 'Q': state = 100; break;
                    case 'R': state = 29; break;
                    case 'S': state = 45; break;
                    case 'r': state = 93; break;
                    case '1': state = 79; break;
                    case 'l': state = 97; break;
                    case 'g': state = 73; break;
                    case 'P': state = 59; break;
                    case 'Z': state = 89; break;
                    case 'x': state = 88; break;
                    case '2': state = 67; break;
                    case 'v': state = 90; break;
                    case 'H': state = 85; break;
                    case 'E': state = 98; break;
                    case 'i': state = 112; break;
                    case 'm': state = 92; break;
                    case 'u': state = 105; break;
                    case 'T': state = 110; break;
                    case 'a': state = 75; break;
                    case 'L': state = 99; break;
                    case '6': state = 66; break;
                    case '4': state = 77; break;
                    case 't': state = 78; break;
                    case '5': state = 114; break;
                    case 'b': state = 61; break;
                    case '9': state = 107; break;
                    case 'B': state = 62; break;
                    case 'Y': state = 115; break;
                    case 'c': state = 108; break;
                    case 'w': state = 68; break;
                    default: return std::find(finalNodes.begin(), finalNodes.end(), state) != finalNodes.end();
                }
                break;
            case 16: 
                switch(letter) {
                    case 'p': state = 95; break;
                    case 'y': state = 84; break;
                    case 'f': state = 76; break;
                    case 'H': state = 85; break;
                    case 'I': state = 63; break;
                    case 'r': state = 93; break;
                    case 'i': state = 112; break;
                    case 'm': state = 92; break;
                    case 'F': state = 82; break;
                    case 'T': state = 110; break;
                    case 'V': state = 25; break;
                    case 'g': state = 73; break;
                    case 'q': state = 91; break;
                    case '8': state = 65; break;
                    case 'x': state = 88; break;
                    case '0': state = 69; break;
                    case 'n': state = 86; break;
                    case '6': state = 66; break;
                    case '1': state = 79; break;
                    case 'K': state = 101; break;
                    case 'J': state = 60; break;
                    case '7': state = 111; break;
                    case 'W': state = 74; break;
                    case 'C': state = 80; break;
                    case '_': state = 72; break;
                    case '2': state = 67; break;
                    case 'j': state = 26; break;
                    case 'a': state = 75; break;
                    case 'u': state = 105; break;
                    case 'X': state = 64; break;
                    case 'P': state = 59; break;
                    case 'D': state = 27; break;
                    case 'A': state = 102; break;
                    case '3': state = 96; break;
                    case 'R': state = 29; break;
                    case 'Q': state = 100; break;
                    case 'U': state = 71; break;
                    case 'M': state = 113; break;
                    case 'S': state = 45; break;
                    case 'o': state = 109; break;
                    case 'c': state = 108; break;
                    case 'Z': state = 89; break;
                    case 's': state = 28; break;
                    case 'E': state = 98; break;
                    case 'd': state = 70; break;
                    case 'z': state = 94; break;
                    case 'Y': state = 115; break;
                    case 'G': state = 103; break;
                    case 'v': state = 90; break;
                    case 'e': state = 106; break;
                    case 'N': state = 104; break;
                    case 't': state = 78; break;
                    case 'h': state = 24; break;
                    case 'w': state = 68; break;
                    case 'O': state = 81; break;
                    case 'b': state = 61; break;
                    case '9': state = 107; break;
                    case 'l': state = 97; break;
                    case 'B': state = 62; break;
                    case '4': state = 77; break;
                    case '5': state = 114; break;
                    case 'L': state = 99; break;
                    case 'k': state = 83; break;
                    default: return std::find(finalNodes.begin(), finalNodes.end(), state) != finalNodes.end();
                }
                break;
            case 17: 
                switch(letter) {
                    case 'i': state = 112; break;
                    case '8': state = 65; break;
                    case 'V': state = 25; break;
                    case 'g': state = 73; break;
                    case '0': state = 69; break;
                    case '1': state = 79; break;
                    case 'I': state = 63; break;
                    case 'q': state = 91; break;
                    case 'm': state = 92; break;
                    case 'F': state = 82; break;
                    case 'n': state = 86; break;
                    case 'f': state = 76; break;
                    case 'y': state = 84; break;
                    case 'x': state = 88; break;
                    case 'r': state = 93; break;
                    case 'k': state = 83; break;
                    case 'H': state = 85; break;
                    case '6': state = 66; break;
                    case '7': state = 111; break;
                    case 'W': state = 74; break;
                    case 'j': state = 26; break;
                    case 'P': state = 59; break;
                    case 'A': state = 102; break;
                    case 's': state = 28; break;
                    case 'D': state = 27; break;
                    case '2': state = 67; break;
                    case 'a': state = 75; break;
                    case 'G': state = 103; break;
                    case 'Q': state = 100; break;
                    case 'v': state = 90; break;
                    case 'z': state = 94; break;
                    case '_': state = 72; break;
                    case 'X': state = 64; break;
                    case 'K': state = 101; break;
                    case 'o': state = 109; break;
                    case 'l': state = 97; break;
                    case 'c': state = 108; break;
                    case 'S': state = 45; break;
                    case 'Z': state = 89; break;
                    case 'd': state = 70; break;
                    case '3': state = 96; break;
                    case 'O': state = 81; break;
                    case 't': state = 78; break;
                    case 'M': state = 113; break;
                    case 'N': state = 104; break;
                    case 'Y': state = 115; break;
                    case 'e': state = 106; break;
                    case 'T': state = 110; break;
                    case 'b': state = 61; break;
                    case 'E': state = 98; break;
                    case 'h': state = 24; break;
                    case '9': state = 107; break;
                    case '5': state = 114; break;
                    case 'u': state = 105; break;
                    case 'p': state = 95; break;
                    case '4': state = 77; break;
                    case 'J': state = 60; break;
                    case 'R': state = 29; break;
                    case 'w': state = 68; break;
                    case 'U': state = 71; break;
                    case 'L': state = 99; break;
                    case 'B': state = 62; break;
                    case 'C': state = 80; break;
                    default: return std::find(finalNodes.begin(), finalNodes.end(), state) != finalNodes.end();
                }
                break;
            case 18: 
                switch(letter) {
                    case 'F': state = 82; break;
                    case 'm': state = 92; break;
                    case 'n': state = 86; break;
                    case 'q': state = 91; break;
                    case 'I': state = 63; break;
                    case 'H': state = 85; break;
                    case 'k': state = 83; break;
                    case 'i': state = 112; break;
                    case '8': state = 65; break;
                    case 'y': state = 84; break;
                    case 'g': state = 73; break;
                    case '0': state = 69; break;
                    case 'f': state = 76; break;
                    case 'V': state = 25; break;
                    case 'r': state = 93; break;
                    case 'K': state = 101; break;
                    case '1': state = 79; break;
                    case '7': state = 111; break;
                    case 'j': state = 26; break;
                    case 'P': state = 59; break;
                    case 'h': state = 24; break;
                    case 'A': state = 102; break;
                    case 's': state = 28; break;
                    case 'D': state = 27; break;
                    case 'J': state = 60; break;
                    case '_': state = 72; break;
                    case 'Q': state = 100; break;
                    case 'v': state = 90; break;
                    case 'w': state = 68; break;
                    case 'z': state = 94; break;
                    case 'Z': state = 89; break;
                    case 'E': state = 98; break;
                    case 'X': state = 64; break;
                    case 'o': state = 109; break;
                    case 'W': state = 74; break;
                    case 'l': state = 97; break;
                    case 'c': state = 108; break;
                    case 'x': state = 88; break;
                    case 'M': state = 113; break;
                    case 'O': state = 81; break;
                    case 'd': state = 70; break;
                    case 't': state = 78; break;
                    case 'S': state = 45; break;
                    case '6': state = 66; break;
                    case 'Y': state = 115; break;
                    case '3': state = 96; break;
                    case 'T': state = 110; break;
                    case 'e': state = 106; break;
                    case 'b': state = 61; break;
                    case '9': state = 107; break;
                    case '4': state = 77; break;
                    case 'G': state = 103; break;
                    case '5': state = 114; break;
                    case 'p': state = 95; break;
                    case 'B': state = 62; break;
                    case 'L': state = 99; break;
                    case 'C': state = 80; break;
                    case 'a': state = 75; break;
                    case 'u': state = 105; break;
                    case 'N': state = 104; break;
                    case 'U': state = 71; break;
                    case 'R': state = 29; break;
                    case '2': state = 67; break;
                    default: return std::find(finalNodes.begin(), finalNodes.end(), state) != finalNodes.end();
                }
                break;
            case 19: 
                switch(letter) {
                    case '8': state = 65; break;
                    case 'V': state = 25; break;
                    case 'g': state = 73; break;
                    case '0': state = 69; break;
                    case 'y': state = 84; break;
                    case 'f': state = 76; break;
                    case 'H': state = 85; break;
                    case 'I': state = 63; break;
                    case 'n': state = 86; break;
                    case 'k': state = 83; break;
                    case 'r': state = 93; break;
                    case 'F': state = 82; break;
                    case 'm': state = 92; break;
                    case 'q': state = 91; break;
                    case 'i': state = 112; break;
                    case '6': state = 66; break;
                    case 'W': state = 74; break;
                    case '1': state = 79; break;
                    case '7': state = 111; break;
                    case 'P': state = 59; break;
                    case 'h': state = 24; break;
                    case 'j': state = 26; break;
                    case 'D': state = 27; break;
                    case 's': state = 28; break;
                    case '2': state = 67; break;
                    case 'A': state = 102; break;
                    case 'a': state = 75; break;
                    case 'G': state = 103; break;
                    case '_': state = 72; break;
                    case 'Z': state = 89; break;
                    case 'K': state = 101; break;
                    case 'v': state = 90; break;
                    case 'T': state = 110; break;
                    case 'x': state = 88; break;
                    case '3': state = 96; break;
                    case 'X': state = 64; break;
                    case 'O': state = 81; break;
                    case 'c': state = 108; break;
                    case 'l': state = 97; break;
                    case 'o': state = 109; break;
                    case 'M': state = 113; break;
                    case 'Q': state = 100; break;
                    case 'z': state = 94; break;
                    case 'd': state = 70; break;
                    case 't': state = 78; break;
                    case 'J': state = 60; break;
                    case 'N': state = 104; break;
                    case 'S': state = 45; break;
                    case 'E': state = 98; break;
                    case '5': state = 114; break;
                    case 'Y': state = 115; break;
                    case 'e': state = 106; break;
                    case '9': state = 107; break;
                    case '4': state = 77; break;
                    case 'p': state = 95; break;
                    case 'B': state = 62; break;
                    case 'u': state = 105; break;
                    case 'U': state = 71; break;
                    case 'R': state = 29; break;
                    case 'L': state = 99; break;
                    case 'C': state = 80; break;
                    case 'b': state = 61; break;
                    case 'w': state = 68; break;
                    default: return std::find(finalNodes.begin(), finalNodes.end(), state) != finalNodes.end();
                }
                break;
            case 20: 
                switch(letter) {
                    case 'E': state = 98; break;
                    case 'i': state = 112; break;
                    case '1': state = 79; break;
                    case 'm': state = 92; break;
                    case 'F': state = 82; break;
                    case 'g': state = 73; break;
                    case 'f': state = 76; break;
                    case 'x': state = 88; break;
                    case 'y': state = 84; break;
                    case 'V': state = 25; break;
                    case 'k': state = 83; break;
                    case '0': state = 69; break;
                    case 'n': state = 86; break;
                    case 'H': state = 85; break;
                    case 'I': state = 63; break;
                    case '8': state = 65; break;
                    case 'r': state = 93; break;
                    case '6': state = 66; break;
                    case 'W': state = 74; break;
                    case '7': state = 111; break;
                    case 'J': state = 60; break;
                    case 'P': state = 59; break;
                    case 'X': state = 64; break;
                    case 'v': state = 90; break;
                    case 'h': state = 24; break;
                    case 'j': state = 26; break;
                    case 'D': state = 27; break;
                    case 'A': state = 102; break;
                    case '2': state = 67; break;
                    case 't': state = 78; break;
                    case '_': state = 72; break;
                    case '9': state = 107; break;
                    case 'Z': state = 89; break;
                    case 'T': state = 110; break;
                    case 'C': state = 80; break;
                    case 'S': state = 45; break;
                    case '5': state = 114; break;
                    case 'o': state = 109; break;
                    case 's': state = 28; break;
                    case '4': state = 77; break;
                    case 'c': state = 108; break;
                    case '3': state = 96; break;
                    case 'l': state = 97; break;
                    case 'N': state = 104; break;
                    case 'M': state = 113; break;
                    case 'z': state = 94; break;
                    case 'q': state = 91; break;
                    case 'Q': state = 100; break;
                    case 'O': state = 81; break;
                    case 'e': state = 106; break;
                    case 'd': state = 70; break;
                    case 'b': state = 61; break;
                    case 'Y': state = 115; break;
                    case 'B': state = 62; break;
                    case 'a': state = 75; break;
                    case 'K': state = 101; break;
                    case 'p': state = 95; break;
                    case 'u': state = 105; break;
                    case 'U': state = 71; break;
                    case 'w': state = 68; break;
                    case 'R': state = 29; break;
                    case 'L': state = 99; break;
                    case 'G': state = 103; break;
                    default: return std::find(finalNodes.begin(), finalNodes.end(), state) != finalNodes.end();
                }
                break;
            case 21: 
                switch(letter) {
                    case 'H': state = 85; break;
                    case 'I': state = 63; break;
                    case 'n': state = 86; break;
                    case 'r': state = 93; break;
                    case 'E': state = 98; break;
                    case 'i': state = 112; break;
                    case 'm': state = 92; break;
                    case 'F': state = 82; break;
                    case '6': state = 66; break;
                    case 'W': state = 74; break;
                    case 'g': state = 73; break;
                    case '8': state = 65; break;
                    case 'x': state = 88; break;
                    case '0': state = 69; break;
                    case 'V': state = 25; break;
                    case 'f': state = 76; break;
                    case 'y': state = 84; break;
                    case '_': state = 72; break;
                    case 'J': state = 60; break;
                    case '7': state = 111; break;
                    case 'j': state = 26; break;
                    case 'A': state = 102; break;
                    case 'M': state = 113; break;
                    case 'P': state = 59; break;
                    case '2': state = 67; break;
                    case 'k': state = 83; break;
                    case 'a': state = 75; break;
                    case 'N': state = 104; break;
                    case 'C': state = 80; break;
                    case 'U': state = 71; break;
                    case 'T': state = 110; break;
                    case 'X': state = 64; break;
                    case '9': state = 107; break;
                    case 'Z': state = 89; break;
                    case 'c': state = 108; break;
                    case '5': state = 114; break;
                    case '3': state = 96; break;
                    case 'l': state = 97; break;
                    case 'S': state = 45; break;
                    case 'o': state = 109; break;
                    case 's': state = 28; break;
                    case 'O': state = 81; break;
                    case 'd': state = 70; break;
                    case 't': state = 78; break;
                    case 'z': state = 94; break;
                    case 'q': state = 91; break;
                    case 'w': state = 68; break;
                    case 'p': state = 95; break;
                    case '4': state = 77; break;
                    case 'h': state = 24; break;
                    case 'B': state = 62; break;
                    case 'e': state = 106; break;
                    case '1': state = 79; break;
                    case 'Y': state = 115; break;
                    case 'G': state = 103; break;
                    case 'Q': state = 100; break;
                    case 'D': state = 27; break;
                    case 'R': state = 29; break;
                    case 'u': state = 105; break;
                    case 'b': state = 61; break;
                    case 'v': state = 90; break;
                    case 'K': state = 101; break;
                    case 'L': state = 99; break;
                    default: return std::find(finalNodes.begin(), finalNodes.end(), state) != finalNodes.end();
                }
                break;
            case 22: 
                switch(letter) {
                    case 'y': state = 84; break;
                    case '_': state = 72; break;
                    case '8': state = 65; break;
                    case 'k': state = 83; break;
                    case 'V': state = 25; break;
                    case 'H': state = 85; break;
                    case 'I': state = 63; break;
                    case 'i': state = 112; break;
                    case '1': state = 79; break;
                    case 'm': state = 92; break;
                    case 'F': state = 82; break;
                    case 'r': state = 93; break;
                    case 'n': state = 86; break;
                    case '0': state = 69; break;
                    case '6': state = 66; break;
                    case 'g': state = 73; break;
                    case 'x': state = 88; break;
                    case 'f': state = 76; break;
                    case 'J': state = 60; break;
                    case 'W': state = 74; break;
                    case '7': state = 111; break;
                    case 'j': state = 26; break;
                    case 'A': state = 102; break;
                    case 'N': state = 104; break;
                    case 'M': state = 113; break;
                    case 'P': state = 59; break;
                    case '2': state = 67; break;
                    case 'U': state = 71; break;
                    case 'a': state = 75; break;
                    case 'C': state = 80; break;
                    case 'G': state = 103; break;
                    case 'X': state = 64; break;
                    case 'p': state = 95; break;
                    case 'Q': state = 100; break;
                    case '5': state = 114; break;
                    case '3': state = 96; break;
                    case 'Z': state = 89; break;
                    case 'o': state = 109; break;
                    case 's': state = 28; break;
                    case 'c': state = 108; break;
                    case 'O': state = 81; break;
                    case 'q': state = 91; break;
                    case 'd': state = 70; break;
                    case 't': state = 78; break;
                    case 'z': state = 94; break;
                    case 'S': state = 45; break;
                    case 'E': state = 98; break;
                    case 'h': state = 24; break;
                    case 'L': state = 99; break;
                    case 'D': state = 27; break;
                    case 'u': state = 105; break;
                    case '4': state = 77; break;
                    case 'l': state = 97; break;
                    case 'Y': state = 115; break;
                    case '9': state = 107; break;
                    case 'v': state = 90; break;
                    case 'T': state = 110; break;
                    case 'b': state = 61; break;
                    case 'e': state = 106; break;
                    case 'B': state = 62; break;
                    case 'R': state = 29; break;
                    case 'K': state = 101; break;
                    case 'w': state = 68; break;
                    default: return std::find(finalNodes.begin(), finalNodes.end(), state) != finalNodes.end();
                }
                break;
            case 23: 
                switch(letter) {
                    case 'r': state = 93; break;
                    case '6': state = 66; break;
                    case '0': state = 69; break;
                    case 'f': state = 76; break;
                    case 'y': state = 84; break;
                    case '8': state = 65; break;
                    case 'T': state = 110; break;
                    case '1': state = 79; break;
                    case 'x': state = 88; break;
                    case 'V': state = 25; break;
                    case 'n': state = 86; break;
                    case 'F': state = 82; break;
                    case 'm': state = 92; break;
                    case 'I': state = 63; break;
                    case 'H': state = 85; break;
                    case 'i': state = 112; break;
                    case 'g': state = 73; break;
                    case 'j': state = 26; break;
                    case 'J': state = 60; break;
                    case '7': state = 111; break;
                    case 'M': state = 113; break;
                    case 'N': state = 104; break;
                    case 'P': state = 59; break;
                    case 'z': state = 94; break;
                    case 'A': state = 102; break;
                    case 'a': state = 75; break;
                    case 'k': state = 83; break;
                    case 'C': state = 80; break;
                    case 'v': state = 90; break;
                    case 'Q': state = 100; break;
                    case 'X': state = 64; break;
                    case '3': state = 96; break;
                    case '5': state = 114; break;
                    case '_': state = 72; break;
                    case 'Z': state = 89; break;
                    case 'E': state = 98; break;
                    case 'O': state = 81; break;
                    case 'l': state = 97; break;
                    case 'W': state = 74; break;
                    case 'q': state = 91; break;
                    case 'c': state = 108; break;
                    case 'B': state = 62; break;
                    case 's': state = 28; break;
                    case 'd': state = 70; break;
                    case 't': state = 78; break;
                    case 'o': state = 109; break;
                    case '2': state = 67; break;
                    case 'e': state = 106; break;
                    case '4': state = 77; break;
                    case 'Y': state = 115; break;
                    case 'D': state = 27; break;
                    case '9': state = 107; break;
                    case 'S': state = 45; break;
                    case 'b': state = 61; break;
                    case 'K': state = 101; break;
                    case 'u': state = 105; break;
                    case 'h': state = 24; break;
                    case 'R': state = 29; break;
                    case 'p': state = 95; break;
                    case 'w': state = 68; break;
                    case 'G': state = 103; break;
                    case 'L': state = 99; break;
                    case 'U': state = 71; break;
                    default: return std::find(finalNodes.begin(), finalNodes.end(), state) != finalNodes.end();
                }
                break;
            case 24: 
                switch(letter) {
                    case 'Q': state = 100; break;
                    case 'V': state = 25; break;
                    case 'S': state = 45; break;
                    case 'W': state = 74; break;
                    case 'v': state = 90; break;
                    case 'c': state = 108; break;
                    case 'q': state = 91; break;
                    case '3': state = 96; break;
                    case 's': state = 28; break;
                    case 'o': state = 109; break;
                    case 'l': state = 97; break;
                    case 'd': state = 70; break;
                    case '_': state = 72; break;
                    case 'k': state = 83; break;
                    case 'E': state = 98; break;
                    case 'f': state = 76; break;
                    case 'R': state = 29; break;
                    case 'Z': state = 89; break;
                    case 'i': state = 112; break;
                    case 'J': state = 60; break;
                    case 'Y': state = 115; break;
                    case 'm': state = 92; break;
                    case 'M': state = 113; break;
                    case 'X': state = 64; break;
                    case '9': state = 107; break;
                    case 't': state = 78; break;
                    case 'L': state = 99; break;
                    case 'j': state = 26; break;
                    case 'I': state = 63; break;
                    case 'e': state = 106; break;
                    case 'r': state = 93; break;
                    case 'b': state = 61; break;
                    case '2': state = 67; break;
                    case 'g': state = 73; break;
                    case 'w': state = 68; break;
                    case 'x': state = 88; break;
                    case 'y': state = 84; break;
                    case 'p': state = 95; break;
                    case '4': state = 77; break;
                    case 'z': state = 94; break;
                    case 'H': state = 85; break;
                    case 'a': state = 75; break;
                    case 'T': state = 110; break;
                    case 'u': state = 105; break;
                    case 'P': state = 59; break;
                    case '7': state = 111; break;
                    case 'B': state = 62; break;
                    case 'D': state = 27; break;
                    case '5': state = 114; break;
                    case '8': state = 65; break;
                    case 'N': state = 104; break;
                    case 'A': state = 102; break;
                    case 'h': state = 24; break;
                    case 'O': state = 81; break;
                    case 'G': state = 103; break;
                    case '1': state = 79; break;
                    case '6': state = 66; break;
                    case 'U': state = 71; break;
                    case 'F': state = 82; break;
                    case 'K': state = 101; break;
                    case '0': state = 69; break;
                    case 'C': state = 80; break;
                    case 'n': state = 86; break;
                    default: return std::find(finalNodes.begin(), finalNodes.end(), state) != finalNodes.end();
                }
                break;
            case 25: 
                switch(letter) {
                    case '7': state = 111; break;
                    case 'U': state = 71; break;
                    case 'v': state = 90; break;
                    case 'W': state = 74; break;
                    case '1': state = 79; break;
                    case 'h': state = 24; break;
                    case 'J': state = 60; break;
                    case '_': state = 72; break;
                    case 'M': state = 113; break;
                    case 'X': state = 64; break;
                    case 'S': state = 45; break;
                    case 'V': state = 25; break;
                    case '3': state = 96; break;
                    case 'q': state = 91; break;
                    case 'Y': state = 115; break;
                    case 'k': state = 83; break;
                    case 'Q': state = 100; break;
                    case 'O': state = 81; break;
                    case 'I': state = 63; break;
                    case 's': state = 28; break;
                    case 'f': state = 76; break;
                    case 'c': state = 108; break;
                    case 'o': state = 109; break;
                    case 'z': state = 94; break;
                    case 'm': state = 92; break;
                    case 'E': state = 98; break;
                    case 'n': state = 86; break;
                    case 'Z': state = 89; break;
                    case 'a': state = 75; break;
                    case 'H': state = 85; break;
                    case 'R': state = 29; break;
                    case 'D': state = 27; break;
                    case 'l': state = 97; break;
                    case 'B': state = 62; break;
                    case 'r': state = 93; break;
                    case 't': state = 78; break;
                    case 'd': state = 70; break;
                    case '0': state = 69; break;
                    case '4': state = 77; break;
                    case 'T': state = 110; break;
                    case 'F': state = 82; break;
                    case 'C': state = 80; break;
                    case 'L': state = 99; break;
                    case 'y': state = 84; break;
                    case 'i': state = 112; break;
                    case 'x': state = 88; break;
                    case 'g': state = 73; break;
                    case 'P': state = 59; break;
                    case 'e': state = 106; break;
                    case '2': state = 67; break;
                    case 'w': state = 68; break;
                    case '6': state = 66; break;
                    case 'j': state = 26; break;
                    case '8': state = 65; break;
                    case 'u': state = 105; break;
                    case 'A': state = 102; break;
                    case 'K': state = 101; break;
                    case 'b': state = 61; break;
                    case 'p': state = 95; break;
                    case 'G': state = 103; break;
                    case 'N': state = 104; break;
                    case '9': state = 107; break;
                    case '5': state = 114; break;
                    default: return std::find(finalNodes.begin(), finalNodes.end(), state) != finalNodes.end();
                }
                break;
            case 26: 
                switch(letter) {
                    case 'E': state = 98; break;
                    case 'U': state = 71; break;
                    case 'v': state = 90; break;
                    case 'W': state = 74; break;
                    case 'h': state = 24; break;
                    case 'J': state = 60; break;
                    case '5': state = 114; break;
                    case 'V': state = 25; break;
                    case 'u': state = 105; break;
                    case '9': state = 107; break;
                    case 'z': state = 94; break;
                    case '3': state = 96; break;
                    case 'Z': state = 89; break;
                    case 'C': state = 80; break;
                    case 'L': state = 99; break;
                    case 'S': state = 45; break;
                    case 'f': state = 76; break;
                    case 'M': state = 113; break;
                    case 'X': state = 64; break;
                    case '_': state = 72; break;
                    case 's': state = 28; break;
                    case 'D': state = 27; break;
                    case 'o': state = 109; break;
                    case 'I': state = 63; break;
                    case 'c': state = 108; break;
                    case 'k': state = 83; break;
                    case 'd': state = 70; break;
                    case 'Y': state = 115; break;
                    case 'q': state = 91; break;
                    case 'm': state = 92; break;
                    case 't': state = 78; break;
                    case '4': state = 77; break;
                    case 'Q': state = 100; break;
                    case 'n': state = 86; break;
                    case 'H': state = 85; break;
                    case 'r': state = 93; break;
                    case 'A': state = 102; break;
                    case 'F': state = 82; break;
                    case 'i': state = 112; break;
                    case '1': state = 79; break;
                    case 'T': state = 110; break;
                    case 'G': state = 103; break;
                    case '0': state = 69; break;
                    case 'y': state = 84; break;
                    case 'a': state = 75; break;
                    case 'e': state = 106; break;
                    case '2': state = 67; break;
                    case '7': state = 111; break;
                    case 'N': state = 104; break;
                    case '6': state = 66; break;
                    case 'x': state = 88; break;
                    case 'j': state = 26; break;
                    case '8': state = 65; break;
                    case 'l': state = 97; break;
                    case 'P': state = 59; break;
                    case 'R': state = 29; break;
                    case 'B': state = 62; break;
                    case 'g': state = 73; break;
                    case 'K': state = 101; break;
                    case 'p': state = 95; break;
                    case 'b': state = 61; break;
                    case 'O': state = 81; break;
                    case 'w': state = 68; break;
                    default: return std::find(finalNodes.begin(), finalNodes.end(), state) != finalNodes.end();
                }
                break;
            case 27: 
                switch(letter) {
                    case 'C': state = 80; break;
                    case 'h': state = 24; break;
                    case 'U': state = 71; break;
                    case '5': state = 114; break;
                    case 'W': state = 74; break;
                    case 'u': state = 105; break;
                    case 'V': state = 25; break;
                    case 'Z': state = 89; break;
                    case 'S': state = 45; break;
                    case 'z': state = 94; break;
                    case 'v': state = 90; break;
                    case 't': state = 78; break;
                    case '3': state = 96; break;
                    case 'I': state = 63; break;
                    case 'O': state = 81; break;
                    case 's': state = 28; break;
                    case 'k': state = 83; break;
                    case 'o': state = 109; break;
                    case 'c': state = 108; break;
                    case 'Q': state = 100; break;
                    case 'l': state = 97; break;
                    case 'd': state = 70; break;
                    case 'Y': state = 115; break;
                    case 'm': state = 92; break;
                    case 'f': state = 76; break;
                    case '_': state = 72; break;
                    case 'n': state = 86; break;
                    case '9': state = 107; break;
                    case 'M': state = 113; break;
                    case 'X': state = 64; break;
                    case '6': state = 66; break;
                    case 'x': state = 88; break;
                    case 'y': state = 84; break;
                    case '4': state = 77; break;
                    case 'A': state = 102; break;
                    case 'H': state = 85; break;
                    case 'r': state = 93; break;
                    case 'i': state = 112; break;
                    case 'e': state = 106; break;
                    case '7': state = 111; break;
                    case 'q': state = 91; break;
                    case '1': state = 79; break;
                    case 'E': state = 98; break;
                    case '2': state = 67; break;
                    case 'F': state = 82; break;
                    case '0': state = 69; break;
                    case 'w': state = 68; break;
                    case '8': state = 65; break;
                    case 'a': state = 75; break;
                    case 'R': state = 29; break;
                    case 'b': state = 61; break;
                    case 'B': state = 62; break;
                    case 'P': state = 59; break;
                    case 'p': state = 95; break;
                    case 'g': state = 73; break;
                    case 'j': state = 26; break;
                    case 'D': state = 27; break;
                    case 'J': state = 60; break;
                    case 'L': state = 99; break;
                    case 'G': state = 103; break;
                    case 'K': state = 101; break;
                    case 'N': state = 104; break;
                    case 'T': state = 110; break;
                    default: return std::find(finalNodes.begin(), finalNodes.end(), state) != finalNodes.end();
                }
                break;
            case 28: 
                switch(letter) {
                    case 'C': state = 80; break;
                    case 'h': state = 24; break;
                    case 'U': state = 71; break;
                    case '1': state = 79; break;
                    case '5': state = 114; break;
                    case 'J': state = 60; break;
                    case '9': state = 107; break;
                    case 'j': state = 26; break;
                    case 'S': state = 45; break;
                    case 'V': state = 25; break;
                    case 'Q': state = 100; break;
                    case 'n': state = 86; break;
                    case 's': state = 28; break;
                    case 'Z': state = 89; break;
                    case 't': state = 78; break;
                    case '4': state = 77; break;
                    case '3': state = 96; break;
                    case 'l': state = 97; break;
                    case 'z': state = 94; break;
                    case 'L': state = 99; break;
                    case 'W': state = 74; break;
                    case 'I': state = 63; break;
                    case '0': state = 69; break;
                    case 'f': state = 76; break;
                    case 'k': state = 83; break;
                    case 'v': state = 90; break;
                    case '_': state = 72; break;
                    case 'd': state = 70; break;
                    case 'M': state = 113; break;
                    case 'i': state = 112; break;
                    case 'm': state = 92; break;
                    case 'q': state = 91; break;
                    case 'K': state = 101; break;
                    case 'o': state = 109; break;
                    case 'u': state = 105; break;
                    case 'A': state = 102; break;
                    case '6': state = 66; break;
                    case '7': state = 111; break;
                    case 'x': state = 88; break;
                    case 'r': state = 93; break;
                    case 'H': state = 85; break;
                    case '8': state = 65; break;
                    case 'e': state = 106; break;
                    case 'g': state = 73; break;
                    case 'X': state = 64; break;
                    case 'c': state = 108; break;
                    case 'a': state = 75; break;
                    case 'w': state = 68; break;
                    case 'Y': state = 115; break;
                    case 'P': state = 59; break;
                    case 'F': state = 82; break;
                    case 'R': state = 29; break;
                    case 'y': state = 84; break;
                    case 'D': state = 27; break;
                    case '2': state = 67; break;
                    case 'G': state = 103; break;
                    case 'E': state = 98; break;
                    case 'p': state = 95; break;
                    case 'T': state = 110; break;
                    case 'N': state = 104; break;
                    case 'B': state = 62; break;
                    case 'b': state = 61; break;
                    case 'O': state = 81; break;
                    default: return std::find(finalNodes.begin(), finalNodes.end(), state) != finalNodes.end();
                }
                break;
            case 29: 
                switch(letter) {
                    case 't': state = 78; break;
                    case 'v': state = 90; break;
                    case '5': state = 114; break;
                    case 'K': state = 101; break;
                    case 'D': state = 27; break;
                    case 'J': state = 60; break;
                    case '1': state = 79; break;
                    case 'U': state = 71; break;
                    case 'S': state = 45; break;
                    case 'j': state = 26; break;
                    case '_': state = 72; break;
                    case '4': state = 77; break;
                    case 'M': state = 113; break;
                    case 'V': state = 25; break;
                    case 'q': state = 91; break;
                    case 'C': state = 80; break;
                    case 'I': state = 63; break;
                    case 's': state = 28; break;
                    case 'X': state = 64; break;
                    case 'c': state = 108; break;
                    case 'z': state = 94; break;
                    case 'd': state = 70; break;
                    case '3': state = 96; break;
                    case '0': state = 69; break;
                    case 'Q': state = 100; break;
                    case 'f': state = 76; break;
                    case 'l': state = 97; break;
                    case 'Y': state = 115; break;
                    case 'i': state = 112; break;
                    case 'k': state = 83; break;
                    case 'H': state = 85; break;
                    case 'W': state = 74; break;
                    case 'u': state = 105; break;
                    case '6': state = 66; break;
                    case 'r': state = 93; break;
                    case 'P': state = 59; break;
                    case 'n': state = 86; break;
                    case '2': state = 67; break;
                    case 'A': state = 102; break;
                    case 'a': state = 75; break;
                    case 'F': state = 82; break;
                    case 'L': state = 99; break;
                    case 'R': state = 29; break;
                    case '7': state = 111; break;
                    case 'm': state = 92; break;
                    case 'E': state = 98; break;
                    case 'x': state = 88; break;
                    case 'B': state = 62; break;
                    case 'y': state = 84; break;
                    case 'Z': state = 89; break;
                    case 'N': state = 104; break;
                    case 'w': state = 68; break;
                    case 'G': state = 103; break;
                    case 'e': state = 106; break;
                    case 'T': state = 110; break;
                    case '8': state = 65; break;
                    case 'g': state = 73; break;
                    case 'p': state = 95; break;
                    case 'b': state = 61; break;
                    case 'o': state = 109; break;
                    case 'O': state = 81; break;
                    case '9': state = 107; break;
                    case 'h': state = 24; break;
                    default: return std::find(finalNodes.begin(), finalNodes.end(), state) != finalNodes.end();
                }
                break;
            case 30: 
                switch(letter) {
                    case 'F': state = 82; break;
                    case 'H': state = 85; break;
                    case 't': state = 78; break;
                    case 'f': state = 76; break;
                    case 'i': state = 112; break;
                    case '5': state = 114; break;
                    case 's': state = 28; break;
                    case 'K': state = 101; break;
                    case 'C': state = 80; break;
                    case '6': state = 66; break;
                    case 'u': state = 105; break;
                    case 'V': state = 25; break;
                    case 'U': state = 71; break;
                    case '1': state = 79; break;
                    case 'D': state = 27; break;
                    case '7': state = 111; break;
                    case '4': state = 77; break;
                    case '3': state = 96; break;
                    case 'c': state = 108; break;
                    case 'Z': state = 89; break;
                    case 'Q': state = 100; break;
                    case 'P': state = 59; break;
                    case 'x': state = 88; break;
                    case 'W': state = 74; break;
                    case 'p': state = 95; break;
                    case 'r': state = 93; break;
                    case 'z': state = 94; break;
                    case 'm': state = 92; break;
                    case 'E': state = 98; break;
                    case 'I': state = 63; break;
                    case 'v': state = 90; break;
                    case '_': state = 72; break;
                    case 'k': state = 83; break;
                    case 'S': state = 45; break;
                    case 'X': state = 64; break;
                    case 'M': state = 113; break;
                    case 'y': state = 84; break;
                    case 'g': state = 73; break;
                    case 'j': state = 26; break;
                    case '0': state = 69; break;
                    case '2': state = 67; break;
                    case 'A': state = 102; break;
                    case 'a': state = 75; break;
                    case 'L': state = 99; break;
                    case 'w': state = 68; break;
                    case 'o': state = 109; break;
                    case 'J': state = 60; break;
                    case 'n': state = 86; break;
                    case '8': state = 65; break;
                    case 'T': state = 110; break;
                    case 'R': state = 29; break;
                    case 'B': state = 62; break;
                    case 'h': state = 24; break;
                    case 'O': state = 81; break;
                    case 'e': state = 106; break;
                    case 'N': state = 104; break;
                    case 'G': state = 103; break;
                    case 'l': state = 97; break;
                    case 'd': state = 70; break;
                    case 'Y': state = 115; break;
                    case 'b': state = 61; break;
                    case 'q': state = 91; break;
                    case '9': state = 107; break;
                    default: return std::find(finalNodes.begin(), finalNodes.end(), state) != finalNodes.end();
                }
                break;
            case 31: 
                switch(letter) {
                    case 'C': state = 80; break;
                    case 'a': state = 75; break;
                    case 'K': state = 101; break;
                    case 'F': state = 82; break;
                    case 'f': state = 76; break;
                    case '9': state = 107; break;
                    case 'S': state = 45; break;
                    case 'j': state = 26; break;
                    case 'V': state = 25; break;
                    case 'D': state = 27; break;
                    case 'v': state = 90; break;
                    case 'I': state = 63; break;
                    case 's': state = 28; break;
                    case '6': state = 66; break;
                    case '1': state = 79; break;
                    case 'r': state = 93; break;
                    case 'y': state = 84; break;
                    case 'H': state = 85; break;
                    case 'A': state = 102; break;
                    case '_': state = 72; break;
                    case 'm': state = 92; break;
                    case '3': state = 96; break;
                    case 'U': state = 71; break;
                    case 'M': state = 113; break;
                    case 'X': state = 64; break;
                    case 'd': state = 70; break;
                    case 'Y': state = 115; break;
                    case 'P': state = 59; break;
                    case '2': state = 67; break;
                    case 'x': state = 88; break;
                    case 'J': state = 60; break;
                    case 'g': state = 73; break;
                    case 'Q': state = 100; break;
                    case 'z': state = 94; break;
                    case 'c': state = 108; break;
                    case 'p': state = 95; break;
                    case 't': state = 78; break;
                    case 'Z': state = 89; break;
                    case 'l': state = 97; break;
                    case '4': state = 77; break;
                    case '7': state = 111; break;
                    case '0': state = 69; break;
                    case 'O': state = 81; break;
                    case 'i': state = 112; break;
                    case 'L': state = 99; break;
                    case 'o': state = 109; break;
                    case 'k': state = 83; break;
                    case 'N': state = 104; break;
                    case '8': state = 65; break;
                    case 'G': state = 103; break;
                    case 'u': state = 105; break;
                    case 'W': state = 74; break;
                    case 'q': state = 91; break;
                    case '5': state = 114; break;
                    case 'E': state = 98; break;
                    case 'R': state = 29; break;
                    case 'h': state = 24; break;
                    case 'b': state = 61; break;
                    case 'T': state = 110; break;
                    case 'w': state = 68; break;
                    case 'n': state = 86; break;
                    case 'B': state = 62; break;
                    case 'e': state = 106; break;
                    default: return std::find(finalNodes.begin(), finalNodes.end(), state) != finalNodes.end();
                }
                break;
            case 32: 
                switch(letter) {
                    case 'y': state = 84; break;
                    case 'C': state = 80; break;
                    case 'h': state = 24; break;
                    case 'F': state = 82; break;
                    case 'T': state = 110; break;
                    case 'v': state = 90; break;
                    case 'G': state = 103; break;
                    case '7': state = 111; break;
                    case 'Q': state = 100; break;
                    case '6': state = 66; break;
                    case 'I': state = 63; break;
                    case '3': state = 96; break;
                    case 'q': state = 91; break;
                    case 'R': state = 29; break;
                    case 'r': state = 93; break;
                    case 'p': state = 95; break;
                    case 'g': state = 73; break;
                    case 't': state = 78; break;
                    case 'X': state = 64; break;
                    case '_': state = 72; break;
                    case 'V': state = 25; break;
                    case 'z': state = 94; break;
                    case 'l': state = 97; break;
                    case 'P': state = 59; break;
                    case '0': state = 69; break;
                    case 'j': state = 26; break;
                    case 'm': state = 92; break;
                    case 'A': state = 102; break;
                    case 'u': state = 105; break;
                    case '2': state = 67; break;
                    case 'S': state = 45; break;
                    case 'M': state = 113; break;
                    case 'k': state = 83; break;
                    case 'J': state = 60; break;
                    case 'c': state = 108; break;
                    case 'H': state = 85; break;
                    case 'Z': state = 89; break;
                    case 'B': state = 62; break;
                    case 'U': state = 71; break;
                    case '4': state = 77; break;
                    case 's': state = 28; break;
                    case 'D': state = 27; break;
                    case 'i': state = 112; break;
                    case 'b': state = 61; break;
                    case 'N': state = 104; break;
                    case 'e': state = 106; break;
                    case '1': state = 79; break;
                    case '8': state = 65; break;
                    case 'd': state = 70; break;
                    case '9': state = 107; break;
                    case 'K': state = 101; break;
                    case 'a': state = 75; break;
                    case 'x': state = 88; break;
                    case 'E': state = 98; break;
                    case 'W': state = 74; break;
                    case 'L': state = 99; break;
                    case 'f': state = 76; break;
                    case 'Y': state = 115; break;
                    case 'o': state = 109; break;
                    case 'n': state = 86; break;
                    case 'w': state = 68; break;
                    case 'O': state = 81; break;
                    case '5': state = 114; break;
                    default: return std::find(finalNodes.begin(), finalNodes.end(), state) != finalNodes.end();
                }
                break;
            case 33: 
                switch(letter) {
                    case 'y': state = 84; break;
                    case 'C': state = 80; break;
                    case 'h': state = 24; break;
                    case 'T': state = 110; break;
                    case 'F': state = 82; break;
                    case 'u': state = 105; break;
                    case 's': state = 28; break;
                    case '7': state = 111; break;
                    case 'Q': state = 100; break;
                    case '6': state = 66; break;
                    case 'v': state = 90; break;
                    case 'I': state = 63; break;
                    case '_': state = 72; break;
                    case 'f': state = 76; break;
                    case 'o': state = 109; break;
                    case 'r': state = 93; break;
                    case 'l': state = 97; break;
                    case 'p': state = 95; break;
                    case 'X': state = 64; break;
                    case 'e': state = 106; break;
                    case 'x': state = 88; break;
                    case 'P': state = 59; break;
                    case 'H': state = 85; break;
                    case '4': state = 77; break;
                    case 'g': state = 73; break;
                    case 'Z': state = 89; break;
                    case '0': state = 69; break;
                    case '3': state = 96; break;
                    case 'E': state = 98; break;
                    case 't': state = 78; break;
                    case 'J': state = 60; break;
                    case 'V': state = 25; break;
                    case 'B': state = 62; break;
                    case 'S': state = 45; break;
                    case 'c': state = 108; break;
                    case 'G': state = 103; break;
                    case 'M': state = 113; break;
                    case 'm': state = 92; break;
                    case 'A': state = 102; break;
                    case 'j': state = 26; break;
                    case '2': state = 67; break;
                    case 'D': state = 27; break;
                    case 'z': state = 94; break;
                    case 'U': state = 71; break;
                    case 'O': state = 81; break;
                    case 'b': state = 61; break;
                    case 'L': state = 99; break;
                    case '9': state = 107; break;
                    case 'k': state = 83; break;
                    case 'N': state = 104; break;
                    case 'R': state = 29; break;
                    case 'q': state = 91; break;
                    case 'Y': state = 115; break;
                    case '8': state = 65; break;
                    case 'a': state = 75; break;
                    case 'i': state = 112; break;
                    case '5': state = 114; break;
                    case 'W': state = 74; break;
                    case 'd': state = 70; break;
                    case '1': state = 79; break;
                    case 'n': state = 86; break;
                    case 'K': state = 101; break;
                    case 'w': state = 68; break;
                    default: return std::find(finalNodes.begin(), finalNodes.end(), state) != finalNodes.end();
                }
                break;
            case 34: 
                switch(letter) {
                    case 'y': state = 84; break;
                    case 'C': state = 80; break;
                    case 'h': state = 24; break;
                    case 'n': state = 86; break;
                    case 'l': state = 97; break;
                    case 'F': state = 82; break;
                    case 'N': state = 104; break;
                    case 'u': state = 105; break;
                    case 's': state = 28; break;
                    case '1': state = 79; break;
                    case '7': state = 111; break;
                    case '6': state = 66; break;
                    case 'k': state = 83; break;
                    case 'V': state = 25; break;
                    case 'H': state = 85; break;
                    case '8': state = 65; break;
                    case 'g': state = 73; break;
                    case 'o': state = 109; break;
                    case 'O': state = 81; break;
                    case '_': state = 72; break;
                    case 'X': state = 64; break;
                    case 'M': state = 113; break;
                    case 'r': state = 93; break;
                    case 'z': state = 94; break;
                    case 'p': state = 95; break;
                    case '2': state = 67; break;
                    case 'P': state = 59; break;
                    case 'v': state = 90; break;
                    case '3': state = 96; break;
                    case 'J': state = 60; break;
                    case 'Z': state = 89; break;
                    case 'm': state = 92; break;
                    case 'Q': state = 100; break;
                    case 'A': state = 102; break;
                    case 't': state = 78; break;
                    case '4': state = 77; break;
                    case '0': state = 69; break;
                    case 'c': state = 108; break;
                    case 'G': state = 103; break;
                    case 'S': state = 45; break;
                    case 'I': state = 63; break;
                    case 'E': state = 98; break;
                    case 'i': state = 112; break;
                    case 'b': state = 61; break;
                    case 'U': state = 71; break;
                    case 'j': state = 26; break;
                    case 'x': state = 88; break;
                    case 'L': state = 99; break;
                    case 'D': state = 27; break;
                    case 'W': state = 74; break;
                    case 'f': state = 76; break;
                    case 'e': state = 106; break;
                    case '9': state = 107; break;
                    case 'a': state = 75; break;
                    case 'B': state = 62; break;
                    case '5': state = 114; break;
                    case 'q': state = 91; break;
                    case 'R': state = 29; break;
                    case 'd': state = 70; break;
                    case 'T': state = 110; break;
                    case 'Y': state = 115; break;
                    case 'K': state = 101; break;
                    case 'w': state = 68; break;
                    default: return std::find(finalNodes.begin(), finalNodes.end(), state) != finalNodes.end();
                }
                break;
            case 35: 
                switch(letter) {
                    case 'C': state = 80; break;
                    case 'y': state = 84; break;
                    case 'h': state = 24; break;
                    case 'n': state = 86; break;
                    case 'F': state = 82; break;
                    case 'u': state = 105; break;
                    case '6': state = 66; break;
                    case '7': state = 111; break;
                    case 's': state = 28; break;
                    case '_': state = 72; break;
                    case '8': state = 65; break;
                    case 'Q': state = 100; break;
                    case 'M': state = 113; break;
                    case 'r': state = 93; break;
                    case 'l': state = 97; break;
                    case 'a': state = 75; break;
                    case 'J': state = 60; break;
                    case 'X': state = 64; break;
                    case 'S': state = 45; break;
                    case 'z': state = 94; break;
                    case 'P': state = 59; break;
                    case 'H': state = 85; break;
                    case 'A': state = 102; break;
                    case 't': state = 78; break;
                    case 'm': state = 92; break;
                    case 'p': state = 95; break;
                    case 'g': state = 73; break;
                    case 'v': state = 90; break;
                    case '3': state = 96; break;
                    case 'Z': state = 89; break;
                    case '2': state = 67; break;
                    case '0': state = 69; break;
                    case '4': state = 77; break;
                    case 'j': state = 26; break;
                    case 'G': state = 103; break;
                    case 'c': state = 108; break;
                    case 'E': state = 98; break;
                    case 'e': state = 106; break;
                    case 'B': state = 62; break;
                    case 'x': state = 88; break;
                    case 'I': state = 63; break;
                    case 'U': state = 71; break;
                    case 'b': state = 61; break;
                    case 'k': state = 83; break;
                    case '1': state = 79; break;
                    case 'V': state = 25; break;
                    case 'D': state = 27; break;
                    case 'K': state = 101; break;
                    case '9': state = 107; break;
                    case 'i': state = 112; break;
                    case 'R': state = 29; break;
                    case 'q': state = 91; break;
                    case 'N': state = 104; break;
                    case '5': state = 114; break;
                    case 'O': state = 81; break;
                    case 'f': state = 76; break;
                    case 'T': state = 110; break;
                    case 'W': state = 74; break;
                    case 'L': state = 99; break;
                    case 'o': state = 109; break;
                    case 'Y': state = 115; break;
                    case 'd': state = 70; break;
                    case 'w': state = 68; break;
                    default: return std::find(finalNodes.begin(), finalNodes.end(), state) != finalNodes.end();
                }
                break;
            case 36: 
                switch(letter) {
                    case 'y': state = 84; break;
                    case 'C': state = 80; break;
                    case '_': state = 72; break;
                    case 'i': state = 112; break;
                    case 'A': state = 102; break;
                    case 'u': state = 105; break;
                    case 'T': state = 110; break;
                    case 'J': state = 60; break;
                    case 'H': state = 85; break;
                    case '3': state = 96; break;
                    case 'o': state = 109; break;
                    case 'N': state = 104; break;
                    case '7': state = 111; break;
                    case 'X': state = 64; break;
                    case 'E': state = 98; break;
                    case 'M': state = 113; break;
                    case 'r': state = 93; break;
                    case 'D': state = 27; break;
                    case 'f': state = 76; break;
                    case 'F': state = 82; break;
                    case 'V': state = 25; break;
                    case 'Z': state = 89; break;
                    case 'e': state = 106; break;
                    case 't': state = 78; break;
                    case 'x': state = 88; break;
                    case 'p': state = 95; break;
                    case 'm': state = 92; break;
                    case '0': state = 69; break;
                    case 'z': state = 94; break;
                    case 'v': state = 90; break;
                    case '2': state = 67; break;
                    case 'Q': state = 100; break;
                    case 'G': state = 103; break;
                    case 'P': state = 59; break;
                    case 'j': state = 26; break;
                    case 'S': state = 45; break;
                    case 'c': state = 108; break;
                    case 'g': state = 73; break;
                    case 'I': state = 63; break;
                    case '4': state = 77; break;
                    case '1': state = 79; break;
                    case '8': state = 65; break;
                    case 'b': state = 61; break;
                    case 'B': state = 62; break;
                    case 'U': state = 71; break;
                    case 'l': state = 97; break;
                    case 'O': state = 81; break;
                    case '9': state = 107; break;
                    case 'k': state = 83; break;
                    case 'a': state = 75; break;
                    case '6': state = 66; break;
                    case 'd': state = 70; break;
                    case 'w': state = 68; break;
                    case '5': state = 114; break;
                    case 'q': state = 91; break;
                    case 'K': state = 101; break;
                    case 'n': state = 86; break;
                    case 'Y': state = 115; break;
                    case 'W': state = 74; break;
                    case 'R': state = 29; break;
                    case 's': state = 28; break;
                    case 'L': state = 99; break;
                    case 'h': state = 24; break;
                    default: return std::find(finalNodes.begin(), finalNodes.end(), state) != finalNodes.end();
                }
                break;
            case 37: 
                switch(letter) {
                    case 'y': state = 84; break;
                    case 'f': state = 76; break;
                    case 'C': state = 80; break;
                    case '_': state = 72; break;
                    case 'i': state = 112; break;
                    case 'F': state = 82; break;
                    case 'A': state = 102; break;
                    case 'J': state = 60; break;
                    case '5': state = 114; break;
                    case 'm': state = 92; break;
                    case 'H': state = 85; break;
                    case 'o': state = 109; break;
                    case 'r': state = 93; break;
                    case 'l': state = 97; break;
                    case 'N': state = 104; break;
                    case 'p': state = 95; break;
                    case 'L': state = 99; break;
                    case 'a': state = 75; break;
                    case 'v': state = 90; break;
                    case 'D': state = 27; break;
                    case 'u': state = 105; break;
                    case 'Z': state = 89; break;
                    case 'j': state = 26; break;
                    case '7': state = 111; break;
                    case 'U': state = 71; break;
                    case 'k': state = 83; break;
                    case 'g': state = 73; break;
                    case 'Q': state = 100; break;
                    case 'e': state = 106; break;
                    case 'X': state = 64; break;
                    case 'M': state = 113; break;
                    case '1': state = 79; break;
                    case 'E': state = 98; break;
                    case 'V': state = 25; break;
                    case 't': state = 78; break;
                    case 'P': state = 59; break;
                    case '3': state = 96; break;
                    case 'G': state = 103; break;
                    case 'c': state = 108; break;
                    case 'z': state = 94; break;
                    case '2': state = 67; break;
                    case 'S': state = 45; break;
                    case '0': state = 69; break;
                    case 'x': state = 88; break;
                    case '4': state = 77; break;
                    case 'b': state = 61; break;
                    case 'B': state = 62; break;
                    case 'O': state = 81; break;
                    case 'I': state = 63; break;
                    case 'T': state = 110; break;
                    case '8': state = 65; break;
                    case 'w': state = 68; break;
                    case 'q': state = 91; break;
                    case '9': state = 107; break;
                    case '6': state = 66; break;
                    case 'd': state = 70; break;
                    case 'K': state = 101; break;
                    case 'n': state = 86; break;
                    case 'Y': state = 115; break;
                    case 'R': state = 29; break;
                    case 'W': state = 74; break;
                    case 'h': state = 24; break;
                    case 's': state = 28; break;
                    default: return std::find(finalNodes.begin(), finalNodes.end(), state) != finalNodes.end();
                }
                break;
            case 38: 
                switch(letter) {
                    case 'y': state = 84; break;
                    case 'H': state = 85; break;
                    case 'C': state = 80; break;
                    case 'f': state = 76; break;
                    case '_': state = 72; break;
                    case '6': state = 66; break;
                    case 'F': state = 82; break;
                    case 'i': state = 112; break;
                    case 'v': state = 90; break;
                    case 'A': state = 102; break;
                    case '7': state = 111; break;
                    case 'u': state = 105; break;
                    case 'J': state = 60; break;
                    case '3': state = 96; break;
                    case 'S': state = 45; break;
                    case 'm': state = 92; break;
                    case 'r': state = 93; break;
                    case 'Q': state = 100; break;
                    case 'T': state = 110; break;
                    case '8': state = 65; break;
                    case 'o': state = 109; break;
                    case '2': state = 67; break;
                    case 'N': state = 104; break;
                    case 'B': state = 62; break;
                    case 'j': state = 26; break;
                    case 'p': state = 95; break;
                    case 'b': state = 61; break;
                    case '4': state = 77; break;
                    case 'g': state = 73; break;
                    case 'G': state = 103; break;
                    case 'z': state = 94; break;
                    case 'P': state = 59; break;
                    case 't': state = 78; break;
                    case 'e': state = 106; break;
                    case 'x': state = 88; break;
                    case 'M': state = 113; break;
                    case '0': state = 69; break;
                    case 'E': state = 98; break;
                    case 'Z': state = 89; break;
                    case 'X': state = 64; break;
                    case 'D': state = 27; break;
                    case 'a': state = 75; break;
                    case 'I': state = 63; break;
                    case 'c': state = 108; break;
                    case 'K': state = 101; break;
                    case 'V': state = 25; break;
                    case '1': state = 79; break;
                    case '9': state = 107; break;
                    case 'k': state = 83; break;
                    case 'l': state = 97; break;
                    case 'U': state = 71; break;
                    case 'O': state = 81; break;
                    case 'q': state = 91; break;
                    case 'n': state = 86; break;
                    case 'w': state = 68; break;
                    case 'W': state = 74; break;
                    case 'Y': state = 115; break;
                    case 'R': state = 29; break;
                    case '5': state = 114; break;
                    case 'h': state = 24; break;
                    case 'd': state = 70; break;
                    case 's': state = 28; break;
                    case 'L': state = 99; break;
                    default: return std::find(finalNodes.begin(), finalNodes.end(), state) != finalNodes.end();
                }
                break;
            case 39: 
                switch(letter) {
                    case 'H': state = 85; break;
                    case 'y': state = 84; break;
                    case 'C': state = 80; break;
                    case '_': state = 72; break;
                    case 'f': state = 76; break;
                    case '6': state = 66; break;
                    case 'i': state = 112; break;
                    case 'F': state = 82; break;
                    case 'h': state = 24; break;
                    case 'v': state = 90; break;
                    case 'Q': state = 100; break;
                    case 'J': state = 60; break;
                    case 'u': state = 105; break;
                    case 'w': state = 68; break;
                    case 'A': state = 102; break;
                    case '8': state = 65; break;
                    case 'N': state = 104; break;
                    case 'T': state = 110; break;
                    case '3': state = 96; break;
                    case 'P': state = 59; break;
                    case 'p': state = 95; break;
                    case 'z': state = 94; break;
                    case '2': state = 67; break;
                    case '7': state = 111; break;
                    case 'e': state = 106; break;
                    case 'Z': state = 89; break;
                    case 'x': state = 88; break;
                    case 'r': state = 93; break;
                    case 't': state = 78; break;
                    case '0': state = 69; break;
                    case 'g': state = 73; break;
                    case 'j': state = 26; break;
                    case 'G': state = 103; break;
                    case 'E': state = 98; break;
                    case 'X': state = 64; break;
                    case 'M': state = 113; break;
                    case 'b': state = 61; break;
                    case 'S': state = 45; break;
                    case 'D': state = 27; break;
                    case 'k': state = 83; break;
                    case 'm': state = 92; break;
                    case '4': state = 77; break;
                    case 'I': state = 63; break;
                    case 'V': state = 25; break;
                    case '9': state = 107; break;
                    case '1': state = 79; break;
                    case 'l': state = 97; break;
                    case 'U': state = 71; break;
                    case 'c': state = 108; break;
                    case 'o': state = 109; break;
                    case 'O': state = 81; break;
                    case 'a': state = 75; break;
                    case 'n': state = 86; break;
                    case 'q': state = 91; break;
                    case 'R': state = 29; break;
                    case 'd': state = 70; break;
                    case 'K': state = 101; break;
                    case 'Y': state = 115; break;
                    case 'W': state = 74; break;
                    case 'B': state = 62; break;
                    case '5': state = 114; break;
                    case 'L': state = 99; break;
                    case 's': state = 28; break;
                    default: return std::find(finalNodes.begin(), finalNodes.end(), state) != finalNodes.end();
                }
                break;
            case 40: 
                switch(letter) {
                    case 'a': state = 75; break;
                    case 'C': state = 80; break;
                    case 'y': state = 84; break;
                    case 'W': state = 74; break;
                    case 'f': state = 76; break;
                    case 'K': state = 101; break;
                    case '6': state = 66; break;
                    case 'F': state = 82; break;
                    case 'i': state = 112; break;
                    case 'h': state = 24; break;
                    case '5': state = 114; break;
                    case 'G': state = 103; break;
                    case 'U': state = 71; break;
                    case 'r': state = 93; break;
                    case 'u': state = 105; break;
                    case 'z': state = 94; break;
                    case 'm': state = 92; break;
                    case 'O': state = 81; break;
                    case 'w': state = 68; break;
                    case 'J': state = 60; break;
                    case '3': state = 96; break;
                    case 'X': state = 64; break;
                    case 'A': state = 102; break;
                    case '0': state = 69; break;
                    case 'p': state = 95; break;
                    case 'o': state = 109; break;
                    case 'v': state = 90; break;
                    case 'Y': state = 115; break;
                    case 'Z': state = 89; break;
                    case 'E': state = 98; break;
                    case 't': state = 78; break;
                    case '2': state = 67; break;
                    case '_': state = 72; break;
                    case '7': state = 111; break;
                    case 'M': state = 113; break;
                    case 'c': state = 108; break;
                    case '1': state = 79; break;
                    case 'g': state = 73; break;
                    case 'D': state = 27; break;
                    case 'B': state = 62; break;
                    case 'l': state = 97; break;
                    case 'j': state = 26; break;
                    case 'L': state = 99; break;
                    case 'P': state = 59; break;
                    case 'I': state = 63; break;
                    case 'S': state = 45; break;
                    case '4': state = 77; break;
                    case 'e': state = 106; break;
                    case 'x': state = 88; break;
                    case 'V': state = 25; break;
                    case 'b': state = 61; break;
                    case 'H': state = 85; break;
                    case '9': state = 107; break;
                    case 'T': state = 110; break;
                    case '8': state = 65; break;
                    case 'Q': state = 100; break;
                    case 'k': state = 83; break;
                    case 'N': state = 104; break;
                    case 'n': state = 86; break;
                    case 'q': state = 91; break;
                    case 'R': state = 29; break;
                    case 'd': state = 70; break;
                    case 's': state = 28; break;
                    default: return std::find(finalNodes.begin(), finalNodes.end(), state) != finalNodes.end();
                }
                break;
            case 41: 
                switch(letter) {
                    case 'C': state = 80; break;
                    case 'y': state = 84; break;
                    case 'a': state = 75; break;
                    case '_': state = 72; break;
                    case 'K': state = 101; break;
                    case '6': state = 66; break;
                    case 'f': state = 76; break;
                    case 'i': state = 112; break;
                    case 's': state = 28; break;
                    case 'S': state = 45; break;
                    case 'u': state = 105; break;
                    case 'h': state = 24; break;
                    case '7': state = 111; break;
                    case '3': state = 96; break;
                    case 'T': state = 110; break;
                    case 'L': state = 99; break;
                    case '1': state = 79; break;
                    case 'v': state = 90; break;
                    case 'A': state = 102; break;
                    case 'p': state = 95; break;
                    case 'G': state = 103; break;
                    case 't': state = 78; break;
                    case 'E': state = 98; break;
                    case 'o': state = 109; break;
                    case 'Y': state = 115; break;
                    case '0': state = 69; break;
                    case 'b': state = 61; break;
                    case 'I': state = 63; break;
                    case 'P': state = 59; break;
                    case 'X': state = 64; break;
                    case '2': state = 67; break;
                    case 'r': state = 93; break;
                    case 'M': state = 113; break;
                    case 'Z': state = 89; break;
                    case 'j': state = 26; break;
                    case 'l': state = 97; break;
                    case 'g': state = 73; break;
                    case 'J': state = 60; break;
                    case '9': state = 107; break;
                    case 'c': state = 108; break;
                    case 'D': state = 27; break;
                    case 'm': state = 92; break;
                    case 'e': state = 106; break;
                    case 'V': state = 25; break;
                    case 'B': state = 62; break;
                    case 'x': state = 88; break;
                    case '4': state = 77; break;
                    case 'H': state = 85; break;
                    case '8': state = 65; break;
                    case 'k': state = 83; break;
                    case 'q': state = 91; break;
                    case 'R': state = 29; break;
                    case 'U': state = 71; break;
                    case 'Q': state = 100; break;
                    case 'z': state = 94; break;
                    case 'N': state = 104; break;
                    case 'n': state = 86; break;
                    case 'O': state = 81; break;
                    case 'w': state = 68; break;
                    case 'W': state = 74; break;
                    case 'd': state = 70; break;
                    case 'F': state = 82; break;
                    case '5': state = 114; break;
                    default: return std::find(finalNodes.begin(), finalNodes.end(), state) != finalNodes.end();
                }
                break;
            case 42: 
                switch(letter) {
                    case 'H': state = 85; break;
                    case 'a': state = 75; break;
                    case 'C': state = 80; break;
                    case '_': state = 72; break;
                    case 'W': state = 74; break;
                    case 'K': state = 101; break;
                    case 'E': state = 98; break;
                    case 'f': state = 76; break;
                    case 's': state = 28; break;
                    case '6': state = 66; break;
                    case 'F': state = 82; break;
                    case 'G': state = 103; break;
                    case 'y': state = 84; break;
                    case 'u': state = 105; break;
                    case 'U': state = 71; break;
                    case '3': state = 96; break;
                    case 'T': state = 110; break;
                    case 'J': state = 60; break;
                    case '2': state = 67; break;
                    case 't': state = 78; break;
                    case '0': state = 69; break;
                    case '7': state = 111; break;
                    case 'p': state = 95; break;
                    case 'X': state = 64; break;
                    case 'x': state = 88; break;
                    case 'S': state = 45; break;
                    case 'g': state = 73; break;
                    case 'j': state = 26; break;
                    case 'A': state = 102; break;
                    case 'v': state = 90; break;
                    case 'Z': state = 89; break;
                    case 'M': state = 113; break;
                    case 'I': state = 63; break;
                    case 'l': state = 97; break;
                    case 'e': state = 106; break;
                    case 'c': state = 108; break;
                    case '4': state = 77; break;
                    case 'D': state = 27; break;
                    case 'r': state = 93; break;
                    case 'P': state = 59; break;
                    case 'o': state = 109; break;
                    case 'm': state = 92; break;
                    case '1': state = 79; break;
                    case 'B': state = 62; break;
                    case 'b': state = 61; break;
                    case 'V': state = 25; break;
                    case 'i': state = 112; break;
                    case 'q': state = 91; break;
                    case 'R': state = 29; break;
                    case '8': state = 65; break;
                    case 'Y': state = 115; break;
                    case '9': state = 107; break;
                    case 'Q': state = 100; break;
                    case 'h': state = 24; break;
                    case 'w': state = 68; break;
                    case 'z': state = 94; break;
                    case 'n': state = 86; break;
                    case '5': state = 114; break;
                    case 'k': state = 83; break;
                    case 'L': state = 99; break;
                    case 'd': state = 70; break;
                    case 'N': state = 104; break;
                    case 'O': state = 81; break;
                    default: return std::find(finalNodes.begin(), finalNodes.end(), state) != finalNodes.end();
                }
                break;
            case 43: 
                switch(letter) {
                    case 'H': state = 85; break;
                    case 'a': state = 75; break;
                    case 'C': state = 80; break;
                    case '_': state = 72; break;
                    case 'K': state = 101; break;
                    case 's': state = 28; break;
                    case '6': state = 66; break;
                    case 'F': state = 82; break;
                    case 'V': state = 25; break;
                    case 'T': state = 110; break;
                    case 'U': state = 71; break;
                    case 'I': state = 63; break;
                    case 'h': state = 24; break;
                    case 'G': state = 103; break;
                    case 'u': state = 105; break;
                    case '3': state = 96; break;
                    case 'Y': state = 115; break;
                    case 'X': state = 64; break;
                    case 'x': state = 88; break;
                    case '7': state = 111; break;
                    case '2': state = 67; break;
                    case 't': state = 78; break;
                    case '0': state = 69; break;
                    case 'g': state = 73; break;
                    case 'p': state = 95; break;
                    case 'M': state = 113; break;
                    case 'A': state = 102; break;
                    case 'e': state = 106; break;
                    case 'r': state = 93; break;
                    case 'c': state = 108; break;
                    case '1': state = 79; break;
                    case 'm': state = 92; break;
                    case 'D': state = 27; break;
                    case 'l': state = 97; break;
                    case 'v': state = 90; break;
                    case 'E': state = 98; break;
                    case '4': state = 77; break;
                    case 'S': state = 45; break;
                    case 'L': state = 99; break;
                    case 'y': state = 84; break;
                    case 'P': state = 59; break;
                    case 'B': state = 62; break;
                    case 'o': state = 109; break;
                    case 'j': state = 26; break;
                    case 'b': state = 61; break;
                    case 'q': state = 91; break;
                    case 'R': state = 29; break;
                    case '8': state = 65; break;
                    case 'Z': state = 89; break;
                    case '9': state = 107; break;
                    case 'N': state = 104; break;
                    case 'Q': state = 100; break;
                    case 'i': state = 112; break;
                    case 'J': state = 60; break;
                    case 'n': state = 86; break;
                    case 'W': state = 74; break;
                    case 'w': state = 68; break;
                    case 'd': state = 70; break;
                    case '5': state = 114; break;
                    case 'k': state = 83; break;
                    case 'z': state = 94; break;
                    case 'f': state = 76; break;
                    case 'O': state = 81; break;
                    default: return std::find(finalNodes.begin(), finalNodes.end(), state) != finalNodes.end();
                }
                break;
            case 44: 
                switch(letter) {
                    case 'H': state = 85; break;
                    case 't': state = 78; break;
                    case 'i': state = 112; break;
                    case 'f': state = 76; break;
                    case 'N': state = 104; break;
                    case 'h': state = 24; break;
                    case 's': state = 28; break;
                    case 'J': state = 60; break;
                    case 'Q': state = 100; break;
                    case '7': state = 111; break;
                    case 'k': state = 83; break;
                    case 'u': state = 105; break;
                    case 'U': state = 71; break;
                    case '_': state = 72; break;
                    case 'T': state = 110; break;
                    case 'Z': state = 89; break;
                    case 'v': state = 90; break;
                    case 'g': state = 73; break;
                    case 'S': state = 45; break;
                    case '0': state = 69; break;
                    case '3': state = 96; break;
                    case 'e': state = 106; break;
                    case 'X': state = 64; break;
                    case 'M': state = 113; break;
                    case 'r': state = 93; break;
                    case 'K': state = 101; break;
                    case 'y': state = 84; break;
                    case 'G': state = 103; break;
                    case 'D': state = 27; break;
                    case 'm': state = 92; break;
                    case 'V': state = 25; break;
                    case 'A': state = 102; break;
                    case 'b': state = 61; break;
                    case 'L': state = 99; break;
                    case 'p': state = 95; break;
                    case 'x': state = 88; break;
                    case 'I': state = 63; break;
                    case 'c': state = 108; break;
                    case '2': state = 67; break;
                    case '4': state = 77; break;
                    case 'j': state = 26; break;
                    case '5': state = 114; break;
                    case 'o': state = 109; break;
                    case 'F': state = 82; break;
                    case 'B': state = 62; break;
                    case 'P': state = 59; break;
                    case '1': state = 79; break;
                    case 'R': state = 29; break;
                    case 'z': state = 94; break;
                    case 'a': state = 75; break;
                    case 'W': state = 74; break;
                    case '9': state = 107; break;
                    case 'd': state = 70; break;
                    case 'O': state = 81; break;
                    case 'w': state = 68; break;
                    case 'Y': state = 115; break;
                    case 'n': state = 86; break;
                    case '8': state = 65; break;
                    case 'l': state = 97; break;
                    case 'q': state = 91; break;
                    case 'E': state = 98; break;
                    case 'C': state = 80; break;
                    case '6': state = 66; break;
                    default: return std::find(finalNodes.begin(), finalNodes.end(), state) != finalNodes.end();
                }
                break;
            case 45: 
                switch(letter) {
                    case 'h': state = 24; break;
                    case 'N': state = 104; break;
                    case 't': state = 78; break;
                    case 'e': state = 106; break;
                    case 'v': state = 90; break;
                    case 'J': state = 60; break;
                    case '1': state = 79; break;
                    case 'U': state = 71; break;
                    case '7': state = 111; break;
                    case 'H': state = 85; break;
                    case 'u': state = 105; break;
                    case 'L': state = 99; break;
                    case 'k': state = 83; break;
                    case 'l': state = 97; break;
                    case 'z': state = 94; break;
                    case 'G': state = 103; break;
                    case '3': state = 96; break;
                    case 'X': state = 64; break;
                    case 'n': state = 86; break;
                    case 'i': state = 112; break;
                    case '4': state = 77; break;
                    case 'o': state = 109; break;
                    case 'R': state = 29; break;
                    case 'm': state = 92; break;
                    case 'D': state = 27; break;
                    case 'Q': state = 100; break;
                    case 'S': state = 45; break;
                    case 'M': state = 113; break;
                    case 'V': state = 25; break;
                    case 'Z': state = 89; break;
                    case 'T': state = 110; break;
                    case 'y': state = 84; break;
                    case '_': state = 72; break;
                    case 'x': state = 88; break;
                    case 'B': state = 62; break;
                    case 'f': state = 76; break;
                    case 'r': state = 93; break;
                    case '0': state = 69; break;
                    case 's': state = 28; break;
                    case 'b': state = 61; break;
                    case 'P': state = 59; break;
                    case 'K': state = 101; break;
                    case 'c': state = 108; break;
                    case '6': state = 66; break;
                    case 'a': state = 75; break;
                    case 'j': state = 26; break;
                    case '2': state = 67; break;
                    case 'A': state = 102; break;
                    case '9': state = 107; break;
                    case 'I': state = 63; break;
                    case 'g': state = 73; break;
                    case 'q': state = 91; break;
                    case 'Y': state = 115; break;
                    case 'p': state = 95; break;
                    case 'd': state = 70; break;
                    case '8': state = 65; break;
                    case 'C': state = 80; break;
                    case '5': state = 114; break;
                    case 'W': state = 74; break;
                    case 'F': state = 82; break;
                    case 'E': state = 98; break;
                    case 'w': state = 68; break;
                    case 'O': state = 81; break;
                    default: return std::find(finalNodes.begin(), finalNodes.end(), state) != finalNodes.end();
                }
                break;
            case 46: 
                switch(letter) {
                    case 'H': state = 85; break;
                    case 'y': state = 84; break;
                    case 't': state = 78; break;
                    case '6': state = 66; break;
                    case 'i': state = 112; break;
                    case 's': state = 28; break;
                    case 'C': state = 80; break;
                    case 'h': state = 24; break;
                    case 'J': state = 60; break;
                    case 'S': state = 45; break;
                    case '7': state = 111; break;
                    case 'T': state = 110; break;
                    case 'f': state = 76; break;
                    case '4': state = 77; break;
                    case 'u': state = 105; break;
                    case 'Q': state = 100; break;
                    case 'v': state = 90; break;
                    case '0': state = 69; break;
                    case 'r': state = 93; break;
                    case '3': state = 96; break;
                    case '2': state = 67; break;
                    case 'p': state = 95; break;
                    case 'g': state = 73; break;
                    case '_': state = 72; break;
                    case 'I': state = 63; break;
                    case 'X': state = 64; break;
                    case 'e': state = 106; break;
                    case 'M': state = 113; break;
                    case 'P': state = 59; break;
                    case '1': state = 79; break;
                    case 'x': state = 88; break;
                    case 'm': state = 92; break;
                    case 'G': state = 103; break;
                    case 'R': state = 29; break;
                    case 'Z': state = 89; break;
                    case 'd': state = 70; break;
                    case 'A': state = 102; break;
                    case 'D': state = 27; break;
                    case 'o': state = 109; break;
                    case 'b': state = 61; break;
                    case 'j': state = 26; break;
                    case 'B': state = 62; break;
                    case 'V': state = 25; break;
                    case 'c': state = 108; break;
                    case 'U': state = 71; break;
                    case 'W': state = 74; break;
                    case 'L': state = 99; break;
                    case 'z': state = 94; break;
                    case '9': state = 107; break;
                    case 'k': state = 83; break;
                    case 'a': state = 75; break;
                    case 'Y': state = 115; break;
                    case '8': state = 65; break;
                    case 'E': state = 98; break;
                    case '5': state = 114; break;
                    case 'n': state = 86; break;
                    case 'K': state = 101; break;
                    case 'l': state = 97; break;
                    case 'q': state = 91; break;
                    case 'N': state = 104; break;
                    case 'F': state = 82; break;
                    case 'O': state = 81; break;
                    case 'w': state = 68; break;
                    default: return std::find(finalNodes.begin(), finalNodes.end(), state) != finalNodes.end();
                }
                break;
            case 47: 
                switch(letter) {
                    case 'H': state = 85; break;
                    case 'y': state = 84; break;
                    case 'f': state = 76; break;
                    case '6': state = 66; break;
                    case 'i': state = 112; break;
                    case 'N': state = 104; break;
                    case 's': state = 28; break;
                    case 'C': state = 80; break;
                    case '7': state = 111; break;
                    case 'S': state = 45; break;
                    case 'V': state = 25; break;
                    case 'T': state = 110; break;
                    case 'U': state = 71; break;
                    case 'k': state = 83; break;
                    case 'K': state = 101; break;
                    case 'M': state = 113; break;
                    case 'P': state = 59; break;
                    case 'X': state = 64; break;
                    case 'e': state = 106; break;
                    case 'u': state = 105; break;
                    case '_': state = 72; break;
                    case 'm': state = 92; break;
                    case 'Z': state = 89; break;
                    case 'g': state = 73; break;
                    case 'v': state = 90; break;
                    case '3': state = 96; break;
                    case 'R': state = 29; break;
                    case '4': state = 77; break;
                    case 'A': state = 102; break;
                    case 'B': state = 62; break;
                    case 'o': state = 109; break;
                    case '2': state = 67; break;
                    case 'I': state = 63; break;
                    case 'G': state = 103; break;
                    case 'r': state = 93; break;
                    case 'D': state = 27; break;
                    case 'c': state = 108; break;
                    case 'E': state = 98; break;
                    case 'z': state = 94; break;
                    case 'L': state = 99; break;
                    case 'p': state = 95; break;
                    case '0': state = 69; break;
                    case 'b': state = 61; break;
                    case 'x': state = 88; break;
                    case 'j': state = 26; break;
                    case '1': state = 79; break;
                    case 'J': state = 60; break;
                    case 'Q': state = 100; break;
                    case 'h': state = 24; break;
                    case 'F': state = 82; break;
                    case 'a': state = 75; break;
                    case 'Y': state = 115; break;
                    case '9': state = 107; break;
                    case 't': state = 78; break;
                    case 'W': state = 74; break;
                    case 'n': state = 86; break;
                    case '5': state = 114; break;
                    case 'l': state = 97; break;
                    case 'q': state = 91; break;
                    case '8': state = 65; break;
                    case 'd': state = 70; break;
                    case 'O': state = 81; break;
                    case 'w': state = 68; break;
                    default: return std::find(finalNodes.begin(), finalNodes.end(), state) != finalNodes.end();
                }
                break;
            case 48: 
                switch(letter) {
                    case 'H': state = 85; break;
                    case 'R': state = 29; break;
                    case 't': state = 78; break;
                    case '_': state = 72; break;
                    case 'f': state = 76; break;
                    case '6': state = 66; break;
                    case 'C': state = 80; break;
                    case 'i': state = 112; break;
                    case 'h': state = 24; break;
                    case '3': state = 96; break;
                    case '8': state = 65; break;
                    case 'J': state = 60; break;
                    case 'q': state = 91; break;
                    case 'm': state = 92; break;
                    case 'W': state = 74; break;
                    case 'c': state = 108; break;
                    case 'T': state = 110; break;
                    case 'K': state = 101; break;
                    case 'M': state = 113; break;
                    case 'F': state = 82; break;
                    case 'v': state = 90; break;
                    case '7': state = 111; break;
                    case 'y': state = 84; break;
                    case 'e': state = 106; break;
                    case 'S': state = 45; break;
                    case 'N': state = 104; break;
                    case '9': state = 107; break;
                    case 'g': state = 73; break;
                    case 'r': state = 93; break;
                    case 'u': state = 105; break;
                    case 'j': state = 26; break;
                    case 'G': state = 103; break;
                    case '2': state = 67; break;
                    case 'o': state = 109; break;
                    case 'p': state = 95; break;
                    case 'Z': state = 89; break;
                    case 'X': state = 64; break;
                    case 'd': state = 70; break;
                    case '4': state = 77; break;
                    case 'P': state = 59; break;
                    case 'V': state = 25; break;
                    case 'A': state = 102; break;
                    case 'I': state = 63; break;
                    case '0': state = 69; break;
                    case 'L': state = 99; break;
                    case 'x': state = 88; break;
                    case '1': state = 79; break;
                    case 'D': state = 27; break;
                    case 'Y': state = 115; break;
                    case 'U': state = 71; break;
                    case 'z': state = 94; break;
                    case 'k': state = 83; break;
                    case '5': state = 114; break;
                    case 'a': state = 75; break;
                    case 'Q': state = 100; break;
                    case 'l': state = 97; break;
                    case 'E': state = 98; break;
                    case 's': state = 28; break;
                    case 'n': state = 86; break;
                    case 'B': state = 62; break;
                    case 'b': state = 61; break;
                    case 'O': state = 81; break;
                    case 'w': state = 68; break;
                    default: return std::find(finalNodes.begin(), finalNodes.end(), state) != finalNodes.end();
                }
                break;
            case 49: 
                switch(letter) {
                    case 'H': state = 85; break;
                    case 'R': state = 29; break;
                    case 't': state = 78; break;
                    case '6': state = 66; break;
                    case 'C': state = 80; break;
                    case '_': state = 72; break;
                    case 'f': state = 76; break;
                    case 'i': state = 112; break;
                    case 'J': state = 60; break;
                    case 'm': state = 92; break;
                    case 'W': state = 74; break;
                    case '8': state = 65; break;
                    case 'K': state = 101; break;
                    case 'Q': state = 100; break;
                    case 'c': state = 108; break;
                    case 'T': state = 110; break;
                    case 'y': state = 84; break;
                    case 'M': state = 113; break;
                    case 'e': state = 106; break;
                    case 'F': state = 82; break;
                    case 'Z': state = 89; break;
                    case 'G': state = 103; break;
                    case '4': state = 77; break;
                    case 'u': state = 105; break;
                    case 'j': state = 26; break;
                    case 'D': state = 27; break;
                    case 'P': state = 59; break;
                    case 'r': state = 93; break;
                    case '3': state = 96; break;
                    case '7': state = 111; break;
                    case 'X': state = 64; break;
                    case 'w': state = 68; break;
                    case 'A': state = 102; break;
                    case '0': state = 69; break;
                    case 'p': state = 95; break;
                    case 'g': state = 73; break;
                    case '2': state = 67; break;
                    case 'L': state = 99; break;
                    case 'b': state = 61; break;
                    case 'V': state = 25; break;
                    case 'v': state = 90; break;
                    case 'o': state = 109; break;
                    case 'I': state = 63; break;
                    case '1': state = 79; break;
                    case 'S': state = 45; break;
                    case '9': state = 107; break;
                    case 'U': state = 71; break;
                    case 'x': state = 88; break;
                    case 'k': state = 83; break;
                    case 'd': state = 70; break;
                    case 'B': state = 62; break;
                    case 'E': state = 98; break;
                    case 'n': state = 86; break;
                    case 'Y': state = 115; break;
                    case 'N': state = 104; break;
                    case 'a': state = 75; break;
                    case 'z': state = 94; break;
                    case '5': state = 114; break;
                    case 'l': state = 97; break;
                    case 'O': state = 81; break;
                    case 's': state = 28; break;
                    case 'q': state = 91; break;
                    case 'h': state = 24; break;
                    default: return std::find(finalNodes.begin(), finalNodes.end(), state) != finalNodes.end();
                }
                break;
            case 50: 
                switch(letter) {
                    case 'H': state = 85; break;
                    case 'R': state = 29; break;
                    case '_': state = 72; break;
                    case 'f': state = 76; break;
                    case '6': state = 66; break;
                    case 'i': state = 112; break;
                    case 't': state = 78; break;
                    case 'C': state = 80; break;
                    case 'h': state = 24; break;
                    case '3': state = 96; break;
                    case 'W': state = 74; break;
                    case 'm': state = 92; break;
                    case 'Q': state = 100; break;
                    case 'T': state = 110; break;
                    case 'o': state = 109; break;
                    case 'V': state = 25; break;
                    case 'r': state = 93; break;
                    case 'y': state = 84; break;
                    case 'M': state = 113; break;
                    case 'v': state = 90; break;
                    case 'F': state = 82; break;
                    case 'e': state = 106; break;
                    case '1': state = 79; break;
                    case 'G': state = 103; break;
                    case 'E': state = 98; break;
                    case 'D': state = 27; break;
                    case 'Y': state = 115; break;
                    case '9': state = 107; break;
                    case 'K': state = 101; break;
                    case 'l': state = 97; break;
                    case '2': state = 67; break;
                    case 'N': state = 104; break;
                    case 'Z': state = 89; break;
                    case 'j': state = 26; break;
                    case 'U': state = 71; break;
                    case 'g': state = 73; break;
                    case 'S': state = 45; break;
                    case 'P': state = 59; break;
                    case '0': state = 69; break;
                    case 'A': state = 102; break;
                    case 'I': state = 63; break;
                    case '7': state = 111; break;
                    case 'X': state = 64; break;
                    case 'c': state = 108; break;
                    case 's': state = 28; break;
                    case 'p': state = 95; break;
                    case '5': state = 114; break;
                    case 'b': state = 61; break;
                    case '4': state = 77; break;
                    case 'a': state = 75; break;
                    case 'u': state = 105; break;
                    case 'x': state = 88; break;
                    case 'd': state = 70; break;
                    case '8': state = 65; break;
                    case 'L': state = 99; break;
                    case 'k': state = 83; break;
                    case 'J': state = 60; break;
                    case 'O': state = 81; break;
                    case 'n': state = 86; break;
                    case 'B': state = 62; break;
                    case 'z': state = 94; break;
                    case 'w': state = 68; break;
                    case 'q': state = 91; break;
                    default: return std::find(finalNodes.begin(), finalNodes.end(), state) != finalNodes.end();
                }
                break;
            case 51: 
                switch(letter) {
                    case 'H': state = 85; break;
                    case 'R': state = 29; break;
                    case '6': state = 66; break;
                    case 'i': state = 112; break;
                    case 'f': state = 76; break;
                    case 'h': state = 24; break;
                    case 't': state = 78; break;
                    case 'C': state = 80; break;
                    case 'J': state = 60; break;
                    case 'O': state = 81; break;
                    case 'T': state = 110; break;
                    case 'o': state = 109; break;
                    case 'a': state = 75; break;
                    case 'F': state = 82; break;
                    case 'm': state = 92; break;
                    case 'K': state = 101; break;
                    case 'p': state = 95; break;
                    case 'S': state = 45; break;
                    case 'r': state = 93; break;
                    case 'M': state = 113; break;
                    case '4': state = 77; break;
                    case '1': state = 79; break;
                    case 'E': state = 98; break;
                    case '9': state = 107; break;
                    case 'G': state = 103; break;
                    case 'N': state = 104; break;
                    case '3': state = 96; break;
                    case 'j': state = 26; break;
                    case 'e': state = 106; break;
                    case 'u': state = 105; break;
                    case 'Z': state = 89; break;
                    case 'g': state = 73; break;
                    case '2': state = 67; break;
                    case 'Q': state = 100; break;
                    case 'v': state = 90; break;
                    case '0': state = 69; break;
                    case 'A': state = 102; break;
                    case 'V': state = 25; break;
                    case 'I': state = 63; break;
                    case 'P': state = 59; break;
                    case 's': state = 28; break;
                    case 'c': state = 108; break;
                    case 'D': state = 27; break;
                    case 'y': state = 84; break;
                    case '7': state = 111; break;
                    case 'X': state = 64; break;
                    case 'L': state = 99; break;
                    case 'b': state = 61; break;
                    case '_': state = 72; break;
                    case '5': state = 114; break;
                    case 'B': state = 62; break;
                    case 'U': state = 71; break;
                    case 'x': state = 88; break;
                    case 'k': state = 83; break;
                    case '8': state = 65; break;
                    case 'z': state = 94; break;
                    case 'd': state = 70; break;
                    case 'Y': state = 115; break;
                    case 'l': state = 97; break;
                    case 'n': state = 86; break;
                    case 'W': state = 74; break;
                    case 'q': state = 91; break;
                    case 'w': state = 68; break;
                    default: return std::find(finalNodes.begin(), finalNodes.end(), state) != finalNodes.end();
                }
                break;
            case 52: 
                switch(letter) {
                    case 'f': state = 76; break;
                    case 't': state = 78; break;
                    case 'C': state = 80; break;
                    case 'K': state = 101; break;
                    case 'N': state = 104; break;
                    case 'G': state = 103; break;
                    case 'S': state = 45; break;
                    case '6': state = 66; break;
                    case '8': state = 65; break;
                    case 'j': state = 26; break;
                    case '0': state = 69; break;
                    case 'o': state = 109; break;
                    case '3': state = 96; break;
                    case 'b': state = 61; break;
                    case 'c': state = 108; break;
                    case 'A': state = 102; break;
                    case 's': state = 28; break;
                    case 'I': state = 63; break;
                    case 'Z': state = 89; break;
                    case 'v': state = 90; break;
                    case '5': state = 114; break;
                    case '7': state = 111; break;
                    case 'M': state = 113; break;
                    case 'i': state = 112; break;
                    case 'k': state = 83; break;
                    case '2': state = 67; break;
                    case 'l': state = 97; break;
                    case 'r': state = 93; break;
                    case 'P': state = 59; break;
                    case 'h': state = 24; break;
                    case 'F': state = 82; break;
                    case 'V': state = 25; break;
                    case '_': state = 72; break;
                    case 'u': state = 105; break;
                    case 'm': state = 92; break;
                    case 'U': state = 71; break;
                    case 'w': state = 68; break;
                    case 'y': state = 84; break;
                    case 'q': state = 91; break;
                    case 'p': state = 95; break;
                    case 'L': state = 99; break;
                    case 'e': state = 106; break;
                    case 'g': state = 73; break;
                    case 'T': state = 110; break;
                    case 'X': state = 64; break;
                    case 'H': state = 85; break;
                    case 'R': state = 29; break;
                    case 'D': state = 27; break;
                    case 'd': state = 70; break;
                    case 'E': state = 98; break;
                    case 'Y': state = 115; break;
                    case 'x': state = 88; break;
                    case 'z': state = 94; break;
                    case 'B': state = 62; break;
                    case 'O': state = 81; break;
                    case 'W': state = 74; break;
                    case 'Q': state = 100; break;
                    case '1': state = 79; break;
                    case '4': state = 77; break;
                    case 'a': state = 75; break;
                    case 'J': state = 60; break;
                    case 'n': state = 86; break;
                    case '9': state = 107; break;
                    default: return std::find(finalNodes.begin(), finalNodes.end(), state) != finalNodes.end();
                }
                break;
            case 53: 
                switch(letter) {
                    case 'N': state = 104; break;
                    case 'C': state = 80; break;
                    case 't': state = 78; break;
                    case '9': state = 107; break;
                    case 'j': state = 26; break;
                    case 'S': state = 45; break;
                    case '6': state = 66; break;
                    case 'K': state = 101; break;
                    case 'e': state = 106; break;
                    case '3': state = 96; break;
                    case 'R': state = 29; break;
                    case '1': state = 79; break;
                    case 'f': state = 76; break;
                    case '8': state = 65; break;
                    case 'X': state = 64; break;
                    case '0': state = 69; break;
                    case 'c': state = 108; break;
                    case '7': state = 111; break;
                    case 'Y': state = 115; break;
                    case 'Q': state = 100; break;
                    case 'F': state = 82; break;
                    case 'v': state = 90; break;
                    case 'T': state = 110; break;
                    case 'i': state = 112; break;
                    case 's': state = 28; break;
                    case 'G': state = 103; break;
                    case 'o': state = 109; break;
                    case 'Z': state = 89; break;
                    case 'I': state = 63; break;
                    case '2': state = 67; break;
                    case 'E': state = 98; break;
                    case 'l': state = 97; break;
                    case 'A': state = 102; break;
                    case 'u': state = 105; break;
                    case 'm': state = 92; break;
                    case 'x': state = 88; break;
                    case '_': state = 72; break;
                    case 'V': state = 25; break;
                    case 'r': state = 93; break;
                    case 'U': state = 71; break;
                    case 'y': state = 84; break;
                    case 'q': state = 91; break;
                    case 'p': state = 95; break;
                    case 'g': state = 73; break;
                    case 'P': state = 59; break;
                    case 'M': state = 113; break;
                    case 'w': state = 68; break;
                    case 'k': state = 83; break;
                    case 'H': state = 85; break;
                    case 'h': state = 24; break;
                    case 'n': state = 86; break;
                    case 'O': state = 81; break;
                    case 'b': state = 61; break;
                    case 'W': state = 74; break;
                    case '5': state = 114; break;
                    case 'D': state = 27; break;
                    case 'z': state = 94; break;
                    case 'd': state = 70; break;
                    case 'B': state = 62; break;
                    case 'a': state = 75; break;
                    case '4': state = 77; break;
                    case 'J': state = 60; break;
                    case 'L': state = 99; break;
                    default: return std::find(finalNodes.begin(), finalNodes.end(), state) != finalNodes.end();
                }
                break;
            case 54: 
                switch(letter) {
                    case 'C': state = 80; break;
                    case '9': state = 107; break;
                    case 'o': state = 109; break;
                    case 'S': state = 45; break;
                    case '6': state = 66; break;
                    case 'e': state = 106; break;
                    case '3': state = 96; break;
                    case 'j': state = 26; break;
                    case '0': state = 69; break;
                    case 'G': state = 103; break;
                    case 'c': state = 108; break;
                    case 'Z': state = 89; break;
                    case 'v': state = 90; break;
                    case '7': state = 111; break;
                    case 'M': state = 113; break;
                    case 'A': state = 102; break;
                    case 'K': state = 101; break;
                    case 'I': state = 63; break;
                    case 'w': state = 68; break;
                    case 's': state = 28; break;
                    case 'F': state = 82; break;
                    case 'r': state = 93; break;
                    case 'h': state = 24; break;
                    case 'U': state = 71; break;
                    case 'E': state = 98; break;
                    case 'k': state = 83; break;
                    case 'Q': state = 100; break;
                    case '2': state = 67; break;
                    case 'V': state = 25; break;
                    case 'i': state = 112; break;
                    case 'f': state = 76; break;
                    case 'y': state = 84; break;
                    case 'm': state = 92; break;
                    case '_': state = 72; break;
                    case 'P': state = 59; break;
                    case 'u': state = 105; break;
                    case '1': state = 79; break;
                    case 'q': state = 91; break;
                    case 'p': state = 95; break;
                    case 'g': state = 73; break;
                    case 'l': state = 97; break;
                    case 'X': state = 64; break;
                    case 'Y': state = 115; break;
                    case 'H': state = 85; break;
                    case 'B': state = 62; break;
                    case '8': state = 65; break;
                    case 'a': state = 75; break;
                    case 'W': state = 74; break;
                    case 'z': state = 94; break;
                    case 'T': state = 110; break;
                    case 't': state = 78; break;
                    case 'n': state = 86; break;
                    case 'N': state = 104; break;
                    case 'x': state = 88; break;
                    case 'J': state = 60; break;
                    case 'd': state = 70; break;
                    case '4': state = 77; break;
                    case 'D': state = 27; break;
                    case 'b': state = 61; break;
                    case 'R': state = 29; break;
                    case '5': state = 114; break;
                    case 'O': state = 81; break;
                    case 'L': state = 99; break;
                    default: return std::find(finalNodes.begin(), finalNodes.end(), state) != finalNodes.end();
                }
                break;
            case 55: 
                switch(letter) {
                    case 'C': state = 80; break;
                    case '9': state = 107; break;
                    case 't': state = 78; break;
                    case 'o': state = 109; break;
                    case 'S': state = 45; break;
                    case '3': state = 96; break;
                    case 'G': state = 103; break;
                    case 'j': state = 26; break;
                    case 'f': state = 76; break;
                    case '8': state = 65; break;
                    case 'm': state = 92; break;
                    case '6': state = 66; break;
                    case '0': state = 69; break;
                    case 'H': state = 85; break;
                    case 'c': state = 108; break;
                    case 'Q': state = 100; break;
                    case 'D': state = 27; break;
                    case 'i': state = 112; break;
                    case 'I': state = 63; break;
                    case 'Z': state = 89; break;
                    case 'y': state = 84; break;
                    case 'k': state = 83; break;
                    case 'B': state = 62; break;
                    case 'v': state = 90; break;
                    case 'h': state = 24; break;
                    case 'F': state = 82; break;
                    case 'l': state = 97; break;
                    case 'E': state = 98; break;
                    case '7': state = 111; break;
                    case 'P': state = 59; break;
                    case 'M': state = 113; break;
                    case 'r': state = 93; break;
                    case '2': state = 67; break;
                    case 'A': state = 102; break;
                    case 'N': state = 104; break;
                    case 'n': state = 86; break;
                    case 'V': state = 25; break;
                    case '5': state = 114; break;
                    case 'u': state = 105; break;
                    case 'e': state = 106; break;
                    case '_': state = 72; break;
                    case 'g': state = 73; break;
                    case 'U': state = 71; break;
                    case 'q': state = 91; break;
                    case 'b': state = 61; break;
                    case 'p': state = 95; break;
                    case 'X': state = 64; break;
                    case 'T': state = 110; break;
                    case 'a': state = 75; break;
                    case 'Y': state = 115; break;
                    case 'L': state = 99; break;
                    case 'x': state = 88; break;
                    case 's': state = 28; break;
                    case 'z': state = 94; break;
                    case 'w': state = 68; break;
                    case 'K': state = 101; break;
                    case 'O': state = 81; break;
                    case 'R': state = 29; break;
                    case '1': state = 79; break;
                    case 'd': state = 70; break;
                    case 'W': state = 74; break;
                    case 'J': state = 60; break;
                    case '4': state = 77; break;
                    default: return std::find(finalNodes.begin(), finalNodes.end(), state) != finalNodes.end();
                }
                break;
            case 56: 
                switch(letter) {
                    case 'X': state = 64; break;
                    case 'f': state = 76; break;
                    case 'J': state = 60; break;
                    case '9': state = 107; break;
                    case 'C': state = 80; break;
                    case 't': state = 78; break;
                    case '3': state = 96; break;
                    case 'i': state = 112; break;
                    case 'H': state = 85; break;
                    case 'Q': state = 100; break;
                    case '6': state = 66; break;
                    case 'D': state = 27; break;
                    case '8': state = 65; break;
                    case 'R': state = 29; break;
                    case 'F': state = 82; break;
                    case 'G': state = 103; break;
                    case 'j': state = 26; break;
                    case 'z': state = 94; break;
                    case 'h': state = 24; break;
                    case 's': state = 28; break;
                    case 'Z': state = 89; break;
                    case 'n': state = 86; break;
                    case 'P': state = 59; break;
                    case 'U': state = 71; break;
                    case '_': state = 72; break;
                    case 'v': state = 90; break;
                    case 'g': state = 73; break;
                    case 'k': state = 83; break;
                    case '1': state = 79; break;
                    case 'r': state = 93; break;
                    case 'S': state = 45; break;
                    case 'o': state = 109; break;
                    case '2': state = 67; break;
                    case 'q': state = 91; break;
                    case 'A': state = 102; break;
                    case 'K': state = 101; break;
                    case 'e': state = 106; break;
                    case 'B': state = 62; break;
                    case 'p': state = 95; break;
                    case 'u': state = 105; break;
                    case 'M': state = 113; break;
                    case 'y': state = 84; break;
                    case '7': state = 111; break;
                    case 'I': state = 63; break;
                    case 'V': state = 25; break;
                    case 'L': state = 99; break;
                    case 'l': state = 97; break;
                    case '4': state = 77; break;
                    case 'm': state = 92; break;
                    case 'x': state = 88; break;
                    case 'T': state = 110; break;
                    case '0': state = 69; break;
                    case 'a': state = 75; break;
                    case 'O': state = 81; break;
                    case 'w': state = 68; break;
                    case 'E': state = 98; break;
                    case 'Y': state = 115; break;
                    case 'b': state = 61; break;
                    case 'd': state = 70; break;
                    case 'W': state = 74; break;
                    case '5': state = 114; break;
                    case 'c': state = 108; break;
                    case 'N': state = 104; break;
                    default: return std::find(finalNodes.begin(), finalNodes.end(), state) != finalNodes.end();
                }
                break;
            case 57: 
                switch(letter) {
                    case 'z': state = 94; break;
                    case 'f': state = 76; break;
                    case 'C': state = 80; break;
                    case 't': state = 78; break;
                    case '3': state = 96; break;
                    case 'v': state = 90; break;
                    case 'G': state = 103; break;
                    case 'i': state = 112; break;
                    case '6': state = 66; break;
                    case 'H': state = 85; break;
                    case 'Q': state = 100; break;
                    case '4': state = 77; break;
                    case '8': state = 65; break;
                    case 'R': state = 29; break;
                    case 'B': state = 62; break;
                    case 's': state = 28; break;
                    case '_': state = 72; break;
                    case 'h': state = 24; break;
                    case 'F': state = 82; break;
                    case 'A': state = 102; break;
                    case 'o': state = 109; break;
                    case '1': state = 79; break;
                    case 'g': state = 73; break;
                    case '2': state = 67; break;
                    case 'r': state = 93; break;
                    case 'M': state = 113; break;
                    case 'K': state = 101; break;
                    case 'U': state = 71; break;
                    case 'n': state = 86; break;
                    case 'p': state = 95; break;
                    case 'k': state = 83; break;
                    case 'V': state = 25; break;
                    case 'I': state = 63; break;
                    case 'j': state = 26; break;
                    case 'P': state = 59; break;
                    case 'u': state = 105; break;
                    case '7': state = 111; break;
                    case 'X': state = 64; break;
                    case 'S': state = 45; break;
                    case 'e': state = 106; break;
                    case 'l': state = 97; break;
                    case 'x': state = 88; break;
                    case 'y': state = 84; break;
                    case 'Z': state = 89; break;
                    case 'c': state = 108; break;
                    case 'd': state = 70; break;
                    case 'm': state = 92; break;
                    case 'E': state = 98; break;
                    case '9': state = 107; break;
                    case 'T': state = 110; break;
                    case '0': state = 69; break;
                    case 'b': state = 61; break;
                    case 'q': state = 91; break;
                    case 'L': state = 99; break;
                    case 'D': state = 27; break;
                    case 'a': state = 75; break;
                    case 'W': state = 74; break;
                    case 'w': state = 68; break;
                    case 'O': state = 81; break;
                    case 'Y': state = 115; break;
                    case 'N': state = 104; break;
                    case 'J': state = 60; break;
                    case '5': state = 114; break;
                    default: return std::find(finalNodes.begin(), finalNodes.end(), state) != finalNodes.end();
                }
                break;
            case 58: 
                switch(letter) {
                    case 'X': state = 64; break;
                    case 'f': state = 76; break;
                    case '9': state = 107; break;
                    case 'N': state = 104; break;
                    case '0': state = 69; break;
                    case 'c': state = 108; break;
                    case '7': state = 111; break;
                    case 'Q': state = 100; break;
                    case 'i': state = 112; break;
                    case '6': state = 66; break;
                    case 'D': state = 27; break;
                    case '1': state = 79; break;
                    case 'K': state = 101; break;
                    case 'S': state = 45; break;
                    case 'n': state = 86; break;
                    case 's': state = 28; break;
                    case 'G': state = 103; break;
                    case 'F': state = 82; break;
                    case 'P': state = 59; break;
                    case 'Z': state = 89; break;
                    case 'j': state = 26; break;
                    case 'z': state = 94; break;
                    case '2': state = 67; break;
                    case 'o': state = 109; break;
                    case 'k': state = 83; break;
                    case '_': state = 72; break;
                    case 'r': state = 93; break;
                    case '8': state = 65; break;
                    case 'T': state = 110; break;
                    case 'g': state = 73; break;
                    case 'M': state = 113; break;
                    case 'd': state = 70; break;
                    case 'R': state = 29; break;
                    case 'O': state = 81; break;
                    case 'A': state = 102; break;
                    case 'u': state = 105; break;
                    case 'l': state = 97; break;
                    case 'I': state = 63; break;
                    case 'p': state = 95; break;
                    case 'y': state = 84; break;
                    case 'v': state = 90; break;
                    case 'E': state = 98; break;
                    case 'L': state = 99; break;
                    case 'V': state = 25; break;
                    case 'e': state = 106; break;
                    case 'U': state = 71; break;
                    case 'b': state = 61; break;
                    case 'h': state = 24; break;
                    case 'H': state = 85; break;
                    case 'm': state = 92; break;
                    case '3': state = 96; break;
                    case 'a': state = 75; break;
                    case 'W': state = 74; break;
                    case 'B': state = 62; break;
                    case 'x': state = 88; break;
                    case 'Y': state = 115; break;
                    case '5': state = 114; break;
                    case 'C': state = 80; break;
                    case 'q': state = 91; break;
                    case '4': state = 77; break;
                    case 'w': state = 68; break;
                    case 't': state = 78; break;
                    case 'J': state = 60; break;
                    default: return std::find(finalNodes.begin(), finalNodes.end(), state) != finalNodes.end();
                }
                break;
            case 59: 
                switch(letter) {
                    case '3': state = 96; break;
                    case '0': state = 69; break;
                    case 'r': state = 93; break;
                    case '4': state = 77; break;
                    case 'W': state = 74; break;
                    case 'T': state = 110; break;
                    case 'A': state = 102; break;
                    case '2': state = 67; break;
                    case 'I': state = 63; break;
                    case 'G': state = 103; break;
                    case 'C': state = 80; break;
                    case 'P': state = 59; break;
                    case 'j': state = 26; break;
                    case 's': state = 28; break;
                    case '8': state = 65; break;
                    case 'e': state = 106; break;
                    case 'M': state = 113; break;
                    case 'S': state = 45; break;
                    case 'u': state = 105; break;
                    case '6': state = 66; break;
                    case '_': state = 72; break;
                    case 'i': state = 112; break;
                    case 'p': state = 95; break;
                    case 'E': state = 98; break;
                    case 'c': state = 108; break;
                    case 'l': state = 97; break;
                    case 'g': state = 73; break;
                    case 'F': state = 82; break;
                    case '1': state = 79; break;
                    case 'w': state = 68; break;
                    case 'f': state = 76; break;
                    case 'y': state = 84; break;
                    case 'L': state = 99; break;
                    case 'H': state = 85; break;
                    case 'V': state = 25; break;
                    case 'N': state = 104; break;
                    case 'z': state = 94; break;
                    case 'k': state = 83; break;
                    case 'o': state = 109; break;
                    case 'Q': state = 100; break;
                    case 'B': state = 62; break;
                    case 'v': state = 90; break;
                    case '7': state = 111; break;
                    case 'a': state = 75; break;
                    case 'x': state = 88; break;
                    case 'X': state = 64; break;
                    case 'D': state = 27; break;
                    case 'd': state = 70; break;
                    case 'K': state = 101; break;
                    case 'Z': state = 89; break;
                    case 'R': state = 29; break;
                    case 'b': state = 61; break;
                    case 'n': state = 86; break;
                    case 'q': state = 91; break;
                    case 'm': state = 92; break;
                    case 'U': state = 71; break;
                    case 'h': state = 24; break;
                    case 'O': state = 81; break;
                    case 'Y': state = 115; break;
                    case 'J': state = 60; break;
                    case '9': state = 107; break;
                    case 't': state = 78; break;
                    case '5': state = 114; break;
                    default: return std::find(finalNodes.begin(), finalNodes.end(), state) != finalNodes.end();
                }
                break;
            case 60: 
                switch(letter) {
                    case '6': state = 66; break;
                    case 'o': state = 109; break;
                    case 'D': state = 27; break;
                    case 'C': state = 80; break;
                    case 'N': state = 104; break;
                    case 'S': state = 45; break;
                    case 'A': state = 102; break;
                    case '7': state = 111; break;
                    case 'X': state = 64; break;
                    case 'e': state = 106; break;
                    case '3': state = 96; break;
                    case 'p': state = 95; break;
                    case 'G': state = 103; break;
                    case 'R': state = 29; break;
                    case 'Y': state = 115; break;
                    case 'i': state = 112; break;
                    case 'F': state = 82; break;
                    case 'Z': state = 89; break;
                    case '1': state = 79; break;
                    case 'W': state = 74; break;
                    case 'E': state = 98; break;
                    case 'P': state = 59; break;
                    case '2': state = 67; break;
                    case 'h': state = 24; break;
                    case 'k': state = 83; break;
                    case 'x': state = 88; break;
                    case 'B': state = 62; break;
                    case 'K': state = 101; break;
                    case '_': state = 72; break;
                    case 'I': state = 63; break;
                    case 'U': state = 71; break;
                    case 'c': state = 108; break;
                    case 'm': state = 92; break;
                    case 'v': state = 90; break;
                    case '4': state = 77; break;
                    case 's': state = 28; break;
                    case 'n': state = 86; break;
                    case 'z': state = 94; break;
                    case 'a': state = 75; break;
                    case 'Q': state = 100; break;
                    case 'V': state = 25; break;
                    case 'y': state = 84; break;
                    case 'H': state = 85; break;
                    case 'b': state = 61; break;
                    case 'M': state = 113; break;
                    case 'd': state = 70; break;
                    case 'j': state = 26; break;
                    case 'r': state = 93; break;
                    case 'J': state = 60; break;
                    case 'f': state = 76; break;
                    case 'O': state = 81; break;
                    case 'g': state = 73; break;
                    case '8': state = 65; break;
                    case '9': state = 107; break;
                    case 'T': state = 110; break;
                    case 'u': state = 105; break;
                    case 't': state = 78; break;
                    case 'l': state = 97; break;
                    case '0': state = 69; break;
                    case 'w': state = 68; break;
                    case 'q': state = 91; break;
                    case 'L': state = 99; break;
                    case '5': state = 114; break;
                    default: return std::find(finalNodes.begin(), finalNodes.end(), state) != finalNodes.end();
                }
                break;
            case 61: 
                switch(letter) {
                    case 'H': state = 85; break;
                    case 'X': state = 64; break;
                    case 'o': state = 109; break;
                    case '6': state = 66; break;
                    case 'W': state = 74; break;
                    case 'f': state = 76; break;
                    case 'c': state = 108; break;
                    case 's': state = 28; break;
                    case 'S': state = 45; break;
                    case '3': state = 96; break;
                    case 'R': state = 29; break;
                    case 'Q': state = 100; break;
                    case 'I': state = 63; break;
                    case 'F': state = 82; break;
                    case 'E': state = 98; break;
                    case 'r': state = 93; break;
                    case 'i': state = 112; break;
                    case 'M': state = 113; break;
                    case 'k': state = 83; break;
                    case 'y': state = 84; break;
                    case '1': state = 79; break;
                    case 'J': state = 60; break;
                    case 'Y': state = 115; break;
                    case 'u': state = 105; break;
                    case 'e': state = 106; break;
                    case 'C': state = 80; break;
                    case '7': state = 111; break;
                    case 'd': state = 70; break;
                    case 'V': state = 25; break;
                    case 'z': state = 94; break;
                    case 'm': state = 92; break;
                    case 'q': state = 91; break;
                    case 'Z': state = 89; break;
                    case 'O': state = 81; break;
                    case '9': state = 107; break;
                    case 'h': state = 24; break;
                    case 't': state = 78; break;
                    case 'U': state = 71; break;
                    case 'b': state = 61; break;
                    case 'j': state = 26; break;
                    case 'v': state = 90; break;
                    case 'n': state = 86; break;
                    case 'P': state = 59; break;
                    case 'l': state = 97; break;
                    case 'g': state = 73; break;
                    case 'T': state = 110; break;
                    case 'A': state = 102; break;
                    case 'N': state = 104; break;
                    case 'x': state = 88; break;
                    case '2': state = 67; break;
                    case '4': state = 77; break;
                    case 'B': state = 62; break;
                    case '8': state = 65; break;
                    case '_': state = 72; break;
                    case 'G': state = 103; break;
                    case 'a': state = 75; break;
                    case 'p': state = 95; break;
                    case 'L': state = 99; break;
                    case '0': state = 69; break;
                    case 'D': state = 27; break;
                    case 'K': state = 101; break;
                    case 'w': state = 68; break;
                    case '5': state = 114; break;
                    default: return std::find(finalNodes.begin(), finalNodes.end(), state) != finalNodes.end();
                }
                break;
            case 62: 
                switch(letter) {
                    case 'H': state = 85; break;
                    case '3': state = 96; break;
                    case 'o': state = 109; break;
                    case '6': state = 66; break;
                    case 'f': state = 76; break;
                    case 'D': state = 27; break;
                    case 'O': state = 81; break;
                    case 'i': state = 112; break;
                    case 'R': state = 29; break;
                    case 'W': state = 74; break;
                    case 'Q': state = 100; break;
                    case '5': state = 114; break;
                    case 'Z': state = 89; break;
                    case 'M': state = 113; break;
                    case 'F': state = 82; break;
                    case 'E': state = 98; break;
                    case 's': state = 28; break;
                    case 'r': state = 93; break;
                    case '1': state = 79; break;
                    case 'y': state = 84; break;
                    case '_': state = 72; break;
                    case 'v': state = 90; break;
                    case 'X': state = 64; break;
                    case 'B': state = 62; break;
                    case '4': state = 77; break;
                    case 'k': state = 83; break;
                    case 'm': state = 92; break;
                    case 'c': state = 108; break;
                    case 'I': state = 63; break;
                    case 'u': state = 105; break;
                    case '7': state = 111; break;
                    case 'Y': state = 115; break;
                    case 'K': state = 101; break;
                    case 'C': state = 80; break;
                    case 't': state = 78; break;
                    case 'b': state = 61; break;
                    case 'z': state = 94; break;
                    case '9': state = 107; break;
                    case 'e': state = 106; break;
                    case 'N': state = 104; break;
                    case 'h': state = 24; break;
                    case 'U': state = 71; break;
                    case 'q': state = 91; break;
                    case 'j': state = 26; break;
                    case 'd': state = 70; break;
                    case 'A': state = 102; break;
                    case 'J': state = 60; break;
                    case 'L': state = 99; break;
                    case 'n': state = 86; break;
                    case 'p': state = 95; break;
                    case 'S': state = 45; break;
                    case 'a': state = 75; break;
                    case 'V': state = 25; break;
                    case 'T': state = 110; break;
                    case '8': state = 65; break;
                    case '2': state = 67; break;
                    case 'w': state = 68; break;
                    case 'x': state = 88; break;
                    case 'P': state = 59; break;
                    case 'g': state = 73; break;
                    case 'l': state = 97; break;
                    case 'G': state = 103; break;
                    case '0': state = 69; break;
                    default: return std::find(finalNodes.begin(), finalNodes.end(), state) != finalNodes.end();
                }
                break;
            case 63: 
                switch(letter) {
                    case '3': state = 96; break;
                    case 'X': state = 64; break;
                    case 'H': state = 85; break;
                    case 'W': state = 74; break;
                    case 'o': state = 109; break;
                    case '6': state = 66; break;
                    case 'D': state = 27; break;
                    case 'K': state = 101; break;
                    case 'I': state = 63; break;
                    case 'c': state = 108; break;
                    case 'Q': state = 100; break;
                    case 'C': state = 80; break;
                    case 'M': state = 113; break;
                    case 's': state = 28; break;
                    case 'J': state = 60; break;
                    case 'Y': state = 115; break;
                    case 'F': state = 82; break;
                    case '1': state = 79; break;
                    case '_': state = 72; break;
                    case 'v': state = 90; break;
                    case 'k': state = 83; break;
                    case 'd': state = 70; break;
                    case 'E': state = 98; break;
                    case 'L': state = 99; break;
                    case '7': state = 111; break;
                    case 'u': state = 105; break;
                    case 'Z': state = 89; break;
                    case 'm': state = 92; break;
                    case 'G': state = 103; break;
                    case 'S': state = 45; break;
                    case 'y': state = 84; break;
                    case 'V': state = 25; break;
                    case 'i': state = 112; break;
                    case 'z': state = 94; break;
                    case 'B': state = 62; break;
                    case 'R': state = 29; break;
                    case '8': state = 65; break;
                    case 'w': state = 68; break;
                    case '9': state = 107; break;
                    case 'e': state = 106; break;
                    case '5': state = 114; break;
                    case 'U': state = 71; break;
                    case 'q': state = 91; break;
                    case 'r': state = 93; break;
                    case 't': state = 78; break;
                    case 'N': state = 104; break;
                    case 'b': state = 61; break;
                    case 'T': state = 110; break;
                    case 'a': state = 75; break;
                    case 'x': state = 88; break;
                    case 'P': state = 59; break;
                    case 'f': state = 76; break;
                    case '2': state = 67; break;
                    case 'n': state = 86; break;
                    case '4': state = 77; break;
                    case '0': state = 69; break;
                    case 'p': state = 95; break;
                    case 'l': state = 97; break;
                    case 'g': state = 73; break;
                    case 'j': state = 26; break;
                    case 'h': state = 24; break;
                    case 'A': state = 102; break;
                    case 'O': state = 81; break;
                    default: return std::find(finalNodes.begin(), finalNodes.end(), state) != finalNodes.end();
                }
                break;
            case 64: 
                switch(letter) {
                    case '3': state = 96; break;
                    case 'X': state = 64; break;
                    case 'W': state = 74; break;
                    case 'o': state = 109; break;
                    case '6': state = 66; break;
                    case 'D': state = 27; break;
                    case 'L': state = 99; break;
                    case 'f': state = 76; break;
                    case 'R': state = 29; break;
                    case 'M': state = 113; break;
                    case '1': state = 79; break;
                    case 'F': state = 82; break;
                    case 'S': state = 45; break;
                    case 'v': state = 90; break;
                    case 's': state = 28; break;
                    case 'd': state = 70; break;
                    case '4': state = 77; break;
                    case 'I': state = 63; break;
                    case 'c': state = 108; break;
                    case '5': state = 114; break;
                    case '_': state = 72; break;
                    case 't': state = 78; break;
                    case 'p': state = 95; break;
                    case 'j': state = 26; break;
                    case '8': state = 65; break;
                    case 'Q': state = 100; break;
                    case 'w': state = 68; break;
                    case 'O': state = 81; break;
                    case 'B': state = 62; break;
                    case 'A': state = 102; break;
                    case 'H': state = 85; break;
                    case 'Z': state = 89; break;
                    case 'm': state = 92; break;
                    case 'z': state = 94; break;
                    case 'Y': state = 115; break;
                    case 'u': state = 105; break;
                    case 'e': state = 106; break;
                    case 'k': state = 83; break;
                    case '9': state = 107; break;
                    case '7': state = 111; break;
                    case 'E': state = 98; break;
                    case 'P': state = 59; break;
                    case 'V': state = 25; break;
                    case 'U': state = 71; break;
                    case 'r': state = 93; break;
                    case 'q': state = 91; break;
                    case 'N': state = 104; break;
                    case 'K': state = 101; break;
                    case 'y': state = 84; break;
                    case 'b': state = 61; break;
                    case 'G': state = 103; break;
                    case 'C': state = 80; break;
                    case 'n': state = 86; break;
                    case 'x': state = 88; break;
                    case 'h': state = 24; break;
                    case 'a': state = 75; break;
                    case '2': state = 67; break;
                    case 'i': state = 112; break;
                    case 'l': state = 97; break;
                    case 'g': state = 73; break;
                    case '0': state = 69; break;
                    case 'T': state = 110; break;
                    case 'J': state = 60; break;
                    default: return std::find(finalNodes.begin(), finalNodes.end(), state) != finalNodes.end();
                }
                break;
            case 65: 
                switch(letter) {
                    case 'F': state = 82; break;
                    case 'o': state = 109; break;
                    case '6': state = 66; break;
                    case 't': state = 78; break;
                    case 'D': state = 27; break;
                    case 'X': state = 64; break;
                    case 'R': state = 29; break;
                    case 'Q': state = 100; break;
                    case 'A': state = 102; break;
                    case 'v': state = 90; break;
                    case 'S': state = 45; break;
                    case '5': state = 114; break;
                    case '3': state = 96; break;
                    case 'I': state = 63; break;
                    case 'c': state = 108; break;
                    case 'k': state = 83; break;
                    case 'y': state = 84; break;
                    case 'p': state = 95; break;
                    case '4': state = 77; break;
                    case '1': state = 79; break;
                    case '9': state = 107; break;
                    case '8': state = 65; break;
                    case '_': state = 72; break;
                    case 'H': state = 85; break;
                    case 'K': state = 101; break;
                    case 'b': state = 61; break;
                    case 'M': state = 113; break;
                    case 'd': state = 70; break;
                    case 'Z': state = 89; break;
                    case 'z': state = 94; break;
                    case 'B': state = 62; break;
                    case '7': state = 111; break;
                    case 'P': state = 59; break;
                    case 's': state = 28; break;
                    case 'f': state = 76; break;
                    case 'N': state = 104; break;
                    case 'T': state = 110; break;
                    case 'W': state = 74; break;
                    case '2': state = 67; break;
                    case 'Y': state = 115; break;
                    case 'J': state = 60; break;
                    case 'w': state = 68; break;
                    case 'q': state = 91; break;
                    case 'h': state = 24; break;
                    case 'm': state = 92; break;
                    case 'C': state = 80; break;
                    case 'j': state = 26; break;
                    case 'e': state = 106; break;
                    case 'r': state = 93; break;
                    case 'u': state = 105; break;
                    case 'U': state = 71; break;
                    case 'a': state = 75; break;
                    case 'G': state = 103; break;
                    case 'l': state = 97; break;
                    case 'g': state = 73; break;
                    case '0': state = 69; break;
                    case 'V': state = 25; break;
                    case 'E': state = 98; break;
                    case 'i': state = 112; break;
                    case 'L': state = 99; break;
                    case 'O': state = 81; break;
                    case 'n': state = 86; break;
                    case 'x': state = 88; break;
                    default: return std::find(finalNodes.begin(), finalNodes.end(), state) != finalNodes.end();
                }
                break;
            case 66: 
                switch(letter) {
                    case '3': state = 96; break;
                    case '6': state = 66; break;
                    case 't': state = 78; break;
                    case 'D': state = 27; break;
                    case '4': state = 77; break;
                    case 'j': state = 26; break;
                    case 'U': state = 71; break;
                    case 'x': state = 88; break;
                    case 'n': state = 86; break;
                    case 'I': state = 63; break;
                    case 'c': state = 108; break;
                    case 'E': state = 98; break;
                    case 'G': state = 103; break;
                    case 'u': state = 105; break;
                    case 'V': state = 25; break;
                    case 'f': state = 76; break;
                    case 'p': state = 95; break;
                    case '0': state = 69; break;
                    case 'o': state = 109; break;
                    case '_': state = 72; break;
                    case 'A': state = 102; break;
                    case 'y': state = 84; break;
                    case 'S': state = 45; break;
                    case 'z': state = 94; break;
                    case 'L': state = 99; break;
                    case 'F': state = 82; break;
                    case '8': state = 65; break;
                    case 'H': state = 85; break;
                    case 'd': state = 70; break;
                    case 'Q': state = 100; break;
                    case 'k': state = 83; break;
                    case 'W': state = 74; break;
                    case 'B': state = 62; break;
                    case 'K': state = 101; break;
                    case '2': state = 67; break;
                    case 'X': state = 64; break;
                    case 'M': state = 113; break;
                    case 'Y': state = 115; break;
                    case 'e': state = 106; break;
                    case 'R': state = 29; break;
                    case 'q': state = 91; break;
                    case '5': state = 114; break;
                    case 'Z': state = 89; break;
                    case 'N': state = 104; break;
                    case 'O': state = 81; break;
                    case 'P': state = 59; break;
                    case 'i': state = 112; break;
                    case 's': state = 28; break;
                    case 'T': state = 110; break;
                    case 'r': state = 93; break;
                    case 'w': state = 68; break;
                    case '7': state = 111; break;
                    case 'v': state = 90; break;
                    case '1': state = 79; break;
                    case 'm': state = 92; break;
                    case 'h': state = 24; break;
                    case 'J': state = 60; break;
                    case 'a': state = 75; break;
                    case '9': state = 107; break;
                    case 'b': state = 61; break;
                    case 'C': state = 80; break;
                    case 'l': state = 97; break;
                    case 'g': state = 73; break;
                    default: return std::find(finalNodes.begin(), finalNodes.end(), state) != finalNodes.end();
                }
                break;
            case 67: 
                switch(letter) {
                    case 'D': state = 27; break;
                    case '3': state = 96; break;
                    case 'F': state = 82; break;
                    case '1': state = 79; break;
                    case '6': state = 66; break;
                    case 'o': state = 109; break;
                    case 't': state = 78; break;
                    case 'O': state = 81; break;
                    case '0': state = 69; break;
                    case 'p': state = 95; break;
                    case 'f': state = 76; break;
                    case 'u': state = 105; break;
                    case 'a': state = 75; break;
                    case 'M': state = 113; break;
                    case 'G': state = 103; break;
                    case '_': state = 72; break;
                    case '8': state = 65; break;
                    case '4': state = 77; break;
                    case 'j': state = 26; break;
                    case '2': state = 67; break;
                    case 'U': state = 71; break;
                    case 'x': state = 88; break;
                    case 'n': state = 86; break;
                    case 'E': state = 98; break;
                    case 'I': state = 63; break;
                    case 'J': state = 60; break;
                    case 'c': state = 108; break;
                    case 'V': state = 25; break;
                    case 'v': state = 90; break;
                    case 'A': state = 102; break;
                    case 'l': state = 97; break;
                    case 'g': state = 73; break;
                    case 'C': state = 80; break;
                    case 'z': state = 94; break;
                    case 'q': state = 91; break;
                    case 'L': state = 99; break;
                    case 'S': state = 45; break;
                    case 'W': state = 74; break;
                    case 'e': state = 106; break;
                    case '5': state = 114; break;
                    case 'y': state = 84; break;
                    case 'R': state = 29; break;
                    case 'H': state = 85; break;
                    case 'X': state = 64; break;
                    case 'r': state = 93; break;
                    case 'b': state = 61; break;
                    case 'Z': state = 89; break;
                    case 'Q': state = 100; break;
                    case 'P': state = 59; break;
                    case 's': state = 28; break;
                    case 'N': state = 104; break;
                    case 'B': state = 62; break;
                    case 'K': state = 101; break;
                    case 'h': state = 24; break;
                    case 'Y': state = 115; break;
                    case 'i': state = 112; break;
                    case 'd': state = 70; break;
                    case 'k': state = 83; break;
                    case 'm': state = 92; break;
                    case 'T': state = 110; break;
                    case '7': state = 111; break;
                    case '9': state = 107; break;
                    case 'w': state = 68; break;
                    default: return std::find(finalNodes.begin(), finalNodes.end(), state) != finalNodes.end();
                }
                break;
            case 68: 
                switch(letter) {
                    case 'D': state = 27; break;
                    case 'F': state = 82; break;
                    case '6': state = 66; break;
                    case 'N': state = 104; break;
                    case 'o': state = 109; break;
                    case 'I': state = 63; break;
                    case 'j': state = 26; break;
                    case 'J': state = 60; break;
                    case 'E': state = 98; break;
                    case 'u': state = 105; break;
                    case '1': state = 79; break;
                    case 'G': state = 103; break;
                    case 'c': state = 108; break;
                    case 'g': state = 73; break;
                    case 'q': state = 91; break;
                    case 'T': state = 110; break;
                    case 'A': state = 102; break;
                    case '4': state = 77; break;
                    case '8': state = 65; break;
                    case 'w': state = 68; break;
                    case 'x': state = 88; break;
                    case '0': state = 69; break;
                    case 'p': state = 95; break;
                    case 'V': state = 25; break;
                    case 'U': state = 71; break;
                    case 'e': state = 106; break;
                    case 'a': state = 75; break;
                    case 'M': state = 113; break;
                    case 'f': state = 76; break;
                    case '2': state = 67; break;
                    case 'R': state = 29; break;
                    case 'i': state = 112; break;
                    case 'X': state = 64; break;
                    case 's': state = 28; break;
                    case 'y': state = 84; break;
                    case '9': state = 107; break;
                    case '3': state = 96; break;
                    case 'S': state = 45; break;
                    case '5': state = 114; break;
                    case 'C': state = 80; break;
                    case '_': state = 72; break;
                    case 'Q': state = 100; break;
                    case 'v': state = 90; break;
                    case 'Z': state = 89; break;
                    case 'K': state = 101; break;
                    case 'r': state = 93; break;
                    case 'd': state = 70; break;
                    case 'H': state = 85; break;
                    case 'k': state = 83; break;
                    case 'W': state = 74; break;
                    case 'b': state = 61; break;
                    case 't': state = 78; break;
                    case 'O': state = 81; break;
                    case 'L': state = 99; break;
                    case 'P': state = 59; break;
                    case 'm': state = 92; break;
                    case '7': state = 111; break;
                    case 'Y': state = 115; break;
                    case 'B': state = 62; break;
                    case 'z': state = 94; break;
                    case 'n': state = 86; break;
                    case 'h': state = 24; break;
                    case 'l': state = 97; break;
                    default: return std::find(finalNodes.begin(), finalNodes.end(), state) != finalNodes.end();
                }
                break;
            case 69: 
                switch(letter) {
                    case 'F': state = 82; break;
                    case 'Q': state = 100; break;
                    case 'J': state = 60; break;
                    case '6': state = 66; break;
                    case 'C': state = 80; break;
                    case '0': state = 69; break;
                    case 'p': state = 95; break;
                    case 'f': state = 76; break;
                    case 'u': state = 105; break;
                    case 'A': state = 102; break;
                    case 'e': state = 106; break;
                    case 'a': state = 75; break;
                    case 'G': state = 103; break;
                    case '_': state = 72; break;
                    case '8': state = 65; break;
                    case '4': state = 77; break;
                    case 'j': state = 26; break;
                    case 'I': state = 63; break;
                    case 'g': state = 73; break;
                    case 'l': state = 97; break;
                    case 'O': state = 81; break;
                    case 'E': state = 98; break;
                    case 'c': state = 108; break;
                    case 'M': state = 113; break;
                    case 'X': state = 64; break;
                    case 'U': state = 71; break;
                    case 'x': state = 88; break;
                    case 'D': state = 27; break;
                    case 'q': state = 91; break;
                    case 'T': state = 110; break;
                    case 'w': state = 68; break;
                    case 'z': state = 94; break;
                    case '3': state = 96; break;
                    case 'K': state = 101; break;
                    case 'N': state = 104; break;
                    case 'n': state = 86; break;
                    case 's': state = 28; break;
                    case '5': state = 114; break;
                    case 't': state = 78; break;
                    case 'S': state = 45; break;
                    case 'P': state = 59; break;
                    case '9': state = 107; break;
                    case 'W': state = 74; break;
                    case 'o': state = 109; break;
                    case 'r': state = 93; break;
                    case 'y': state = 84; break;
                    case 'Y': state = 115; break;
                    case 'i': state = 112; break;
                    case 'R': state = 29; break;
                    case 'v': state = 90; break;
                    case 'H': state = 85; break;
                    case 'd': state = 70; break;
                    case 'Z': state = 89; break;
                    case 'm': state = 92; break;
                    case 'V': state = 25; break;
                    case 'k': state = 83; break;
                    case '2': state = 67; break;
                    case 'h': state = 24; break;
                    case 'B': state = 62; break;
                    case '7': state = 111; break;
                    case 'L': state = 99; break;
                    case '1': state = 79; break;
                    case 'b': state = 61; break;
                    default: return std::find(finalNodes.begin(), finalNodes.end(), state) != finalNodes.end();
                }
                break;
            case 70: 
                switch(letter) {
                    case 'F': state = 82; break;
                    case '6': state = 66; break;
                    case 'f': state = 76; break;
                    case 'u': state = 105; break;
                    case 'e': state = 106; break;
                    case 'a': state = 75; break;
                    case 'G': state = 103; break;
                    case '_': state = 72; break;
                    case '8': state = 65; break;
                    case '4': state = 77; break;
                    case 'j': state = 26; break;
                    case '2': state = 67; break;
                    case 'X': state = 64; break;
                    case 'U': state = 71; break;
                    case 'x': state = 88; break;
                    case 'D': state = 27; break;
                    case 'O': state = 81; break;
                    case 'q': state = 91; break;
                    case 'T': state = 110; break;
                    case 'A': state = 102; break;
                    case 'g': state = 73; break;
                    case 'C': state = 80; break;
                    case 'M': state = 113; break;
                    case 'J': state = 60; break;
                    case 'I': state = 63; break;
                    case 'c': state = 108; break;
                    case 'E': state = 98; break;
                    case 'p': state = 95; break;
                    case '0': state = 69; break;
                    case '1': state = 79; break;
                    case 'l': state = 97; break;
                    case 'i': state = 112; break;
                    case 'z': state = 94; break;
                    case '3': state = 96; break;
                    case 's': state = 28; break;
                    case 'N': state = 104; break;
                    case 't': state = 78; break;
                    case 'n': state = 86; break;
                    case 'y': state = 84; break;
                    case 'W': state = 74; break;
                    case 'S': state = 45; break;
                    case 'v': state = 90; break;
                    case 'K': state = 101; break;
                    case 'Z': state = 89; break;
                    case 'r': state = 93; break;
                    case 'd': state = 70; break;
                    case 'Q': state = 100; break;
                    case 'R': state = 29; break;
                    case 'o': state = 109; break;
                    case 'H': state = 85; break;
                    case 'k': state = 83; break;
                    case 'P': state = 59; break;
                    case '5': state = 114; break;
                    case 'm': state = 92; break;
                    case 'h': state = 24; break;
                    case 'L': state = 99; break;
                    case '9': state = 107; break;
                    case 'b': state = 61; break;
                    case 'w': state = 68; break;
                    case '7': state = 111; break;
                    case 'Y': state = 115; break;
                    case 'B': state = 62; break;
                    case 'V': state = 25; break;
                    default: return std::find(finalNodes.begin(), finalNodes.end(), state) != finalNodes.end();
                }
                break;
            case 71: 
                switch(letter) {
                    case 'F': state = 82; break;
                    case 'o': state = 109; break;
                    case '6': state = 66; break;
                    case 'f': state = 76; break;
                    case 'I': state = 63; break;
                    case 'G': state = 103; break;
                    case 'J': state = 60; break;
                    case 'u': state = 105; break;
                    case 'U': state = 71; break;
                    case 'D': state = 27; break;
                    case '8': state = 65; break;
                    case '_': state = 72; break;
                    case 'A': state = 102; break;
                    case 'q': state = 91; break;
                    case 'x': state = 88; break;
                    case 'l': state = 97; break;
                    case 'g': state = 73; break;
                    case 'O': state = 81; break;
                    case '4': state = 77; break;
                    case 'n': state = 86; break;
                    case 'j': state = 26; break;
                    case 'p': state = 95; break;
                    case '0': state = 69; break;
                    case 'Q': state = 100; break;
                    case 'M': state = 113; break;
                    case 'e': state = 106; break;
                    case '2': state = 67; break;
                    case '1': state = 79; break;
                    case 'w': state = 68; break;
                    case 'C': state = 80; break;
                    case 'E': state = 98; break;
                    case 'v': state = 90; break;
                    case 'X': state = 64; break;
                    case 'N': state = 104; break;
                    case 'i': state = 112; break;
                    case 't': state = 78; break;
                    case 's': state = 28; break;
                    case 'W': state = 74; break;
                    case 'c': state = 108; break;
                    case 'S': state = 45; break;
                    case '3': state = 96; break;
                    case 'r': state = 93; break;
                    case '5': state = 114; break;
                    case 'Z': state = 89; break;
                    case 'R': state = 29; break;
                    case 'k': state = 83; break;
                    case 'H': state = 85; break;
                    case '7': state = 111; break;
                    case 'd': state = 70; break;
                    case '9': state = 107; break;
                    case 'B': state = 62; break;
                    case 'P': state = 59; break;
                    case 'y': state = 84; break;
                    case 'h': state = 24; break;
                    case 'T': state = 110; break;
                    case 'a': state = 75; break;
                    case 'Y': state = 115; break;
                    case 'L': state = 99; break;
                    case 'm': state = 92; break;
                    case 'z': state = 94; break;
                    case 'V': state = 25; break;
                    case 'b': state = 61; break;
                    case 'K': state = 101; break;
                    default: return std::find(finalNodes.begin(), finalNodes.end(), state) != finalNodes.end();
                }
                break;
            case 72: 
                switch(letter) {
                    case 'N': state = 104; break;
                    case 'F': state = 82; break;
                    case 'o': state = 109; break;
                    case '6': state = 66; break;
                    case 'O': state = 81; break;
                    case 'g': state = 73; break;
                    case 'w': state = 68; break;
                    case 'q': state = 91; break;
                    case 'J': state = 60; break;
                    case 'C': state = 80; break;
                    case '0': state = 69; break;
                    case 'p': state = 95; break;
                    case 'f': state = 76; break;
                    case 'u': state = 105; break;
                    case 'A': state = 102; break;
                    case 'S': state = 45; break;
                    case 'e': state = 106; break;
                    case 'a': state = 75; break;
                    case 'G': state = 103; break;
                    case '_': state = 72; break;
                    case '8': state = 65; break;
                    case '4': state = 77; break;
                    case 'I': state = 63; break;
                    case 'j': state = 26; break;
                    case 'M': state = 113; break;
                    case 'D': state = 27; break;
                    case 'x': state = 88; break;
                    case 'U': state = 71; break;
                    case 'l': state = 97; break;
                    case '2': state = 67; break;
                    case 'E': state = 98; break;
                    case '1': state = 79; break;
                    case 'y': state = 84; break;
                    case 'h': state = 24; break;
                    case 's': state = 28; break;
                    case 'c': state = 108; break;
                    case 'Q': state = 100; break;
                    case 't': state = 78; break;
                    case 'i': state = 112; break;
                    case 'r': state = 93; break;
                    case 'X': state = 64; break;
                    case '9': state = 107; break;
                    case 'v': state = 90; break;
                    case 'n': state = 86; break;
                    case '3': state = 96; break;
                    case 'R': state = 29; break;
                    case 'Z': state = 89; break;
                    case 'W': state = 74; break;
                    case 'H': state = 85; break;
                    case 'd': state = 70; break;
                    case 'z': state = 94; break;
                    case 'k': state = 83; break;
                    case 'T': state = 110; break;
                    case 'Y': state = 115; break;
                    case 'P': state = 59; break;
                    case '7': state = 111; break;
                    case 'L': state = 99; break;
                    case 'b': state = 61; break;
                    case '5': state = 114; break;
                    case 'm': state = 92; break;
                    case 'B': state = 62; break;
                    case 'V': state = 25; break;
                    case 'K': state = 101; break;
                    default: return std::find(finalNodes.begin(), finalNodes.end(), state) != finalNodes.end();
                }
                break;
            case 73: 
                switch(letter) {
                    case '3': state = 96; break;
                    case '4': state = 77; break;
                    case 's': state = 28; break;
                    case 'j': state = 26; break;
                    case '2': state = 67; break;
                    case 'U': state = 71; break;
                    case 'x': state = 88; break;
                    case 'P': state = 59; break;
                    case 'I': state = 63; break;
                    case 'R': state = 29; break;
                    case 'A': state = 102; break;
                    case 'c': state = 108; break;
                    case 'E': state = 98; break;
                    case 'G': state = 103; break;
                    case 'J': state = 60; break;
                    case '6': state = 66; break;
                    case 'W': state = 74; break;
                    case 'u': state = 105; break;
                    case 'p': state = 95; break;
                    case '0': state = 69; break;
                    case 'C': state = 80; break;
                    case 'L': state = 99; break;
                    case 'S': state = 45; break;
                    case 'M': state = 113; break;
                    case 'a': state = 75; break;
                    case 'e': state = 106; break;
                    case 'l': state = 97; break;
                    case 'g': state = 73; break;
                    case '8': state = 65; break;
                    case '_': state = 72; break;
                    case 'q': state = 91; break;
                    case 'F': state = 82; break;
                    case 'f': state = 76; break;
                    case 'y': state = 84; break;
                    case 'o': state = 109; break;
                    case 'h': state = 24; break;
                    case 'r': state = 93; break;
                    case 'Q': state = 100; break;
                    case 'd': state = 70; break;
                    case 'V': state = 25; break;
                    case '9': state = 107; break;
                    case 't': state = 78; break;
                    case 'H': state = 85; break;
                    case 'v': state = 90; break;
                    case '5': state = 114; break;
                    case 'Z': state = 89; break;
                    case '7': state = 111; break;
                    case 'X': state = 64; break;
                    case 'i': state = 112; break;
                    case 'K': state = 101; break;
                    case 'T': state = 110; break;
                    case 'N': state = 104; break;
                    case 'k': state = 83; break;
                    case 'n': state = 86; break;
                    case 'B': state = 62; break;
                    case 'm': state = 92; break;
                    case 'w': state = 68; break;
                    case '1': state = 79; break;
                    case 'O': state = 81; break;
                    case 'D': state = 27; break;
                    case 'z': state = 94; break;
                    case 'Y': state = 115; break;
                    case 'b': state = 61; break;
                    default: return std::find(finalNodes.begin(), finalNodes.end(), state) != finalNodes.end();
                }
                break;
            case 74: 
                switch(letter) {
                    case 'o': state = 109; break;
                    case 'W': state = 74; break;
                    case 'D': state = 27; break;
                    case 'v': state = 90; break;
                    case 'h': state = 24; break;
                    case 'C': state = 80; break;
                    case 'n': state = 86; break;
                    case 'N': state = 104; break;
                    case '6': state = 66; break;
                    case 'R': state = 29; break;
                    case '7': state = 111; break;
                    case 'G': state = 103; break;
                    case 'F': state = 82; break;
                    case 'e': state = 106; break;
                    case 'u': state = 105; break;
                    case 'Q': state = 100; break;
                    case 'E': state = 98; break;
                    case '_': state = 72; break;
                    case 'P': state = 59; break;
                    case 'X': state = 64; break;
                    case 'I': state = 63; break;
                    case '3': state = 96; break;
                    case 'S': state = 45; break;
                    case 'Z': state = 89; break;
                    case 'p': state = 95; break;
                    case 't': state = 78; break;
                    case 'x': state = 88; break;
                    case 'a': state = 75; break;
                    case 'K': state = 101; break;
                    case 's': state = 28; break;
                    case 'A': state = 102; break;
                    case '8': state = 65; break;
                    case '2': state = 67; break;
                    case 'O': state = 81; break;
                    case 'U': state = 71; break;
                    case 'd': state = 70; break;
                    case 'V': state = 25; break;
                    case 'M': state = 113; break;
                    case 'c': state = 108; break;
                    case 'q': state = 91; break;
                    case 'i': state = 112; break;
                    case '9': state = 107; break;
                    case 'k': state = 83; break;
                    case '4': state = 77; break;
                    case 'b': state = 61; break;
                    case 'H': state = 85; break;
                    case '0': state = 69; break;
                    case 'j': state = 26; break;
                    case 'y': state = 84; break;
                    case 'g': state = 73; break;
                    case 'f': state = 76; break;
                    case 'r': state = 93; break;
                    case 'T': state = 110; break;
                    case 'z': state = 94; break;
                    case 'm': state = 92; break;
                    case 'l': state = 97; break;
                    case 'Y': state = 115; break;
                    case 'w': state = 68; break;
                    case 'J': state = 60; break;
                    case '1': state = 79; break;
                    case 'L': state = 99; break;
                    case '5': state = 114; break;
                    case 'B': state = 62; break;
                    default: return std::find(finalNodes.begin(), finalNodes.end(), state) != finalNodes.end();
                }
                break;
            case 75: 
                switch(letter) {
                    case '3': state = 96; break;
                    case 'F': state = 82; break;
                    case 'J': state = 60; break;
                    case 'D': state = 27; break;
                    case 'E': state = 98; break;
                    case '6': state = 66; break;
                    case 'C': state = 80; break;
                    case '0': state = 69; break;
                    case 'p': state = 95; break;
                    case 'u': state = 105; break;
                    case 'A': state = 102; break;
                    case 'S': state = 45; break;
                    case 'e': state = 106; break;
                    case 'a': state = 75; break;
                    case 'M': state = 113; break;
                    case 'G': state = 103; break;
                    case '_': state = 72; break;
                    case '8': state = 65; break;
                    case '4': state = 77; break;
                    case 's': state = 28; break;
                    case 'j': state = 26; break;
                    case 'I': state = 63; break;
                    case 'g': state = 73; break;
                    case 'l': state = 97; break;
                    case 'U': state = 71; break;
                    case 'x': state = 88; break;
                    case 'R': state = 29; break;
                    case 'P': state = 59; break;
                    case 'W': state = 74; break;
                    case '2': state = 67; break;
                    case 'q': state = 91; break;
                    case 'i': state = 112; break;
                    case 'r': state = 93; break;
                    case 'v': state = 90; break;
                    case 'o': state = 109; break;
                    case 'd': state = 70; break;
                    case 'V': state = 25; break;
                    case 'X': state = 64; break;
                    case 't': state = 78; break;
                    case 'Z': state = 89; break;
                    case '9': state = 107; break;
                    case 'H': state = 85; break;
                    case 'y': state = 84; break;
                    case 'K': state = 101; break;
                    case 'c': state = 108; break;
                    case 'Q': state = 100; break;
                    case 'm': state = 92; break;
                    case '7': state = 111; break;
                    case 'O': state = 81; break;
                    case 'T': state = 110; break;
                    case 'n': state = 86; break;
                    case 'k': state = 83; break;
                    case 'N': state = 104; break;
                    case 'w': state = 68; break;
                    case 'Y': state = 115; break;
                    case 'L': state = 99; break;
                    case 'h': state = 24; break;
                    case 'b': state = 61; break;
                    case 'B': state = 62; break;
                    case '1': state = 79; break;
                    case 'z': state = 94; break;
                    case '5': state = 114; break;
                    case 'f': state = 76; break;
                    default: return std::find(finalNodes.begin(), finalNodes.end(), state) != finalNodes.end();
                }
                break;
            case 76: 
                switch(letter) {
                    case '3': state = 96; break;
                    case 'F': state = 82; break;
                    case 'D': state = 27; break;
                    case 'J': state = 60; break;
                    case '1': state = 79; break;
                    case 'E': state = 98; break;
                    case '_': state = 72; break;
                    case '8': state = 65; break;
                    case '4': state = 77; break;
                    case 's': state = 28; break;
                    case 'j': state = 26; break;
                    case 'U': state = 71; break;
                    case 'x': state = 88; break;
                    case 'P': state = 59; break;
                    case 'I': state = 63; break;
                    case 'R': state = 29; break;
                    case 'A': state = 102; break;
                    case 'g': state = 73; break;
                    case 'l': state = 97; break;
                    case 'S': state = 45; break;
                    case 'e': state = 106; break;
                    case 'u': state = 105; break;
                    case '0': state = 69; break;
                    case 'p': state = 95; break;
                    case 'W': state = 74; break;
                    case 'v': state = 90; break;
                    case 'c': state = 108; break;
                    case '6': state = 66; break;
                    case 'G': state = 103; break;
                    case 'M': state = 113; break;
                    case 'a': state = 75; break;
                    case '2': state = 67; break;
                    case 'f': state = 76; break;
                    case 'w': state = 68; break;
                    case 'y': state = 84; break;
                    case 'o': state = 109; break;
                    case 'L': state = 99; break;
                    case 'V': state = 25; break;
                    case 'Q': state = 100; break;
                    case 'd': state = 70; break;
                    case 't': state = 78; break;
                    case 'Y': state = 115; break;
                    case 'H': state = 85; break;
                    case '9': state = 107; break;
                    case 'r': state = 93; break;
                    case '7': state = 111; break;
                    case 'B': state = 62; break;
                    case 'b': state = 61; break;
                    case 'K': state = 101; break;
                    case 'k': state = 83; break;
                    case 'T': state = 110; break;
                    case 'z': state = 94; break;
                    case 'X': state = 64; break;
                    case 'O': state = 81; break;
                    case 'C': state = 80; break;
                    case 'N': state = 104; break;
                    case 'i': state = 112; break;
                    case 'm': state = 92; break;
                    case 'Z': state = 89; break;
                    case 'h': state = 24; break;
                    case 'q': state = 91; break;
                    case 'n': state = 86; break;
                    case '5': state = 114; break;
                    default: return std::find(finalNodes.begin(), finalNodes.end(), state) != finalNodes.end();
                }
                break;
            case 77: 
                switch(letter) {
                    case 'X': state = 64; break;
                    case '3': state = 96; break;
                    case 'O': state = 81; break;
                    case 'h': state = 24; break;
                    case 'F': state = 82; break;
                    case 'D': state = 27; break;
                    case 'a': state = 75; break;
                    case 'G': state = 103; break;
                    case '_': state = 72; break;
                    case '8': state = 65; break;
                    case '4': state = 77; break;
                    case 's': state = 28; break;
                    case 'j': state = 26; break;
                    case 'U': state = 71; break;
                    case 'x': state = 88; break;
                    case 'P': state = 59; break;
                    case 'I': state = 63; break;
                    case 'J': state = 60; break;
                    case 'p': state = 95; break;
                    case '0': state = 69; break;
                    case 'C': state = 80; break;
                    case 'E': state = 98; break;
                    case 'c': state = 108; break;
                    case 'W': state = 74; break;
                    case 'v': state = 90; break;
                    case 'R': state = 29; break;
                    case 'g': state = 73; break;
                    case 'l': state = 97; break;
                    case 'e': state = 106; break;
                    case 'S': state = 45; break;
                    case 'u': state = 105; break;
                    case 'T': state = 110; break;
                    case '9': state = 107; break;
                    case '1': state = 79; break;
                    case 'f': state = 76; break;
                    case 'A': state = 102; break;
                    case '6': state = 66; break;
                    case 'w': state = 68; break;
                    case '2': state = 67; break;
                    case 'o': state = 109; break;
                    case 'L': state = 99; break;
                    case 'N': state = 104; break;
                    case 'Q': state = 100; break;
                    case 'd': state = 70; break;
                    case '5': state = 114; break;
                    case 't': state = 78; break;
                    case 'K': state = 101; break;
                    case 'b': state = 61; break;
                    case 'm': state = 92; break;
                    case 'y': state = 84; break;
                    case '7': state = 111; break;
                    case 'V': state = 25; break;
                    case 'Y': state = 115; break;
                    case 'H': state = 85; break;
                    case 'k': state = 83; break;
                    case 'q': state = 91; break;
                    case 'i': state = 112; break;
                    case 'r': state = 93; break;
                    case 'M': state = 113; break;
                    case 'z': state = 94; break;
                    case 'n': state = 86; break;
                    case 'Z': state = 89; break;
                    case 'B': state = 62; break;
                    default: return std::find(finalNodes.begin(), finalNodes.end(), state) != finalNodes.end();
                }
                break;
            case 78: 
                switch(letter) {
                    case 'X': state = 64; break;
                    case 'O': state = 81; break;
                    case 'F': state = 82; break;
                    case 'D': state = 27; break;
                    case 'U': state = 71; break;
                    case 'p': state = 95; break;
                    case '0': state = 69; break;
                    case 'x': state = 88; break;
                    case '_': state = 72; break;
                    case 'I': state = 63; break;
                    case 's': state = 28; break;
                    case 'j': state = 26; break;
                    case 'J': state = 60; break;
                    case 'u': state = 105; break;
                    case 'C': state = 80; break;
                    case 'e': state = 106; break;
                    case 'S': state = 45; break;
                    case 'a': state = 75; break;
                    case 'M': state = 113; break;
                    case 'v': state = 90; break;
                    case 'R': state = 29; break;
                    case 'P': state = 59; break;
                    case 'G': state = 103; break;
                    case '8': state = 65; break;
                    case 'E': state = 98; break;
                    case 'c': state = 108; break;
                    case 'l': state = 97; break;
                    case 'g': state = 73; break;
                    case '4': state = 77; break;
                    case '1': state = 79; break;
                    case 'T': state = 110; break;
                    case '2': state = 67; break;
                    case 'W': state = 74; break;
                    case 'f': state = 76; break;
                    case '6': state = 66; break;
                    case 'A': state = 102; break;
                    case 'w': state = 68; break;
                    case '3': state = 96; break;
                    case 'N': state = 104; break;
                    case 'L': state = 99; break;
                    case 'o': state = 109; break;
                    case 't': state = 78; break;
                    case 'K': state = 101; break;
                    case 'b': state = 61; break;
                    case 'Y': state = 115; break;
                    case 'y': state = 84; break;
                    case 'B': state = 62; break;
                    case 'Q': state = 100; break;
                    case 'V': state = 25; break;
                    case '7': state = 111; break;
                    case 'q': state = 91; break;
                    case 'k': state = 83; break;
                    case 'd': state = 70; break;
                    case 'H': state = 85; break;
                    case 'h': state = 24; break;
                    case 'i': state = 112; break;
                    case '9': state = 107; break;
                    case 'Z': state = 89; break;
                    case 'm': state = 92; break;
                    case 'r': state = 93; break;
                    case '5': state = 114; break;
                    case 'z': state = 94; break;
                    case 'n': state = 86; break;
                    default: return std::find(finalNodes.begin(), finalNodes.end(), state) != finalNodes.end();
                }
                break;
            case 79: 
                switch(letter) {
                    case 'O': state = 81; break;
                    case 'F': state = 82; break;
                    case 'D': state = 27; break;
                    case 'C': state = 80; break;
                    case '0': state = 69; break;
                    case 'p': state = 95; break;
                    case 'u': state = 105; break;
                    case 'S': state = 45; break;
                    case 'e': state = 106; break;
                    case 'a': state = 75; break;
                    case 'M': state = 113; break;
                    case 'G': state = 103; break;
                    case '_': state = 72; break;
                    case '8': state = 65; break;
                    case '4': state = 77; break;
                    case 'j': state = 26; break;
                    case 'U': state = 71; break;
                    case 'x': state = 88; break;
                    case 'T': state = 110; break;
                    case 'g': state = 73; break;
                    case 'R': state = 29; break;
                    case 'P': state = 59; break;
                    case 'I': state = 63; break;
                    case 'J': state = 60; break;
                    case '1': state = 79; break;
                    case 'w': state = 68; break;
                    case '2': state = 67; break;
                    case 'v': state = 90; break;
                    case 'E': state = 98; break;
                    case 'A': state = 102; break;
                    case 'l': state = 97; break;
                    case '6': state = 66; break;
                    case 'V': state = 25; break;
                    case 'f': state = 76; break;
                    case 'n': state = 86; break;
                    case 'c': state = 108; break;
                    case 'W': state = 74; break;
                    case 'y': state = 84; break;
                    case 'o': state = 109; break;
                    case 's': state = 28; break;
                    case 'L': state = 99; break;
                    case 'N': state = 104; break;
                    case 'X': state = 64; break;
                    case 'K': state = 101; break;
                    case 'k': state = 83; break;
                    case '5': state = 114; break;
                    case 'B': state = 62; break;
                    case 't': state = 78; break;
                    case '3': state = 96; break;
                    case 'Q': state = 100; break;
                    case 'b': state = 61; break;
                    case '9': state = 107; break;
                    case '7': state = 111; break;
                    case 'Z': state = 89; break;
                    case 'H': state = 85; break;
                    case 'r': state = 93; break;
                    case 'h': state = 24; break;
                    case 'd': state = 70; break;
                    case 'Y': state = 115; break;
                    case 'z': state = 94; break;
                    case 'm': state = 92; break;
                    case 'q': state = 91; break;
                    case 'i': state = 112; break;
                    default: return std::find(finalNodes.begin(), finalNodes.end(), state) != finalNodes.end();
                }
                break;
            case 80: 
                switch(letter) {
                    case 'O': state = 81; break;
                    case 'F': state = 82; break;
                    case 'J': state = 60; break;
                    case 'g': state = 73; break;
                    case 'U': state = 71; break;
                    case 'P': state = 59; break;
                    case 'x': state = 88; break;
                    case '_': state = 72; break;
                    case '4': state = 77; break;
                    case '8': state = 65; break;
                    case 'I': state = 63; break;
                    case 'u': state = 105; break;
                    case 'p': state = 95; break;
                    case '0': state = 69; break;
                    case 'e': state = 106; break;
                    case 'a': state = 75; break;
                    case 'M': state = 113; break;
                    case 'S': state = 45; break;
                    case 'G': state = 103; break;
                    case 'E': state = 98; break;
                    case '2': state = 67; break;
                    case 'L': state = 99; break;
                    case '1': state = 79; break;
                    case 's': state = 28; break;
                    case 'A': state = 102; break;
                    case '6': state = 66; break;
                    case 'l': state = 97; break;
                    case 'V': state = 25; break;
                    case 'f': state = 76; break;
                    case 'c': state = 108; break;
                    case 'h': state = 24; break;
                    case 'y': state = 84; break;
                    case 'R': state = 29; break;
                    case 'q': state = 91; break;
                    case 'C': state = 80; break;
                    case '3': state = 96; break;
                    case 'w': state = 68; break;
                    case 'W': state = 74; break;
                    case '9': state = 107; break;
                    case 'i': state = 112; break;
                    case 'n': state = 86; break;
                    case 'v': state = 90; break;
                    case 'o': state = 109; break;
                    case '5': state = 114; break;
                    case 'b': state = 61; break;
                    case 'Z': state = 89; break;
                    case 'j': state = 26; break;
                    case '7': state = 111; break;
                    case 'H': state = 85; break;
                    case 'K': state = 101; break;
                    case 'X': state = 64; break;
                    case 'm': state = 92; break;
                    case 'T': state = 110; break;
                    case 'Y': state = 115; break;
                    case 'B': state = 62; break;
                    case 'N': state = 104; break;
                    case 't': state = 78; break;
                    case 'd': state = 70; break;
                    case 'Q': state = 100; break;
                    case 'D': state = 27; break;
                    case 'r': state = 93; break;
                    case 'k': state = 83; break;
                    case 'z': state = 94; break;
                    default: return std::find(finalNodes.begin(), finalNodes.end(), state) != finalNodes.end();
                }
                break;
            case 81: 
                switch(letter) {
                    case '1': state = 79; break;
                    case '3': state = 96; break;
                    case 'O': state = 81; break;
                    case 'D': state = 27; break;
                    case 'E': state = 98; break;
                    case 'g': state = 73; break;
                    case 'l': state = 97; break;
                    case 'p': state = 95; break;
                    case '0': state = 69; break;
                    case 'x': state = 88; break;
                    case '4': state = 77; break;
                    case 'I': state = 63; break;
                    case 'G': state = 103; break;
                    case 'c': state = 108; break;
                    case 'U': state = 71; break;
                    case 'u': state = 105; break;
                    case 'P': state = 59; break;
                    case 'e': state = 106; break;
                    case 'a': state = 75; break;
                    case '8': state = 65; break;
                    case 'J': state = 60; break;
                    case 'F': state = 82; break;
                    case 'S': state = 45; break;
                    case 'j': state = 26; break;
                    case 'm': state = 92; break;
                    case 'T': state = 110; break;
                    case 'q': state = 91; break;
                    case 'C': state = 80; break;
                    case 'R': state = 29; break;
                    case 'X': state = 64; break;
                    case 'M': state = 113; break;
                    case 'w': state = 68; break;
                    case '_': state = 72; break;
                    case 's': state = 28; break;
                    case 'Q': state = 100; break;
                    case 'L': state = 99; break;
                    case 'W': state = 74; break;
                    case 'v': state = 90; break;
                    case 'i': state = 112; break;
                    case 'K': state = 101; break;
                    case 'f': state = 76; break;
                    case 'V': state = 25; break;
                    case 'Z': state = 89; break;
                    case 'H': state = 85; break;
                    case '7': state = 111; break;
                    case '2': state = 67; break;
                    case 'n': state = 86; break;
                    case 'b': state = 61; break;
                    case 'h': state = 24; break;
                    case '5': state = 114; break;
                    case 'B': state = 62; break;
                    case 'Y': state = 115; break;
                    case 't': state = 78; break;
                    case 'z': state = 94; break;
                    case '9': state = 107; break;
                    case 'r': state = 93; break;
                    case 'd': state = 70; break;
                    case 'N': state = 104; break;
                    case 'k': state = 83; break;
                    case 'y': state = 84; break;
                    case 'A': state = 102; break;
                    case 'o': state = 109; break;
                    case '6': state = 66; break;
                    default: return std::find(finalNodes.begin(), finalNodes.end(), state) != finalNodes.end();
                }
                break;
            case 82: 
                switch(letter) {
                    case '3': state = 96; break;
                    case 'D': state = 27; break;
                    case 'E': state = 98; break;
                    case 'P': state = 59; break;
                    case 'x': state = 88; break;
                    case '4': state = 77; break;
                    case '8': state = 65; break;
                    case 'I': state = 63; break;
                    case 'u': state = 105; break;
                    case 'G': state = 103; break;
                    case 'p': state = 95; break;
                    case '0': state = 69; break;
                    case 'e': state = 106; break;
                    case 'a': state = 75; break;
                    case 'g': state = 73; break;
                    case 'l': state = 97; break;
                    case 'c': state = 108; break;
                    case 'U': state = 71; break;
                    case 'O': state = 81; break;
                    case 'F': state = 82; break;
                    case 'S': state = 45; break;
                    case 'J': state = 60; break;
                    case '1': state = 79; break;
                    case 'w': state = 68; break;
                    case '2': state = 67; break;
                    case 'C': state = 80; break;
                    case 'A': state = 102; break;
                    case 'v': state = 90; break;
                    case '_': state = 72; break;
                    case 'T': state = 110; break;
                    case 'q': state = 91; break;
                    case 'V': state = 25; break;
                    case 'm': state = 92; break;
                    case 'W': state = 74; break;
                    case 'K': state = 101; break;
                    case 'L': state = 99; break;
                    case 'i': state = 112; break;
                    case 'f': state = 76; break;
                    case 'Z': state = 89; break;
                    case 'o': state = 109; break;
                    case 's': state = 28; break;
                    case '7': state = 111; break;
                    case 'M': state = 113; break;
                    case 'X': state = 64; break;
                    case 'b': state = 61; break;
                    case 'y': state = 84; break;
                    case 'k': state = 83; break;
                    case 'r': state = 93; break;
                    case 'Q': state = 100; break;
                    case 'h': state = 24; break;
                    case 'n': state = 86; break;
                    case 'B': state = 62; break;
                    case 'R': state = 29; break;
                    case 'Y': state = 115; break;
                    case 'z': state = 94; break;
                    case 't': state = 78; break;
                    case '9': state = 107; break;
                    case 'j': state = 26; break;
                    case 'N': state = 104; break;
                    case '6': state = 66; break;
                    case 'd': state = 70; break;
                    case '5': state = 114; break;
                    case 'H': state = 85; break;
                    default: return std::find(finalNodes.begin(), finalNodes.end(), state) != finalNodes.end();
                }
                break;
            case 83: 
                switch(letter) {
                    case 'O': state = 81; break;
                    case 'E': state = 98; break;
                    case 'P': state = 59; break;
                    case 'c': state = 108; break;
                    case 'G': state = 103; break;
                    case 'u': state = 105; break;
                    case '8': state = 65; break;
                    case '0': state = 69; break;
                    case 'p': state = 95; break;
                    case 'x': state = 88; break;
                    case 'l': state = 97; break;
                    case 'g': state = 73; break;
                    case 'e': state = 106; break;
                    case 'a': state = 75; break;
                    case 'U': state = 71; break;
                    case '4': state = 77; break;
                    case 'S': state = 45; break;
                    case 'J': state = 60; break;
                    case '2': state = 67; break;
                    case 'L': state = 99; break;
                    case 'D': state = 27; break;
                    case '6': state = 66; break;
                    case 'A': state = 102; break;
                    case '7': state = 111; break;
                    case 'v': state = 90; break;
                    case '1': state = 79; break;
                    case 'h': state = 24; break;
                    case 'f': state = 76; break;
                    case 'q': state = 91; break;
                    case 's': state = 28; break;
                    case '_': state = 72; break;
                    case 'K': state = 101; break;
                    case 'I': state = 63; break;
                    case 'X': state = 64; break;
                    case 'Q': state = 100; break;
                    case 'T': state = 110; break;
                    case 'C': state = 80; break;
                    case '3': state = 96; break;
                    case 'Z': state = 89; break;
                    case 'z': state = 94; break;
                    case '5': state = 114; break;
                    case 'M': state = 113; break;
                    case 'j': state = 26; break;
                    case 'V': state = 25; break;
                    case 'y': state = 84; break;
                    case 'k': state = 83; break;
                    case 'R': state = 29; break;
                    case 'W': state = 74; break;
                    case 'b': state = 61; break;
                    case 'i': state = 112; break;
                    case 'n': state = 86; break;
                    case '9': state = 107; break;
                    case 'm': state = 92; break;
                    case 'r': state = 93; break;
                    case 't': state = 78; break;
                    case 'N': state = 104; break;
                    case 'B': state = 62; break;
                    case 'd': state = 70; break;
                    case 'o': state = 109; break;
                    case 'H': state = 85; break;
                    case 'Y': state = 115; break;
                    case 'w': state = 68; break;
                    case 'F': state = 82; break;
                    default: return std::find(finalNodes.begin(), finalNodes.end(), state) != finalNodes.end();
                }
                break;
            case 84: 
                switch(letter) {
                    case '1': state = 79; break;
                    case 'E': state = 98; break;
                    case '3': state = 96; break;
                    case 'O': state = 81; break;
                    case 'r': state = 93; break;
                    case 'u': state = 105; break;
                    case 'G': state = 103; break;
                    case 'c': state = 108; break;
                    case 'l': state = 97; break;
                    case 'g': state = 73; break;
                    case 'U': state = 71; break;
                    case 'P': state = 59; break;
                    case 'x': state = 88; break;
                    case '8': state = 65; break;
                    case '4': state = 77; break;
                    case 'I': state = 63; break;
                    case 's': state = 28; break;
                    case 'R': state = 29; break;
                    case 'p': state = 95; break;
                    case '0': state = 69; break;
                    case '_': state = 72; break;
                    case 'a': state = 75; break;
                    case 'J': state = 60; break;
                    case 'S': state = 45; break;
                    case 'A': state = 102; break;
                    case '6': state = 66; break;
                    case 'F': state = 82; break;
                    case 'L': state = 99; break;
                    case 'm': state = 92; break;
                    case '7': state = 111; break;
                    case 'q': state = 91; break;
                    case 'e': state = 106; break;
                    case 'f': state = 76; break;
                    case 'v': state = 90; break;
                    case 'Z': state = 89; break;
                    case 'o': state = 109; break;
                    case 'i': state = 112; break;
                    case '9': state = 107; break;
                    case 'z': state = 94; break;
                    case 'M': state = 113; break;
                    case 'H': state = 85; break;
                    case 'C': state = 80; break;
                    case 'h': state = 24; break;
                    case '2': state = 67; break;
                    case 'D': state = 27; break;
                    case 'V': state = 25; break;
                    case 'y': state = 84; break;
                    case 'Q': state = 100; break;
                    case 'W': state = 74; break;
                    case 'j': state = 26; break;
                    case 'T': state = 110; break;
                    case 'B': state = 62; break;
                    case 't': state = 78; break;
                    case 'N': state = 104; break;
                    case 'b': state = 61; break;
                    case 'n': state = 86; break;
                    case 'k': state = 83; break;
                    case 'X': state = 64; break;
                    case 'w': state = 68; break;
                    case 'K': state = 101; break;
                    case 'd': state = 70; break;
                    case '5': state = 114; break;
                    case 'Y': state = 115; break;
                    default: return std::find(finalNodes.begin(), finalNodes.end(), state) != finalNodes.end();
                }
                break;
            case 85: 
                switch(letter) {
                    case '3': state = 96; break;
                    case '8': state = 65; break;
                    case 'I': state = 63; break;
                    case 'u': state = 105; break;
                    case '1': state = 79; break;
                    case 'G': state = 103; break;
                    case 'g': state = 73; break;
                    case 'l': state = 97; break;
                    case 'E': state = 98; break;
                    case 'c': state = 108; break;
                    case 'a': state = 75; break;
                    case 'x': state = 88; break;
                    case 'P': state = 59; break;
                    case 'R': state = 29; break;
                    case 'U': state = 71; break;
                    case '0': state = 69; break;
                    case 'p': state = 95; break;
                    case 'r': state = 93; break;
                    case '4': state = 77; break;
                    case '_': state = 72; break;
                    case 'J': state = 60; break;
                    case 'S': state = 45; break;
                    case 'D': state = 27; break;
                    case 'M': state = 113; break;
                    case 'W': state = 74; break;
                    case 'F': state = 82; break;
                    case 'o': state = 109; break;
                    case 'i': state = 112; break;
                    case 'q': state = 91; break;
                    case 'Z': state = 89; break;
                    case 'e': state = 106; break;
                    case '7': state = 111; break;
                    case 'O': state = 81; break;
                    case 'Q': state = 100; break;
                    case 'V': state = 25; break;
                    case 'v': state = 90; break;
                    case 'K': state = 101; break;
                    case 'b': state = 61; break;
                    case '9': state = 107; break;
                    case 'z': state = 94; break;
                    case 'C': state = 80; break;
                    case 'A': state = 102; break;
                    case 'L': state = 99; break;
                    case 't': state = 78; break;
                    case 's': state = 28; break;
                    case 'm': state = 92; break;
                    case 'j': state = 26; break;
                    case 'k': state = 83; break;
                    case 'X': state = 64; break;
                    case 'd': state = 70; break;
                    case 'B': state = 62; break;
                    case 'w': state = 68; break;
                    case 'h': state = 24; break;
                    case 'f': state = 76; break;
                    case 'y': state = 84; break;
                    case 'N': state = 104; break;
                    case 'T': state = 110; break;
                    case 'n': state = 86; break;
                    case 'Y': state = 115; break;
                    case '6': state = 66; break;
                    case 'H': state = 85; break;
                    case '5': state = 114; break;
                    case '2': state = 67; break;
                    default: return std::find(finalNodes.begin(), finalNodes.end(), state) != finalNodes.end();
                }
                break;
            case 86: 
                switch(letter) {
                    case '3': state = 96; break;
                    case 'c': state = 108; break;
                    case 'E': state = 98; break;
                    case 'u': state = 105; break;
                    case '8': state = 65; break;
                    case 'R': state = 29; break;
                    case '4': state = 77; break;
                    case 'g': state = 73; break;
                    case 'l': state = 97; break;
                    case 'O': state = 81; break;
                    case 'U': state = 71; break;
                    case 'p': state = 95; break;
                    case '0': state = 69; break;
                    case '1': state = 79; break;
                    case 'a': state = 75; break;
                    case 'I': state = 63; break;
                    case 'P': state = 59; break;
                    case 'x': state = 88; break;
                    case 'r': state = 93; break;
                    case 'J': state = 60; break;
                    case 'S': state = 45; break;
                    case 'G': state = 103; break;
                    case 'F': state = 82; break;
                    case 'D': state = 27; break;
                    case 'M': state = 113; break;
                    case 'L': state = 99; break;
                    case '7': state = 111; break;
                    case 'q': state = 91; break;
                    case 'v': state = 90; break;
                    case 'z': state = 94; break;
                    case 't': state = 78; break;
                    case '_': state = 72; break;
                    case 'w': state = 68; break;
                    case 'o': state = 109; break;
                    case 'i': state = 112; break;
                    case 'H': state = 85; break;
                    case 'A': state = 102; break;
                    case 's': state = 28; break;
                    case 'X': state = 64; break;
                    case 'm': state = 92; break;
                    case '2': state = 67; break;
                    case 'h': state = 24; break;
                    case 'Q': state = 100; break;
                    case 'k': state = 83; break;
                    case 'j': state = 26; break;
                    case 'V': state = 25; break;
                    case '5': state = 114; break;
                    case 'W': state = 74; break;
                    case 'n': state = 86; break;
                    case 'f': state = 76; break;
                    case '9': state = 107; break;
                    case 'C': state = 80; break;
                    case 'N': state = 104; break;
                    case 'T': state = 110; break;
                    case '6': state = 66; break;
                    case 'Z': state = 89; break;
                    case 'd': state = 70; break;
                    case 'e': state = 106; break;
                    case 'y': state = 84; break;
                    case 'B': state = 62; break;
                    case 'b': state = 61; break;
                    case 'Y': state = 115; break;
                    case 'K': state = 101; break;
                    default: return std::find(finalNodes.begin(), finalNodes.end(), state) != finalNodes.end();
                }
                break;
            case 87: 
                switch(letter) {
                    case '3': state = 96; break;
                    case 'r': state = 93; break;
                    case 'u': state = 105; break;
                    case 'D': state = 27; break;
                    case '1': state = 79; break;
                    case 'l': state = 97; break;
                    case 'g': state = 73; break;
                    case 'U': state = 71; break;
                    case 'P': state = 59; break;
                    case 'x': state = 88; break;
                    case '8': state = 65; break;
                    case '4': state = 77; break;
                    case 'I': state = 63; break;
                    case 'R': state = 29; break;
                    case 'p': state = 95; break;
                    case '0': state = 69; break;
                    case '_': state = 72; break;
                    case 'a': state = 75; break;
                    case 'E': state = 98; break;
                    case 'J': state = 60; break;
                    case 'G': state = 103; break;
                    case 'S': state = 45; break;
                    case 'c': state = 108; break;
                    case 'W': state = 74; break;
                    case 'F': state = 82; break;
                    case 'M': state = 113; break;
                    case 'm': state = 92; break;
                    case 'O': state = 81; break;
                    case 'Z': state = 89; break;
                    case 'q': state = 91; break;
                    case 'v': state = 90; break;
                    case 'V': state = 25; break;
                    case 'w': state = 68; break;
                    case 'b': state = 61; break;
                    case 'K': state = 101; break;
                    case 'i': state = 112; break;
                    case 'Q': state = 100; break;
                    case '9': state = 107; break;
                    case 'o': state = 109; break;
                    case 'T': state = 110; break;
                    case 'z': state = 94; break;
                    case 'A': state = 102; break;
                    case 'H': state = 85; break;
                    case 'h': state = 24; break;
                    case 'N': state = 104; break;
                    case 't': state = 78; break;
                    case 'X': state = 64; break;
                    case 'k': state = 83; break;
                    case '7': state = 111; break;
                    case 'L': state = 99; break;
                    case 'n': state = 86; break;
                    case 'j': state = 26; break;
                    case 's': state = 28; break;
                    case 'C': state = 80; break;
                    case 'B': state = 62; break;
                    case 'f': state = 76; break;
                    case 'Y': state = 115; break;
                    case 'd': state = 70; break;
                    case 'e': state = 106; break;
                    case '6': state = 66; break;
                    case 'y': state = 84; break;
                    case '5': state = 114; break;
                    case '2': state = 67; break;
                    default: return std::find(finalNodes.begin(), finalNodes.end(), state) != finalNodes.end();
                }
                break;
            case 88: 
                switch(letter) {
                    case 'N': state = 104; break;
                    case '3': state = 96; break;
                    case 'M': state = 113; break;
                    case 's': state = 28; break;
                    case 'X': state = 64; break;
                    case '6': state = 66; break;
                    case 'm': state = 92; break;
                    case 'j': state = 26; break;
                    case 'L': state = 99; break;
                    case 'g': state = 73; break;
                    case 'r': state = 93; break;
                    case 'B': state = 62; break;
                    case 'S': state = 45; break;
                    case 'P': state = 59; break;
                    case 'A': state = 102; break;
                    case '9': state = 107; break;
                    case 'Q': state = 100; break;
                    case '4': state = 77; break;
                    case 'c': state = 108; break;
                    case '5': state = 114; break;
                    case 'I': state = 63; break;
                    case 'H': state = 85; break;
                    case 'p': state = 95; break;
                    case '_': state = 72; break;
                    case 'J': state = 60; break;
                    case 't': state = 78; break;
                    case 'E': state = 98; break;
                    case 'G': state = 103; break;
                    case 'T': state = 110; break;
                    case 'C': state = 80; break;
                    case 'u': state = 105; break;
                    case 'l': state = 97; break;
                    case 'U': state = 71; break;
                    case '7': state = 111; break;
                    case 'f': state = 76; break;
                    case '2': state = 67; break;
                    case 'e': state = 106; break;
                    case 'V': state = 25; break;
                    case 'R': state = 29; break;
                    case '8': state = 65; break;
                    case 'Z': state = 89; break;
                    case 'q': state = 91; break;
                    case 'h': state = 24; break;
                    case 'i': state = 112; break;
                    case 'k': state = 83; break;
                    case '1': state = 79; break;
                    case 'x': state = 88; break;
                    case 'b': state = 61; break;
                    case 'z': state = 94; break;
                    case 'a': state = 75; break;
                    case 'F': state = 82; break;
                    case 'Y': state = 115; break;
                    case 'y': state = 84; break;
                    case 'n': state = 86; break;
                    case 'd': state = 70; break;
                    case 'O': state = 81; break;
                    case 'o': state = 109; break;
                    case '0': state = 69; break;
                    case 'v': state = 90; break;
                    case 'W': state = 74; break;
                    case 'D': state = 27; break;
                    case 'w': state = 68; break;
                    case 'K': state = 101; break;
                    default: return std::find(finalNodes.begin(), finalNodes.end(), state) != finalNodes.end();
                }
                break;
            case 89: 
                switch(letter) {
                    case 'e': state = 106; break;
                    case 'E': state = 98; break;
                    case '1': state = 79; break;
                    case 'U': state = 71; break;
                    case 't': state = 78; break;
                    case 'M': state = 113; break;
                    case 'X': state = 64; break;
                    case 'G': state = 103; break;
                    case 'j': state = 26; break;
                    case 'S': state = 45; break;
                    case 'v': state = 90; break;
                    case 'h': state = 24; break;
                    case 'c': state = 108; break;
                    case '9': state = 107; break;
                    case '_': state = 72; break;
                    case 's': state = 28; break;
                    case 'N': state = 104; break;
                    case 'P': state = 59; break;
                    case 'Q': state = 100; break;
                    case 'R': state = 29; break;
                    case 'g': state = 73; break;
                    case '3': state = 96; break;
                    case 'I': state = 63; break;
                    case '5': state = 114; break;
                    case '4': state = 77; break;
                    case 'A': state = 102; break;
                    case 'F': state = 82; break;
                    case 'm': state = 92; break;
                    case '8': state = 65; break;
                    case 'z': state = 94; break;
                    case 'H': state = 85; break;
                    case 'r': state = 93; break;
                    case 'V': state = 25; break;
                    case 'x': state = 88; break;
                    case 'f': state = 76; break;
                    case 'q': state = 91; break;
                    case 'L': state = 99; break;
                    case 'l': state = 97; break;
                    case '6': state = 66; break;
                    case 'Y': state = 115; break;
                    case 'W': state = 74; break;
                    case 'B': state = 62; break;
                    case 'a': state = 75; break;
                    case 'Z': state = 89; break;
                    case 'w': state = 68; break;
                    case 'J': state = 60; break;
                    case '0': state = 69; break;
                    case 'i': state = 112; break;
                    case 'y': state = 84; break;
                    case 'n': state = 86; break;
                    case 'T': state = 110; break;
                    case '7': state = 111; break;
                    case 'd': state = 70; break;
                    case 'u': state = 105; break;
                    case '2': state = 67; break;
                    case 'C': state = 80; break;
                    case 'o': state = 109; break;
                    case 'D': state = 27; break;
                    case 'p': state = 95; break;
                    case 'b': state = 61; break;
                    case 'k': state = 83; break;
                    case 'K': state = 101; break;
                    case 'O': state = 81; break;
                    default: return std::find(finalNodes.begin(), finalNodes.end(), state) != finalNodes.end();
                }
                break;
            case 90: 
                switch(letter) {
                    case 'e': state = 106; break;
                    case 'E': state = 98; break;
                    case 'C': state = 80; break;
                    case 'v': state = 90; break;
                    case 'J': state = 60; break;
                    case 'N': state = 104; break;
                    case 'Y': state = 115; break;
                    case 'h': state = 24; break;
                    case 'X': state = 64; break;
                    case 'M': state = 113; break;
                    case 'q': state = 91; break;
                    case 'I': state = 63; break;
                    case '8': state = 65; break;
                    case 'j': state = 26; break;
                    case 'g': state = 73; break;
                    case 'L': state = 99; break;
                    case '3': state = 96; break;
                    case '9': state = 107; break;
                    case '4': state = 77; break;
                    case 'Q': state = 100; break;
                    case 'B': state = 62; break;
                    case 't': state = 78; break;
                    case 'S': state = 45; break;
                    case 'd': state = 70; break;
                    case 'p': state = 95; break;
                    case 'R': state = 29; break;
                    case 'A': state = 102; break;
                    case '1': state = 79; break;
                    case 'G': state = 103; break;
                    case '_': state = 72; break;
                    case 'm': state = 92; break;
                    case 'z': state = 94; break;
                    case 'f': state = 76; break;
                    case '0': state = 69; break;
                    case 's': state = 28; break;
                    case 'l': state = 97; break;
                    case 'o': state = 109; break;
                    case 'c': state = 108; break;
                    case '6': state = 66; break;
                    case 'n': state = 86; break;
                    case '2': state = 67; break;
                    case 'w': state = 68; break;
                    case 'x': state = 88; break;
                    case 'H': state = 85; break;
                    case 'K': state = 101; break;
                    case 'r': state = 93; break;
                    case 'Z': state = 89; break;
                    case 'P': state = 59; break;
                    case 'V': state = 25; break;
                    case '7': state = 111; break;
                    case 'U': state = 71; break;
                    case 'a': state = 75; break;
                    case 'T': state = 110; break;
                    case 'i': state = 112; break;
                    case 'y': state = 84; break;
                    case 'u': state = 105; break;
                    case 'D': state = 27; break;
                    case 'W': state = 74; break;
                    case 'F': state = 82; break;
                    case 'b': state = 61; break;
                    case 'k': state = 83; break;
                    case 'O': state = 81; break;
                    case '5': state = 114; break;
                    default: return std::find(finalNodes.begin(), finalNodes.end(), state) != finalNodes.end();
                }
                break;
            case 91: 
                switch(letter) {
                    case 'E': state = 98; break;
                    case '1': state = 79; break;
                    case 'v': state = 90; break;
                    case 'w': state = 68; break;
                    case 'U': state = 71; break;
                    case 'z': state = 94; break;
                    case 'm': state = 92; break;
                    case 't': state = 78; break;
                    case 'S': state = 45; break;
                    case 'n': state = 86; break;
                    case 'M': state = 113; break;
                    case 'X': state = 64; break;
                    case 'Y': state = 115; break;
                    case 'C': state = 80; break;
                    case 'N': state = 104; break;
                    case '8': state = 65; break;
                    case 'j': state = 26; break;
                    case 'f': state = 76; break;
                    case 'T': state = 110; break;
                    case 's': state = 28; break;
                    case '3': state = 96; break;
                    case 'P': state = 59; break;
                    case 'c': state = 108; break;
                    case 'Q': state = 100; break;
                    case '9': state = 107; break;
                    case '_': state = 72; break;
                    case 'I': state = 63; break;
                    case 'g': state = 73; break;
                    case 'R': state = 29; break;
                    case 'K': state = 101; break;
                    case 'A': state = 102; break;
                    case 'B': state = 62; break;
                    case 'e': state = 106; break;
                    case 'p': state = 95; break;
                    case '4': state = 77; break;
                    case 'G': state = 103; break;
                    case 'Z': state = 89; break;
                    case 'u': state = 105; break;
                    case 'V': state = 25; break;
                    case 'r': state = 93; break;
                    case '5': state = 114; break;
                    case '6': state = 66; break;
                    case 'H': state = 85; break;
                    case '0': state = 69; break;
                    case 'd': state = 70; break;
                    case 'b': state = 61; break;
                    case 'h': state = 24; break;
                    case 'o': state = 109; break;
                    case 'F': state = 82; break;
                    case 'i': state = 112; break;
                    case 'y': state = 84; break;
                    case 'J': state = 60; break;
                    case 'x': state = 88; break;
                    case '7': state = 111; break;
                    case 'O': state = 81; break;
                    case 'l': state = 97; break;
                    case 'a': state = 75; break;
                    case '2': state = 67; break;
                    case 'D': state = 27; break;
                    case 'q': state = 91; break;
                    case 'k': state = 83; break;
                    case 'L': state = 99; break;
                    case 'W': state = 74; break;
                    default: return std::find(finalNodes.begin(), finalNodes.end(), state) != finalNodes.end();
                }
                break;
            case 92: 
                switch(letter) {
                    case 'f': state = 76; break;
                    case 'E': state = 98; break;
                    case 'z': state = 94; break;
                    case 'v': state = 90; break;
                    case '9': state = 107; break;
                    case '1': state = 79; break;
                    case 'S': state = 45; break;
                    case '3': state = 96; break;
                    case 'n': state = 86; break;
                    case 'M': state = 113; break;
                    case 'X': state = 64; break;
                    case '8': state = 65; break;
                    case 'j': state = 26; break;
                    case 'o': state = 109; break;
                    case 'c': state = 108; break;
                    case '4': state = 77; break;
                    case '_': state = 72; break;
                    case 't': state = 78; break;
                    case 'U': state = 71; break;
                    case 'C': state = 80; break;
                    case 'P': state = 59; break;
                    case 'p': state = 95; break;
                    case 'I': state = 63; break;
                    case 's': state = 28; break;
                    case 'g': state = 73; break;
                    case 'd': state = 70; break;
                    case 'G': state = 103; break;
                    case '5': state = 114; break;
                    case 'K': state = 101; break;
                    case 'Q': state = 100; break;
                    case 'A': state = 102; break;
                    case 'e': state = 106; break;
                    case 'R': state = 29; break;
                    case 'h': state = 24; break;
                    case 'u': state = 105; break;
                    case 'V': state = 25; break;
                    case 'H': state = 85; break;
                    case 'Y': state = 115; break;
                    case 'B': state = 62; break;
                    case 'k': state = 83; break;
                    case 'b': state = 61; break;
                    case 'w': state = 68; break;
                    case 'J': state = 60; break;
                    case 'r': state = 93; break;
                    case 'm': state = 92; break;
                    case '7': state = 111; break;
                    case 'q': state = 91; break;
                    case '0': state = 69; break;
                    case 'Z': state = 89; break;
                    case 'D': state = 27; break;
                    case 'F': state = 82; break;
                    case 'y': state = 84; break;
                    case 'T': state = 110; break;
                    case 'x': state = 88; break;
                    case '6': state = 66; break;
                    case 'l': state = 97; break;
                    case 'i': state = 112; break;
                    case 'a': state = 75; break;
                    case 'N': state = 104; break;
                    case 'W': state = 74; break;
                    case '2': state = 67; break;
                    case 'O': state = 81; break;
                    case 'L': state = 99; break;
                    default: return std::find(finalNodes.begin(), finalNodes.end(), state) != finalNodes.end();
                }
                break;
            case 93: 
                switch(letter) {
                    case 'E': state = 98; break;
                    case 'z': state = 94; break;
                    case 'h': state = 24; break;
                    case '1': state = 79; break;
                    case 'f': state = 76; break;
                    case 'v': state = 90; break;
                    case 'W': state = 74; break;
                    case '8': state = 65; break;
                    case 'L': state = 99; break;
                    case 'S': state = 45; break;
                    case '3': state = 96; break;
                    case 'n': state = 86; break;
                    case 'M': state = 113; break;
                    case 'u': state = 105; break;
                    case 'j': state = 26; break;
                    case 'o': state = 109; break;
                    case '_': state = 72; break;
                    case 'Q': state = 100; break;
                    case 'G': state = 103; break;
                    case 't': state = 78; break;
                    case 'P': state = 59; break;
                    case '9': state = 107; break;
                    case 'c': state = 108; break;
                    case 'C': state = 80; break;
                    case 'p': state = 95; break;
                    case 's': state = 28; break;
                    case 'I': state = 63; break;
                    case '4': state = 77; break;
                    case 'g': state = 73; break;
                    case 'R': state = 29; break;
                    case 'H': state = 85; break;
                    case 'U': state = 71; break;
                    case 'B': state = 62; break;
                    case 'e': state = 106; break;
                    case 'X': state = 64; break;
                    case 'm': state = 92; break;
                    case 'd': state = 70; break;
                    case 'k': state = 83; break;
                    case 'y': state = 84; break;
                    case 'b': state = 61; break;
                    case '0': state = 69; break;
                    case '6': state = 66; break;
                    case 'T': state = 110; break;
                    case 'V': state = 25; break;
                    case 'K': state = 101; break;
                    case 'F': state = 82; break;
                    case 'Z': state = 89; break;
                    case 'w': state = 68; break;
                    case 'J': state = 60; break;
                    case 'A': state = 102; break;
                    case 'Y': state = 115; break;
                    case 'q': state = 91; break;
                    case 'r': state = 93; break;
                    case 'a': state = 75; break;
                    case 'i': state = 112; break;
                    case 'x': state = 88; break;
                    case '7': state = 111; break;
                    case 'O': state = 81; break;
                    case 'l': state = 97; break;
                    case 'N': state = 104; break;
                    case '2': state = 67; break;
                    case 'D': state = 27; break;
                    case '5': state = 114; break;
                    default: return std::find(finalNodes.begin(), finalNodes.end(), state) != finalNodes.end();
                }
                break;
            case 94: 
                switch(letter) {
                    case 'K': state = 101; break;
                    case '1': state = 79; break;
                    case 'U': state = 71; break;
                    case 'e': state = 106; break;
                    case '3': state = 96; break;
                    case '8': state = 65; break;
                    case 'S': state = 45; break;
                    case 'a': state = 75; break;
                    case 'z': state = 94; break;
                    case 'o': state = 109; break;
                    case '_': state = 72; break;
                    case 'W': state = 74; break;
                    case 'Q': state = 100; break;
                    case '9': state = 107; break;
                    case 'I': state = 63; break;
                    case 'v': state = 90; break;
                    case 'A': state = 102; break;
                    case 'C': state = 80; break;
                    case '4': state = 77; break;
                    case 't': state = 78; break;
                    case 'P': state = 59; break;
                    case 's': state = 28; break;
                    case 'm': state = 92; break;
                    case 'd': state = 70; break;
                    case 'g': state = 73; break;
                    case 'c': state = 108; break;
                    case 'R': state = 29; break;
                    case 'M': state = 113; break;
                    case 'X': state = 64; break;
                    case '5': state = 114; break;
                    case 'k': state = 83; break;
                    case 'n': state = 86; break;
                    case 'f': state = 76; break;
                    case 'p': state = 95; break;
                    case 'Z': state = 89; break;
                    case 'B': state = 62; break;
                    case 'j': state = 26; break;
                    case 'G': state = 103; break;
                    case '0': state = 69; break;
                    case 'H': state = 85; break;
                    case 'E': state = 98; break;
                    case 'h': state = 24; break;
                    case 'r': state = 93; break;
                    case 'T': state = 110; break;
                    case 'N': state = 104; break;
                    case 'J': state = 60; break;
                    case 'w': state = 68; break;
                    case 'b': state = 61; break;
                    case 'F': state = 82; break;
                    case 'q': state = 91; break;
                    case 'Y': state = 115; break;
                    case 'V': state = 25; break;
                    case 'u': state = 105; break;
                    case 'y': state = 84; break;
                    case 'x': state = 88; break;
                    case '7': state = 111; break;
                    case 'O': state = 81; break;
                    case 'l': state = 97; break;
                    case '6': state = 66; break;
                    case 'i': state = 112; break;
                    case '2': state = 67; break;
                    case 'D': state = 27; break;
                    case 'L': state = 99; break;
                    default: return std::find(finalNodes.begin(), finalNodes.end(), state) != finalNodes.end();
                }
                break;
            case 95: 
                switch(letter) {
                    case 'e': state = 106; break;
                    case 'E': state = 98; break;
                    case 'q': state = 91; break;
                    case '1': state = 79; break;
                    case 'J': state = 60; break;
                    case 't': state = 78; break;
                    case '3': state = 96; break;
                    case '5': state = 114; break;
                    case 'S': state = 45; break;
                    case '_': state = 72; break;
                    case 'k': state = 83; break;
                    case 'z': state = 94; break;
                    case 'I': state = 63; break;
                    case 'o': state = 109; break;
                    case 'c': state = 108; break;
                    case '9': state = 107; break;
                    case 'Q': state = 100; break;
                    case '4': state = 77; break;
                    case 'W': state = 74; break;
                    case 'd': state = 70; break;
                    case 'P': state = 59; break;
                    case 'p': state = 95; break;
                    case 'C': state = 80; break;
                    case 'v': state = 90; break;
                    case 'g': state = 73; break;
                    case 'G': state = 103; break;
                    case 'h': state = 24; break;
                    case 'M': state = 113; break;
                    case 'X': state = 64; break;
                    case 's': state = 28; break;
                    case 'A': state = 102; break;
                    case 'R': state = 29; break;
                    case 'm': state = 92; break;
                    case '8': state = 65; break;
                    case 'U': state = 71; break;
                    case 'n': state = 86; break;
                    case 'f': state = 76; break;
                    case 'H': state = 85; break;
                    case 'N': state = 104; break;
                    case 'l': state = 97; break;
                    case 'u': state = 105; break;
                    case 'F': state = 82; break;
                    case '2': state = 67; break;
                    case 'Z': state = 89; break;
                    case 'b': state = 61; break;
                    case 'y': state = 84; break;
                    case 'j': state = 26; break;
                    case 'B': state = 62; break;
                    case 'V': state = 25; break;
                    case 'Y': state = 115; break;
                    case 'T': state = 110; break;
                    case 'D': state = 27; break;
                    case 'K': state = 101; break;
                    case '0': state = 69; break;
                    case 'L': state = 99; break;
                    case 'r': state = 93; break;
                    case '6': state = 66; break;
                    case 'i': state = 112; break;
                    case 'a': state = 75; break;
                    case 'O': state = 81; break;
                    case 'w': state = 68; break;
                    case 'x': state = 88; break;
                    case '7': state = 111; break;
                    default: return std::find(finalNodes.begin(), finalNodes.end(), state) != finalNodes.end();
                }
                break;
            case 96: 
                switch(letter) {
                    case 'E': state = 98; break;
                    case '9': state = 107; break;
                    case 'z': state = 94; break;
                    case 'N': state = 104; break;
                    case '1': state = 79; break;
                    case 'W': state = 74; break;
                    case '_': state = 72; break;
                    case 'M': state = 113; break;
                    case 'e': state = 106; break;
                    case 'j': state = 26; break;
                    case 't': state = 78; break;
                    case 'v': state = 90; break;
                    case 'X': state = 64; break;
                    case 'G': state = 103; break;
                    case 'V': state = 25; break;
                    case '3': state = 96; break;
                    case '5': state = 114; break;
                    case 'S': state = 45; break;
                    case 'C': state = 80; break;
                    case 'J': state = 60; break;
                    case 'w': state = 68; break;
                    case 'g': state = 73; break;
                    case 'c': state = 108; break;
                    case 'H': state = 85; break;
                    case 'i': state = 112; break;
                    case 'I': state = 63; break;
                    case 'K': state = 101; break;
                    case 'o': state = 109; break;
                    case 'p': state = 95; break;
                    case 'q': state = 91; break;
                    case 'R': state = 29; break;
                    case 'O': state = 81; break;
                    case 'P': state = 59; break;
                    case '4': state = 77; break;
                    case 'F': state = 82; break;
                    case 'k': state = 83; break;
                    case 'n': state = 86; break;
                    case 'r': state = 93; break;
                    case 'Q': state = 100; break;
                    case 'f': state = 76; break;
                    case 'T': state = 110; break;
                    case 'Z': state = 89; break;
                    case 'Y': state = 115; break;
                    case 'y': state = 84; break;
                    case 'h': state = 24; break;
                    case 'm': state = 92; break;
                    case 'D': state = 27; break;
                    case 's': state = 28; break;
                    case 'd': state = 70; break;
                    case '2': state = 67; break;
                    case '8': state = 65; break;
                    case 'l': state = 97; break;
                    case 'B': state = 62; break;
                    case '0': state = 69; break;
                    case 'L': state = 99; break;
                    case 'u': state = 105; break;
                    case 'b': state = 61; break;
                    case '6': state = 66; break;
                    case 'A': state = 102; break;
                    case 'x': state = 88; break;
                    case '7': state = 111; break;
                    case 'U': state = 71; break;
                    case 'a': state = 75; break;
                    default: return std::find(finalNodes.begin(), finalNodes.end(), state) != finalNodes.end();
                }
                break;
            case 97: 
                switch(letter) {
                    case 'E': state = 98; break;
                    case 'h': state = 24; break;
                    case 'z': state = 94; break;
                    case 'N': state = 104; break;
                    case '1': state = 79; break;
                    case 'W': state = 74; break;
                    case 'w': state = 68; break;
                    case 'J': state = 60; break;
                    case 'F': state = 82; break;
                    case '_': state = 72; break;
                    case 'S': state = 45; break;
                    case 'V': state = 25; break;
                    case 't': state = 78; break;
                    case 'k': state = 83; break;
                    case '5': state = 114; break;
                    case 'p': state = 95; break;
                    case 'Q': state = 100; break;
                    case 'v': state = 90; break;
                    case 'G': state = 103; break;
                    case 'j': state = 26; break;
                    case '7': state = 111; break;
                    case 'o': state = 109; break;
                    case '4': state = 77; break;
                    case 'd': state = 70; break;
                    case 'g': state = 73; break;
                    case 'C': state = 80; break;
                    case 'Y': state = 115; break;
                    case 'c': state = 108; break;
                    case 'i': state = 112; break;
                    case 'I': state = 63; break;
                    case 'H': state = 85; break;
                    case 'X': state = 64; break;
                    case 'K': state = 101; break;
                    case 'P': state = 59; break;
                    case '9': state = 107; break;
                    case 'M': state = 113; break;
                    case 'f': state = 76; break;
                    case 'm': state = 92; break;
                    case 'b': state = 61; break;
                    case '3': state = 96; break;
                    case 's': state = 28; break;
                    case 'n': state = 86; break;
                    case 'l': state = 97; break;
                    case '0': state = 69; break;
                    case 'a': state = 75; break;
                    case 'Z': state = 89; break;
                    case 'O': state = 81; break;
                    case 'u': state = 105; break;
                    case 'y': state = 84; break;
                    case 'D': state = 27; break;
                    case 'B': state = 62; break;
                    case 'q': state = 91; break;
                    case 'R': state = 29; break;
                    case 'e': state = 106; break;
                    case 'T': state = 110; break;
                    case '2': state = 67; break;
                    case 'r': state = 93; break;
                    case '6': state = 66; break;
                    case 'x': state = 88; break;
                    case '8': state = 65; break;
                    case 'A': state = 102; break;
                    case 'L': state = 99; break;
                    case 'U': state = 71; break;
                    default: return std::find(finalNodes.begin(), finalNodes.end(), state) != finalNodes.end();
                }
                break;
            case 98: 
                switch(letter) {
                    case 'E': state = 98; break;
                    case '9': state = 107; break;
                    case 'z': state = 94; break;
                    case 'N': state = 104; break;
                    case 'h': state = 24; break;
                    case '1': state = 79; break;
                    case 'O': state = 81; break;
                    case 'W': state = 74; break;
                    case 'w': state = 68; break;
                    case 'G': state = 103; break;
                    case '_': state = 72; break;
                    case '7': state = 111; break;
                    case 'k': state = 83; break;
                    case 't': state = 78; break;
                    case 'D': state = 27; break;
                    case 'I': state = 63; break;
                    case '5': state = 114; break;
                    case 'v': state = 90; break;
                    case 'j': state = 26; break;
                    case 'X': state = 64; break;
                    case '3': state = 96; break;
                    case 'C': state = 80; break;
                    case 'i': state = 112; break;
                    case 'H': state = 85; break;
                    case 'g': state = 73; break;
                    case 'o': state = 109; break;
                    case 'p': state = 95; break;
                    case '4': state = 77; break;
                    case 'Y': state = 115; break;
                    case 'c': state = 108; break;
                    case 'S': state = 45; break;
                    case 'P': state = 59; break;
                    case 'd': state = 70; break;
                    case 'Q': state = 100; break;
                    case 'M': state = 113; break;
                    case 'Z': state = 89; break;
                    case 'K': state = 101; break;
                    case 'e': state = 106; break;
                    case '0': state = 69; break;
                    case 'l': state = 97; break;
                    case '2': state = 67; break;
                    case 'y': state = 84; break;
                    case 'V': state = 25; break;
                    case 'm': state = 92; break;
                    case 'n': state = 86; break;
                    case 'B': state = 62; break;
                    case 's': state = 28; break;
                    case 'u': state = 105; break;
                    case 'f': state = 76; break;
                    case 'F': state = 82; break;
                    case 'q': state = 91; break;
                    case 'R': state = 29; break;
                    case 'J': state = 60; break;
                    case 'T': state = 110; break;
                    case 'A': state = 102; break;
                    case 'b': state = 61; break;
                    case 'a': state = 75; break;
                    case '6': state = 66; break;
                    case 'r': state = 93; break;
                    case '8': state = 65; break;
                    case 'x': state = 88; break;
                    case 'U': state = 71; break;
                    case 'L': state = 99; break;
                    default: return std::find(finalNodes.begin(), finalNodes.end(), state) != finalNodes.end();
                }
                break;
            case 99: 
                switch(letter) {
                    case '1': state = 79; break;
                    case 'N': state = 104; break;
                    case 'X': state = 64; break;
                    case 'G': state = 103; break;
                    case '5': state = 114; break;
                    case 't': state = 78; break;
                    case 'V': state = 25; break;
                    case 'z': state = 94; break;
                    case 'e': state = 106; break;
                    case 'I': state = 63; break;
                    case 'i': state = 112; break;
                    case 'j': state = 26; break;
                    case '3': state = 96; break;
                    case 'w': state = 68; break;
                    case 'Q': state = 100; break;
                    case 'p': state = 95; break;
                    case 'C': state = 80; break;
                    case '_': state = 72; break;
                    case 'o': state = 109; break;
                    case 'S': state = 45; break;
                    case 'L': state = 99; break;
                    case 'B': state = 62; break;
                    case 'P': state = 59; break;
                    case 'H': state = 85; break;
                    case 'Y': state = 115; break;
                    case 'c': state = 108; break;
                    case 'v': state = 90; break;
                    case '9': state = 107; break;
                    case 'F': state = 82; break;
                    case 'u': state = 105; break;
                    case 'm': state = 92; break;
                    case 'h': state = 24; break;
                    case 'l': state = 97; break;
                    case 'J': state = 60; break;
                    case 'r': state = 93; break;
                    case 'T': state = 110; break;
                    case 'W': state = 74; break;
                    case 'Z': state = 89; break;
                    case 'A': state = 102; break;
                    case '8': state = 65; break;
                    case 'q': state = 91; break;
                    case 'R': state = 29; break;
                    case '7': state = 111; break;
                    case 'k': state = 83; break;
                    case '2': state = 67; break;
                    case 'f': state = 76; break;
                    case '6': state = 66; break;
                    case '4': state = 77; break;
                    case 'x': state = 88; break;
                    case 'd': state = 70; break;
                    case 'D': state = 27; break;
                    case 'g': state = 73; break;
                    case 'K': state = 101; break;
                    case 's': state = 28; break;
                    case 'M': state = 113; break;
                    case 'a': state = 75; break;
                    case 'n': state = 86; break;
                    case '0': state = 69; break;
                    case 'O': state = 81; break;
                    case 'E': state = 98; break;
                    case 'y': state = 84; break;
                    case 'b': state = 61; break;
                    case 'U': state = 71; break;
                    default: return std::find(finalNodes.begin(), finalNodes.end(), state) != finalNodes.end();
                }
                break;
            case 100: 
                switch(letter) {
                    case 'e': state = 106; break;
                    case '1': state = 79; break;
                    case 'f': state = 76; break;
                    case 't': state = 78; break;
                    case 'X': state = 64; break;
                    case 'z': state = 94; break;
                    case 'a': state = 75; break;
                    case '9': state = 107; break;
                    case 'w': state = 68; break;
                    case 'K': state = 101; break;
                    case 'j': state = 26; break;
                    case 'p': state = 95; break;
                    case 'g': state = 73; break;
                    case 'v': state = 90; break;
                    case 's': state = 28; break;
                    case 'Q': state = 100; break;
                    case 'Y': state = 115; break;
                    case 'S': state = 45; break;
                    case '3': state = 96; break;
                    case 'H': state = 85; break;
                    case 'A': state = 102; break;
                    case 'o': state = 109; break;
                    case '_': state = 72; break;
                    case 'D': state = 27; break;
                    case 'd': state = 70; break;
                    case 'G': state = 103; break;
                    case 'V': state = 25; break;
                    case 'u': state = 105; break;
                    case 'I': state = 63; break;
                    case 'N': state = 104; break;
                    case 'T': state = 110; break;
                    case '4': state = 77; break;
                    case 'W': state = 74; break;
                    case 'q': state = 91; break;
                    case 'Z': state = 89; break;
                    case 'k': state = 83; break;
                    case '2': state = 67; break;
                    case 'r': state = 93; break;
                    case 'J': state = 60; break;
                    case '6': state = 66; break;
                    case 'U': state = 71; break;
                    case 'i': state = 112; break;
                    case 'E': state = 98; break;
                    case 'c': state = 108; break;
                    case 'h': state = 24; break;
                    case '8': state = 65; break;
                    case 'R': state = 29; break;
                    case 'l': state = 97; break;
                    case 'm': state = 92; break;
                    case '7': state = 111; break;
                    case 'F': state = 82; break;
                    case 'P': state = 59; break;
                    case 'x': state = 88; break;
                    case 'O': state = 81; break;
                    case 'B': state = 62; break;
                    case '5': state = 114; break;
                    case 'b': state = 61; break;
                    case '0': state = 69; break;
                    case 'n': state = 86; break;
                    case 'M': state = 113; break;
                    case 'C': state = 80; break;
                    case 'y': state = 84; break;
                    case 'L': state = 99; break;
                    default: return std::find(finalNodes.begin(), finalNodes.end(), state) != finalNodes.end();
                }
                break;
            case 101: 
                switch(letter) {
                    case 'E': state = 98; break;
                    case 'e': state = 106; break;
                    case 'N': state = 104; break;
                    case 't': state = 78; break;
                    case 'f': state = 76; break;
                    case 'X': state = 64; break;
                    case 'c': state = 108; break;
                    case 'I': state = 63; break;
                    case 'z': state = 94; break;
                    case 'a': state = 75; break;
                    case 'w': state = 68; break;
                    case 'D': state = 27; break;
                    case '5': state = 114; break;
                    case 'v': state = 90; break;
                    case 's': state = 28; break;
                    case 'g': state = 73; break;
                    case 'j': state = 26; break;
                    case '3': state = 96; break;
                    case 'Q': state = 100; break;
                    case '_': state = 72; break;
                    case 'B': state = 62; break;
                    case 'q': state = 91; break;
                    case 'C': state = 80; break;
                    case 'o': state = 109; break;
                    case 'G': state = 103; break;
                    case 'k': state = 83; break;
                    case 'V': state = 25; break;
                    case 'u': state = 105; break;
                    case '1': state = 79; break;
                    case 'h': state = 24; break;
                    case 'l': state = 97; break;
                    case 'p': state = 95; break;
                    case 'J': state = 60; break;
                    case 'r': state = 93; break;
                    case '6': state = 66; break;
                    case 'U': state = 71; break;
                    case '2': state = 67; break;
                    case 'R': state = 29; break;
                    case 'S': state = 45; break;
                    case 'Z': state = 89; break;
                    case 'A': state = 102; break;
                    case 'T': state = 110; break;
                    case 'i': state = 112; break;
                    case 'F': state = 82; break;
                    case '9': state = 107; break;
                    case 'H': state = 85; break;
                    case 'n': state = 86; break;
                    case 'x': state = 88; break;
                    case 'd': state = 70; break;
                    case 'M': state = 113; break;
                    case '4': state = 77; break;
                    case 'Y': state = 115; break;
                    case 'P': state = 59; break;
                    case '8': state = 65; break;
                    case '0': state = 69; break;
                    case 'L': state = 99; break;
                    case '7': state = 111; break;
                    case 'b': state = 61; break;
                    case 'K': state = 101; break;
                    case 'y': state = 84; break;
                    case 'm': state = 92; break;
                    case 'O': state = 81; break;
                    case 'W': state = 74; break;
                    default: return std::find(finalNodes.begin(), finalNodes.end(), state) != finalNodes.end();
                }
                break;
            case 102: 
                switch(letter) {
                    case 'e': state = 106; break;
                    case 'N': state = 104; break;
                    case '1': state = 79; break;
                    case 'f': state = 76; break;
                    case 't': state = 78; break;
                    case 'X': state = 64; break;
                    case 'j': state = 26; break;
                    case 'w': state = 68; break;
                    case 'p': state = 95; break;
                    case 'g': state = 73; break;
                    case 'v': state = 90; break;
                    case '5': state = 114; break;
                    case 'H': state = 85; break;
                    case 'Q': state = 100; break;
                    case 's': state = 28; break;
                    case 'S': state = 45; break;
                    case 'G': state = 103; break;
                    case '_': state = 72; break;
                    case 'm': state = 92; break;
                    case 'Y': state = 115; break;
                    case '6': state = 66; break;
                    case 'R': state = 29; break;
                    case 'i': state = 112; break;
                    case 'C': state = 80; break;
                    case '9': state = 107; break;
                    case 'V': state = 25; break;
                    case 'o': state = 109; break;
                    case '3': state = 96; break;
                    case 'q': state = 91; break;
                    case 'c': state = 108; break;
                    case 'I': state = 63; break;
                    case 'T': state = 110; break;
                    case 'W': state = 74; break;
                    case 'l': state = 97; break;
                    case 'U': state = 71; break;
                    case '7': state = 111; break;
                    case '2': state = 67; break;
                    case '8': state = 65; break;
                    case 'Z': state = 89; break;
                    case 'A': state = 102; break;
                    case 'r': state = 93; break;
                    case 'J': state = 60; break;
                    case 'h': state = 24; break;
                    case 'E': state = 98; break;
                    case 'u': state = 105; break;
                    case 'k': state = 83; break;
                    case 'B': state = 62; break;
                    case 'n': state = 86; break;
                    case 'F': state = 82; break;
                    case 'M': state = 113; break;
                    case 'x': state = 88; break;
                    case 'b': state = 61; break;
                    case 'D': state = 27; break;
                    case '0': state = 69; break;
                    case '4': state = 77; break;
                    case 'a': state = 75; break;
                    case 'y': state = 84; break;
                    case 'd': state = 70; break;
                    case 'P': state = 59; break;
                    case 'z': state = 94; break;
                    case 'L': state = 99; break;
                    case 'O': state = 81; break;
                    case 'K': state = 101; break;
                    default: return std::find(finalNodes.begin(), finalNodes.end(), state) != finalNodes.end();
                }
                break;
            case 103: 
                switch(letter) {
                    case 'o': state = 109; break;
                    case 'r': state = 93; break;
                    case 'h': state = 24; break;
                    case 's': state = 28; break;
                    case 'S': state = 45; break;
                    case 'G': state = 103; break;
                    case 'V': state = 25; break;
                    case '2': state = 67; break;
                    case 'I': state = 63; break;
                    case 't': state = 78; break;
                    case 'w': state = 68; break;
                    case '3': state = 96; break;
                    case 'M': state = 113; break;
                    case 'j': state = 26; break;
                    case 'J': state = 60; break;
                    case '6': state = 66; break;
                    case 'e': state = 106; break;
                    case 'P': state = 59; break;
                    case 'H': state = 85; break;
                    case 'k': state = 83; break;
                    case '8': state = 65; break;
                    case '_': state = 72; break;
                    case 'p': state = 95; break;
                    case '4': state = 77; break;
                    case 'Z': state = 89; break;
                    case 'Q': state = 100; break;
                    case 'R': state = 29; break;
                    case 'c': state = 108; break;
                    case 'N': state = 104; break;
                    case 'g': state = 73; break;
                    case '1': state = 79; break;
                    case 'E': state = 98; break;
                    case 'U': state = 71; break;
                    case 'X': state = 64; break;
                    case 'B': state = 62; break;
                    case 'Y': state = 115; break;
                    case 'i': state = 112; break;
                    case 'C': state = 80; break;
                    case 'D': state = 27; break;
                    case 'q': state = 91; break;
                    case 'l': state = 97; break;
                    case 'u': state = 105; break;
                    case 'A': state = 102; break;
                    case 'm': state = 92; break;
                    case 'O': state = 81; break;
                    case 'T': state = 110; break;
                    case 'f': state = 76; break;
                    case 'x': state = 88; break;
                    case 'n': state = 86; break;
                    case 'b': state = 61; break;
                    case '5': state = 114; break;
                    case '7': state = 111; break;
                    case '9': state = 107; break;
                    case 'd': state = 70; break;
                    case 'F': state = 82; break;
                    case '0': state = 69; break;
                    case 'a': state = 75; break;
                    case 'z': state = 94; break;
                    case 'y': state = 84; break;
                    case 'v': state = 90; break;
                    case 'W': state = 74; break;
                    case 'L': state = 99; break;
                    case 'K': state = 101; break;
                    default: return std::find(finalNodes.begin(), finalNodes.end(), state) != finalNodes.end();
                }
                break;
            case 104: 
                switch(letter) {
                    case '1': state = 79; break;
                    case 'C': state = 80; break;
                    case 'G': state = 103; break;
                    case 'f': state = 76; break;
                    case 'g': state = 73; break;
                    case 'V': state = 25; break;
                    case '2': state = 67; break;
                    case 'T': state = 110; break;
                    case 'r': state = 93; break;
                    case 't': state = 78; break;
                    case 'J': state = 60; break;
                    case 'p': state = 95; break;
                    case 'l': state = 97; break;
                    case '3': state = 96; break;
                    case 'W': state = 74; break;
                    case 'X': state = 64; break;
                    case 'e': state = 106; break;
                    case 'a': state = 75; break;
                    case '5': state = 114; break;
                    case 'm': state = 92; break;
                    case 'S': state = 45; break;
                    case 'Z': state = 89; break;
                    case 'A': state = 102; break;
                    case 'F': state = 82; break;
                    case '4': state = 77; break;
                    case 'w': state = 68; break;
                    case 'z': state = 94; break;
                    case 'i': state = 112; break;
                    case 'j': state = 26; break;
                    case 'o': state = 109; break;
                    case 'P': state = 59; break;
                    case 'N': state = 104; break;
                    case '_': state = 72; break;
                    case 'I': state = 63; break;
                    case 'Q': state = 100; break;
                    case 'u': state = 105; break;
                    case 'v': state = 90; break;
                    case 'R': state = 29; break;
                    case 'q': state = 91; break;
                    case 'b': state = 61; break;
                    case '6': state = 66; break;
                    case 'n': state = 86; break;
                    case 'E': state = 98; break;
                    case '8': state = 65; break;
                    case 's': state = 28; break;
                    case 'k': state = 83; break;
                    case '9': state = 107; break;
                    case '7': state = 111; break;
                    case 'D': state = 27; break;
                    case 'h': state = 24; break;
                    case 'x': state = 88; break;
                    case 'B': state = 62; break;
                    case '0': state = 69; break;
                    case 'K': state = 101; break;
                    case 'd': state = 70; break;
                    case 'H': state = 85; break;
                    case 'U': state = 71; break;
                    case 'O': state = 81; break;
                    case 'M': state = 113; break;
                    case 'Y': state = 115; break;
                    case 'y': state = 84; break;
                    case 'c': state = 108; break;
                    case 'L': state = 99; break;
                    default: return std::find(finalNodes.begin(), finalNodes.end(), state) != finalNodes.end();
                }
                break;
            case 105: 
                switch(letter) {
                    case 'N': state = 104; break;
                    case 'L': state = 99; break;
                    case 'X': state = 64; break;
                    case 'U': state = 71; break;
                    case 'V': state = 25; break;
                    case 'P': state = 59; break;
                    case 'l': state = 97; break;
                    case 'Z': state = 89; break;
                    case '4': state = 77; break;
                    case 'G': state = 103; break;
                    case 'r': state = 93; break;
                    case 't': state = 78; break;
                    case 'J': state = 60; break;
                    case 's': state = 28; break;
                    case 'f': state = 76; break;
                    case '2': state = 67; break;
                    case 'p': state = 95; break;
                    case 'e': state = 106; break;
                    case '8': state = 65; break;
                    case 'h': state = 24; break;
                    case 'z': state = 94; break;
                    case 'a': state = 75; break;
                    case 'g': state = 73; break;
                    case 'm': state = 92; break;
                    case '9': state = 107; break;
                    case 'R': state = 29; break;
                    case 'q': state = 91; break;
                    case 'I': state = 63; break;
                    case 'S': state = 45; break;
                    case 'E': state = 98; break;
                    case '_': state = 72; break;
                    case 'C': state = 80; break;
                    case 'A': state = 102; break;
                    case 'H': state = 85; break;
                    case 'F': state = 82; break;
                    case 'Q': state = 100; break;
                    case 'u': state = 105; break;
                    case '3': state = 96; break;
                    case '7': state = 111; break;
                    case 'T': state = 110; break;
                    case 'i': state = 112; break;
                    case '6': state = 66; break;
                    case 'j': state = 26; break;
                    case 'o': state = 109; break;
                    case 'n': state = 86; break;
                    case '1': state = 79; break;
                    case 'k': state = 83; break;
                    case 'Y': state = 115; break;
                    case 'D': state = 27; break;
                    case 'b': state = 61; break;
                    case 'x': state = 88; break;
                    case 'W': state = 74; break;
                    case '5': state = 114; break;
                    case 'd': state = 70; break;
                    case 'c': state = 108; break;
                    case 'B': state = 62; break;
                    case 'O': state = 81; break;
                    case '0': state = 69; break;
                    case 'y': state = 84; break;
                    case 'M': state = 113; break;
                    case 'v': state = 90; break;
                    case 'w': state = 68; break;
                    case 'K': state = 101; break;
                    default: return std::find(finalNodes.begin(), finalNodes.end(), state) != finalNodes.end();
                }
                break;
            case 106: 
                switch(letter) {
                    case '9': state = 107; break;
                    case 'X': state = 64; break;
                    case 'o': state = 109; break;
                    case 'F': state = 82; break;
                    case 'f': state = 76; break;
                    case 'g': state = 73; break;
                    case 'W': state = 74; break;
                    case 'l': state = 97; break;
                    case 'p': state = 95; break;
                    case 'r': state = 93; break;
                    case 'Z': state = 89; break;
                    case '2': state = 67; break;
                    case '4': state = 77; break;
                    case 'J': state = 60; break;
                    case 'V': state = 25; break;
                    case 'T': state = 110; break;
                    case 'a': state = 75; break;
                    case 'G': state = 103; break;
                    case 'm': state = 92; break;
                    case 'M': state = 113; break;
                    case 'x': state = 88; break;
                    case 't': state = 78; break;
                    case 'S': state = 45; break;
                    case 'w': state = 68; break;
                    case 'z': state = 94; break;
                    case 'C': state = 80; break;
                    case 'I': state = 63; break;
                    case '_': state = 72; break;
                    case 'j': state = 26; break;
                    case 'c': state = 108; break;
                    case 'H': state = 85; break;
                    case 'Q': state = 100; break;
                    case 'O': state = 81; break;
                    case 'A': state = 102; break;
                    case 'i': state = 112; break;
                    case '3': state = 96; break;
                    case 'v': state = 90; break;
                    case 'E': state = 98; break;
                    case 'n': state = 86; break;
                    case 's': state = 28; break;
                    case 'R': state = 29; break;
                    case 'q': state = 91; break;
                    case 'b': state = 61; break;
                    case '6': state = 66; break;
                    case '5': state = 114; break;
                    case '1': state = 79; break;
                    case 'P': state = 59; break;
                    case 'Y': state = 115; break;
                    case 'N': state = 104; break;
                    case 'h': state = 24; break;
                    case 'k': state = 83; break;
                    case '7': state = 111; break;
                    case 'L': state = 99; break;
                    case 'U': state = 71; break;
                    case '8': state = 65; break;
                    case '0': state = 69; break;
                    case 'e': state = 106; break;
                    case 'y': state = 84; break;
                    case 'B': state = 62; break;
                    case 'D': state = 27; break;
                    case 'u': state = 105; break;
                    case 'd': state = 70; break;
                    case 'K': state = 101; break;
                    default: return std::find(finalNodes.begin(), finalNodes.end(), state) != finalNodes.end();
                }
                break;
            case 107: 
                switch(letter) {
                    case '9': state = 107; break;
                    case 'X': state = 64; break;
                    case 'f': state = 76; break;
                    case 'F': state = 82; break;
                    case 'o': state = 109; break;
                    case 'S': state = 45; break;
                    case 'g': state = 73; break;
                    case 'W': state = 74; break;
                    case 'l': state = 97; break;
                    case 's': state = 28; break;
                    case 'G': state = 103; break;
                    case 'p': state = 95; break;
                    case 'V': state = 25; break;
                    case '4': state = 77; break;
                    case '6': state = 66; break;
                    case 'r': state = 93; break;
                    case 'J': state = 60; break;
                    case 'z': state = 94; break;
                    case 'y': state = 84; break;
                    case 'M': state = 113; break;
                    case 'x': state = 88; break;
                    case 'h': state = 24; break;
                    case '_': state = 72; break;
                    case 'j': state = 26; break;
                    case 'P': state = 59; break;
                    case 'I': state = 63; break;
                    case 'H': state = 85; break;
                    case 'c': state = 108; break;
                    case 'Z': state = 89; break;
                    case 'T': state = 110; break;
                    case 'E': state = 98; break;
                    case 'm': state = 92; break;
                    case '3': state = 96; break;
                    case 'v': state = 90; break;
                    case 'Q': state = 100; break;
                    case 'R': state = 29; break;
                    case 'q': state = 91; break;
                    case '5': state = 114; break;
                    case 'C': state = 80; break;
                    case 't': state = 78; break;
                    case 'n': state = 86; break;
                    case 'N': state = 104; break;
                    case 'A': state = 102; break;
                    case 'i': state = 112; break;
                    case 'k': state = 83; break;
                    case '2': state = 67; break;
                    case 'w': state = 68; break;
                    case 'Y': state = 115; break;
                    case '1': state = 79; break;
                    case 'b': state = 61; break;
                    case 'd': state = 70; break;
                    case 'U': state = 71; break;
                    case '7': state = 111; break;
                    case 'L': state = 99; break;
                    case 'a': state = 75; break;
                    case 'e': state = 106; break;
                    case '0': state = 69; break;
                    case '8': state = 65; break;
                    case 'u': state = 105; break;
                    case 'O': state = 81; break;
                    case 'D': state = 27; break;
                    case 'B': state = 62; break;
                    case 'K': state = 101; break;
                    default: return std::find(finalNodes.begin(), finalNodes.end(), state) != finalNodes.end();
                }
                break;
            case 108: 
                switch(letter) {
                    case 'e': state = 106; break;
                    case '9': state = 107; break;
                    case 'X': state = 64; break;
                    case '1': state = 79; break;
                    case 'O': state = 81; break;
                    case 'w': state = 68; break;
                    case 'S': state = 45; break;
                    case 'F': state = 82; break;
                    case 'Z': state = 89; break;
                    case 'R': state = 29; break;
                    case 'P': state = 59; break;
                    case 'V': state = 25; break;
                    case 'U': state = 71; break;
                    case 'z': state = 94; break;
                    case '4': state = 77; break;
                    case 'G': state = 103; break;
                    case 'a': state = 75; break;
                    case 'p': state = 95; break;
                    case 'm': state = 92; break;
                    case 'r': state = 93; break;
                    case 'T': state = 110; break;
                    case 'l': state = 97; break;
                    case 'M': state = 113; break;
                    case '3': state = 96; break;
                    case 'I': state = 63; break;
                    case 'x': state = 88; break;
                    case '_': state = 72; break;
                    case 'j': state = 26; break;
                    case 'C': state = 80; break;
                    case '5': state = 114; break;
                    case 'c': state = 108; break;
                    case 'N': state = 104; break;
                    case 'i': state = 112; break;
                    case 'h': state = 24; break;
                    case 'Q': state = 100; break;
                    case 'E': state = 98; break;
                    case '0': state = 69; break;
                    case 'g': state = 73; break;
                    case 'J': state = 60; break;
                    case 'y': state = 84; break;
                    case 'H': state = 85; break;
                    case 'k': state = 83; break;
                    case 'Y': state = 115; break;
                    case 'v': state = 90; break;
                    case 't': state = 78; break;
                    case '7': state = 111; break;
                    case 'A': state = 102; break;
                    case 'q': state = 91; break;
                    case 'D': state = 27; break;
                    case 'd': state = 70; break;
                    case 'n': state = 86; break;
                    case '8': state = 65; break;
                    case '2': state = 67; break;
                    case 'f': state = 76; break;
                    case 's': state = 28; break;
                    case '6': state = 66; break;
                    case 'b': state = 61; break;
                    case 'o': state = 109; break;
                    case 'u': state = 105; break;
                    case 'L': state = 99; break;
                    case 'W': state = 74; break;
                    case 'B': state = 62; break;
                    case 'K': state = 101; break;
                    default: return std::find(finalNodes.begin(), finalNodes.end(), state) != finalNodes.end();
                }
                break;
            case 109: 
                switch(letter) {
                    case 'e': state = 106; break;
                    case 'X': state = 64; break;
                    case 'f': state = 76; break;
                    case 'O': state = 81; break;
                    case 'L': state = 99; break;
                    case 'o': state = 109; break;
                    case '_': state = 72; break;
                    case 'l': state = 97; break;
                    case 'a': state = 75; break;
                    case 'P': state = 59; break;
                    case 'm': state = 92; break;
                    case 'F': state = 82; break;
                    case '3': state = 96; break;
                    case 't': state = 78; break;
                    case 'p': state = 95; break;
                    case '4': state = 77; break;
                    case 'R': state = 29; break;
                    case 'V': state = 25; break;
                    case 'G': state = 103; break;
                    case 'Z': state = 89; break;
                    case 'I': state = 63; break;
                    case 'U': state = 71; break;
                    case 'x': state = 88; break;
                    case 'D': state = 27; break;
                    case 's': state = 28; break;
                    case 'r': state = 93; break;
                    case 'c': state = 108; break;
                    case 'i': state = 112; break;
                    case 'j': state = 26; break;
                    case 'C': state = 80; break;
                    case '0': state = 69; break;
                    case 'g': state = 73; break;
                    case 'Q': state = 100; break;
                    case 'S': state = 45; break;
                    case 'y': state = 84; break;
                    case 'E': state = 98; break;
                    case 'h': state = 24; break;
                    case '2': state = 67; break;
                    case 'H': state = 85; break;
                    case '6': state = 66; break;
                    case 'Y': state = 115; break;
                    case 'v': state = 90; break;
                    case '7': state = 111; break;
                    case 'T': state = 110; break;
                    case 'A': state = 102; break;
                    case 'q': state = 91; break;
                    case 'J': state = 60; break;
                    case '1': state = 79; break;
                    case 'M': state = 113; break;
                    case 'n': state = 86; break;
                    case 'N': state = 104; break;
                    case '8': state = 65; break;
                    case '5': state = 114; break;
                    case 'w': state = 68; break;
                    case 'k': state = 83; break;
                    case '9': state = 107; break;
                    case 'b': state = 61; break;
                    case 'u': state = 105; break;
                    case 'z': state = 94; break;
                    case 'W': state = 74; break;
                    case 'B': state = 62; break;
                    case 'd': state = 70; break;
                    case 'K': state = 101; break;
                    default: return std::find(finalNodes.begin(), finalNodes.end(), state) != finalNodes.end();
                }
                break;
            case 110: 
                switch(letter) {
                    case 'e': state = 106; break;
                    case 'X': state = 64; break;
                    case 'f': state = 76; break;
                    case 'o': state = 109; break;
                    case '1': state = 79; break;
                    case 'O': state = 81; break;
                    case 'L': state = 99; break;
                    case '5': state = 114; break;
                    case 'w': state = 68; break;
                    case 'S': state = 45; break;
                    case 'm': state = 92; break;
                    case 'x': state = 88; break;
                    case '4': state = 77; break;
                    case 'p': state = 95; break;
                    case 's': state = 28; break;
                    case 'a': state = 75; break;
                    case 'U': state = 71; break;
                    case '3': state = 96; break;
                    case 'J': state = 60; break;
                    case 'P': state = 59; break;
                    case 'G': state = 103; break;
                    case 'V': state = 25; break;
                    case 'R': state = 29; break;
                    case 'F': state = 82; break;
                    case '_': state = 72; break;
                    case 'I': state = 63; break;
                    case 'M': state = 113; break;
                    case 'r': state = 93; break;
                    case 'N': state = 104; break;
                    case 'c': state = 108; break;
                    case 'A': state = 102; break;
                    case 'H': state = 85; break;
                    case 'j': state = 26; break;
                    case '0': state = 69; break;
                    case 'Y': state = 115; break;
                    case 'Q': state = 100; break;
                    case 'i': state = 112; break;
                    case '6': state = 66; break;
                    case 'g': state = 73; break;
                    case 'Z': state = 89; break;
                    case '9': state = 107; break;
                    case 'E': state = 98; break;
                    case 'h': state = 24; break;
                    case 'v': state = 90; break;
                    case 'q': state = 91; break;
                    case '7': state = 111; break;
                    case 'C': state = 80; break;
                    case 'D': state = 27; break;
                    case 'u': state = 105; break;
                    case 'T': state = 110; break;
                    case 'l': state = 97; break;
                    case 'n': state = 86; break;
                    case 'y': state = 84; break;
                    case 'B': state = 62; break;
                    case '8': state = 65; break;
                    case 'z': state = 94; break;
                    case 'W': state = 74; break;
                    case 't': state = 78; break;
                    case 'K': state = 101; break;
                    case 'd': state = 70; break;
                    case 'k': state = 83; break;
                    case 'b': state = 61; break;
                    case '2': state = 67; break;
                    default: return std::find(finalNodes.begin(), finalNodes.end(), state) != finalNodes.end();
                }
                break;
            case 111: 
                switch(letter) {
                    case 'X': state = 64; break;
                    case 'f': state = 76; break;
                    case 'o': state = 109; break;
                    case 'O': state = 81; break;
                    case '1': state = 79; break;
                    case 'L': state = 99; break;
                    case 'u': state = 105; break;
                    case 'p': state = 95; break;
                    case '5': state = 114; break;
                    case 'F': state = 82; break;
                    case 's': state = 28; break;
                    case 'S': state = 45; break;
                    case 'T': state = 110; break;
                    case 'J': state = 60; break;
                    case 'K': state = 101; break;
                    case '3': state = 96; break;
                    case 'V': state = 25; break;
                    case 'G': state = 103; break;
                    case 'a': state = 75; break;
                    case 'R': state = 29; break;
                    case 'm': state = 92; break;
                    case 'U': state = 71; break;
                    case '7': state = 111; break;
                    case 'z': state = 94; break;
                    case 'M': state = 113; break;
                    case 't': state = 78; break;
                    case 'Z': state = 89; break;
                    case 'I': state = 63; break;
                    case '_': state = 72; break;
                    case 'j': state = 26; break;
                    case 'q': state = 91; break;
                    case 'H': state = 85; break;
                    case 'A': state = 102; break;
                    case 'i': state = 112; break;
                    case 'Y': state = 115; break;
                    case '0': state = 69; break;
                    case '6': state = 66; break;
                    case 'c': state = 108; break;
                    case 'Q': state = 100; break;
                    case 'g': state = 73; break;
                    case 'e': state = 106; break;
                    case 'W': state = 74; break;
                    case 'E': state = 98; break;
                    case 'r': state = 93; break;
                    case 'v': state = 90; break;
                    case 'P': state = 59; break;
                    case 'n': state = 86; break;
                    case 'N': state = 104; break;
                    case 'C': state = 80; break;
                    case 'x': state = 88; break;
                    case '9': state = 107; break;
                    case 'l': state = 97; break;
                    case 'w': state = 68; break;
                    case 'D': state = 27; break;
                    case 'y': state = 84; break;
                    case '4': state = 77; break;
                    case 'k': state = 83; break;
                    case 'h': state = 24; break;
                    case '8': state = 65; break;
                    case 'b': state = 61; break;
                    case 'B': state = 62; break;
                    case '2': state = 67; break;
                    case 'd': state = 70; break;
                    default: return std::find(finalNodes.begin(), finalNodes.end(), state) != finalNodes.end();
                }
                break;
            case 112: 
                switch(letter) {
                    case 'e': state = 106; break;
                    case 'X': state = 64; break;
                    case 'f': state = 76; break;
                    case 'o': state = 109; break;
                    case '1': state = 79; break;
                    case '3': state = 96; break;
                    case 'q': state = 91; break;
                    case 'G': state = 103; break;
                    case 'J': state = 60; break;
                    case 'R': state = 29; break;
                    case 'j': state = 26; break;
                    case 'm': state = 92; break;
                    case 'a': state = 75; break;
                    case 'M': state = 113; break;
                    case 'z': state = 94; break;
                    case 'p': state = 95; break;
                    case 't': state = 78; break;
                    case '_': state = 72; break;
                    case '0': state = 69; break;
                    case 'V': state = 25; break;
                    case 'S': state = 45; break;
                    case '4': state = 77; break;
                    case 's': state = 28; break;
                    case 'r': state = 93; break;
                    case 'O': state = 81; break;
                    case '7': state = 111; break;
                    case 'n': state = 86; break;
                    case 'E': state = 98; break;
                    case 'N': state = 104; break;
                    case 'h': state = 24; break;
                    case 'I': state = 63; break;
                    case 'T': state = 110; break;
                    case 'c': state = 108; break;
                    case 'g': state = 73; break;
                    case 'F': state = 82; break;
                    case 'A': state = 102; break;
                    case 'Z': state = 89; break;
                    case '6': state = 66; break;
                    case '8': state = 65; break;
                    case 'W': state = 74; break;
                    case 'b': state = 61; break;
                    case '9': state = 107; break;
                    case 'l': state = 97; break;
                    case 'P': state = 59; break;
                    case 'y': state = 84; break;
                    case 'D': state = 27; break;
                    case 'B': state = 62; break;
                    case 'Q': state = 100; break;
                    case 'U': state = 71; break;
                    case 'w': state = 68; break;
                    case 'K': state = 101; break;
                    case 'C': state = 80; break;
                    case 'k': state = 83; break;
                    case 'H': state = 85; break;
                    case 'd': state = 70; break;
                    case 'x': state = 88; break;
                    case 'L': state = 99; break;
                    case 'v': state = 90; break;
                    case '2': state = 67; break;
                    case 'u': state = 105; break;
                    case 'Y': state = 115; break;
                    case '5': state = 114; break;
                    case 'i': state = 112; break;
                    default: return std::find(finalNodes.begin(), finalNodes.end(), state) != finalNodes.end();
                }
                break;
            case 113: 
                switch(letter) {
                    case 'e': state = 106; break;
                    case 'X': state = 64; break;
                    case 'f': state = 76; break;
                    case 'o': state = 109; break;
                    case 'W': state = 74; break;
                    case 'w': state = 68; break;
                    case 'a': state = 75; break;
                    case 'R': state = 29; break;
                    case 'q': state = 91; break;
                    case 'x': state = 88; break;
                    case 'p': state = 95; break;
                    case 'j': state = 26; break;
                    case 'h': state = 24; break;
                    case '9': state = 107; break;
                    case 'm': state = 92; break;
                    case 'G': state = 103; break;
                    case 'z': state = 94; break;
                    case 'Q': state = 100; break;
                    case 'V': state = 25; break;
                    case 'M': state = 113; break;
                    case '_': state = 72; break;
                    case '1': state = 79; break;
                    case 's': state = 28; break;
                    case 'J': state = 60; break;
                    case 'E': state = 98; break;
                    case 'g': state = 73; break;
                    case 'N': state = 104; break;
                    case 'r': state = 93; break;
                    case '3': state = 96; break;
                    case '0': state = 69; break;
                    case '4': state = 77; break;
                    case 'S': state = 45; break;
                    case '7': state = 111; break;
                    case 'T': state = 110; break;
                    case 'Z': state = 89; break;
                    case 'I': state = 63; break;
                    case 'A': state = 102; break;
                    case 'Y': state = 115; break;
                    case '6': state = 66; break;
                    case 'u': state = 105; break;
                    case '8': state = 65; break;
                    case 'c': state = 108; break;
                    case '5': state = 114; break;
                    case 'P': state = 59; break;
                    case 'l': state = 97; break;
                    case 'y': state = 84; break;
                    case 'D': state = 27; break;
                    case 'k': state = 83; break;
                    case 'i': state = 112; break;
                    case 'B': state = 62; break;
                    case 'b': state = 61; break;
                    case 'K': state = 101; break;
                    case 'C': state = 80; break;
                    case 'O': state = 81; break;
                    case 't': state = 78; break;
                    case 'H': state = 85; break;
                    case 'n': state = 86; break;
                    case '2': state = 67; break;
                    case 'v': state = 90; break;
                    case 'U': state = 71; break;
                    case 'F': state = 82; break;
                    case 'L': state = 99; break;
                    case 'd': state = 70; break;
                    default: return std::find(finalNodes.begin(), finalNodes.end(), state) != finalNodes.end();
                }
                break;
            case 114: 
                switch(letter) {
                    case 'G': state = 103; break;
                    case 'o': state = 109; break;
                    case 'D': state = 27; break;
                    case 'w': state = 68; break;
                    case 'F': state = 82; break;
                    case 'u': state = 105; break;
                    case '3': state = 96; break;
                    case 'R': state = 29; break;
                    case 'r': state = 93; break;
                    case 'c': state = 108; break;
                    case 'p': state = 95; break;
                    case 'e': state = 106; break;
                    case 'S': state = 45; break;
                    case 's': state = 28; break;
                    case 'x': state = 88; break;
                    case '2': state = 67; break;
                    case 'm': state = 92; break;
                    case 'Q': state = 100; break;
                    case '_': state = 72; break;
                    case 'A': state = 102; break;
                    case 'B': state = 62; break;
                    case '0': state = 69; break;
                    case 'H': state = 85; break;
                    case 'E': state = 98; break;
                    case 'X': state = 64; break;
                    case 'P': state = 59; break;
                    case 'v': state = 90; break;
                    case 'Z': state = 89; break;
                    case 'b': state = 61; break;
                    case 'U': state = 71; break;
                    case 'j': state = 26; break;
                    case '7': state = 111; break;
                    case 'V': state = 25; break;
                    case '1': state = 79; break;
                    case 'I': state = 63; break;
                    case 'k': state = 83; break;
                    case 'Y': state = 115; break;
                    case 'J': state = 60; break;
                    case '6': state = 66; break;
                    case 'L': state = 99; break;
                    case '9': state = 107; break;
                    case 'y': state = 84; break;
                    case 'l': state = 97; break;
                    case 'n': state = 86; break;
                    case 'h': state = 24; break;
                    case 'N': state = 104; break;
                    case 'g': state = 73; break;
                    case 'i': state = 112; break;
                    case 'M': state = 113; break;
                    case '5': state = 114; break;
                    case 'a': state = 75; break;
                    case 'C': state = 80; break;
                    case '4': state = 77; break;
                    case 'O': state = 81; break;
                    case 'T': state = 110; break;
                    case 'q': state = 91; break;
                    case 't': state = 78; break;
                    case 'z': state = 94; break;
                    case '8': state = 65; break;
                    case 'd': state = 70; break;
                    case 'f': state = 76; break;
                    case 'W': state = 74; break;
                    case 'K': state = 101; break;
                    default: return std::find(finalNodes.begin(), finalNodes.end(), state) != finalNodes.end();
                }
                break;
            case 115: 
                switch(letter) {
                    case 'o': state = 109; break;
                    case 'D': state = 27; break;
                    case 'w': state = 68; break;
                    case 'F': state = 82; break;
                    case '_': state = 72; break;
                    case '3': state = 96; break;
                    case 'N': state = 104; break;
                    case 'e': state = 106; break;
                    case 'S': state = 45; break;
                    case 's': state = 28; break;
                    case 'x': state = 88; break;
                    case 'G': state = 103; break;
                    case '2': state = 67; break;
                    case 'c': state = 108; break;
                    case 'A': state = 102; break;
                    case 'O': state = 81; break;
                    case '9': state = 107; break;
                    case 'Q': state = 100; break;
                    case 'R': state = 29; break;
                    case 'X': state = 64; break;
                    case 'E': state = 98; break;
                    case 'U': state = 71; break;
                    case 'l': state = 97; break;
                    case 'H': state = 85; break;
                    case 'I': state = 63; break;
                    case 'V': state = 25; break;
                    case 'v': state = 90; break;
                    case '7': state = 111; break;
                    case '0': state = 69; break;
                    case 'k': state = 83; break;
                    case '6': state = 66; break;
                    case 'p': state = 95; break;
                    case 'j': state = 26; break;
                    case 'J': state = 60; break;
                    case 'Y': state = 115; break;
                    case 'n': state = 86; break;
                    case '1': state = 79; break;
                    case 'h': state = 24; break;
                    case 'a': state = 75; break;
                    case 'Z': state = 89; break;
                    case 'B': state = 62; break;
                    case 'd': state = 70; break;
                    case 'f': state = 76; break;
                    case 'T': state = 110; break;
                    case 'q': state = 91; break;
                    case 'u': state = 105; break;
                    case 'g': state = 73; break;
                    case 't': state = 78; break;
                    case '4': state = 77; break;
                    case 'r': state = 93; break;
                    case 'M': state = 113; break;
                    case 'K': state = 101; break;
                    case 'P': state = 59; break;
                    case 'b': state = 61; break;
                    case 'W': state = 74; break;
                    case 'L': state = 99; break;
                    case 'i': state = 112; break;
                    case 'y': state = 84; break;
                    case 'm': state = 92; break;
                    case 'z': state = 94; break;
                    case 'C': state = 80; break;
                    case '8': state = 65; break;
                    case '5': state = 114; break;
                    default: return std::find(finalNodes.begin(), finalNodes.end(), state) != finalNodes.end();
                }
                break;
            case 116: 
                switch(letter) {
                    case 'm': state = 11; break;
                    case 'F': state = 12; break;
                    case 'd': state = 13; break;
                    case 'k': state = 14; break;
                    case 'o': state = 0; break;
                    case 'z': state = 20; break;
                    case '_': state = 23; break;
                    case 't': state = 38; break;
                    case 'H': state = 42; break;
                    case 'r': state = 2; break;
                    case 'A': state = 32; break;
                    case 's': state = 40; break;
                    case 'T': state = 57; break;
                    case 'S': state = 47; break;
                    case 'i': state = 7; break;
                    case 'P': state = 36; break;
                    case 'Z': state = 33; break;
                    case 'Y': state = 53; break;
                    case 'M': state = 30; break;
                    case 'x': state = 37; break;
                    case 'X': state = 49; break;
                    case 'I': state = 43; break;
                    case 'W': state = 54; break;
                    case 'g': state = 35; break;
                    case 'N': state = 4; break;
                    case 'f': state = 41; break;
                    case 'Q': state = 51; break;
                    case 'a': state = 44; break;
                    case 'R': state = 10; break;
                    case 'u': state = 58; break;
                    case 'O': state = 3; break;
                    case 'q': state = 19; break;
                    case 'V': state = 52; break;
                    case 'p': state = 1; break;
                    case 'y': state = 87; break;
                    case 'B': state = 55; break;
                    case 'e': state = 46; break;
                    case 'v': state = 16; break;
                    case 'c': state = 56; break;
                    case 'h': state = 18; break;
                    case 'L': state = 8; break;
                    case 'w': state = 21; break;
                    case 'K': state = 6; break;
                    case 'D': state = 15; break;
                    case 'U': state = 50; break;
                    case 'j': state = 9; break;
                    case 'J': state = 39; break;
                    case 'l': state = 34; break;
                    case 'E': state = 5; break;
                    case 'C': state = 48; break;
                    case 'b': state = 31; break;
                    case 'G': state = 22; break;
                    case 'n': state = 17; break;
                    default: return std::find(finalNodes.begin(), finalNodes.end(), state) != finalNodes.end();
                }
                break;
            default: break;
        }
    }
    return false;
}
bool _num(Input *input){
    std::vector<int> finalNodes = {2, 4, 7, 0, 9, 3, 6, 17, 16, 14, 1, 10, 15, 11, 12, 19, 18, 5, 13, 8};
    int state = 21; // 初始状态
    while(true) {
        char letter = (input->getInput())[0];
        switch(state) {
            case 0: 
                switch(letter) {
                    case '3': state = 8; break;
                    case '2': state = 1; break;
                    case '6': state = 3; break;
                    case '0': state = 0; break;
                    case '5': state = 9; break;
                    case '8': state = 4; break;
                    case '1': state = 7; break;
                    case '4': state = 2; break;
                    case '9': state = 5; break;
                    case '7': state = 6; break;
                    default: return std::find(finalNodes.begin(), finalNodes.end(), state) != finalNodes.end();
                }
                break;
            case 1: 
                switch(letter) {
                    case '2': state = 1; break;
                    case '5': state = 9; break;
                    case '3': state = 8; break;
                    case '9': state = 5; break;
                    case '8': state = 4; break;
                    case '4': state = 2; break;
                    case '6': state = 3; break;
                    case '1': state = 7; break;
                    case '7': state = 6; break;
                    case '0': state = 0; break;
                    default: return std::find(finalNodes.begin(), finalNodes.end(), state) != finalNodes.end();
                }
                break;
            case 2: 
                switch(letter) {
                    case '1': state = 7; break;
                    case '4': state = 2; break;
                    case '6': state = 3; break;
                    case '2': state = 1; break;
                    case '5': state = 9; break;
                    case '9': state = 5; break;
                    case '3': state = 8; break;
                    case '8': state = 4; break;
                    case '7': state = 6; break;
                    case '0': state = 0; break;
                    default: return std::find(finalNodes.begin(), finalNodes.end(), state) != finalNodes.end();
                }
                break;
            case 3: 
                switch(letter) {
                    case '9': state = 5; break;
                    case '2': state = 1; break;
                    case '4': state = 2; break;
                    case '5': state = 9; break;
                    case '8': state = 4; break;
                    case '7': state = 6; break;
                    case '1': state = 7; break;
                    case '3': state = 8; break;
                    case '6': state = 3; break;
                    case '0': state = 0; break;
                    default: return std::find(finalNodes.begin(), finalNodes.end(), state) != finalNodes.end();
                }
                break;
            case 4: 
                switch(letter) {
                    case '4': state = 2; break;
                    case '1': state = 7; break;
                    case '5': state = 9; break;
                    case '9': state = 5; break;
                    case '3': state = 8; break;
                    case '0': state = 0; break;
                    case '6': state = 3; break;
                    case '8': state = 4; break;
                    case '7': state = 6; break;
                    case '2': state = 1; break;
                    default: return std::find(finalNodes.begin(), finalNodes.end(), state) != finalNodes.end();
                }
                break;
            case 5: 
                switch(letter) {
                    case '1': state = 7; break;
                    case '3': state = 8; break;
                    case '5': state = 9; break;
                    case '9': state = 5; break;
                    case '6': state = 3; break;
                    case '4': state = 2; break;
                    case '8': state = 4; break;
                    case '7': state = 6; break;
                    case '2': state = 1; break;
                    case '0': state = 0; break;
                    default: return std::find(finalNodes.begin(), finalNodes.end(), state) != finalNodes.end();
                }
                break;
            case 6: 
                switch(letter) {
                    case '0': state = 0; break;
                    case '2': state = 1; break;
                    case '6': state = 3; break;
                    case '7': state = 6; break;
                    case '9': state = 5; break;
                    case '3': state = 8; break;
                    case '8': state = 4; break;
                    case '1': state = 7; break;
                    case '4': state = 2; break;
                    case '5': state = 9; break;
                    default: return std::find(finalNodes.begin(), finalNodes.end(), state) != finalNodes.end();
                }
                break;
            case 7: 
                switch(letter) {
                    case '1': state = 7; break;
                    case '5': state = 9; break;
                    case '8': state = 4; break;
                    case '2': state = 1; break;
                    case '6': state = 3; break;
                    case '9': state = 5; break;
                    case '7': state = 6; break;
                    case '3': state = 8; break;
                    case '4': state = 2; break;
                    case '0': state = 0; break;
                    default: return std::find(finalNodes.begin(), finalNodes.end(), state) != finalNodes.end();
                }
                break;
            case 8: 
                switch(letter) {
                    case '6': state = 3; break;
                    case '8': state = 4; break;
                    case '1': state = 7; break;
                    case '7': state = 6; break;
                    case '5': state = 9; break;
                    case '0': state = 0; break;
                    case '2': state = 1; break;
                    case '9': state = 5; break;
                    case '4': state = 2; break;
                    case '3': state = 8; break;
                    default: return std::find(finalNodes.begin(), finalNodes.end(), state) != finalNodes.end();
                }
                break;
            case 9: 
                switch(letter) {
                    case '8': state = 4; break;
                    case '5': state = 9; break;
                    case '3': state = 8; break;
                    case '4': state = 2; break;
                    case '1': state = 7; break;
                    case '7': state = 6; break;
                    case '6': state = 3; break;
                    case '0': state = 0; break;
                    case '9': state = 5; break;
                    case '2': state = 1; break;
                    default: return std::find(finalNodes.begin(), finalNodes.end(), state) != finalNodes.end();
                }
                break;
            case 10: 
                switch(letter) {
                    case '1': state = 19; break;
                    case '.': state = 20; break;
                    case '6': state = 15; break;
                    case '0': state = 17; break;
                    case '4': state = 16; break;
                    case '5': state = 10; break;
                    case '7': state = 12; break;
                    case '8': state = 14; break;
                    case '3': state = 11; break;
                    case '9': state = 13; break;
                    case '2': state = 18; break;
                    default: return std::find(finalNodes.begin(), finalNodes.end(), state) != finalNodes.end();
                }
                break;
            case 11: 
                switch(letter) {
                    case '1': state = 19; break;
                    case '4': state = 16; break;
                    case '9': state = 13; break;
                    case '6': state = 15; break;
                    case '5': state = 10; break;
                    case '7': state = 12; break;
                    case '0': state = 17; break;
                    case '2': state = 18; break;
                    case '3': state = 11; break;
                    case '.': state = 20; break;
                    case '8': state = 14; break;
                    default: return std::find(finalNodes.begin(), finalNodes.end(), state) != finalNodes.end();
                }
                break;
            case 12: 
                switch(letter) {
                    case '5': state = 10; break;
                    case '1': state = 19; break;
                    case '4': state = 16; break;
                    case '0': state = 17; break;
                    case '9': state = 13; break;
                    case '7': state = 12; break;
                    case '6': state = 15; break;
                    case '8': state = 14; break;
                    case '2': state = 18; break;
                    case '.': state = 20; break;
                    case '3': state = 11; break;
                    default: return std::find(finalNodes.begin(), finalNodes.end(), state) != finalNodes.end();
                }
                break;
            case 13: 
                switch(letter) {
                    case '9': state = 13; break;
                    case '3': state = 11; break;
                    case '1': state = 19; break;
                    case '5': state = 10; break;
                    case '0': state = 17; break;
                    case '.': state = 20; break;
                    case '7': state = 12; break;
                    case '2': state = 18; break;
                    case '8': state = 14; break;
                    case '4': state = 16; break;
                    case '6': state = 15; break;
                    default: return std::find(finalNodes.begin(), finalNodes.end(), state) != finalNodes.end();
                }
                break;
            case 14: 
                switch(letter) {
                    case '1': state = 19; break;
                    case '9': state = 13; break;
                    case '.': state = 20; break;
                    case '6': state = 15; break;
                    case '5': state = 10; break;
                    case '8': state = 14; break;
                    case '2': state = 18; break;
                    case '4': state = 16; break;
                    case '0': state = 17; break;
                    case '7': state = 12; break;
                    case '3': state = 11; break;
                    default: return std::find(finalNodes.begin(), finalNodes.end(), state) != finalNodes.end();
                }
                break;
            case 15: 
                switch(letter) {
                    case '1': state = 19; break;
                    case '4': state = 16; break;
                    case '5': state = 10; break;
                    case '3': state = 11; break;
                    case '7': state = 12; break;
                    case '.': state = 20; break;
                    case '9': state = 13; break;
                    case '2': state = 18; break;
                    case '0': state = 17; break;
                    case '6': state = 15; break;
                    case '8': state = 14; break;
                    default: return std::find(finalNodes.begin(), finalNodes.end(), state) != finalNodes.end();
                }
                break;
            case 16: 
                switch(letter) {
                    case '0': state = 17; break;
                    case '6': state = 15; break;
                    case '2': state = 18; break;
                    case '.': state = 20; break;
                    case '3': state = 11; break;
                    case '5': state = 10; break;
                    case '9': state = 13; break;
                    case '8': state = 14; break;
                    case '7': state = 12; break;
                    case '1': state = 19; break;
                    case '4': state = 16; break;
                    default: return std::find(finalNodes.begin(), finalNodes.end(), state) != finalNodes.end();
                }
                break;
            case 17: 
                switch(letter) {
                    case '0': state = 17; break;
                    case '2': state = 18; break;
                    case '8': state = 14; break;
                    case '9': state = 13; break;
                    case '5': state = 10; break;
                    case '6': state = 15; break;
                    case '4': state = 16; break;
                    case '7': state = 12; break;
                    case '1': state = 19; break;
                    case '.': state = 20; break;
                    case '3': state = 11; break;
                    default: return std::find(finalNodes.begin(), finalNodes.end(), state) != finalNodes.end();
                }
                break;
            case 18: 
                switch(letter) {
                    case '5': state = 10; break;
                    case '9': state = 13; break;
                    case '3': state = 11; break;
                    case '1': state = 19; break;
                    case '0': state = 17; break;
                    case '2': state = 18; break;
                    case '6': state = 15; break;
                    case '7': state = 12; break;
                    case '8': state = 14; break;
                    case '4': state = 16; break;
                    case '.': state = 20; break;
                    default: return std::find(finalNodes.begin(), finalNodes.end(), state) != finalNodes.end();
                }
                break;
            case 19: 
                switch(letter) {
                    case '9': state = 13; break;
                    case '.': state = 20; break;
                    case '0': state = 17; break;
                    case '5': state = 10; break;
                    case '1': state = 19; break;
                    case '8': state = 14; break;
                    case '3': state = 11; break;
                    case '6': state = 15; break;
                    case '4': state = 16; break;
                    case '2': state = 18; break;
                    case '7': state = 12; break;
                    default: return std::find(finalNodes.begin(), finalNodes.end(), state) != finalNodes.end();
                }
                break;
            case 20: 
                switch(letter) {
                    case '9': state = 5; break;
                    case '8': state = 4; break;
                    case '5': state = 9; break;
                    case '4': state = 2; break;
                    case '6': state = 3; break;
                    case '0': state = 0; break;
                    case '7': state = 6; break;
                    case '3': state = 8; break;
                    case '1': state = 7; break;
                    case '2': state = 1; break;
                    default: return std::find(finalNodes.begin(), finalNodes.end(), state) != finalNodes.end();
                }
                break;
            case 21: 
                switch(letter) {
                    case '0': state = 17; break;
                    case '9': state = 13; break;
                    case '5': state = 10; break;
                    case '4': state = 16; break;
                    case '6': state = 15; break;
                    case '8': state = 14; break;
                    case '3': state = 11; break;
                    case '1': state = 19; break;
                    case '7': state = 12; break;
                    case '2': state = 18; break;
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
            else{token newtoken; newtoken.name = "_comment"; tokens.push_back(newtoken); newtoken.name = "_close_commnet"; tokens.push_back(newtoken); input->goBackOneChar(); continue;}
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
        if(_if(input)) {token newtoken; newtoken.name = "_if"; newtoken.value = input->getTokenWord(pos);  tokens.push_back(newtoken); input->goBackOneChar(); continue; }  
        else input->goBack(pos);
        if(_then(input)) {token newtoken; newtoken.name = "_then"; newtoken.value = input->getTokenWord(pos);  tokens.push_back(newtoken); input->goBackOneChar(); continue; }  
        else input->goBack(pos);
        if(_else(input)) {token newtoken; newtoken.name = "_else"; newtoken.value = input->getTokenWord(pos);  tokens.push_back(newtoken); input->goBackOneChar(); continue; }  
        else input->goBack(pos);
        if(_while(input)) {token newtoken; newtoken.name = "_while"; newtoken.value = input->getTokenWord(pos);  tokens.push_back(newtoken); input->goBackOneChar(); continue; }  
        else input->goBack(pos);
        if(_do(input)) {token newtoken; newtoken.name = "_do"; newtoken.value = input->getTokenWord(pos);  tokens.push_back(newtoken); input->goBackOneChar(); continue; }  
        else input->goBack(pos);
        if(_return(input)) {token newtoken; newtoken.name = "_return"; newtoken.value = input->getTokenWord(pos);  tokens.push_back(newtoken); input->goBackOneChar(); continue; }  
        else input->goBack(pos);
        if(_void(input)) {token newtoken; newtoken.name = "_void"; newtoken.value = input->getTokenWord(pos);  tokens.push_back(newtoken); input->goBackOneChar(); continue; }  
        else input->goBack(pos);
        if(_int(input)) {token newtoken; newtoken.name = "_int"; newtoken.value = input->getTokenWord(pos);  tokens.push_back(newtoken); input->goBackOneChar(); continue; }  
        else input->goBack(pos);
        if(_float(input)) {token newtoken; newtoken.name = "_float"; newtoken.value = input->getTokenWord(pos);  tokens.push_back(newtoken); input->goBackOneChar(); continue; }  
        else input->goBack(pos);
        if(_double(input)) {token newtoken; newtoken.name = "_double"; newtoken.value = input->getTokenWord(pos);  tokens.push_back(newtoken); input->goBackOneChar(); continue; }  
        else input->goBack(pos);
        if(_add(input)) {token newtoken; newtoken.name = "_add"; newtoken.value = input->getTokenWord(pos);  tokens.push_back(newtoken); input->goBackOneChar(); continue; }  
        else input->goBack(pos);
        if(_minus(input)) {token newtoken; newtoken.name = "_minus"; newtoken.value = input->getTokenWord(pos);  tokens.push_back(newtoken); input->goBackOneChar(); continue; }  
        else input->goBack(pos);
        if(_oneLine_comment_open(input)) {token newtoken; newtoken.name = "_oneLine_comment_open"; newtoken.value = input->getTokenWord(pos);  tokens.push_back(newtoken); input->goBackOneChar(); continue; }  
        else input->goBack(pos);
        if(_open_comment(input)) {token newtoken; newtoken.name = "_open_comment"; newtoken.value = input->getTokenWord(pos);  tokens.push_back(newtoken); input->goBackOneChar(); continue; }  
        else input->goBack(pos);
        if(_close_comment(input)) {token newtoken; newtoken.name = "_close_comment"; newtoken.value = input->getTokenWord(pos);  tokens.push_back(newtoken); input->goBackOneChar(); continue; }  
        else input->goBack(pos);
        if(_multiply(input)) {token newtoken; newtoken.name = "_multiply"; newtoken.value = input->getTokenWord(pos);  tokens.push_back(newtoken); input->goBackOneChar(); continue; }  
        else input->goBack(pos);
        if(_divide(input)) {token newtoken; newtoken.name = "_divide"; newtoken.value = input->getTokenWord(pos);  tokens.push_back(newtoken); input->goBackOneChar(); continue; }  
        else input->goBack(pos);
        if(_mod(input)) {token newtoken; newtoken.name = "_mod"; newtoken.value = input->getTokenWord(pos);  tokens.push_back(newtoken); input->goBackOneChar(); continue; }  
        else input->goBack(pos);
        if(_power(input)) {token newtoken; newtoken.name = "_power"; newtoken.value = input->getTokenWord(pos);  tokens.push_back(newtoken); input->goBackOneChar(); continue; }  
        else input->goBack(pos);
        if(_less_equal(input)) {token newtoken; newtoken.name = "_less_equal"; newtoken.value = input->getTokenWord(pos);  tokens.push_back(newtoken); input->goBackOneChar(); continue; }  
        else input->goBack(pos);
        if(_less(input)) {token newtoken; newtoken.name = "_less"; newtoken.value = input->getTokenWord(pos);  tokens.push_back(newtoken); input->goBackOneChar(); continue; }  
        else input->goBack(pos);
        if(_greater_equal(input)) {token newtoken; newtoken.name = "_greater_equal"; newtoken.value = input->getTokenWord(pos);  tokens.push_back(newtoken); input->goBackOneChar(); continue; }  
        else input->goBack(pos);
        if(_greater(input)) {token newtoken; newtoken.name = "_greater"; newtoken.value = input->getTokenWord(pos);  tokens.push_back(newtoken); input->goBackOneChar(); continue; }  
        else input->goBack(pos);
        if(_equal(input)) {token newtoken; newtoken.name = "_equal"; newtoken.value = input->getTokenWord(pos);  tokens.push_back(newtoken); input->goBackOneChar(); continue; }  
        else input->goBack(pos);
        if(_not_equal(input)) {token newtoken; newtoken.name = "_not_equal"; newtoken.value = input->getTokenWord(pos);  tokens.push_back(newtoken); input->goBackOneChar(); continue; }  
        else input->goBack(pos);
        if(_assign(input)) {token newtoken; newtoken.name = "_assign"; newtoken.value = input->getTokenWord(pos);  tokens.push_back(newtoken); input->goBackOneChar(); continue; }  
        else input->goBack(pos);
        if(_semicolon(input)) {token newtoken; newtoken.name = "_semicolon"; newtoken.value = input->getTokenWord(pos);  tokens.push_back(newtoken); input->goBackOneChar(); continue; }  
        else input->goBack(pos);
        if(_comma(input)) {token newtoken; newtoken.name = "_comma"; newtoken.value = input->getTokenWord(pos);  tokens.push_back(newtoken); input->goBackOneChar(); continue; }  
        else input->goBack(pos);
        if(_left_paren(input)) {token newtoken; newtoken.name = "_left_paren"; newtoken.value = input->getTokenWord(pos);  tokens.push_back(newtoken); input->goBackOneChar(); continue; }  
        else input->goBack(pos);
        if(_right_paren(input)) {token newtoken; newtoken.name = "_right_paren"; newtoken.value = input->getTokenWord(pos);  tokens.push_back(newtoken); input->goBackOneChar(); continue; }  
        else input->goBack(pos);
        if(_left_bracket(input)) {token newtoken; newtoken.name = "_left_bracket"; newtoken.value = input->getTokenWord(pos);  tokens.push_back(newtoken); input->goBackOneChar(); continue; }  
        else input->goBack(pos);
        if(_right_bracket(input)) {token newtoken; newtoken.name = "_right_bracket"; newtoken.value = input->getTokenWord(pos);  tokens.push_back(newtoken); input->goBackOneChar(); continue; }  
        else input->goBack(pos);
        if(_left_brace(input)) {token newtoken; newtoken.name = "_left_brace"; newtoken.value = input->getTokenWord(pos);  tokens.push_back(newtoken); input->goBackOneChar(); continue; }  
        else input->goBack(pos);
        if(_right_brace(input)) {token newtoken; newtoken.name = "_right_brace"; newtoken.value = input->getTokenWord(pos);  tokens.push_back(newtoken); input->goBackOneChar(); continue; }  
        else input->goBack(pos);
        if(_id(input)) {token newtoken; newtoken.name = "_id"; newtoken.value = input->getTokenWord(pos);  tokens.push_back(newtoken); input->goBackOneChar(); continue; }  
        else input->goBack(pos);
        if(_num(input)) {token newtoken; newtoken.name = "_num"; newtoken.value = input->getTokenWord(pos);  tokens.push_back(newtoken); input->goBackOneChar(); continue; }  
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
        std::cout << t.name << " " << t.value << std::endl; 
    } 
    return 0; 
} 
