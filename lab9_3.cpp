#include <iostream>
#include <iomanip>
#include<cmath>
#include<fstream>
#include<string>
#include<cstdlib>
using namespace std;
int main(){
    double sum ,sum2 ,mean,SD;
    double count = 0;
    ifstream score;
    string text;
    score.open("score.txt");
    while (getline(score,text))
    {
        sum += stod(text);
        sum2 += pow(stod(text),2);
        count++;
    }
    
    cout << "Number of data = "<<count<<endl;
    cout << setprecision(3);
    mean = sum / count;
    cout << "Mean = "<<mean<<endl;
    SD = sqrt(((1/count)*sum2)-pow(mean,2));
    cout << "Standard deviation = "<<SD;
}//