#include "get_trackid.h"

//get track id
string get_trackid(string response) {
    vector<string> tokens;
    int count = 0;
    int a = 0;
    tokenize(response, ' ', tokens);
    //finding the count of "id" in response.
    for (int i = 0; i < tokens.size(); i++) {
        if (tokens[i] == "\"id\"") count++;
    }
    //returning the last id i.e. traacck id.
    for (int i = 0; i < tokens.size(); i++) {
        if (tokens[i] == "\"id\"")
            a++; 
            if (a == count) {
                return tokens[i + 2];
            }
    }
}


