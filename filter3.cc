//Student 3 Name: AYANNA AVALOS
#include <vector>
#include <iostream>
#include <iomanip>
#include <cstdlib>
#include <cmath>
using namespace std;

const int RED = 0, GREEN = 1, BLUE = 2;


//YOU: Write your own filter here - delete the demo code or modify it to suit your purposes
//void filter3(vector<vector<vector<int>>> &vec) {}
void filter3(vector<vector<vector<int>>> &vec, vector<vector<vector<int>>> &vec2) {
    size_t rows = vec.size() < vec2.size() ? vec.size() : vec2.size();
    if (!rows) exit(1);
    size_t cols = vec.at(0).size() < vec2.at(0).size() ? vec.at(0).size() : vec2.at(0).size();
    if (!cols) exit(1);
    size_t colors = vec.at(0).at(0).size();
    if (!colors) exit(1);



//  make_rect(vec, 20, 80, 50, 60);
//  make_rect(vec, 20, 80, 100, 100);

    //Do the image filtering on every row and column in this image...
    for (int i = 60; i < 80; i++) {           //watermark middle
        for (int j = 60; j < 80; j++) {

        vec.at(i).at(j).at(RED) =0;
        vec.at(i).at(j).at(GREEN)=0;
        vec.at(i).at(j).at(BLUE) =0;
    }
    }

    for (int i = 60; i < 80; i++) {           // watermark middle bottom
        for (int j = 82; j < 86; j++) {

        vec.at(i).at(j).at(RED) =0;
        vec.at(i).at(j).at(GREEN)=0;
        vec.at(i).at(j).at(BLUE) =0;
    }
    }

for (int i = 60; i < 80; i++) {           // middle top
        for (int j = 54; j < 58; j++) {

        vec.at(i).at(j).at(RED) =0;
        vec.at(i).at(j).at(GREEN)=0;
        vec.at(i).at(j).at(BLUE) =0;
    }
    }

    for (int i = 82; i < 86; i++) {           //  mid right
        for (int j = 60; j < 80; j++) {

        vec.at(i).at(j).at(RED) =0;
        vec.at(i).at(j).at(GREEN)=0;
        vec.at(i).at(j).at(BLUE) =0;
    }
    }

 for (int i = 54; i < 58; i++) {           //  mid left
        for (int j = 60; j < 80; j++) {

        vec.at(i).at(j).at(RED) =0;
        vec.at(i).at(j).at(GREEN)=0;
        vec.at(i).at(j).at(BLUE) =0;
    }
    }
        for (int i = 54; i < 58; i++) {           //   left bottom
        for (int j = 82; j < 86; j++) {

        vec.at(i).at(j).at(RED) =0;
        vec.at(i).at(j).at(GREEN)=0;
        vec.at(i).at(j).at(BLUE) =0;
    }
    }

for (int i = 54; i < 58; i++) {           //   left top
        for (int j = 54; j < 58; j++) {

        vec.at(i).at(j).at(RED) =0;
        vec.at(i).at(j).at(GREEN)=0;
        vec.at(i).at(j).at(BLUE) =0;
    }
    }

for (int i = 82; i < 86; i++) {           //   right bottom
        for (int j = 82; j < 86; j++) {

        vec.at(i).at(j).at(RED) =0;
        vec.at(i).at(j).at(GREEN)=0;
        vec.at(i).at(j).at(BLUE) =0;
    }
    }

for (int i = 82; i < 86; i++) {           //   right top
        for (int j = 54; j < 58; j++) {

        vec.at(i).at(j).at(RED) =0;
        vec.at(i).at(j).at(GREEN)=0;
        vec.at(i).at(j).at(BLUE) =0;
    }
    }

//message
for (int i = 54; i < 56; i++) {           //   h
    for(int j=500;  j<510; j++) {
        vec.at(i).at(j).at(RED) =0;
        vec.at(i).at(j).at(GREEN)=0;
        vec.at(i).at(j).at(BLUE) =0;

    }
}
for (int i = 58; i < 60; i++) {           //   h
    for(int j=500;  j<510; j++) {
        vec.at(i).at(j).at(RED) =0;
        vec.at(i).at(j).at(GREEN)=0;
        vec.at(i).at(j).at(BLUE) =0;

    }
}

for (int i = 54; i < 58; i++) {           //   h
    for(int j=504;  j<506; j++) {
        vec.at(i).at(j).at(RED) =0;
        vec.at(i).at(j).at(GREEN)=0;
        vec.at(i).at(j).at(BLUE) =0;
    }
    }


    for (int i = 62; i < 64; i++) {           //   s
    for(int j=500;  j<510; j++) {
        vec.at(i).at(j).at(RED) =0;
        vec.at(i).at(j).at(GREEN)=0;
        vec.at(i).at(j).at(BLUE) =0;

    }
}

}
