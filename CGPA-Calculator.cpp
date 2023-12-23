#include<bits/stdc++.h>
using namespace std;
int main(){

    cout << "*****************  Welcome to CGPA calculator.  *****************" << endl;
    int n;
    cout << "enter number of subjects:" << endl;
    cin >> n;
    double Marks[n];
    for (int i = 0; i < n;i++){
        cin >> Marks[i];
    }
    float sum = 0;
    for (int i = 0; i < n; i++)
    {
        sum += (Marks[i] / 10);
    }
    float cgpa = sum / n;
    float percentage = cgpa * 9.5;

    cout << "Your cgpa is: " << cgpa << endl;
    cout << "your percentage is:" << percentage <<'%' <<endl;


    cout << "*****************  Thank you.  *****************" << endl;
    return 0;
}