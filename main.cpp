#include <iostream>
#include <fstream>
#include <iomanip>
#include <conio.h>
#include <cstring>
#include <vector>
#include<map>
using namespace std;

char u[15], ps[11], r1 = 201, r2 = 200, r3 = 188, r4 = 187, r5 = 205, r6 = 186, r7 = 220,
r8 = 202, r9 = 204, r10 = 203, r11 = 206, r12 = 185;
const int MAX_SIZE = 50;
void home()
{
    cout << "\n\n\t\t\t\t " << r1;
    for (int i = 1; i < 27; i++)
        cout << r5;
    cout << r4 << endl;
    cout << "\t\t\t\t " << r6 << "       HOME SECTION       " << r6 << endl;
    cout << "\t\t\t\t " << r2;
    for (int i = 1; i < 27; i++)
        cout << r5;
    cout << r3 << endl;
}
void admin_userinter()
{
    cout << "\n\n\t\t\t\t " << r1;
    for (int i = 1; i < 27; i++)
        cout << r5;
    cout << r4 << endl;
    cout << "\t\t\t\t " << r6 << "\tADMIN SECTION       " << r6 << endl;
    cout << "\t\t\t\t " << r2;
    for (int i = 1; i < 27; i++)
        cout << r5;
    cout << r3 << endl;
}

void call_admin();
void call_stu();

/*struct Student {
    char name[MAX_SIZE];
    bool present;
};

// Function to display menu options
void displayMenu() {
    cout << "Attendance Management System" << endl;
    cout << "---------------------------" << endl;
    cout << "1. Mark attendance" << endl;
    cout << "2. View attendance report" << endl;
    cout << "3. Exit" << endl;
    cout << endl;
}

// Function to mark attendance
void markAttendance() {
    int numStudents;
    cout << "Enter the number of students: ";
    cin >> numStudents;

    // Create an array of Student structs
    Student students[numStudents];

    // Loop through each student and prompt for name and attendance
    for (int i = 0; i < numStudents; i++) {
        cout << "Enter the name of student " << i+1 << ": ";
        cin.ignore();
        cin.getline(students[i].name, MAX_SIZE);

        cout << "Is " << students[i].name << " present (Y/N)? ";
        char present;
        cin >> present;
        students[i].present = (present == 'Y' || present == 'y');
    }

    // Open the attendance file for writing
    ofstream outfile;
    outfile.open("attendance.txt", ios::app);

    // Loop through each student and write their information to the file
    for (int i = 0; i < numStudents; i++) {
        outfile << students[i].name << " " << students[i].present << endl;
    }

    // Close the file
    outfile.close();

    cout << "Attendance marked successfully!" << endl;
    cout << endl;
}

// Function to view attendance report
void viewAttendanceReport() {
    // Open the attendance file for reading
    ifstream infile;
    infile.open("attendance.txt");

    if (!infile) {
        cout << "Attendance file does not exist!" << endl;
        return;
    }

    // Variables to hold attendance statistics
    int totalStudents = 0;
    int presentStudents = 0;
    int absentStudents = 0;

    // Loop through each line of the file and count attendance
    string line;
    while (getline(infile, line)) {
        char name[MAX_SIZE];
        bool present;
        sscanf(line.c_str(), "%s %d", name, &present);

        totalStudents++;
        if (present) {
            presentStudents++;
        } else {
            absentStudents++;
        }
    }

    // Close the file
    infile.close();

    // Print attendance report
    cout << "Attendance Report" << endl;
    cout << "-----------------" << endl;
    cout << "Total students: " << totalStudents << endl;
    cout << "Present students: " << presentStudents << endl;
    cout << "Absent students: " << absentStudents << endl;
    cout << endl;
}
*/
void member()
{
    char x = 2, d = 4;
    cout << "\n\n\n\n\n\n\n\n";
    cout << "\t\t     " << x << " THANK YOU FOR USING COLLEGE MANAGEMENT SYSTEM \a" << x;
    getch();
    system("cls");
    cout << "\n\t\t\tPREPARED BY:-";
    cout << "\n\t\t\t" << d << " ANSHUL KANSAL        22103135";
    cout << "\n\t\t\t" << d << " VISHWAS MISHRA       22103122";
    cout << "\n\t\t\t" << d << " LOV KUMAR KUMAWAT    22103150";
    cout << "\n\t\t\t" << d << " DAKSH JAIN           22103151\n\n\n";

}
class FTE
{
public:
    int a;
    void displayfte()
    {
        cout << "\n";
        for (int i = 0; i < 89; i++)
            cout << r7;
        cout << endl;
        cout << "\n    " << r1 << r5 << r5 << r5 << r5 << r5 << r5 << r5 << r5 << r5 << r5 << r4 << "          JAYPEE INSTITUTE OF INFORMATION TECHNOLOGY" << endl;
        cout << "    " << r6 << " JIIT     " << r6 << " \t            FACULTY OF COMPUTER SCIENCE \n";
        cout << "    " << r2 << r5 << r5 << r5 << r5 << r5 << r5 << r5 << r5 << r5 << r5 << r3 << "                         NOIDA,UTTAR PRADESH.\n";
        cout << "                                 Accredited with Grade A by NAAC,\n";
        cout << "                               Education Department, Govt. of INDIA.\n\n";
        for (int i = 0; i < 89; i++)
            cout << r7;
        cout << endl;
        home();
        cout << "\n\n\t Choose from the following options:";
        cout << "\n\t1) Admin department.";
        cout << "\n\t2) Student Login.";
        cout << "\n\t3) Exit.\n";
        cout << "\n\tYour choice: ";
        cin >> a;
        switch (a)
        {
        case 1:
            call_admin();
        case 2:
            call_stu();
        case 3:
            system("cls");
            cout << "\t----------------------------------------------------------------------------------------------------------" << endl;
            cout << "\t\t\t\t\tTHANK YOU FOR VISITING US\t\t\t\t\t\t\n";
            cout << "\t----------------------------------------------------------------------------------------------------------\n";
            member();
            break;
        default:
            member();
            getch();
            // goto E;
            break;
        }
    }
};

// the class that stores data
template <class T>
class student
{
    int rollno;
    char name[50];
    T eng_marks, math_marks, phy_marks, lang2_marks, sdf_marks;
    float average;
    char grade;

public:

    void getdata()
    {
    cout << "Enter Student's Roll Number: ";
    cin >> rollno;

    cout << "Enter Student's name: ";
    cin.ignore();
    cin.getline(name, 50);

    cout << "\n\nEnter Student's Marks" << endl;
    cout << "All marks should be out of 100";
    cout << "\n\nEnter Marks in English: ";
    cin >> eng_marks;
    if ((eng_marks > 100) || (eng_marks < 0))
    {
        eng_marks = 40;
    }
    cout << "Enter Marks in Mathematics-2 : ";
    cin >> math_marks;
    if ((math_marks > 100) || (math_marks < 0))
    {
        math_marks = 40;
    }
    cout << "Enter Marks in Physics-2 : ";
    cin >> phy_marks;
    if ((phy_marks > 100) || (phy_marks < 0))
    {
        phy_marks = 40;
    }
    cout << "Enter Marks in Second language: ";
    cin >> lang2_marks;
    if ((lang2_marks > 100) || (lang2_marks < 0))
    {
        lang2_marks = 40;
    }
    cout << "Enter Marks in Software Development Fundamentals-2: ";
    cin >> sdf_marks;
    if ((sdf_marks > 100) || (sdf_marks < 0))
    {
        sdf_marks = 40;
    }
    calculate_grade();
    }


    void showdata() const
    {
    cout << "\nRoll Number of Student : " << rollno;
    cout << "\nName of Student : " << name;
    cout << "\nEnglish : " << eng_marks;
    cout << "\nMathematics-2 : " << math_marks;
    cout << "\nPhysics-2 : " << phy_marks;
    cout << "\nSecond Language : " << lang2_marks;
    cout << "\nSoftware Development Fundamentals-2 :" << sdf_marks;
    cout << "\nAverage Marks :" << average;
    cout << "\nGrade of student is :" << grade;
    }


    void calculate_grade()
    {
    average = (eng_marks + math_marks + phy_marks + lang2_marks + sdf_marks) / 5.0;
    if (average >= 90)
        grade = 'A';
    else if (average >= 75)
        grade = 'B';
    else if (average >= 50)
        grade = 'C';
    else
        grade = 'F';
    }


    int retrollno() const
    {
    return rollno;
    }
};


class bank
{
    char IFSC[12];
    int roll_no;
    char stu_name[20];
    char bankname[50];
    long int account_num;
    char type[10];

public:
    void getdata()
    {
        cout << "Enter Your Name:" << endl;
        cin.ignore();
        cin.getline(stu_name, 20);
        cout << "Enter Roll No.:" << endl;
        cin >> roll_no;
        cout << "Enter IFSC code:" << endl;
        cin >> IFSC;
        cout << "Enter Bankname:" << endl;
        cin.ignore();
        cin.getline(bankname, 50);
        cout << "Enter Account No. :" << endl;
        cin >> account_num;
        cout << "Enter type of A/c : ";
        cin >> type;
    }

    void showdata() const
    {
        cout << "\nName of Student : " << stu_name;
        cout << "\nRoll Number of Student : " << roll_no;
        cout << "\nIFSC : " << IFSC;
        cout << "\nBank Name : " << bankname;
        cout << "\nAccount number : " << account_num;
        cout << "\nType : " << type;
    }

    int retrollno() const
    {
        return roll_no;
    }
};

// function declaration
void create_student();
void display_sp(int);     // display particular record
void display_all();       // display all records
void delete_student(int); // delete particular record
void change_student(int); // edit particular record
void create_ban();
void change_bank(int);
void insert_ban();
void mes();
void login();
void stu_login();

// Write Student Details to File
void create_student()
{
    student<int> stud;
    ofstream oFile;
    oFile.open("student.dat", ios::binary | ios::app);
    stud.getdata();
    oFile.write(reinterpret_cast<char *>(&stud), sizeof(student<int>));
    oFile.close();
    cout << "\nStudent's Record has been created ";
    cin.ignore();
    cin.get();
}

// Read Specific Record Based on Roll Number
void display_sp(int n)
{
    student<int> stud;
    ifstream iFile;
    iFile.open("student.dat", ios::binary);
    if (!iFile)

    {
        cout << "File could not be opened... Press any Key to exit";
        cin.ignore();
        cin.get();
        return;
    }

    bool flag = false;
    while (iFile.read(reinterpret_cast<char *>(&stud), sizeof(student<int>)))
    {
        if (stud.retrollno() == n)
        {
            stud.showdata();
            flag = true;
        }
    }

    iFile.close();
    if (flag == false)
        cout << "\n\nRecord does not exist";
    cin.ignore();
    cin.get();
}

// Read File Records
void display_all()
{
    student<int> stud;
    ifstream inFile;
    inFile.open("student.dat", ios::binary);
    if (!inFile)
    {
        cout << "File could not be opened !! Press any Key to exit";
        cin.ignore();
        cin.get();
        return;
    }

    cout << "\n\n\n\t\tDISPLAYING ALL RECORDS\n\n";
    while (inFile.read(reinterpret_cast<char *>(&stud), sizeof(student<int>)))
    {
        stud.showdata();
        cout << "\n\n====================================\n";
    }

    inFile.close();
    cin.ignore();
    cin.get();
}

// Delete Record with Particular Roll Number
void delete_student(int n)
{
    student<int> stud;
    ifstream iFile;
    iFile.open("student.dat", ios::binary);
    if (!iFile)
    {
        cout << "File could not be opened... Press any Key to exit...";
        cin.ignore();
        cin.get();
        return;
    }
    ofstream oFile;
    oFile.open("Temp.dat", ios::out);
    iFile.seekg(0, ios::beg);
    while (iFile.read(reinterpret_cast<char *>(&stud), sizeof(student<int>)))
    {
        if (stud.retrollno() != n)
        {
            oFile.write(reinterpret_cast<char *>(&stud), sizeof(student<int>));
        }
    }
    oFile.close();
    iFile.close();
    remove("student.dat");
    rename("Temp.dat", "student.dat");
    cout << "\n\n\tRecord Deleted ..";
    cin.ignore();
    cin.get();
}

// Modify Record for Specified Roll Number
void change_student(int n)
{
    bool found = false;
    student<int> stud;
    fstream fl;
    fl.open("student.dat", ios::binary | ios::in | ios::out);
    if (!fl)

    {
        cout << "File could not be opened. Press any Key to exit...";
        cin.ignore();
        cin.get();
        return;
    }

    while (!fl.eof() && found == false)
    {
        fl.read(reinterpret_cast<char *>(&stud), sizeof(student<int>));
        if (stud.retrollno() == n)
        {
            stud.showdata();
            cout << "\nEnter New Student Details:" << endl;
            stud.getdata();
            int pos = (-1) * static_cast<int>(sizeof(stud));
            fl.seekp(pos, ios::cur);
            fl.write(reinterpret_cast<char *>(&stud), sizeof(student<int>));
            cout << "\n\n\t Record Updated";
            found = true;
        }
    }

    fl.close();
    if (found == false)
        cout << "\n\n Record Not Found ";
    cin.ignore();
    cin.get();
}


void create_ban() // create bank account details of student
{
    bank bn1;
    ofstream oFile;
    oFile.open("bank.dat", ios::binary | ios::app);
    bn1.getdata();
    oFile.write(reinterpret_cast<char *>(&bn1), sizeof(bank));
    oFile.close();
    cout << "\nStudent's record has been created ";
    cin.ignore();
    cin.get();
}

void insert_ban()
{
    student<int> stud1;
    ofstream bFile;
    bFile.open("bank.dat", ios::binary | ios::app);
    // bn.getdata();
    bFile.write(reinterpret_cast<char *>(&stud1), sizeof(student<int>));
    bFile.close();
    cout << "\nStudent's record has been created ";
    cin.ignore();
    cin.get();
}


void display_spban(int n)
{
    bank bn1;
    ifstream iFile;
    iFile.open("bank.dat", ios::binary);
    if (!iFile)

    {
        cout << "File could not be opened... Press any Key to exit";
        cin.ignore();
        cin.get();
        return;
    }

    bool flag = false;
    while (iFile.read(reinterpret_cast<char *>(&bn1), sizeof(bank)))
    {
        if (bn1.retrollno() == n)
        {
            bn1.showdata();
            flag = true;
        }
    }

    iFile.close();
    if (flag == false)
        cout << "\n\nRecord does not exist";
    cin.ignore();
    cin.get();
}

void display_allban()
{
    bank bn1;
    ifstream inFile;
    inFile.open("bank.dat", ios::binary);
    if (!inFile)
    {
        cout << "File could not be opened !! Press any Key to exit";
        cin.ignore();
        cin.get();
        return;
    }

    cout << "\n\n\n\t\tDISPLAYING ALL RECORDS\n\n";
    while (inFile.read(reinterpret_cast<char *>(&bn1), sizeof(student<int>)))
    {
        bn1.showdata();
        cout << "\n\n====================================\n";
    }

    inFile.close();
    cin.ignore();
    cin.get();
}

void change_bank(int n)
{
    bool found = false;
    bank bn1;
    fstream fl;
    fl.open("bank.dat", ios::binary | ios::in | ios::out);
    if (!fl)

    {
        cout << "File could not be opened. Press any Key to exit...";
        cin.ignore();
        cin.get();
        return;
    }

    while (!fl.eof() && found == false)
    {
        fl.read(reinterpret_cast<char *>(&bn1), sizeof(bank));
        if (bn1.retrollno() == n)
        {
            bn1.showdata();
            cout << "\nEnter new student details:" << endl;
            bn1.getdata();
            int pos = (-1) * static_cast<int>(sizeof(bn1));
            fl.seekp(pos, ios::cur);
            fl.write(reinterpret_cast<char *>(&bn1), sizeof(bank));
            cout << "\n\n\t Record Updated";
            found = true;
        }
    }

    fl.close();
    if (found == false)
        cout << "\n\n Record Not Found ";
    cin.ignore();
    cin.get();
}

/*void attendance() {
    // Display menu and prompt for option
    int option;
    do {
        displayMenu();
        cout << "Enter an option: ";
        cin >> option;

        switch (option) {
            case 1:
                markAttendance();
                break;
            case 2:
                viewAttendanceReport();
                break;
            case 3:
                cout << "Exiting program..." << endl;
                break;
            default:
            cout << "";
        }
    }while(option!=3);
}*/

void mes() // for giving message
{
    cout << "-------------------Thankyou For Using Student Management System-------------------\n";
    member();
}

void login()
{
    int a = 0, i = 0;
    char username[10], c = ' ';
    char pword[10];
    char user[10] = "jiit";
    char pass[10] = "62128";
    do
    {
        system("cls");

        cout << "  \t\t-------------------  LOGIN PAGE  -------------------";
        cout << "\n\n                       ENTER USERNAME:-";
        cin >> username;
        cout << "\n\n                       ENTER PASSWORD:-";
        while (i < 10)
        {
            pword[i] = getch();
            c = pword[i];
            if (c == 13)
                break; // if press entered in password,password is till there
            else
                cout << "*"; // for any no. entered show "*"
            i++;
        }
        pword[i] = '\0';
        // at the end appended a null character
        i = 0;
        if (strcmp(username, "jiit") == 0 && strcmp(pword, "62128") == 0)
        {
            cout << "  \n\n\n       WELCOME TO ADMIN SYSTEM !!!! LOGIN IS SUCCESSFUL";
            cout << "\n\n\n\t\t\t\tPress any key to continue...";
            getch(); // holds the screen till any key is pressed
            break;
        }
        else
        {
            cout << "\n        SORRY !!!!  LOGIN IS UNSUCESSFUL";
            if (a < 1)
                cout<< endl << 2-a << " Login Attempts left \n";
            a++;
            getch();
        }
    } while (a <= 2);
    if (a > 2)
    {
        cout << "\nSorry You Have Exceeded The Login Attempt Limit!!!";
        getch();
        system("cls");
        atexit(mes);
        exit(0);
    }
}

void stu_login()
{
    int a = 0, i = 0;
    char username[10], c = ' ';
    char pword[10];
    char user[10] = "student";
    char pass[10] = "stu1234";
    do
    {
        system("cls");

        cout << "  \t\t-------------------  LOGIN PAGE  -------------------";
        cout << "\n\n                       ENTER STUDENT USERNAME:-";
        cin >> username;
        cout << "\n\n                       ENTER STUDENT PASSWORD:-";
        while (i < 10)
        {
            pword[i] = getch();
            c = pword[i];
            if (c == 13)
                break; // if press entered in password,password is till there
            else
                cout << "*"; // for any no. entered show "*"
            i++;
        }
        pword[i] = '\0';
        // at the end appended a null character
        i = 0;
        if (strcmp(username, "student") == 0 && strcmp(pword, "stu1234") == 0)
        {
            cout << "  \n\n\n       WELCOME TO STUDENT SYSTEM !!!! LOGIN IS SUCCESSFUL";
            cout << "\n\n\n\t\t\t\tPress any key to continue...";
            getch(); // holds the screen till any key is pressed
            break;
        }
        else
        {
            cout << "\n        SORRY !!!!  LOGIN IS UNSUCESSFUL";
            if (a < 1)
                cout<< endl << 2-a << " Login Attempts left \n";
            a++;
            getch();
        }
    } while (a <= 2);
    if (a > 2)
    {
        cout << "\nSorry You Have Exceeded The Login Attempt Limit!!!";
        getch();
        system("cls");
        atexit(mes);
        exit(0);
    }
}

void call_admin()
{
    login();
    char ch;
    do
    {
        char ch;
        int num;
        system("cls");
        cout << "Welcome to Student Registration Management System" << endl;
        cout << "\nADMIN ACCESS MENU" << endl;
        cout << "\n1. Create a New Student Record." << endl;
        cout << "2. Search Student Record." << endl;
        cout << "3. Display all Students Records." << endl;
        cout << "4. Delete Student Record." << endl;
        cout << "5. Modify Student Record." << endl;
        cout << "6. Display Bank Records of all Students." << endl;
        // cout << "7. Attendance" << endl;
        cout << "7. Exit" << endl;
        cout << "\nEnter your choice : " << endl;
        cin >> ch;

        system("cls");

        switch (ch)
        {
        case '1':
            create_student();
            break;
        case '2':
            cout << "\n\n\tEnter The Roll Number: ";
            cin >> num;
            display_sp(num);
            break;
        case '3':
            display_all();
            break;
        case '4':
            cout << "\n\n\tEnter The Roll Number: ";
            cin >> num;
            delete_student(num);
            break;
        case '5':
            cout << "\n\n\tEnter The Roll Number: ";
            cin >> num;
            change_student(num);
            break;
        case '6':
            display_allban();
            break;
        // case '7':
            // attendance();
        case '7':
            atexit(mes);
            exit(0);
        }
    } while (ch != '8');
}

void call_stu()
{
    stu_login();
    char ch;
    int a;
    do
    {
        int roll;
        system("cls");
        cout << "Welcome to Student Registration Management System" << endl;
        cout << "\n STUDENT ACCESS MENU" << endl;
        cout << "\n1. Display Complete Personal Record." << endl;
        cout << "2. Insert New Bank Details." << endl;
        cout << "3. Modify Bank Details." << endl;
        cout << "4. Display your Bank Details." << endl;
        cout << "5. Exit" << endl;
        cout << "Enter choice: " << endl;
        cin >> a;
        // system("cls");

        switch (a)
        {
        case 1:
            cout << "Enter your Roll no:" << endl;
            cin >> roll;
            display_sp(roll);
            break;
        case 2:
            create_ban();
            break;
        case 3:
            cout << "Enter your Roll no:" << endl;
            cin >> roll;
            change_bank(roll);
            break;
        case 4:
            cout << "Enter your Roll no:" << endl;
            cin >> roll;
            display_spban(roll);
        case 5:
            atexit(mes);
            exit(0);
        }
    } while (a != 5);
}

int main()
{
    char ch;
    cout << setprecision(2);
    FTE fd;
    fd.displayfte();
    return 0;
}
