#include <iostream>
#include <iomanip>
#include <string>
#include <cstdlib>
#include <cmath>
#include <fstream>

using namespace std;
double deviation(double x,double y,double z){
    double O = sqrt((x)/y-pow(z,2)) ;
    return O ;
}

int main(){
    int count = 0 ;
    float sum = 0;
    float sum1 = 0;
    string haveline;
    ifstream source("C:\\TempPatchCD\\text\\lab11_2564_2-master\\score.txt");
    while (getline(source,haveline))
    {
        sum += atof(haveline.c_str());
        sum1 +=pow(atof(haveline.c_str()),2) ;
        count++;
    }
    cout << "Number of data = ";
    cout << count <<"\n";
    cout << setprecision(3);
    cout << "Mean = ";
    double U=sum/count ;
    cout << U <<"\n";
    cout << "Standard deviation = ";
    cout <<  deviation(sum1,count,U) ;

    return 0 ;
}