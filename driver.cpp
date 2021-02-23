
//#include "Card.hpp"
//#include "URL.hpp"
#include <iostream>
#include <string.h>

using namespace std;

string JSONeditor(string jsonString){
    int length=jsonString.length();
    int temp=0;
    int temp1=0;
    int temp2=0;
    for(int i=0; i <= length; i++ ){

        if(jsonString[i]='['){
            if(temp=0){
                temp1=i;
                temp=temp+1;
            }
            else if(temp=1){
                temp2=i;
            }
        }

        if(jsonString[i]=']'){
            if(temp=1){
                temp2=i;
            }
        }
    }

    jsonString.erase(temp1,temp1+0);
    jsonString.erase(temp2,temp2+0);
    return jsonString;
}

int main(int argc, char** argv)
{
    //URL* u1 = new URL("https://api.hearthstonejson.com/v1/25770/enUS/cards.json");
    //cout << u1->getContents() << endl;
    string jsonString = "[{\"fname\":\"val1\", \"lname\": \"val2\", \"sums\":[1,2,3]},{\"fname\":\"val3\", \"lname\":\"val4\"}]";
    cout << jsonString << endl;
    cout << JSONeditor(jsonString)<< endl;
    return 0;
}