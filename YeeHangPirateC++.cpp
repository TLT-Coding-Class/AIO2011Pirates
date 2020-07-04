#include <iostream>

#include <string>

#include <fstream>

using namespace std;


int main() {

    ifstream infile;

    infile.open("piratein.txt");

    string li, xi, yi;

    infile >> li;

    int l = stoi(li);

    infile >> xi;

    int x = stoi(xi);

    infile >> yi;

    int y = stoi(yi);

    infile.close();

    ofstream outfile;

    outfile.open("pirateout.txt");

    outfile << min(x + y, l - x + l - y);

    outfile.close();

}
