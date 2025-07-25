// PROJECT: Employee Record Management System using C++

#include <iostream>
using namespace std;

string id[30], name[30], address[50], dob[30], mobile_no[30], doj[30], marstatus[30], workd[30], workl[40], ctc[30], socialins[30], email[30]; // arrays for storing students data.

int total = 0; // to store all data
void enter()

{

    int ch = 0;

    cout << "How Many Employees' Data Do You Want to Enter?" << endl;

    cin >> ch;
    if (total == 0)

    {

        total = ch + total;

        for (int i = 0; i < ch; i++)

        {

            cout << "\nEnter the Data of Employee " << i + 1 << endl
                 << endl;
            cout << "** PERSONAL DETAILS **" << endl
                 << endl;

            cout << "Enter Name: " << endl;

            cin >> name[i];

            cout << "Enter Address: " << endl;

            cin >> address[i];

            cout << "Enter Date of Birth: " << endl;

            cin >> dob[i];

            cout << "Is Employee Married?: " << endl;

            cin >> marstatus[i];

            cout << "** WORK DETAILS **" << endl
                 << endl;

            cout << "Enter Id: " << endl;

            cin >> id[i];

            cout << "Enter Date of Joing: " << endl;

            cin >> doj[i];

            cout << "Work Department: " << endl;

            cin >> workd[i];

            cout << "Enter Work Location: " << endl;

            cin >> workl[i];

            cout << "Enter CTC: " << endl;

            cin >> ctc[i];

            cout << "Enter Social Insurance Id: " << endl;

            cin >> socialins[i];

            cout << "** CONTACT DETAILS **" << endl
                 << endl;

            cout << "Enter Mobile NO: " << endl;

            cin >> mobile_no[i];

            cout << "Enter Email: " << endl;

            cin >> email[i];
        }
    }

    else

    {

        for (int i = total; i < ch + total; i++) // to store onward students' data rather than storing double data

        {

            cout << "\nEnter the Data of Employee " << i + 1 << endl
                 << endl;
            cout << "** PERSONAL DETAILS **" << endl
                 << endl;

            cout << "Enter Name: " << endl;

            cin >> name[i];

            cout << "Enter Address: " << endl;

            cin >> address[i];

            cout << "Enter Date of Birth: " << endl;

            cin >> dob[i];

            cout << "Is Employee Married?: " << endl;

            cin >> marstatus[i];

            cout << "** WORK DETAILS **" << endl
                 << endl;

            cout << "Enter Id: " << endl;

            cin >> id[i];

            cout << "Enter Date of Joing: " << endl;

            cin >> doj[i];

            cout << "Work Department: " << endl;

            cin >> workd[i];

            cout << "Enter Work Location: " << endl;

            cin >> workl[i];

            cout << "Enter CTC: " << endl;

            cin >> ctc[i];

            cout << "Enter Social Insurance Id: " << endl;

            cin >> socialins[i];

            cout << "** CONTACT DETAILS **" << endl
                 << endl;

            cout << "Enter Mobile NO: " << endl;

            cin >> mobile_no[i];

            cout << "Enter Email: " << endl;

            cin >> email[i];
        }

        total = ch + total; // making choice
    }
}

void show()

{

    if (total == 0)

    {

        cout << "No Data is Entered" << endl;
    }

    else
    {

        for (int i = 0; i < total; i++)

        {
            cout<<"** RESULT FOR SHOW DATA **"<<endl;

            cout << "\nData of Employee: " << i + 1 << endl
                 << endl;
            cout << "** PERSONAL DETAILS **" << endl
                 << endl;

            cout << "Full Name: " << name[i] << endl;
            cout << "Address: " << address[i] << endl;
            cout << "Date of Birth: " << dob[i] << endl;
            cout << "Maritual Status: " << marstatus[i] << endl
                 << endl;

            cout << "** WORK DETAILS **" << endl
                 << endl;

            cout << "Id: " << id[i] << endl;
            cout << "Date of Joing: " << doj[i] << endl;
            cout << "Work Department: " << workd[i] << endl;
            cout << "Work Location: " << workl[i] << endl;
            cout << "CTC: " << ctc[i] << endl;
            cout << "Social Insurance: " << socialins[i] << endl
                 << endl;

            cout << "** CONTACT DETAILS **" << endl
                 << endl;
            cout << "Mobile NO: " << mobile_no[i] << endl;
            cout << "Email Id: " << email[i] << endl;
        }
    }
}
