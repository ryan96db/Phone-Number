#include <iostream>

using namespace std;

int main()
{
    string phone;
    cout << "Enter your phone number (format: xxx-xxx-xxxx): ";
    cin >> phone ;

    char dasha = phone[3]; //to check for correct format
    char dashb = phone[7];
    char isitadash = '-';

    int tradphone = 12; //to see if correct length (so it doesn't read out numbers with correct dashes, but more than 10 numbers as correct)
    int enterphone = phone.length();

    //later add something to see if there's any letters in the string, so aaa-bbb-ccccc isn't read as correct



    if (tradphone == enterphone && dasha == isitadash && dashb == isitadash)
    {
        cout << "Your phone number is " << phone << endl;
        enterphone = phone.length();
    }


    else
    {
        while (dasha != isitadash || dashb != isitadash || tradphone != enterphone)
        {
            cout << "Invalid entry. Try again (format: xxx-xxx-xxxx): ";
            cin >> phone;
            dasha = phone[3];
            dashb = phone[7];
            enterphone = phone.length();


             if (dasha == isitadash && dashb == isitadash && tradphone == enterphone)
            {
                cout << "Your phone number is " << phone << endl;
                break;

            }





        }







    }





    return 0;
}
