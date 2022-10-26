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
void filter3(vector<vector<vector<int>>> &vec) {
    size_t rows = vec.size();
    if (!rows) exit(1);
    size_t cols = vec.at(0).size();
    if (!cols) exit(1);
    size_t colors = vec.at(0).at(0).size();
    if (!colors) exit(1);



//  make_rect(vec, 20, 80, 50, 60);
//  make_rect(vec, 20, 80, 100, 100);

    //Do the image filtering on every row and column in this image...
    for (int i = 1880; i < 1900; i++) {           //watermark middle
        for (int j = 560; j < 580; j++) {

        vec.at(i).at(j).at(RED) =0;
        vec.at(i).at(j).at(GREEN)=0;
        vec.at(i).at(j).at(BLUE) =0;
    }
    }

    for (int i = 1880; i < 1900; i++) {           // watermark middle bottom
        for (int j = 582; j < 586; j++) {

        vec.at(i).at(j).at(RED) =0;
        vec.at(i).at(j).at(GREEN)=0;
        vec.at(i).at(j).at(BLUE) =0;
    }
    }

for (int i = 1880; i < 1900; i++) {           // middle top
        for (int j = 554; j < 558; j++) {

        vec.at(i).at(j).at(RED) =0;
        vec.at(i).at(j).at(GREEN)=0;
        vec.at(i).at(j).at(BLUE) =0;
    }
    }

    for (int i = 1902; i < 1906; i++) {           //  mid right
        for (int j = 560; j < 580; j++) {

        vec.at(i).at(j).at(RED) =0;
        vec.at(i).at(j).at(GREEN)=0;
        vec.at(i).at(j).at(BLUE) =0;
    }
    }

 for (int i = 1874; i < 1878; i++) {           //  mid left
        for (int j = 560; j < 580; j++) {

        vec.at(i).at(j).at(RED) =0;
        vec.at(i).at(j).at(GREEN)=0;
        vec.at(i).at(j).at(BLUE) =0;
    }
    }
        for (int i = 1874; i < 1878; i++) {           //   left bottom
        for (int j = 582; j < 586; j++) {

        vec.at(i).at(j).at(RED) =0;
        vec.at(i).at(j).at(GREEN)=0;
        vec.at(i).at(j).at(BLUE) =0;
    }
    }

for (int i = 1874; i < 1878; i++) {           //   left top
        for (int j = 554; j < 558; j++) {

        vec.at(i).at(j).at(RED) =0;
        vec.at(i).at(j).at(GREEN)=0;
        vec.at(i).at(j).at(BLUE) =0;
    }
    }

for (int i = 1902; i < 1906; i++) {           //   right bottom
        for (int j = 582; j < 586; j++) {

        vec.at(i).at(j).at(RED) =0;
        vec.at(i).at(j).at(GREEN)=0;
        vec.at(i).at(j).at(BLUE) =0;
    }
    }

for (int i = 1902; i < 1906; i++) {           //   right top
        for (int j = 554; j < 558; j++) {

        vec.at(i).at(j).at(RED) =0;
        vec.at(i).at(j).at(GREEN)=0;
        vec.at(i).at(j).at(BLUE) =0;
    }
    }

//message
for (int i = 54; i < 56; i++) {           //   h
    for(int j=550;  j<560; j++) {
        vec.at(i).at(j).at(RED) =0;
        vec.at(i).at(j).at(GREEN)=0;
        vec.at(i).at(j).at(BLUE) =0;

    }
}
for (int i = 58; i < 60; i++) {           //   h
    for(int j=550;  j<560; j++) {
        vec.at(i).at(j).at(RED) =0;
        vec.at(i).at(j).at(GREEN)=0;
        vec.at(i).at(j).at(BLUE) =0;

    }
}

for (int i = 54; i < 58; i++) {           //   h
    for(int j=554;  j<556; j++) {
        vec.at(i).at(j).at(RED) =0;
        vec.at(i).at(j).at(GREEN)=0;
        vec.at(i).at(j).at(BLUE) =0;
    }
    }


    for (int i = 62; i < 64; i++) {           //   s
    for(int j=550;  j<560; j++) {
        vec.at(i).at(j).at(RED) =0;
        vec.at(i).at(j).at(GREEN)=0;
        vec.at(i).at(j).at(BLUE) =0;

    }
}

}
