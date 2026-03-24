#include <iostream>
using namespace std;

class Media {
public:
    virtual void play() {
        cout << "Playing media\n";
    }
};

class Audio : public Media {
public:
    void play() {
        cout << "Playing audio\n";
    }
};

class Video : public Media {
public:
    void play() {
        cout << "Playing video\n";
    }
};

int main() {

    Media* m;  

    Audio a;
    Video v;

    m = &a;
    m->play();  

    m = &v;
    m->play(); 

    return 0;
}