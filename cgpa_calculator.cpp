#include <bits/stdc++.h>
using namespace std;

double cgpaCalculator (double marks[], int n)
{
    double grade [n];
     double cgpa , sum =0;
     for(int i = 0; i < n; i++) 
    {
       grade[i] = (marks[i] / 10);
    }
 
    for(int i = 0; i < n; i++) 
    {
       sum += grade[i];
    } 
    cgpa = sum / n;
 
    return cgpa;
}

int main()
{
     int n;
    cout << "Enter the number of subjects: ";
    cin >> n;

    double marks[n];
    cout << "Enter the marks for each subject: \n";
    for (int i = 0; i < n; i++) {
        cout << "Subject " << i + 1 << ": ";
        cin >> marks[i];
    }

    double cgpa = cgpaCalculator(marks, n);

    cout << "CGPA = ";
    printf("%.1f\n", cgpa);
    cout << "CGPA Percentage = ";
    printf("%.2f\n", cgpa * 9.5);

    return 0;
}