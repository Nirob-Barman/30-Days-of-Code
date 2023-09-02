#include <bits/stdc++.h>

using namespace std;

class Person
{
public:
    string firstName;
    string lastName;
    int id;

    Person(string firstName, string lastName, int identification)
    {
        this->firstName = firstName;
        this->lastName = lastName;
        this->id = identification;
    }

    void printPerson()
    {
        cout << "Name: " << lastName << ", " << firstName << "\nID: " << id << "\n";
    }
};

class Student : public Person
{
public:
    vector<int> testScores;

    Student(string firstName, string lastName, int identification, vector<int> &scores)
        : Person(firstName, lastName, identification), testScores(scores) {}

    char calculate()
    {
        int sum = 0;
        for (int score : testScores)
        {
            sum += score;
        }

        int average = sum / testScores.size();

        if (average >= 90 && average <= 100)
        {
            return 'O';
        }
        else if (average >= 80 && average < 90)
        {
            return 'E';
        }
        else if (average >= 70 && average < 80)
        {
            return 'A';
        }
        else if (average >= 55 && average < 70)
        {
            return 'P';
        }
        else if (average >= 40 && average < 55)
        {
            return 'D';
        }
        else
        {
            return 'T';
        }
    }
};

int main()
{
    string firstName, lastName;
    int id, numScores;
    cin >> firstName >> lastName >> id >> numScores;

    vector<int> scores(numScores);

    for (int i = 0; i < numScores; i++)
    {
        cin >> scores[i];
    }

    Student s(firstName, lastName, id, scores);
    s.printPerson();
    cout << "Grade: " << s.calculate() << endl;

    return 0;
}