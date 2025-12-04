#include <iostream>
#include <cstring>

using namespace std;

const int students = 100;

void inputdata(char (*name)[50], int *score, int &index) {
    cout << "Enter the number of students: ";
    cin >> index;

    for (int i = 0; i < index; i++) {
        cout << "Enter name of student " << i + 1 << ": ";
        cin >> name[i];
        cout << endl;
        cout << "Enter score of student " << i + 1 << ": ";
        cin >> score[i];
    }
}

void displayStudents(char (*name)[50], int *score, int index) {
    cout << ":: Student Names and Scores ::\n";
    for (int i = 0; i < index; i++) {
        cout << "Name: " << name[i] << "  Score: " << score[i] << endl;
    }
}

void highestscore(char (*name)[50], int *score, int index) {
    int highestScore = score[0];
    int highestindex = 0; 

    for (int i = 1; i < index; i++) { 
        if (score[i] > highestScore) {
            highestScore = score[i];
            highestindex = i; 
        }
    }

    cout << "Highest Score: " << highestScore << endl;
    cout << "Name of highest score student: " << name[highestindex] << endl;
}

double Averagescore(int *score, int index) {
    int totalScore = 0;
    for (int i = 0; i < index; i++) {
        totalScore += score[i];
    }
    return static_cast<double>(totalScore) / index; 
}

void search_name(char (*name)[50], int *score, int index) {
    char searchname[50];
    cout << "Enter the name of the student to search: ";
    cin >> searchname;

    for (int i = 0; i < index; i++) {
        if (strcmp(name[i], searchname) == 0) { 
            cout << "Score of " << name[i] << ": " << score[i] << endl;
            return; // Exit the function if the student is found
        }
    }
    // If we reach here, it means the student was not found
    cout << "Student not found!" << endl;
}

int main() {
    char name[students][50];
    int score[students];
    int index;

    inputdata(name, score, index);
    displayStudents(name, score, index);
    highestscore(name, score, index);
  
    cout << "Average Score: " << Averagescore(score, index) << endl;
    search_name(name, score, index);

    return 0;
}