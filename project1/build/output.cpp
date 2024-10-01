#include "getInput.h" 
#include <iostream> 
#include <vector> 
#include <string> 
using namespace std; 



bool _test0(Input *input){
    std::vector<int> finalNodes = {0};
    int state = 1; // 初始状态
    while(true) {
        char letter = (input->getInput())[0];
        switch(state) {
            case 0: 
                switch(letter) {
                    default: return false;
                }
                break;
            case 1: 
                switch(letter) {
                    case 'a': state = 2; break;
                    default: return false;
                }
                break;
            case 2: 
                switch(letter) {
                    case '': state = 0; break;
                    default: return false;
                }
                break;
            default: return std::find(finalNodes.begin(), finalNodes.end(), state) != finalNodes.end();
        }
    }
    return false;
}
bool _test1(Input *input){
    std::vector<int> finalNodes = {0};
    int state = 1; // 初始状态
    while(true) {
        char letter = (input->getInput())[0];
        switch(state) {
            case 0: 
                switch(letter) {
                    default: return false;
                }
                break;
            case 1: 
                switch(letter) {
                    case 'a': state = 2; break;
                    default: return false;
                }
                break;
            case 2: 
                switch(letter) {
                    case 'b': state = 3; break;
                    default: return false;
                }
                break;
            case 3: 
                switch(letter) {
                    case '': state = 0; break;
                    default: return false;
                }
                break;
            default: return std::find(finalNodes.begin(), finalNodes.end(), state) != finalNodes.end();
        }
    }
    return false;
}
bool _test2(Input *input){
    std::vector<int> finalNodes = {0, 1};
    int state = 2; // 初始状态
    while(true) {
        char letter = (input->getInput())[0];
        switch(state) {
            case 0: 
                switch(letter) {
                    default: return false;
                }
                break;
            case 1: 
                switch(letter) {
                    default: return false;
                }
                break;
            case 2: 
                switch(letter) {
                    case 'a': state = 0; break;
                    case 'b': state = 3; break;
                    default: return false;
                }
                break;
            case 3: 
                switch(letter) {
                    case '': state = 1; break;
                    default: return false;
                }
                break;
            default: return std::find(finalNodes.begin(), finalNodes.end(), state) != finalNodes.end();
        }
    }
    return false;
}
bool _test3(Input *input){
    std::vector<int> finalNodes = {0};
    int state = 1; // 初始状态
    while(true) {
        char letter = (input->getInput())[0];
        switch(state) {
            case 0: 
                switch(letter) {
                    default: return false;
                }
                break;
            case 1: 
                switch(letter) {
                    case 'a': state = 2; break;
                    case '': state = 0; break;
                    default: return false;
                }
                break;
            case 2: 
                switch(letter) {
                    case 'a': state = 2; break;
                    case '': state = 0; break;
                    default: return false;
                }
                break;
            default: return std::find(finalNodes.begin(), finalNodes.end(), state) != finalNodes.end();
        }
    }
    return false;
}
bool _test4(Input *input){
    std::vector<int> finalNodes = {0};
    int state = 1; // 初始状态
    while(true) {
        char letter = (input->getInput())[0];
        switch(state) {
            case 0: 
                switch(letter) {
                    default: return false;
                }
                break;
            case 1: 
                switch(letter) {
                    case 'a': state = 2; break;
                    default: return false;
                }
                break;
            case 2: 
                switch(letter) {
                    case 'a': state = 2; break;
                    case '': state = 0; break;
                    default: return false;
                }
                break;
            default: return std::find(finalNodes.begin(), finalNodes.end(), state) != finalNodes.end();
        }
    }
    return false;
}
bool _test5(Input *input){
    std::vector<int> finalNodes = {0};
    int state = 2; // 初始状态
    while(true) {
        char letter = (input->getInput())[0];
        switch(state) {
            case 0: 
                switch(letter) {
                    default: return false;
                }
                break;
            case 1: 
                switch(letter) {
                    case '': state = 0; break;
                    default: return false;
                }
                break;
            case 2: 
                switch(letter) {
                    case 'a': state = 1; break;
                    case '': state = 0; break;
                    default: return false;
                }
                break;
            default: return std::find(finalNodes.begin(), finalNodes.end(), state) != finalNodes.end();
        }
    }
    return false;
}
bool _test6(Input *input){
    std::vector<int> finalNodes = {1, 2};
    int state = 3; // 初始状态
    while(true) {
        char letter = (input->getInput())[0];
        switch(state) {
            case 0: 
                switch(letter) {
                    case 'b': state = 1; break;
                    default: return false;
                }
                break;
            case 1: 
                switch(letter) {
                    default: return false;
                }
                break;
            case 2: 
                switch(letter) {
                    default: return false;
                }
                break;
            case 3: 
                switch(letter) {
                    case 'a': state = 0; break;
                    case 'c': state = 4; break;
                    default: return false;
                }
                break;
            case 4: 
                switch(letter) {
                    case '': state = 2; break;
                    default: return false;
                }
                break;
            default: return std::find(finalNodes.begin(), finalNodes.end(), state) != finalNodes.end();
        }
    }
    return false;
}
bool _test7(Input *input){
    std::vector<int> finalNodes = {0};
    int state = 1; // 初始状态
    while(true) {
        char letter = (input->getInput())[0];
        switch(state) {
            case 0: 
                switch(letter) {
                    default: return false;
                }
                break;
            case 1: 
                switch(letter) {
                    case 'a': state = 3; break;
                    case 'b': state = 4; break;
                    default: return false;
                }
                break;
            case 2: 
                switch(letter) {
                    case '': state = 0; break;
                    default: return false;
                }
                break;
            case 3: 
                switch(letter) {
                    case 'c': state = 2; break;
                    default: return false;
                }
                break;
            case 4: 
                switch(letter) {
                    case 'c': state = 2; break;
                    default: return false;
                }
                break;
            default: return std::find(finalNodes.begin(), finalNodes.end(), state) != finalNodes.end();
        }
    }
    return false;
}
bool _test8(Input *input){
    std::vector<int> finalNodes = {1};
    int state = 0; // 初始状态
    while(true) {
        char letter = (input->getInput())[0];
        switch(state) {
            case 0: 
                switch(letter) {
                    case 'c': state = 4; break;
                    default: return false;
                }
                break;
            case 1: 
                switch(letter) {
                    default: return false;
                }
                break;
            case 2: 
                switch(letter) {
                    case '': state = 1; break;
                    default: return false;
                }
                break;
            case 3: 
                switch(letter) {
                    case '': state = 1; break;
                    default: return false;
                }
                break;
            case 4: 
                switch(letter) {
                    case 'b': state = 2; break;
                    case 'a': state = 3; break;
                    default: return false;
                }
                break;
            default: return std::find(finalNodes.begin(), finalNodes.end(), state) != finalNodes.end();
        }
    }
    return false;
}
bool _test9(Input *input){
    std::vector<int> finalNodes = {1};
    int state = 0; // 初始状态
    while(true) {
        char letter = (input->getInput())[0];
        switch(state) {
            case 0: 
                switch(letter) {
                    case 'b': state = 2; break;
                    default: return false;
                }
                break;
            case 1: 
                switch(letter) {
                    default: return false;
                }
                break;
            case 2: 
                switch(letter) {
                    case '': state = 1; break;
                    case 'a': state = 3; break;
                    default: return false;
                }
                break;
            case 3: 
                switch(letter) {
                    case 'a': state = 3; break;
                    case '': state = 1; break;
                    default: return false;
                }
                break;
            default: return std::find(finalNodes.begin(), finalNodes.end(), state) != finalNodes.end();
        }
    }
    return false;
}
bool _test10(Input *input){
    std::vector<int> finalNodes = {1};
    int state = 0; // 初始状态
    while(true) {
        char letter = (input->getInput())[0];
        switch(state) {
            case 0: 
                switch(letter) {
                    case 'a': state = 3; break;
                    default: return false;
                }
                break;
            case 1: 
                switch(letter) {
                    default: return false;
                }
                break;
            case 2: 
                switch(letter) {
                    case '': state = 1; break;
                    default: return false;
                }
                break;
            case 3: 
                switch(letter) {
                    case '+': state = 2; break;
                    case '': state = 1; break;
                    default: return false;
                }
                break;
            default: return std::find(finalNodes.begin(), finalNodes.end(), state) != finalNodes.end();
        }
    }
    return false;
}
bool _test11(Input *input){
    std::vector<int> finalNodes = {0};
    int state = 1; // 初始状态
    while(true) {
        char letter = (input->getInput())[0];
        switch(state) {
            case 0: 
                switch(letter) {
                    default: return false;
                }
                break;
            case 1: 
                switch(letter) {
                    case 'a': state = 2; break;
                    case 'b': state = 3; break;
                    default: return false;
                }
                break;
            case 2: 
                switch(letter) {
                    case 'a': state = 2; break;
                    case 'b': state = 3; break;
                    default: return false;
                }
                break;
            case 3: 
                switch(letter) {
                    case '': state = 0; break;
                    default: return false;
                }
                break;
            default: return std::find(finalNodes.begin(), finalNodes.end(), state) != finalNodes.end();
        }
    }
    return false;
}
bool _test12(Input *input){
    std::vector<int> finalNodes = {0};
    int state = 1; // 初始状态
    while(true) {
        char letter = (input->getInput())[0];
        switch(state) {
            case 0: 
                switch(letter) {
                    default: return false;
                }
                break;
            case 1: 
                switch(letter) {
                    case '1': state = 2; break;
                    case '3': state = 3; break;
                    case '4': state = 5; break;
                    case '5': state = 4; break;
                    case '2': state = 6; break;
                    default: return false;
                }
                break;
            case 2: 
                switch(letter) {
                    case '': state = 0; break;
                    default: return false;
                }
                break;
            case 3: 
                switch(letter) {
                    case '': state = 0; break;
                    default: return false;
                }
                break;
            case 4: 
                switch(letter) {
                    case '': state = 0; break;
                    default: return false;
                }
                break;
            case 5: 
                switch(letter) {
                    case '': state = 0; break;
                    default: return false;
                }
                break;
            case 6: 
                switch(letter) {
                    case '': state = 0; break;
                    default: return false;
                }
                break;
            default: return std::find(finalNodes.begin(), finalNodes.end(), state) != finalNodes.end();
        }
    }
    return false;
}
bool _test13(Input *input){
    std::vector<int> finalNodes = {0};
    int state = 1; // 初始状态
    while(true) {
        char letter = (input->getInput())[0];
        switch(state) {
            case 0: 
                switch(letter) {
                    default: return false;
                }
                break;
            case 1: 
                switch(letter) {
                    case '1': state = 3; break;
                    case '2': state = 4; break;
                    default: return false;
                }
                break;
            case 2: 
                switch(letter) {
                    case '': state = 0; break;
                    default: return false;
                }
                break;
            case 3: 
                switch(letter) {
                    case 'c': state = 2; break;
                    default: return false;
                }
                break;
            case 4: 
                switch(letter) {
                    case 'c': state = 2; break;
                    default: return false;
                }
                break;
            default: return std::find(finalNodes.begin(), finalNodes.end(), state) != finalNodes.end();
        }
    }
    return false;
}
bool _test14(Input *input){
    std::vector<int> finalNodes = {1, 2, 3};
    int state = 4; // 初始状态
    while(true) {
        char letter = (input->getInput())[0];
        switch(state) {
            case 0: 
                switch(letter) {
                    case '': state = 1; break;
                    default: return false;
                }
                break;
            case 1: 
                switch(letter) {
                    default: return false;
                }
                break;
            case 2: 
                switch(letter) {
                    default: return false;
                }
                break;
            case 3: 
                switch(letter) {
                    default: return false;
                }
                break;
            case 4: 
                switch(letter) {
                    case 'c': state = 0; break;
                    case '2': state = 2; break;
                    case '1': state = 3; break;
                    default: return false;
                }
                break;
            default: return std::find(finalNodes.begin(), finalNodes.end(), state) != finalNodes.end();
        }
    }
    return false;
}
bool _ID(Input *input){
    std::vector<int> finalNodes = {0};
    int state = 16; // 初始状态
    while(true) {
        char letter = (input->getInput())[0];
        switch(state) {
            case 0: 
                switch(letter) {
                    default: return false;
                }
                break;
            case 1: 
                switch(letter) {
                    case '': state = 14; break;
                    default: return false;
                }
                break;
            case 2: 
                switch(letter) {
                    case '': state = 15; break;
                    default: return false;
                }
                break;
            case 3: 
                switch(letter) {
                    case '': state = 14; break;
                    default: return false;
                }
                break;
            case 4: 
                switch(letter) {
                    case '': state = 15; break;
                    default: return false;
                }
                break;
            case 5: 
                switch(letter) {
                    case '': state = 15; break;
                    default: return false;
                }
                break;
            case 6: 
                switch(letter) {
                    case '': state = 15; break;
                    default: return false;
                }
                break;
            case 7: 
                switch(letter) {
                    case '': state = 15; break;
                    default: return false;
                }
                break;
            case 8: 
                switch(letter) {
                    case '': state = 13; break;
                    default: return false;
                }
                break;
            case 9: 
                switch(letter) {
                    case '': state = 14; break;
                    default: return false;
                }
                break;
            case 10: 
                switch(letter) {
                    case '': state = 13; break;
                    default: return false;
                }
                break;
            case 11: 
                switch(letter) {
                    case '': state = 15; break;
                    default: return false;
                }
                break;
            case 12: 
                switch(letter) {
                    case '': state = 13; break;
                    default: return false;
                }
                break;
            case 13: 
                switch(letter) {
                    case 'c': state = 1; break;
                    case '1': state = 2; break;
                    case '3': state = 4; break;
                    case 'a': state = 9; break;
                    case 'b': state = 3; break;
                    case '4': state = 6; break;
                    case '5': state = 5; break;
                    case '0': state = 11; break;
                    case '2': state = 7; break;
                    default: return false;
                }
                break;
            case 14: 
                switch(letter) {
                    case 'a': state = 10; break;
                    case 'c': state = 8; break;
                    case '': state = 0; break;
                    case 'b': state = 12; break;
                    default: return false;
                }
                break;
            case 15: 
                switch(letter) {
                    case 'a': state = 10; break;
                    case 'c': state = 8; break;
                    case 'b': state = 12; break;
                    case '': state = 0; break;
                    default: return false;
                }
                break;
            case 16: 
                switch(letter) {
                    case 'b': state = 12; break;
                    case '': state = 0; break;
                    case 'a': state = 10; break;
                    case 'c': state = 8; break;
                    default: return false;
                }
                break;
            default: return std::find(finalNodes.begin(), finalNodes.end(), state) != finalNodes.end();
        }
    }
    return false;
}
bool _Exp(Input *input){
    std::vector<int> finalNodes = {0};
    int state = 1; // 初始状态
    while(true) {
        char letter = (input->getInput())[0];
        switch(state) {
            case 0: 
                switch(letter) {
                    case '': state = 0; break;
                    default: return false;
                }
                break;
            case 1: 
                switch(letter) {
                    case '2': state = 9; break;
                    case '3': state = 6; break;
                    case '1': state = 5; break;
                    case '5': state = 7; break;
                    case '4': state = 8; break;
                    case '0': state = 4; break;
                    default: return false;
                }
                break;
            case 2: 
                switch(letter) {
                    case '0': state = 16; break;
                    case '5': state = 13; break;
                    case '4': state = 14; break;
                    case '3': state = 12; break;
                    case '1': state = 11; break;
                    case '2': state = 15; break;
                    default: return false;
                }
                break;
            case 3: 
                switch(letter) {
                    case '1': state = 11; break;
                    case '3': state = 12; break;
                    case '2': state = 15; break;
                    case '4': state = 14; break;
                    case '5': state = 13; break;
                    case '0': state = 16; break;
                    default: return false;
                }
                break;
            case 4: 
                switch(letter) {
                    case '': state = 10; break;
                    default: return false;
                }
                break;
            case 5: 
                switch(letter) {
                    case '': state = 10; break;
                    default: return false;
                }
                break;
            case 6: 
                switch(letter) {
                    case '': state = 10; break;
                    default: return false;
                }
                break;
            case 7: 
                switch(letter) {
                    case '': state = 10; break;
                    default: return false;
                }
                break;
            case 8: 
                switch(letter) {
                    case '': state = 10; break;
                    default: return false;
                }
                break;
            case 9: 
                switch(letter) {
                    case '': state = 10; break;
                    default: return false;
                }
                break;
            case 10: 
                switch(letter) {
                    case '+': state = 2; break;
                    case '-': state = 3; break;
                    case '': state = 10; break;
                    default: return false;
                }
                break;
            case 11: 
                switch(letter) {
                    case '': state = 0; break;
                    default: return false;
                }
                break;
            case 12: 
                switch(letter) {
                    case '': state = 0; break;
                    default: return false;
                }
                break;
            case 13: 
                switch(letter) {
                    case '': state = 0; break;
                    default: return false;
                }
                break;
            case 14: 
                switch(letter) {
                    case '': state = 0; break;
                    default: return false;
                }
                break;
            case 15: 
                switch(letter) {
                    case '': state = 0; break;
                    default: return false;
                }
                break;
            case 16: 
                switch(letter) {
                    case '': state = 0; break;
                    default: return false;
                }
                break;
            default: return std::find(finalNodes.begin(), finalNodes.end(), state) != finalNodes.end();
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
        std::string c = input->getInput(); 
        if(c == ' ' || c == '\n') continue; 
        input->goBackOneChar();
        int pos = input->getPos();
        if(_test0(input)) { tokens.push_back("_test0"); input->goBackOneChar(); continue; }  
        else input->goBack(pos);
        if(_test1(input)) { tokens.push_back("_test1"); input->goBackOneChar(); continue; }  
        else input->goBack(pos);
        if(_test2(input)) { tokens.push_back("_test2"); input->goBackOneChar(); continue; }  
        else input->goBack(pos);
        if(_test3(input)) { tokens.push_back("_test3"); input->goBackOneChar(); continue; }  
        else input->goBack(pos);
        if(_test4(input)) { tokens.push_back("_test4"); input->goBackOneChar(); continue; }  
        else input->goBack(pos);
        if(_test5(input)) { tokens.push_back("_test5"); input->goBackOneChar(); continue; }  
        else input->goBack(pos);
        if(_test6(input)) { tokens.push_back("_test6"); input->goBackOneChar(); continue; }  
        else input->goBack(pos);
        if(_test7(input)) { tokens.push_back("_test7"); input->goBackOneChar(); continue; }  
        else input->goBack(pos);
        if(_test8(input)) { tokens.push_back("_test8"); input->goBackOneChar(); continue; }  
        else input->goBack(pos);
        if(_test9(input)) { tokens.push_back("_test9"); input->goBackOneChar(); continue; }  
        else input->goBack(pos);
        if(_test10(input)) { tokens.push_back("_test10"); input->goBackOneChar(); continue; }  
        else input->goBack(pos);
        if(_test11(input)) { tokens.push_back("_test11"); input->goBackOneChar(); continue; }  
        else input->goBack(pos);
        if(_test12(input)) { tokens.push_back("_test12"); input->goBackOneChar(); continue; }  
        else input->goBack(pos);
        if(_test13(input)) { tokens.push_back("_test13"); input->goBackOneChar(); continue; }  
        else input->goBack(pos);
        if(_test14(input)) { tokens.push_back("_test14"); input->goBackOneChar(); continue; }  
        else input->goBack(pos);
        if(_ID(input)) { tokens.push_back("_ID"); input->goBackOneChar(); continue; }  
        else input->goBack(pos);
        if(_Exp(input)) { tokens.push_back("_Exp"); input->goBackOneChar(); continue; }  
        else input->goBack(pos);
        if (tokens.size() == tokenSize) {
            std::cerr << "Error: Unexpected words" << std::endl; 
            break;
        }
    } 
    return tokens;
}
