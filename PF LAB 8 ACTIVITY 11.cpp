#include <iostream>
#include <cstring>

using namespace std;

const int students=100;

void inputdata(char (*name)[50], int *score,int &index) {
    cout << "enter the number of student : ";
    cin >>index;

    for (int i=0;i<index;i++)
	 {
        cout<<"enter name of student " <<i + 1<<": ";
        cin>>name[i];
        cout<<endl;
        cout<<"Enter score of student "<<i + 1<<": ";
        cin >> score[i];
    }
}

void displayStudents(char (*name)[50], int *score, int index) {
    cout << ":: Student Names and Scores ::";
    for (int i = 0; i <index; i++) {
        cout<<"Name: "<<name[i]<<"  Score: "<<score[i]<<endl;
    }
}

void highestscore(char (*name)[50], int *score, int index) {
    int highestScore=score[0];
    for (int i=0;i<index;i++) {
        if (score[i]>highestScore) {
            highestScore =score[i];
    cout<<"Highest Score : "<<highestScore<<endl;
cout<<"name of highest score  student :"<<name[i]<<endl;
        }
}
  
}

double Averagescore(int *score, int index) {
    float avg;
	int totalscore =0;
    for (int i=0;i<index;i++) {
        totalscore += score[i];
    }
      avg =totalscore/index;
    return avg;
}

void search_name(char (*name)[50],int *score,int index) {
    char searchname[50];
    cout << "Enter the name of the student to search: ";
    cin >> searchname;

    for (int i=0;i<index;i++) {
        if(name[i]== searchname) {
            cout<<"Score of "<<name[i]<<": "<<score[i]<<endl;
            return;
        }
    }
    cout << "Student not found!" << endl;
}

int main() {
    char name[students][50];
    int score[students];
    int index;

    inputdata(name, score, index);
    displayStudents(name,score,index);
    highestscore(name,score,index);
  
    cout<<"Average Score: "<<Averagescore(score, index)<<endl;
    search_name(name, score,index);

    return 0;
}