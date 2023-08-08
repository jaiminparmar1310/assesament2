#include <iostream>
#include <string>

using namespace std;

class LectureDetails 
{
private:
    string lecturerName;
    string subjectName;
    string courseName;
    int numOfLectures;

public:
    
    LectureDetails() 
	{
        lecturerName = "";
        subjectName = "";
        courseName = "";
        numOfLectures = 0;
    }

    void assignInitialValues(string name, string subject, string course, int numLectures) 
	{
        lecturerName = name;
        subjectName = subject;
        courseName = course;
        numOfLectures = numLectures;
    }

    void addLectureDetails() 
	{
        cout << "Enter lecturer name: ";
        cin.ignore(); 
        getline(cin, lecturerName);

        cout << "Enter subject name: ";
        getline(cin, subjectName);

        cout << "Enter course name: ";
        getline(cin, courseName);

        cout << "Enter number of lectures: ";
        cin >> numOfLectures;
    }

    void displayDetails() 
	{
        cout << "Lecturer Name: " << lecturerName << endl;
        cout << "Subject Name: " << subjectName << endl;
        cout << "Course Name: " << courseName << endl;
        cout << "Number of Lectures: " << numOfLectures << endl;
    }
};

int main() 
{
    const int NUM_LECTURERS = 5;

    LectureDetails lecturers[NUM_LECTURERS];

    for (int i = 0; i < NUM_LECTURERS; ++i) 
	{
        cout << "Enter details for Lecturer " << i + 1 << endl;
        lecturers[i].addLectureDetails();
        cout << endl;
    }
    cout << "Lecture Details for each lecturer:" << endl;
    for (int i = 0; i < NUM_LECTURERS; ++i) 
	{
        cout << "Details for Lecturer " << i + 1 << ":" << endl;
        lecturers[i].displayDetails();
        cout << endl;
    }

    return 0;
}
