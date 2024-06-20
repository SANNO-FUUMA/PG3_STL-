#include<stdio.h>
#include<list>
#include<iostream>

using namespace std;

int main() {

    list<const char*>staiton = { "tokyo","kanda","akihabara","okachimachi","ueno",
        "uguisudani","nippori","tabata","komagome","sugamo","otsuka","ikebukuro",
        "mejiro","takadanobaba","shin-okubo","shinjuku","yoyogi","harajuku","shibuya",
        "ebisu","meguro","gotanda","osaki","shinagawa","tamachi","hamamatsucho","shimbashi","yurakucho" };

    for (list<const char*>::iterator itr = staiton.begin(); itr != staiton.end(); itr++) {

        cout << *itr << endl;

    }

    for (list<const char*>::iterator itr = staiton.begin(); itr != staiton.end(); itr++) {

        if (strcmp(*itr, "tabata") == 0) {
            itr = staiton.insert(itr, "nishi_nippori");
            ++itr;
        }
    }
    printf("\n2019\n");
    for (list<const char*>::iterator itr = staiton.begin(); itr != staiton.end(); itr++) {

        cout << *itr << endl;

    }
    for (list<const char*>::iterator itr = staiton.begin(); itr != staiton.end(); itr++) {

        if (strcmp(*itr, "tamachi") == 0) {
            itr = staiton.insert(itr, "takanawa gateway");
            ++itr;
        }

    }
    printf("\n2023\n");
    for (list<const char*>::iterator itr = staiton.begin(); itr != staiton.end(); itr++) {

        cout << *itr << endl;

    }
    return 0;
}