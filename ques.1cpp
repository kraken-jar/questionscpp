#include <iostream>
using namespace std;
class institute
{
public:
    int campussize;
    int noOfStudents;
    int noOfTeachers;
    int noOfCourses;
};
class school : public institute
{
public:
    bool isPrivate;
    bool isGovernment;
    bool isReligion;
    void input()
    {
        cout << "Enter the size of the campus: ";
        cin >> campussize;
        cout << "Enter the number of students: ";
        cin >> noOfStudents;
        cout << "Enter the number of teachers: ";
        cin >> noOfTeachers;
        cout << "Enter the number of courses: ";
        cin >> noOfCourses;
        cout << "Enter the type of the school: ";
        cout << "1. Private" << endl;
        cout << "2. Government" << endl;
        cout << "3. Religion" << endl;
        int type;
        cin >> type;
        if (type == 1)
        {
            isPrivate = true;
        }
        else if (type == 2)
        {
            isGovernment = true;
        }
        else if (type == 3)
        {
            isReligion = true;
        }
    };
    void display()
    {
        cout << "The size of the campus is: " << campussize << endl;
        cout << "The number of students are: " << noOfStudents << endl;
        cout << "The number of teachers are: " << noOfTeachers << endl;
        cout << "The number of courses are: " << noOfCourses << endl;
        if (isPrivate == true)
        {
            cout << "The school is private" << endl;
        }
        else if (isGovernment == true)
        {
            cout << "The school is government" << endl;
        }
        else if (isReligion == true)
        {
            cout << "The school is religion" << endl;
        }
    };
};
class college : public institute
{
public:
    bool isPrivate;
    bool isGovernment;
    bool isArtAndScience;
    bool isEngineering;
    bool isMedical;
    void input()
    {
        cout << "Enter the size of the campus: ";
        cin >> campussize;
        cout << "Enter the number of students: ";
        cin >> noOfStudents;
        cout << "Enter the number of teachers: ";
        cin >> noOfTeachers;
        cout << "Enter the number of courses: ";
        cin >> noOfCourses;
        cout << "Enter the type of the college: ";
        cout << "1. Private" << endl;
        cout << "2. Government" << endl;
        cout << "3. Art and Science" << endl;
        cout << "4. Engineering" << endl;
        cout << "5. Medical" << endl;
        int type;
        cin >> type;
        if (type == 1)
        {
            isPrivate = true;
        }
        else if (type == 2)
        {
            isGovernment = true;
        }
        else if (type == 3)
        {
            isArtAndScience = true;
        }
        else if (type == 4)
        {
            isEngineering = true;
        }
        else if (type == 5)
        {
            isMedical = true;
        }
    };
    void display(){
        cout << "The size of the campus is: " << campussize << endl;
        cout << "The number of students are: " << noOfStudents << endl;
        cout << "The number of teachers are: " << noOfTeachers << endl;
        cout << "The number of courses are: " << noOfCourses << endl;
        if (isPrivate == true)
        {
            cout << "The college is private" << endl;
        }
        else if (isGovernment == true)
        {
            cout << "The college is government" << endl;
        }
        else if (isArtAndScience == true)
        {
            cout << "The college is art and science" << endl;
        }
        else if (isEngineering == true)
        {
            cout << "The college is engineering" << endl;
        }
        else if (isMedical == true)
        {
            cout << "The college is medical" << endl;
        }
    
    }
};
int main(){
    school s[100];
    college c[100];
    int i;
    int n;
    cout<<"Enter the number of schools: ";
    cin>>n;
    for(i=0;i<n;i++){
        cout<<"Enter the details of school "<<i+1<<endl;
        s[i].input();
    }
    cout<<"Enter the number of colleges: ";
    cin>>n;
    for(i=0;i<n;i++){
        cout<<"Enter the details of college "<<i+1<<endl;
        c[i].input();
    }
    cout<<"The details of the schools are: "<<endl;
    for(i=0;i<n;i++){
        s[i].display();
    }
    cout<<"The details of the colleges are: "<<endl;
    for(i=0;i<n;i++){
        c[i].display();
    }
    return 0;
}
