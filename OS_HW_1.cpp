#include <cstdlib>
#include <iostream>
using namespace std;


int main()
{
    //Display Menu
    cout << "1. List Directory Contents" << endl
        << "2. Print Working Directory" << endl
        << "3. Create a New Directory" << endl
        << "4. Display a Message" << endl
        << "5. Concatenate and Display Content of a File" << endl
        << "6. Exit" << endl;

    int num;
    string filename1, filename2;
    // Retrieve Users Option
    do{
        cout << "Choose an option." << endl;
    cin >> num;
    switch (num) {

    case 1:

        // dir implemenation
        system("dir");
        break;

    case 2: {
        //mkdir implemenation
        int mkdirResult = system("mkdir new_folder");
        if (mkdirResult != 0) {
            // Handle error if creation fails
            return 1;
        }

        // Remove old_folder
        int delResult = system("rmdir /s /q old_folder");
        if (delResult != 0) {
            // Handle error if deletion fails
            return 1;
        }

        break;
    }
    case 3:

        //cd implemenation
        system("cd");

        break;

    case 4: {
        //echo implementaion
        int returnCode = system("echo Hello, World!");

        // Checking if the command was executed 
        if (returnCode == 0) {
            cout << "Command executed successfully." << endl;
        }
        else {
            cout << "Command execution failed or returned non-zero: " << returnCode << endl;
        }

        break;
    }
    case 5: {
        //type implementation
        int returnCode;
        returnCode = system("type filename1.txt filename2.txt > concatenated.txt");

        if (returnCode == 0) {

            cout << "Concatenation successful. Created 'concatenated text'." << endl;
        }
        else
        {
            cout << "Concatenation unsuccessful." << endl;
        }

        break;
    }

    case 6:
        cout << "Ending program" << endl;
        return 0;

    default:
        cout << "Invalid choose again" << endl;
        break;
    }

    }while (num != 6);
}
