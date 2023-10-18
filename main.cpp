#include <iostream>
#include <fstream>
using namespace std;

// Function to calculate CGPA
float calculateCGPA(int n, int credits[], float grades[]) {
    float totalGradePoints = 0;
    int totalCredits = 0;
    
    for (int i = 0; i < n; i++) {
        totalGradePoints += credits[i] * grades[i];
        totalCredits += credits[i];
    }

    return totalGradePoints / totalCredits;
}

int main() {
    int n; // Number of courses
    cout << "Enter the number of courses: ";
    cin >> n;

    int credits[n];
    float grades[n];

    // Input course details
    for (int i = 0; i < n; i++) {
        cout << "Enter credits for course " << i + 1 << ": ";
        cin >> credits[i];
        cout << "Enter grade for course " << i + 1 << ": ";
        cin >> grades[i];
    }

    // Calculate and display GPA
    float cgpa = calculateCGPA(n, credits, grades);
    cout << "Your Cumulative Grade Point Average (CGPA) is: " << cgpa << endl;

    // Save the data to a file
    ofstream outputFile("cgpa_data.txt");
    if (outputFile.is_open()) {
        for (int i = 0; i < n; i++) {
            outputFile << "Course " << i + 1 << ": Credits = " << credits[i] << ", Grade = " << grades[i] << endl;
        }
        outputFile << "CGPA: " << cgpa << endl;
        outputFile.close();
    } else {
        cerr << "Error opening file for writing!" << endl;
    }

    return 0;
}
