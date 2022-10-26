//Student 2 Name:Spencer Ha
#include <vector>
#include <iostream>
#include <iomanip>
#include <cstdlib>
#include <cmath>
using namespace std;

const int RED = 0, GREEN = 1, BLUE = 2;
//YOU: Write your own filter here - delete the demo code or modify it to suit your purposes
void filter2(vector<vector<vector<int>>> &vec) {
	size_t rows = vec.size();
	if (!rows) exit(1);
	size_t cols = vec.at(0).size();
	if (!cols) exit(1);
	size_t colors = vec.at(0).at(0).size();
	if (!colors) exit(1);

	for (int i = 0; i < rows; i++) { 
		for (int j = 0; j < cols; j++) {
			int r = vec.at(i).at(j).at(RED);
            int g = vec[i][j][GREEN]; 
            int b = vec[i][j][BLUE];
			const double diag_length = hypot(rows/2,0,cols/2.0);
			double distance = hypot(i-(rows/2.0),j-(cols/2.0));
			double brightness = 2 - 2*(distance/diag_length);
			for (int k = 0; k < colors; k++) { // Demo Vignette
				vec.at(i).at(j).at(k) *= brightness;
			} 
			if (i > rows/2000 and i < (3*rows/2) and j > cols/2 and j < (2.5*cols/3)) { // Greyscale rectangle across the middle of the image
				int avg = (r+g+b)/3;
				vec.at(i).at(j).at(RED) = avg;
				vec.at(i).at(j).at(GREEN) = avg;
				vec.at(i).at(j).at(BLUE) = avg; 
			}
		}
	}
	for (int i = 48; i < 50; i++) { // Adding hashtag to secret message
    	for(int j=550;  j<560; j++) {
        	vec.at(i).at(j).at(RED) =0;
        	vec.at(i).at(j).at(GREEN)=0;
        	vec.at(i).at(j).at(BLUE) =0;
		}
	}
	for (int i = 44; i < 46; i++) {
    	for(int j=550;  j<560; j++) {
        	vec.at(i).at(j).at(RED) =0;
        	vec.at(i).at(j).at(GREEN)=0;
        	vec.at(i).at(j).at(BLUE) =0;
		}
	}
	for (int i = 42; i < 52; i++) { 
    	for(int j=552;  j<554; j++) {
        	vec.at(i).at(j).at(RED) =0;
        	vec.at(i).at(j).at(GREEN)=0;
        	vec.at(i).at(j).at(BLUE) =0;
    	}
    }
	for (int i = 42; i < 52; i++) {     
    	for(int j=556;  j<558; j++) {
        	vec.at(i).at(j).at(RED) =0;
        	vec.at(i).at(j).at(GREEN)=0;
        	vec.at(i).at(j).at(BLUE) =0;
    	}
    }
}


