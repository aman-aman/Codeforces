#include<bits/stdc++.h>
using namespace std;
int main(){

    string upper = "qwertyuiop";
    string middle = "asdfghjkl;";
    string lower = "zxcvbnm,./";

    string direction; getline(std::cin, direction);
    string input; getline(std::cin, input);

    int dirNum = (direction[0] == 'R') ? (-1) : 1;
    int pos(0);

    for(int p = 0; p < input.size(); p++){

        pos = upper.find(input[p]);
        if(pos !=string::npos){printf("%c", upper[pos + dirNum]);}
        pos = middle.find(input[p]);
        if(pos != string::npos){printf("%c", middle[pos + dirNum]);}
        pos = lower.find(input[p]);
        if(pos !=string::npos){printf("%c", lower[pos + dirNum]);}

    }
}
