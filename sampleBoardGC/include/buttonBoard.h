#ifndef BUTTONBOARD_H
#define BUTTONBOARD_H
#include "ofMain.h"

#define BB_COLS 64
#define BB_ROWS 64

class buttonBoard
{
    public:
        buttonBoard();
        void setup();
        void windowResize();
        void update(float dt);
        void draw();
        void getData();
        void mousePressed(int x, int y, int button);
        bool buttonActive(int row, int col);
        void toggleButton(int row, int col);
        int64_t getActiveCol();
        bool newCol();
        int getCount();
        void setSample(int64_t ns[BB_COLS]);
    protected:
    private:
        float cw;
        float rh;
        float border;
        float time;
        float speed;
        int64_t s[BB_COLS];
        float width;
        float height;
        int column;
        bool nc;
        int cnt;
        ofFbo fbo;
        float mx; // margin
        float my;
};

#endif // BUTTONBOARD_H
