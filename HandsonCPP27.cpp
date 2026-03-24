#include <iostream>
#include <vector>
#include <memory>
using namespace std;

class Media {
public:
    virtual void play() {
        cout << "Playing generic media\n";
    }

    virtual ~Media() {
        cout << "Media destroyed\n";
    }
};

class Audio : public Media {
public:
    void play() override {
        cout << "Playing audio\n";
    }

    ~Audio() {
        cout << "Audio destroyed\n";
    }
};

class Video : public Media {
public:
    void play() override {
        cout << "Playing video\n";
    }

    ~Video() {
        cout << "Video destroyed\n";
    }
};

int main() {
    vector<unique_ptr<Media>> playlist;

    playlist.push_back(make_unique<Audio>());
    playlist.push_back(make_unique<Video>());
    playlist.push_back(make_unique<Audio>());

    for (auto& m : playlist) {
        m->play();
    }

    return 0;
}