
    #include<iostream>
    #include<conio.h>
    #include<windows.h>
    #include<fstream>
    #include<iomanip>
    #include"DataBase.h"
    #include"System_Design.h"

    using namespace std;

    int main(){

            SetConsoleTitleA("                                                \
                                                                             \Developed by :- S S S ");
            system("cls");
            cout<<"\t\t\t\t";
            println(50);
            textColor(4);
            Beep(700,1000);
            cout<<"\n\t\t\t\t\t     WELCOME TO MAHARAJA COLLEGE       ";

            textColor(4);
            cout<<"\n\t\t\t\t";
            println(50);
            Beep(600,100);
            jump(10,3);

            playAll();
            jump(33,24);
            println(50);
            cout<<endl;
            SSS();
            println(50);

            textColor(4);
            cout<<"\n\tPress any key to Start the Progaram "<<endl;

            getch();

    // The Main Programs from Here

            Administratator a;
            a.menu();

       return 0;
    }
