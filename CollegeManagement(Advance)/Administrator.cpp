
       #include<iostream>
       #include<cstring>
       #include<windows.h>
       #include<fstream>
       #include<conio.h>
       #include<cstring>
       #include<cassert>
       #include<iomanip>
       #include"System_Design.h"
       #include"DataBase.h"
       using namespace std;


        void Administratator :: administratorDaigram(){

            int row=26,col=8;
            int r=26,c=6;
            textColor(4);
            jump(r,c);
            cout<<"------------------------------------------------------------------------------"<<endl;;
            jump(r,c+1);
            cout<<"| ";textColor(2);time();textColor(6);cout<<"             ADMINISTRATOR             ";textColor(2);date();textColor(4);cout<<" |";
            jump(r,c+2);
            cout<<"------------------------------------------------------------------------------"<<endl;

            for(int a=3;a<25;a++){
                jump(r,c+a);
                cout<<"|                                                                            |"<<endl;
            }

            jump(r,c+25);
            cout<<"|____________________________________________________________________________|"<<endl;

            jump(row+5,col+2);
            cout<<"...................................................................."<<endl;

            for(int a = 3; a<23; a++){

                jump(row+5,col+a);
                cout<<".                                                                  ."<<endl;
            }

            jump(row+8,col+3);
            cout<<"      CHOOSE OPTION          :           ABOUT OPTION "<<endl;

            jump(row+6,col+4);
            cout<<"..................................................................."<<endl;

            jump(row+6,col+8);
            textColor(5);
            cout<<"        LOGIN  ";

            jump(row+6,col+13);
            textColor(5);
            cout<<"        FORGET ";

            jump(row+6,col+18);
            textColor(5);
            cout<<"         BACK ";

            jump(row+6,col+22);
            textColor(4);
            cout<<"........................:......:..................................";

            for(int a=5;a<23;a++){
                 jump(row+30,col+a);
                 cout<<":";
            }
            for(int a=5;a<23;a++){
                 jump(row+37,col+a);
                 cout<<":";
            }

        }

        void Administratator :: menu(){
            system("cls");
           int row=60,col=16;

           administratorDaigram();

                    jump(65,16);
                    textColor(7);
                    cout<<"This is Login Button. After ";
                    jump(65,18);
                    cout<<"pressing on It , You'll appear";
                    jump(65,20);
                    cout<<"a Login page Where You'll be  ";
                    jump(65,22);
                    cout<<"able to Loged in For Further ";
                    jump(65,24);
                    cout<<"Uses..! ";


                    textColor(2);
                    jump(35,col-2); cout<<"..................";

                    jump(35,col-1); cout<<":"; jump(52,col-1); cout<<":";

                    jump(35,col); cout<<":"; jump(52,col); cout<<":";

                    jump(35,col+1); cout<<":"; jump(52,col+1); cout<<":";

                    jump(35,col+2); cout<<":................:";

           jump(row,col);
           textColor(2);
           cout<<char(178);


            int r=14;
           char ch;


           while(true){
               textColor(2);
                jump(96,28);
                ch=getch();
                textColor(2);

                switch(ch){

                   case 80:
                        if(col>21)
                            col=11;

                        col+=5;

                   break;

                   case 72:
                        if(col<19)
                            col=31;

                        col-=5;
                   break;

                   case 13:


                         jump(35,col-2);
                         textColor(2);
                         cout<<"                  ";

                         jump(34,col-1);
                        textColor(2);
                        cout<<".................. ";

                        jump(34,col);cout<<":             ";

                        jump(51,col);cout<<":    ";

                        jump(51,col+1);cout<<":  ";

                        jump(34,col+2);cout<<":                ";

                        jump(34,col+1);cout<<":";

                        textColor(5); jump(35,col+1);cout<<"     BACK    ";

                        textColor(2);
                        jump(51,col+2);cout<<":   ";

                        jump(34,col+3);
                        cout<<":................:";

                        if(col==16){

                           textColor(7);jump(35,col+1);cout<<"    LOGIN  ";

                        }else if(col==21){

                          textColor(7); jump(35,col+1);cout<<"    FORGET  ";

                        }else if(col==25){

                          textColor(7); jump(35,col+1);cout<<"     BACK    ";
                        }
                        jump(row,col);cout<<"   ";
                        jump(row-1,col+1);
                        textColor(2);
                        cout<<char(178);
                        jump(96,28);

                        Sleep(250);



                        switch(col){

                            case 16:
                                if(login()){
                                    system("cls");
                                    selectDepartment();
                                    system("cls");
                                }
                            break;

                            case 21:
                                forget();
                                break;

                            case 26:
                                return ;
                                break;
                        }

                }

                administratorDaigram();
                if(col==16){

                    jump(65,16);
                    textColor(7);
                    cout<<"This is Login Button. After ";
                    jump(65,18);
                    cout<<"pressing on It , You'll appear";
                    jump(65,20);
                    cout<<"a Login page Where You'll be  ";
                    jump(65,22);
                    cout<<"able to Loged in For Further ";
                    jump(65,24);
                    cout<<"Uses..! ";

                }
                else if(col==21){

                    textColor(7);
                    jump(65,16);
                    cout<<"This is Forget Button. After ";
                    jump(65,18);
                    cout<<"Pressing On It You'll be able ";
                    jump(65,20);
                    cout<<"to Forgate Your Passward ...!";

                }
                else{

                    textColor(7);
                    jump(65,16);
                    cout<<"This Is Back Button. After";
                    jump(65,18);
                    cout<<"Pressing on It You will Come";
                    jump(65,20);
                    cout<<"Back on Starting Window ...! ";

                }

                 textColor(2);
                    jump(35,col-2); cout<<"..................";

                    jump(35,col-1); cout<<":"; jump(52,col-1); cout<<":";

                    jump(35,col); cout<<":"; jump(52,col); cout<<":";

                    jump(35,col+1); cout<<":"; jump(52,col+1); cout<<":";

                    jump(35,col+2); cout<<":................:";

                jump(row,col);
                 textColor(2);
                cout<<char(178);


           }

        }

        void Administratator :: loginDigram(){
                int r=35,c=7;
                textColor(2);
                system("cls");
                jump(r,c++);
                cout<<"------------------------------------------------------------"<<endl;
                jump(r,c++);
                textColor(4);
                cout<<":       ----->           LOGIN PAGE           <-----       :"<<endl;        jump(r,c++);
                textColor(2);
                cout<<"------------------------------------------------------------"<<endl;
                jump(r,c++);
                cout<<"|                                                          |"<<endl;
                jump(r,c++);
                cout<<"|                                                          |"<<endl;
                jump(r,c++);
                textColor(2);
                cout<<"|  ";textColor(4);cout<<"  --------------------------------------------------   ";textColor(2);cout<<" |"<<endl;
                jump(r,c++);
                textColor(2);
                cout<<"|   ";textColor(4);cout<<" :            Wrong Password !!!!                 :   ";textColor(2);cout<<" |"<<endl;
                jump(r,c++);
                textColor(2);
                cout<<"|   ";textColor(4);cout<<" --------------------------------------------------  ";textColor(2);cout<<"  |"<<endl;
                //textColor(2);
                jump(r,c++);
                cout<<"|                                                          |"<<endl;
                jump(r,c++);
                cout<<"|                                                          |"<<endl;
                jump(r,c++);
                cout<<"|                                                          |"<<endl;
                jump(r,c++);
                cout<<"|     -------------                -------------           |"<<endl;
                jump(r,c++);
                cout<<"|     : Re-Enter  :                :  Back     :           |"<<endl;
                jump(r,c++);
                cout<<"|     -------------                -------------           |"<<endl;
                jump(r,c++);
                cout<<"|                                                          |"<<endl;jump(r,c++);
                cout<<"|                                                          |"<<endl;
                jump(r,c++);
                cout<<"|                                                          |"<<endl;
                jump(r,c++);
                cout<<"|                                                          |"<<endl;
                jump(r,c++);
                cout<<"|                                                          |"<<endl;
                jump(r,c++);
                cout<<"|                                                          |"<<endl;
                jump(r,c++);
                cout<<"------------------------------------------------------------"<<endl;
        }

        void Administratator :: loginPage(){

              int r=35,c=7;
              jump(r,c);
              system("cls");
              textColor(2);
              jump(r,c++);
              cout<<"------------------------------------------------------------"<<endl;
              jump(r,c++);
              textColor(2);
              cout<<":";textColor(4);cout<<"       ----->            LOGIN PAGE          <-----       ";textColor(2);cout<<":"<<endl;
              jump(r,c++);
              textColor(2);
              cout<<"------------------------------------------------------------"<<endl;
              jump(r,c++);
              cout<<"|                                                          |"<<endl;
              jump(r,c++);
              cout<<"|                                                          |"<<endl;
              jump(r,c++);
              cout<<"|    --------------------------------------------------    |"<<endl;
              jump(r,c++);
              cout<<"|                                                          |"<<endl;
              textColor(2);
              jump(r+5,c-1);
              cout<<": ";textColor(5);cout<<left<<setw(47)<<"Enter Login ID :-";textColor(2);cout<<":";
              jump(r,c++);
              textColor(2);
              cout<<"|    --------------------------------------------------    |"<<endl;
              jump(r,c++);
              cout<<"|                                                          |"<<endl;
              jump(r,c++);
              cout<<"|    --------------------------------------------------    |"<<endl;
              jump(r,c++);
              cout<<"|                                                          |"<<endl;
              textColor(2);
              jump(r+5,c-1);
              cout<<": ";textColor(5);cout<<left<<setw(47)<<"Enter Login Pass :-";textColor(2);cout<<":";
              jump(r,c++);
              textColor(2);
              cout<<"|    --------------------------------------------------    |"<<endl;
              jump(r,c++);
              cout<<"|                                                          |"<<endl;
              jump(r,c++);
              cout<<"|                                                          |"<<endl;
              jump(r,c++);
              cout<<"|                                                          |"<<endl;
              jump(r,c++);
              cout<<"|                                                          |"<<endl;
              jump(r,c++);
              cout<<"|                                                          |"<<endl;
              jump(r,c++);
              cout<<"|                                                          |"<<endl;
              jump(r,c++);
              cout<<"|                                                          |"<<endl;
              jump(r,c++);
              cout<<"|                                                          |"<<endl;
               jump(r,c++);
              cout<<"------------------------------------------------------------"<<endl;

        }

        bool Administratator :: login(){

               Login l;
               ifstream file;
               file.open("AdminPass.dat",ios::binary | ios::in);

               if(!file){

                    cout<<"Error !!!! "<<endl;
                    assert(false);
               }

               file.read((char *)&l,sizeof(l));

               file.close();


              again:

              loginPage();

               char loginid[30];
               jump(60,13);
               textColor(6);
               cin.getline(loginid,30);
               char loginpass[30];
               jump(62,17);
               cin.getline(loginpass,30);

               if(l.cheakIdAndPass(loginid,loginpass)){
                        jump(38,20);
                        textColor(2);
                        cout<<"-----------------------------------------------------"<<endl;
                        jump(38,21);
                        textColor(4);
                        cout<<":               \x3 Login Successful \x3                :"<<endl;
                        jump(38,22);
                        textColor(2);
                        cout<<"-----------------------------------------------------"<<endl;

                        Sleep(1000);

                        return true;

               }
               else{

                       loginDigram();

                        int row=52,col=19;

                        jump(row-11,col-1);
                        textColor(7);
                        cout<<"-------------";
                        jump(row-11,col);
                        cout<<":";
                        jump(row+1,col);
                        cout<<":";
                        jump(row-11,col+1);
                        cout<<"-------------";
                        char ch;

                        while(true){
                                jump(72,13);
                                textColor(8);
                                ch=getch();

                                switch(ch){

                                    case 75:

                                        if(row<=52 )
                                            row=110;
                                        row=row-29;
                                    break;

                                    case 77:

                                        if(row>52)
                                            row=23;

                                        row=row+29;
                                    break;

                                    case 13:
                                        jump(row-11,col-1);
                                        cout<<"                 ";
                                        jump(row-14,col);
                                        textColor(3);
                                        cout<<"--------------- ";
                                        jump(row-14,col+1);
                                        cout<<":                 ";
                                        jump(row,col+1);
                                        cout<<": ";
                                        jump(row-14,col+2);
                                        cout<<"--------------- ";

                                        if(row==52){
                                            jump(row-10,col+1);
                                           textColor(7); cout<<"Re-Enter";
                                        }else{
                                            jump(row-10,col+1);
                                           textColor(7); cout<<"Back ";
                                        }

                                        Sleep(250);


                                        if(row==52){
                                            goto again;
                                            cin.ignore();

                                        }
                                        else if(row==81)
                                            return false;


                            }
                        loginDigram();

                        jump(row-11,col-1);
                        textColor(7);
                        cout<<"-------------";
                        jump(row-11,col);
                        cout<<":";
                        jump(row+1,col);
                        cout<<":";
                        jump(row-11,col+1);
                        cout<<"-------------";

                    }
               }
        }

        void Administratator :: forget(){

               Login l;
               fstream file;
               file.open("AdminPass.dat",ios::binary | ios::in | ios::out );

               if(!file){

                    cout<<"Error !!!! "<<endl;
                    assert(false);
               }

               file.read((char *)&l,sizeof(l));

               //file.close();


               int r=35,c=7;
               jump(r,c);
               system("cls");
               textColor(4);
               jump(r,c++);
               cout<<"------------------------------------------------------------"<<endl;
               jump(r,c++);
               textColor(4);
               cout<<": ";textColor(2);cout<<"      ----->          FORGET PAGE           <-----     ";textColor(4);cout<<"  :"<<endl;
               jump(r,c++);
               textColor(4);
               cout<<"------------------------------------------------------------"<<endl;
               jump(r,c++);
               cout<<"|                                                          |"<<endl;
               jump(r,c++);
               cout<<"|                                                          |"<<endl;
               jump(r,c++);
               cout<<"|    --------------------------------------------------    |"<<endl;
               jump(r,c++);
               textColor(4);
               cout<<"| ";textColor(5);cout<<"   : Enter Login ID :-                              :  ";textColor(4);cout<<"  |"<<endl;
               jump(r,c++);
               textColor(4);
               cout<<"|    --------------------------------------------------    |"<<endl;
               jump(r,c++);
               cout<<"|                                                          |"<<endl;
               jump(r,c++);
               cout<<"|    --------------------------------------------------    |"<<endl;
               jump(r,c++);
               textColor(4);
               cout<<"|  ";textColor(5);cout<<"  : Enter Login Pass :-                            :  ";textColor(4);cout<<"  |"<<endl;
               jump(r,c++);
               textColor(4);
              cout<<"|    --------------------------------------------------    |"<<endl;
              jump(r,c++);
              cout<<"|                                                          |"<<endl;
              jump(r,c++);
              cout<<"|                                                          |"<<endl;
              jump(r,c++);
              cout<<"|                                                          |"<<endl;
              jump(r,c++);
              cout<<"|                                                          |"<<endl;
              jump(r,c++);
              cout<<"|                                                          |"<<endl;
              jump(r,c++);
              cout<<"|                                                          |"<<endl;
              jump(r,c++);
              cout<<"|                                                          |"<<endl;
              jump(r,c++);
              cout<<"|                                                          |"<<endl;
               jump(r,c++);
              cout<<"------------------------------------------------------------"<<endl;

               char loginid[30];
               jump(60,13);
               textColor(6);
               cin.getline(loginid,30);
               char loginpass[30];
               jump(62,17);
               textColor(6);
               cin.getline(loginpass,30);

               if(l.cheakIdAndPass(loginid,loginpass)){

                        jump(36,20);
                        textColor(7);
                        cout<<"----------------------------------------------------------"<<endl;
                        jump(52,21);
                        textColor(2);
                        cout<<"   Password Matched "<<endl;
                        jump(36,22);
                        textColor(7);
                        cout<<"----------------------------------------------------------"<<endl;
                        Sleep(2000);
                          Login temp;

                          temp.takeIdAndPass(true);

                          file.seekp(0,ios::beg);
                          file.write((char *)&temp,sizeof(temp));



                          file.close();
               }
               else {


                        jump(36,20);
                        textColor(7);
                        cout<<"----------------------------------------------------------"<<endl;
                        jump(48,21);
                        textColor(4);
                        cout<<"     Wrong Id & Password !!!! "<<endl;
                        jump(36,22);
                        textColor(7);
                        cout<<"----------------------------------------------------------"<<endl;
                        Sleep(2000);
               }
        }

        void Administratator :: selectDepartmentDaigram(){

                system("cls");
                int row=32,col=5;
                textColor(2);
                jump(row,col++);
                cout<<"------------------------------------------------------------------------------"<<endl;
                jump(row,col++);
                cout<<"|                            ";textColor(4);cout<<"  SELECT DEPARTMENT  ";textColor(2);cout<<"                           |";
                jump(row,col++);
                cout<<"------------------------------------------------------------------------------"<<endl;

                for(int a=0;a<21;a++){

                    jump(row,col++);
                    cout<<"|                                                                            |";
                }

                jump(44,9);
                textColor(2);
                cout<<"------------------------------------------------------";
                jump(44,10);
                textColor(2);
                cout<<"| ";textColor(5);cout<<" Select Department Using Drop - Down ' V ' Button ";textColor(2);cout<<" |"<<endl;
                jump(44,11);
                textColor(2);
                cout<<"------------------------------------------------------";

                jump(54,13);
                textColor(8);
                cout<<"Press SHIFT + A to Add department ";

                jump(47,15);
                textColor(7);
                cout<<"---------------   --------   --------   --------";
                jump(47,16);
                cout<<"|";textColor(5);cout<<" CHOOSE DEPT ";textColor(7);cout<<"|   |  ";textColor(5);
                cout<<char(31);textColor(7);cout<<"   |   |";textColor(5);cout<<" NEXT";textColor(7);
                cout<<" |   |";textColor(5);cout<<" BACK ";textColor(7);cout<<"|";
                jump(47,17);
                cout<<"---------------   --------   --------   --------";

                jump(32,28);
                textColor(2);
                cout<<"|____________________________________________________________________________|";


                jump(50,19);
                cout<<"------------------------------------------";
                jump(64,19);
                cout<<" Option Details ";

                row=50,col=20;
                for(int a=0;a<=5;a++){
                    jump(row,col++);
                    cout<<"|                                        |";
                }

                jump(row,col++);
                textColor(2);
                cout<<"|________________________________________|";



        }

        void Administratator :: createDepartmentConfigDiagram(){

                system("cls");

                int row=42,col=5;
                textColor(2);
                jump(row,col++);
                cout<<"------------------------------------------------";
                jump(row,col++);
                cout<<"|           ";textColor(6);cout<<"  CONFORMATION WINDOW             ";textColor(2);cout<<" |";
                jump(row,col++);
                cout<<"------------------------------------------------";
                jump(row,col++);
                cout<<"|                                              |";
                jump(row,col++);
                cout<<"|     ";textColor(5);cout<<"-----------------------------------";textColor(2);cout<<"      |";
                jump(row,col++);
                cout<<"|     ";textColor(5);cout<<": New Department Name =           :";textColor(2);cout<<"      |";
                jump(row,col++); textColor(2);
                cout<<"|     ";textColor(5);cout<<"-----------------------------------";textColor(2);cout<<"      |";
                jump(row,col++);
                cout<<"|                                              |";
                jump(row,col++);
                cout<<"|                                              |";
                jump(row,col++);
                cout<<"|                                              |";
                jump(row,col++);
                cout<<"|                                              |";
                jump(row,col++);
                cout<<"|      ------------          ------------      |";
                jump(row,col++);
                cout<<"|      :   SAVE   :          : Re-Enter :      |";
                jump(row,col++);
                cout<<"|      ------------          ------------      |";
                jump(row,col++);
                cout<<"|                                              |";
                jump(row,col++);
                cout<<"|______________________________________________|";

        }

        bool Administratator :: createDepartmentConfig(char *departmentName){

                int row=49,col=16; char ch;
               createDepartmentConfigDiagram();
                jump(73,10);
                cout<<departmentName;

                textColor(4);
                jump(row,col);
                cout<<"------------";
                jump(row,col+1);
                cout<<":";jump(row+11,col+1);cout<<":";
                jump(row,col+2);
                cout<<"------------";

                while(true){
                        jump(74+strlen(departmentName),10);
                        ch=getch();

                        switch(ch){

                            case 75:
                                if(row<=49)
                                    row=93;
                                row=row-22;
                            break;

                            case 77:
                                if(row>=71)
                                    row=27;
                                row=row+22;
                            break;

                            case 27:
                                return false;
                            break;

                            case 13:

                                {

                                    textColor(5);
                                    jump(row,col);
                                    cout<<"              ";
                                    jump(row-2,col+1);
                                    cout<<"------------  ";
                                    jump(row-2,col+3);
                                    cout<<"------------";

                                    if(row==49){
                                        jump(row-2,col+2);
                                        cout<<":";textColor(7);cout<<"  SAVE    ";textColor(5);cout<<":  ";

                                    }
                                    else if(row==71){
                                        jump(row-2,col+2);
                                        cout<<":";textColor(7);cout<<" Re-Enter ";textColor(5);cout<<":  ";
                                    }
                                }

                                Sleep(300);

                                {

                                    textColor(2);

                                    jump(row-2,col);
                                    cout<<"  ------------";
                                    jump(row-2,col+1);
                                    cout<<"  :  SAVE    :";
                                    jump(row-2,col+2);
                                    cout<<"  ------------";
                                    jump(row-2,col+3);
                                    cout<<"              ";

                                }


                                {

                                    if(row==49){
                                        char depName[10];
                                        ifstream file("DepartmentList.dat",ios::in | ios::binary);

                                        file.read(depName,sizeof(depName));

                                        while(file){
                                            if(strcmp(departmentName,depName)==0){

                                                jump(52,13);
                                                textColor(4);
                                                cout<<"Department Already Exist !! ";
                                                Sleep(2000);
                                                file.close();
                                                return false;
                                            }
                                            file.read(depName,sizeof(depName));
                                        }
                                        file.close();
                                        return true;
                                    }else
                                        return false;
                                }
                        }

                        createDepartmentConfigDiagram();

                        jump(73,10);
                        cout<<departmentName;

                        textColor(4);
                        jump(row,col);
                        cout<<"------------";
                        jump(row,col+1);
                        cout<<":";jump(row+11,col+1);cout<<":";
                        jump(row,col+2);
                        cout<<"------------";
                }
        }

        void Administratator :: createDepartment(){

              repeat:
                int row=42,col=5;
                jump(row,col++);
                textColor(3);
                cout<<"----------------------------------------------------------";
                jump(row,col++);
                cout<<":";textColor(7);cout<<"         Welcome To Create Department Window         ";textColor(3);cout<<"   :";
                jump(row,col++);
                cout<<"----------------------------------------------------------";

                for(short int a=0; a<15; a++){

                    jump(row,col+a);
                    cout<<"|                                                        | ";

                }

                jump(row,col+15);
                cout<<"|________________________________________________________|";
                row=50;
                col=9;
                jump(row,col++);
                textColor(5);
                cout<<"----------------------------------------";
                jump(row,col++);
                cout<<":";textColor(7);cout<<" Enter Department Name :-             ";textColor(5);cout<<":";
                jump(row,col++);
                cout<<"----------------------------------------";
                col+=4;
                jump(row+=6,col++);
                cout<<":-------------------------:";
                jump(row,col++);
                cout<<"| ";textColor(8);cout<<"If you want to Exit     ";textColor(5);cout<<"|";
                jump(row,col++);
                cout<<"| ";textColor(8);cout<<"this screen then Enter  ";textColor(5);cout<<"|";
                jump(row,col++);
                cout<<"| ";textColor(8);cout<<"The Escap Button Which  ";textColor(5);cout<<"|";
                jump(row,col++);
                cout<<"| ";textColor(8);cout<<"will take you to the    ";textColor(5);cout<<"|";
                jump(row,col++);
                cout<<"| ";textColor(8);cout<<"Previous window  !!!    ";textColor(5);cout<<"|";
                jump(row,col++);
                cout<<":_________________________:";

                row=77; col=10;
                char ch; int index=0;
                char departmentName[10];

                while(true){

                    jump(row,col);
                    cout<<" ";
                    jump(row,col);
                    textColor(2);
                    ch=getch();

                    if(index>=9)
                        break;

                    if(isdigit(ch)){


                        jump(55,13);
                        textColor(4);
                        cout<<"Please Enter Alfabet only !! ";
                        Sleep(1000);
                        jump(55,13);
                        cout<<"                              ";
                    }
                    else if(ch==8){

                        jump(row-1,col);
                        putchar(' ');
                        row--;
                        departmentName[index--]=' ';

                    }
                    else if(ch==27){
                        return ;
                    }
                    else{
                        if(ch==13){

                            break;
                        }

                        if(isalpha(ch)){
                           if(islower(ch))
                             ch=toupper(ch);

                           if(ch==8){
                                row-=2;
                                jump(row,col);
                                putchar(' ');
                           }
                           else{
                                jump(row,col);
                                putchar(ch);
                                row++;
                                departmentName[index++]=ch;
                           }
                        }

                   }

                }

                departmentName[index]=NULL;

                if(createDepartmentConfig(departmentName)){

                    ofstream fileIn("DepartmentList.dat",ios::app | ios::binary);

                    fileIn.write(departmentName,sizeof(departmentName));

                    fileIn.close();

                    char teacher[30];
                    char session[30];

                    strcpy(teacher,departmentName);
                    strcpy(session,departmentName);

                    strcat(teacher,"Teacher.dat");
                    strcat(session,"Session.dat");

                    ofstream t(teacher,ios::out | ios::binary);
                    t.close();
                    t.open(session,ios::out | ios::binary);
                    t.close();


                        jump(55,13);
                        cout<<" Saved Successfully \x3";
                        jump(74+strlen(departmentName),10);
                        Sleep(1000);

                }
                else
                    goto repeat;

        }

        void Administratator :: selectDepartment(){

                    char depName[10]="CHOSS DPT";
                    int depPos;
                    int row=65,col=15;
                    selectDepartmentDaigram();

                    textColor(4);
                    jump(row,col); cout<<"--------";
                    jump(row,col+1); cout<<"|";
                    jump(row+7,col+1); cout<<"|";
                    jump(row,col+2); cout<<"--------";

                     textColor(3);
                     jump(52,21); cout<<" This is DROP - DOWN Button after";
                     jump(52,23); cout<<" clicking on this button a Drop - Down";
                     jump(52,25); cout<<" menu will be Opened !!!";

                     jump(89,25);
                     textColor(7);
                     cout<<char(219);
                    char ch;

                    while(true){

                        jump(89,25);
                        ch=getch();

                        switch(ch){

                            case 77:
                                if(row>=80)
                                    row=54;

                                row+=11;
                            break;

                            case 75:
                                if(row<76)
                                    row=98;
                                row-=11;
                            break;

                            case 'A':
                                system("cls");
                                createDepartment();
                                break;

                            case 13:

                                jump(row,col);cout<<"          ";
                                textColor(4);
                                jump(row-1,col+1); cout<<"--------  ";
                                jump(row+3,col+2); cout<<"   |  ";
                                jump(row-1,col+3); cout<<"--------  ";

                                if(row==65){

                                    jump(row-1,col+2); cout<<"|  ";textColor(5);cout<<char(31);textColor(4);


                                }
                                else if(row==76){

                                    jump(row-1,col+2); cout<<"| ";textColor(5);cout<<"NEXT "; textColor(4);

                                }
                                else{


                                    jump(row-1,col+2); cout<<"| ";textColor(5);cout<<"BACK "; textColor(4);

                                }

                                jump(89,25);

                                Sleep(300);

                                if(row==65){

                                    ifstream file("DepartmentList.dat",ios::in|ios::ate|ios::binary);
                                    if(file.is_open()){
                                        system("cls");
                                        depPos=dropDownMenu();
                                        file.seekg(depPos*sizeof(depName));
                                        file.read(depName,sizeof(depName));
                                        file.close();
                                    }else{
                                        textColor(4);
                                        jump(row-3,col); cout<<"   --------";
                                        jump(row-1,col+1); cout<<" |  ";textColor(5);cout<<char(31);textColor(4);cout<<"   |";

                                        jump(row-3,col+2); cout<<"   --------";

                                        jump(48,18);
                                        cout<<"Department Does not Exist Please Create First ";
                                        jump(89,25);
                                        Sleep(4000);
                                        jump(52,18);
                                        cout<<"                                              ";
                                    }
                                }
                                else if(row==76){
                                    system("cls");
                                    if(strcmp("CHOSS DPT",depName)!=0){
                                        nextButton(depName);
                                    }
                                    else{

                                        jump(42,12);
                                        textColor(5);
                                        cout<<"---------------------------------------------";
                                        jump(42,13);
                                        cout<<"|";textColor(4);cout<<"                WARNING !!!! ";textColor(5);cout<<"              |";
                                        jump(42,14);
                                        cout<<"---------------------------------------------";
                                        jump(42,15);
                                        cout<<"|                                           |";
                                        jump(42,16);
                                        cout<<"|                                           |";
                                        jump(42,17);
                                        cout<<"|  ";textColor(4);cout<<"  Please Choose Department First !!! ";textColor(5);cout<<"    |";
                                        jump(42,18);
                                        cout<<"|                                           |";
                                        jump(42,19);
                                        cout<<"|                                           |";
                                        jump(42,20);
                                        cout<<"|___________________________________________|";
                                        Sleep(2000);
                                    }
                                }
                                else if(row==87)
                                    return;

                            break;
                        }

                        selectDepartmentDaigram();
                        jump(49,16);
                        cout<<"            ";
                        jump(49,16);

                        if(strcmp(depName,"CHOSS DPT")){
                            textColor(2);
                        }
                        cout<<depName;

                        textColor(4);
                        jump(row,col); cout<<"--------";
                        jump(row,col+1); cout<<"|";
                        jump(row+7,col+1); cout<<"|";
                        jump(row,col+2); cout<<"--------";

                        jump(89,25);
                        textColor(7);
                        cout<<char(219);

                        if(row==65){
                            textColor(3);
                            jump(52,21); cout<<" This is DROP - DOWN Button after";
                            jump(52,23); cout<<" clicking on this button a Drop - Down";
                            jump(52,25); cout<<" menu will be Opened !!!";

                        }else if(row==76){
                            textColor(3);
                            jump(52,21); cout<<" Click on this Button After slecting";
                            jump(52,23); cout<<" the Department Then the selcted ";
                            jump(52,25); cout<<" department will be opened !!!";

                        }else{

                            textColor(3);
                            jump(52,22); cout<<" This button will take you to ";
                            jump(52,24); cout<<" The ADMINISTRATOR Window !!! ";
                        }
                    }




        }

        int Administratator :: dropDownMenuDiagram(){


                ifstream file("DepartmentList.dat",ios::in|ios::binary);

                char department[10];

                int departmentCount=0;

                system("cls");
                int row=32,col=5;
                textColor(2);
                jump(row,col++);
                cout<<"------------------------------------------------------------------------------"<<endl;
                jump(row,col++);
                cout<<"|                            ";textColor(4);cout<<"  SELECT DEPARTMENT  ";textColor(2);cout<<"                           |";
                jump(row,col++);
                cout<<"------------------------------------------------------------------------------"<<endl;

                for(int a=0;a<10;a++){

                    jump(row,col++);
                    cout<<"|                                                                            |";
                }

                jump(44,9);
                textColor(2);
                cout<<"------------------------------------------------------";
                jump(44,10);
                textColor(2);
                cout<<"| ";textColor(5);cout<<" Select Department Using Drop - Down ' V ' Button ";textColor(2);cout<<" |"<<endl;
                jump(44,11);
                textColor(2);
                cout<<"------------------------------------------------------";

                jump(54,13);
                textColor(8);
                cout<<"Press SHIFT + A to Add department ";

                jump(47,15);
                textColor(7);
                cout<<"---------------   --------   --------   --------";
                jump(47,16);
                cout<<"|";textColor(5);cout<<" CHOOSE DEPT ";textColor(7);cout<<"|   |  ";textColor(5);
                cout<<char(31);textColor(7);cout<<"   |   |";textColor(5);cout<<" NEXT";textColor(7);
                cout<<" |   |";textColor(5);cout<<" BACK ";textColor(7);cout<<"|";
                jump(47,17);
                cout<<"---------------   --------   --------   --------";


                file.read(department,sizeof(department));
                while(file){
                        departmentCount+=1;
                        jump(row,col);
                        textColor(2);
                        cout<<"|                                                                            |";
                        jump(row+15,col++);
                        textColor(7);
                        cout<<"| "<<left<<setw(10)<<department<<"  |";
                        jump(row,col);
                        textColor(2);
                        cout<<"|                                                                            |";
                        jump(row+15,col++);
                        textColor(7);
                        cout<<"---------------";
                        file.read(department,sizeof(department));
                }

                file.close();
                jump(row,col++);
                textColor(2);
                cout<<"|____________________________________________________________________________|";

                return departmentCount;
        }

        int Administratator :: dropDownMenu(){

                int row=47,col=17;

                int len=dropDownMenuDiagram();

                ifstream file("DepartmentList.dat",ios::in|ios::ate|ios::binary);

                char depName[10];
                int depPossition;
                char ch;

                depPossition=(col-17)/2;
                file.seekg(depPossition*sizeof(depName));
                file.read(depName,sizeof(depName));

                jump(49,16);
                textColor(2);
                cout<<left<<setw(11)<<depName;


                jump(row+10,col+1);
                textColor(6);
                cout<<"\x3";

                while(true){
                    jump(60,16);
                    ch=getch();


                    switch(ch){

                        case 72:
                            if(col==17)
                                col=17+len*2;
                            col-=2;

                        break;

                        case 80:
                            if(col==15+len*2)
                                col=15;
                            col+=2;
                        break;

                        case 13:
                            file.close();
                            return (col-17)/2;
                           break;


                    }

                    if(col>17){
                        jump(row+10,col-1);
                        cout<<"  ";

                        jump(row+10,col+1);
                        textColor(6);
                        cout<<"\x3";

                        jump(row+10,col+3);
                        cout<<"  ";
                    }
                    else{
                        jump(row+10,col+1);
                        textColor(6);
                        cout<<"\x3";
                    }

                    depPossition=(col-17)/2;
                    file.seekg(depPossition*sizeof(depName));
                    file.read(depName,sizeof(depName));

                    jump(49,16);
                    textColor(2);
                    cout<<left<<setw(11)<<depName;

                    if(col==15+len*2){
                        jump(row+10,18+len*2);
                        textColor(2);
                        cout<<"__";
                    }

                    if(col==17){
                        jump(row+10,(15+len*2)+1);
                        cout<<"  ";
                    }else if(col== 17+len*2){

                        jump(row+10,17);
                        cout<<"  ";
                    }



                }


        }

        void Administratator :: nextButtonDiagram(char *depName){

                int row=26,col=8;
                int r=26,c=6;
                textColor(2);
                jump(r,c);
                cout<<"------------------------------------------------------------------------------"<<endl;;
                jump(r,c+1);
                cout<<"|                          ";textColor(4);cout<<right<<setw(10)<<depName<<" Department                            ";textColor(2);cout<<" |";
                jump(r,c+2);
                cout<<"------------------------------------------------------------------------------"<<endl;

                for(int a=3;a<25;a++){
                    jump(r,c+a);
                    cout<<"|                                                                            |"<<endl;
                }

                jump(r,c+25);
                cout<<"|____________________________________________________________________________|"<<endl;

                jump(row+5,col+2);
                cout<<"...................................................................."<<endl;

                for(int a = 3; a<23; a++){
                    jump(row+5,col+a);
                    cout<<".                                                                  ."<<endl;
                }

                jump(row+8,col+3);textColor(5);
                cout<<"      CHOOSE OPTION        ";textColor(2);cout<<"  : ";textColor(5);cout<<"          ABOUT OPTION ";

                jump(row+6,col+4);textColor(2);
                cout<<"..................................................................."<<endl;

                jump(row+6,col+8);
                textColor(5);
                cout<<"        TEACHER  ";

                jump(row+6,col+13);
                textColor(5);
                cout<<"        STUDENT ";

                jump(row+6,col+18);
                textColor(5);
                cout<<"         BACK ";

                jump(row+6,col+22);
                textColor(2);
                cout<<"........................:......:..................................";

                for(int a=5;a<23;a++){
                    jump(row+30,col+a);
                    cout<<":";
                }
                for(int a=5;a<23;a++){
                    jump(row+37,col+a);
                    cout<<":";
                }

        }

        void Administratator :: nextButton(char *depName){
                    int row=36,col=14;
                    system("cls");
                    nextButtonDiagram(depName);
                    textColor(7);
                    jump(row,col);  cout<<"................";
                    jump(row,col+1);cout<<":";jump(row+15,col+1);cout<<":";
                    jump(row,col+2);cout<<":";jump(row+15,col+2);cout<<":";
                    jump(row,col+3);cout<<":";jump(row+15,col+3);cout<<":";
                    jump(row,col+4);cout<<":..............:";

                    jump(66,15);
                    cout<<"After Pressing on this Teacher ";
                    jump(66,17);
                    cout<<"Button you can see the list of ";
                    jump(66,19);
                    cout<<"All the Teachers of ";textColor(3);cout<<left<<setw(8)<<depName;
                    jump(66,21);
                    textColor(7);
                    cout<<"Department !!                  ";

                    char ch;

                    while(true){
                        jump(96,28);
                        ch=getch();

                        switch(ch){

                             case 80:
                                 if(col>19)
                                    col=9;

                                 col+=5;

                            break;

                            case 72:
                                if(col<19)
                                    col=29;

                                col-=5;
                            break;

                            case 13:
                                {

                                    jump(row,col);  cout<<"                ";
                                    jump(row,col+1);cout<<"                ";
                                    jump(row,col+2);cout<<"                ";
                                    jump(row,col+3);cout<<"                ";
                                    jump(row,col+4);cout<<"                ";
                                    textColor(2);
                                    jump(row-2,col+1);cout<<"................";
                                    jump(row-2,col+2);cout<<":";jump(row+15-2,col+2);cout<<":";
                                    jump(row-2,col+2);cout<<":              :";
                                    jump(row-2,col+4);cout<<":";jump(row+15-2,col+4);cout<<":";
                                    jump(row-2,col+5);cout<<":..............:";

                                    if(col==14){
                                        jump(row-2,col+3);cout<<": ";textColor(6);cout<<"  TEACHER   ";textColor(2);cout<<" :";
                                    }
                                    else if(col==19){
                                        jump(row-2,col+3);cout<<": ";textColor(6);cout<<"  STUDENT   ";textColor(2);cout<<" :";
                                    }
                                    else if(col==24){
                                        jump(row-2,col+3);cout<<": ";textColor(6);cout<<"    BACK    ";textColor(2);cout<<" :";
                                    }
                                    Sleep(300);

                                    jump(row-2,col+1);cout<<"                ";
                                    jump(row-2,col+2);cout<<" ";jump(row+15-2,col+2);cout<<" ";
                                    jump(row-2,col+2);cout<<"                ";
                                    jump(row-2,col+4);cout<<" ";jump(row+15-2,col+4);cout<<" ";
                                    jump(row-2,col+5);cout<<"                ";

                                    if(col==14){
                                        jump(row-2,col+3);cout<<"  ";textColor(6);cout<<"            ";textColor(2);cout<<"  ";
                                        jump(row,col+2);cout<<"   ";textColor(5);cout<<" TEACHER   ";textColor(2);cout<<"  ";
                                    }
                                    else if(col==19){
                                        jump(row-2,col+3);cout<<"  ";textColor(6);cout<<"            ";textColor(2);cout<<"  ";
                                        jump(row,col+2);cout<<"   ";textColor(5);cout<<" STUDENT   ";textColor(2);cout<<"  ";
                                    }
                                    else if(col==24){
                                        jump(row-2,col+3);cout<<"  ";textColor(6);cout<<"            ";textColor(2);cout<<"  ";
                                        jump(row,col+2);cout<<"   ";textColor(5);cout<<" BACK    ";textColor(2);cout<<"  ";
                                    }


                                }


                                if(col==14){  // Teacher Button
                                    teacherWindow(depName);
                                    system("cls");
                                    nextButtonDiagram(depName);
                                }
                                else if(col==19){
                                    selectSession(depName);
                                getch();
                                    system("cls");
                                    nextButtonDiagram(depName);// Student Button
                                    //return ;
                                }
                                else if(col==24)
                                    return ;

                            break;
                        }
                           jump(66,15);
                            cout<<"                               ";
                            jump(66,17);
                            cout<<"                               ";
                            jump(66,19);
                            cout<<"                               ";
                            jump(66,21);
                            cout<<"                               ";
                            jump(66,23);
                            cout<<"                               ";
                            jump(66,25);
                            cout<<"                               ";

                      if(col==14){
                            textColor(7);
                            jump(66,15);
                            cout<<"After Pressing on this Teacher ";
                            jump(66,17);
                            cout<<"Button you can see the list of ";
                            jump(66,19);
                            cout<<"All the Teachers of ";textColor(3);cout<<left<<setw(8)<<depName;
                            jump(66,21);
                            textColor(7);
                            cout<<"Department !!                  ";

                      }
                      else if(col==19){

                            jump(66,15);
                            cout<<"After Pressing on this Student ";
                            jump(66,17);
                            cout<<"Button you can see the list of ";
                            jump(66,19);
                            cout<<"all the Student's of ";textColor(3);cout<<left<<setw(8)<<depName;
                            jump(66,21);
                            textColor(7);
                            cout<<"Department by selecting The ";
                            jump(66,23);
                            cout<<"Session which will be apeared ";
                            jump(66,25);
                            cout<<"next ";

                      }
                      else{
                            jump(66,15);
                            cout<<"After Pressing on this Back    ";
                            jump(66,17);
                            cout<<"Button you will be go back to  ";
                            jump(66,19);
                            cout<<"Select Department Window      ";
                      }

                     jump(row,14);  cout<<"                ";
                     jump(row,15);cout<<" ";jump(row+15,15);cout<<" ";
                     jump(row,16);cout<<" ";jump(row+15,16);cout<<" ";
                     jump(row,17);cout<<" ";jump(row+15,17);cout<<" ";
                     jump(row,18);cout<<"                ";

                     jump(row,19);  cout<<"                ";
                     jump(row,20);cout<<" ";jump(row+15,20);cout<<" ";
                     jump(row,21);cout<<" ";jump(row+15,21);cout<<" ";
                     jump(row,22);cout<<" ";jump(row+15,22);cout<<" ";
                     jump(row,23);cout<<"                ";

                     jump(row,24);  cout<<"                ";
                     jump(row,25);cout<<" ";jump(row+15,25);cout<<" ";
                     jump(row,26);cout<<" ";jump(row+15,26);cout<<" ";
                     jump(row,27);cout<<" ";jump(row+15,27);cout<<" ";
                     jump(row,28);cout<<"                ";

                     textColor(7);
                     jump(row,col);  cout<<"................";
                     jump(row,col+1);cout<<":";jump(row+15,col+1);cout<<":";
                     jump(row,col+2);cout<<":";jump(row+15,col+2);cout<<":";
                     jump(row,col+3);cout<<":";jump(row+15,col+3);cout<<":";
                     jump(row,col+4);cout<<":..............:";

                    }

        }

        void Administratator :: teacherWindowDiagram(char *departmentName){

                int row=26,col=8;
                int r=26,c=6;
                textColor(2);
                jump(r,c);
                cout<<"------------------------------------------------------------------------------"<<endl;;
                jump(r,c+1);
                cout<<"|                       ";textColor(4);cout<<right<<setw(10)<<departmentName<<" TEACHERS WINDOW                          ";textColor(2);cout<<" |";
                jump(r,c+2);
                cout<<"------------------------------------------------------------------------------"<<endl;

                for(int a=3;a<32;a++){
                    jump(r,c+a);
                    cout<<"|                                                                            |"<<endl;
                }

                jump(r,c+32);
                cout<<"|____________________________________________________________________________|"<<endl;

                jump(row+5,col+2);
                cout<<"...................................................................."<<endl;

                for(int a = 3; a<30; a++){
                    jump(row+5,col+a);
                    cout<<".                                                                  ."<<endl;
                }

                jump(row+8,col+3);textColor(5);
                cout<<"      CHOOSE OPTION        ";textColor(2);cout<<"  : ";textColor(5);cout<<"          ABOUT OPTION ";

                jump(row+6,col+4);textColor(2);
                cout<<"..................................................................."<<endl;

                jump(row+8,col+6);
                textColor(5);
                cout<<"       ADD   ";

                jump(row+8,col+10);
                textColor(5);
                cout<<"       VIEW   ";

                jump(row+8,col+14);
                textColor(5);
                cout<<"       EDIT  ";

                jump(row+8,col+18);
                textColor(5);
                cout<<"      DELETE ";

                jump(row+8,col+22);
                textColor(5);
                cout<<"     VIEW FULL ";

                jump(row+8,col+26);
                textColor(5);
                cout<<"       BACK  ";

                jump(row+6,col+29);
                textColor(2);
                cout<<"........................:......:..................................";

                for(int a=5;a<30;a++){
                    jump(row+30,col+a);
                    cout<<":";
                }
                for(int a=5;a<30;a++){
                    jump(row+37,col+a);
                    cout<<":";
                }
        }

        void Administratator :: teacherWindow(char *departmentName){

                    int row=36,col=13;

                    system("cls");

                    teacherWindowDiagram(departmentName);

                    textColor(7);
                    jump(row,col); cout<<"---------------";
                    jump(row,col+1);cout<<": ";
                    jump(row+14,col+1);cout<<": ";
                    jump(row,col+2);cout<<"---------------";

                    if(col==13){
                            textColor(7);
                            jump(66,15);
                            cout<<"After Pressing on this Add ";
                            jump(66,17);
                            cout<<"Button you can add a new ";
                            jump(66,19);
                            cout<<"Teachers Detail Who have ";
                            jump(66,21);
                            cout<<"Joined recently ";

                    }

                    char ch;

                    while(true){
                            jump(96,32);
                            ch=getch();

                        switch(ch){

                            case 72:
                                if(col<17)
                                    col=37;

                                col-=4;
                            break;

                            case 80:
                                if(col>29)
                                    col=9;

                                col+=4;
                            break;

                            case 13:

                                jump(row,col); cout<<"               ";
                                jump(row,col+1);cout<<"               ";
                                jump(row,col+2);cout<<"               ";
                                textColor(5);
                                jump(row-2,col+1); cout<<"---------------";
                                jump(row-2,col+2);cout<<": "; jump(row+12,col+2);cout<<": ";
                                jump(row-2,col+3);cout<<"---------------";

                                if(col==13){
                                    textColor(6);
                                    jump(row-1,col+2);
                                    cout<<"   ADD     ";
                                }
                                else if(col==17){
                                    textColor(6);
                                    jump(row-1,col+2);
                                    cout<<"    VIEW    ";
                                }
                                else if(col==21){
                                    textColor(6);
                                    jump(row-1,col+2);
                                    cout<<"    EDIT    ";
                                }
                                else if(col==25){
                                    textColor(6);
                                    jump(row-1,col+2);
                                    cout<<"   DELETE   ";
                                }
                                else if(col==29){
                                    textColor(6);
                                    jump(row-1,col+2);
                                    cout<<"  VIEW FULL ";

                                }
                                else if(col==33){
                                    textColor(6);
                                    jump(row-1,col+2);
                                    cout<<"    BACK    ";
                                }

                                jump(96,32);
                                Sleep(300);


                                if(col==13){
                                    system("cls");
                                    addTeacher(departmentName);
                                    system("cls");
                                    teacherWindowDiagram(departmentName);
                                }
                                else if(col==17){
                                    system("cls");
                                    showShortDetails(departmentName);
                                    system("cls");
                                    teacherWindowDiagram(departmentName);
                                }
                                else if(col==21){
                                    system("cls");
                                    editTeacher(departmentName);
                                    system("cls");
                                    teacherWindowDiagram(departmentName);
                                }
                                else if(col==25){
                                    system("cls");
                                    deleteTeacher(departmentName);
                                    system("cls");
                                    teacherWindow(departmentName);
                                }
                                else if(col==29){
                                    system("cls");
                                    teacherFullDetails(departmentName);
                                    system("cls");
                                    teacherWindowDiagram(departmentName);
                                }
                                else if(col==33){

                                       return ;
                                }

                            break;

                        }

                        jump(66,15);
                        cout<<"                               ";
                        jump(66,17);
                        cout<<"                               ";
                        jump(66,19);
                        cout<<"                               ";
                        jump(66,21);
                        cout<<"                               ";
                        jump(66,23);
                        cout<<"                               ";
                        jump(66,25);
                        cout<<"                               ";
                        jump(66,27);
                        cout<<"                               ";
                        jump(66,29);
                        cout<<"                               ";
                        if(col==13){
                            textColor(7);
                            jump(66,15);
                            cout<<"After Pressing on this Add ";
                            jump(66,17);
                            cout<<"Button you can add a new ";
                            jump(66,19);
                            cout<<"Teachers Detail Who have ";
                            jump(66,21);
                            cout<<"Joined recently ";
                        }
                        else if(col==17){
                            textColor(7);
                            jump(66,15);
                            cout<<"After Pressing on this view    ";
                            jump(66,17);
                            cout<<"Button you can see the short   ";
                            jump(66,19);
                            cout<<"Details of All the Teachers ";
                            jump(66,21);

                        }
                        else if(col==21){
                            textColor(7);
                            jump(66,15);
                            cout<<"As it's name suggests it allows ";
                            jump(66,17);
                            cout<<"you to edit Teacher's Details ";
                            jump(66,19);
                            cout<<"All you have to do is just ";
                            jump(66,21);
                            cout<<"put the \" ID \" of the teacher ";
                            jump(66,23);
                            cout<<"Whose details you want to edit ";
                            jump(66,25);
                            cout<<"it will offer you a \" DROE - ";
                            jump(66,27);
                            cout<<"DOWN Window \" Where you have  ";
                            jump(66,29);
                            cout<<"to choose What to edit ";
                        }
                        else if(col==25){
                            textColor(7);
                            jump(66,15);
                            cout<<"As it's name suggests it allows ";
                            jump(66,17);
                            cout<<"you to Delete Teacher's Details ";
                            jump(66,19);
                            cout<<"All you have to do is just ";
                            jump(66,21);
                            cout<<"put the \" ID \" of the Teacher ";
                            jump(66,23);
                            cout<<"Whose details you want to ";
                            jump(66,25);
                            cout<<"Delete ";
                        }
                        else if(col==29){
                            textColor(7);
                            jump(66,15);
                            cout<<"This Button Shows the Full ";
                            jump(66,17);
                            cout<<"Details of an individual  ";
                            jump(66,19);
                            cout<<"All you have to do is just ";
                            jump(66,21);
                            cout<<"put his \" ID \" and it will ";
                            jump(66,23);
                            cout<<"show you his full Details  ";
                            jump(66,25);
                            cout<<"in a new window ";

                        }
                        else if(col==33){
                            textColor(7);
                            jump(66,15);
                            cout<<"When you will be press on this ";
                            jump(66,17);
                            cout<<"Button it will take you back to";
                            jump(66,19);
                            cout<<"the select department ";
                        }



                            jump(36,13);cout<<"               ";
                            jump(36,14);cout<<"  "; jump(50,14);cout<<"  ";
                            jump(36,15);cout<<"               ";

                            jump(36,17);cout<<"               ";
                            jump(36,18);cout<<"  "; jump(50,18);cout<<"  ";
                            jump(36,19);cout<<"               ";

                            jump(36,21);cout<<"               ";
                            jump(36,22);cout<<"  "; jump(50,22);cout<<"  ";
                            jump(36,23);cout<<"               ";

                            jump(36,25);cout<<"               ";
                            jump(36,26);cout<<"  "; jump(50,26);cout<<"  ";
                            jump(36,27);cout<<"               ";

                            jump(36,29);cout<<"               ";
                            jump(36,30);cout<<"  "; jump(50,30);cout<<"  ";
                            jump(36,31);cout<<"               ";

                            jump(36,33);cout<<"               ";
                            jump(36,34);cout<<"  "; jump(50,34);cout<<"  ";
                            jump(36,35);cout<<"               ";


                            textColor(7);
                            jump(row,col); cout<<"---------------";
                            jump(row,col+1);cout<<": "; jump(row+14,col+1);cout<<": ";
                            jump(row,col+2);cout<<"---------------";

                    }

        }

        void Administratator :: addTeacher(char *departmentName){

                    char fileName[30];
                    strcpy(fileName,departmentName);
                    strcat(fileName,"Teacher.dat");

                 repeat:

                    ofstream file(fileName,ios::app | ios::binary);

                    if(!file)
                        assert(false);

                    Teacher teacherDetails;

                    if(teacherDetails.input()){

                        if(!configSave()){
                            file.close();
                            goto repeat;
                        }

                        file.write((char *)&teacherDetails,sizeof(Teacher));

                        file.close();

                    }
                    else {
                        file.close();
                    }

        }

        bool Administratator :: configSave(){

                        int row=45,col=35;

                        textColor(2);

                        jump(row,col+1);
                        textColor(5);cout<<"    SAVE ";textColor(2);cout<<"                        ";textColor(5);cout<<" RE-ENTER ";

                        char ch;
                         textColor(7);
                         jump(row,col);
                         cout<<"------------";
                         jump(row,col+1);cout<<"|";
                         jump(row+11,col+1);cout<<"|";
                         jump(row,col+2);
                         cout<<"------------";

                        while(true){
                            ch=getch();

                            switch(ch){

                                case 77:
                                    if(row>45)
                                        row=13;
                                    row=row+32;
                                break;

                                case 75:
                                    if(row<=45)
                                        row=109;
                                    row=row-32;
                                break;

                                case 13:
                                    jump(row,col);
                                    cout<<"            ";
                                    jump(row,col+1);
                                    cout<<"            ";
                                    jump(row,col+2);
                                    cout<<"            ";

                                    textColor(2);
                                    jump(row-2,col+1);
                                    cout<<"------------";
                                    jump(row-2,col+2);cout<<"|";
                                    jump(row+9,col+2);cout<<"|";
                                    jump(row-2,col+3);
                                    cout<<"------------";

                                    if(row==45){
                                        textColor(7);
                                        jump(row,col+2);
                                        cout<<"  SAVE";
                                    }
                                    else if(row==77){
                                        textColor(7);
                                        jump(row,col+2);
                                        cout<<"RE-ENTER";
                                    }

                                    Sleep(300);

                                    if(row==45){
                                        return true;
                                    }
                                    else if(row==77){
                                        return false;
                                     }

                                break;


                            }
                            jump(45,35);
                            cout<<"            ";
                            jump(45,36); cout<<" ";
                            jump(45+11,36);cout<<" ";
                            jump(45,37);
                            cout<<"            ";

                            jump(77,35);
                            cout<<"            ";
                            jump(77,36); cout<<" ";
                            jump(77+11,36);cout<<" ";
                            jump(77,37);
                            cout<<"            ";




                            textColor(7);
                            jump(row,col);
                            cout<<"------------";
                            jump(row,col+1);cout<<"|";
                            jump(row+11,col+1);cout<<"|";
                            jump(row,col+2);
                            cout<<"------------";


                        }


        }

        void Administratator :: showShortDetails(char *departmentName){

                    char fileName[30];  int row=10,col=5;
                    strcpy(fileName,departmentName);
                    strcat(fileName,"Teacher.dat");

                    Teacher teacherDetails;

                    ifstream file(fileName,ios::in | ios::binary);
                    file.read((char *)&teacherDetails,sizeof(teacherDetails));

                    if(file.eof()){     //Checking File is Empty or not

                        system("cls");
                        textColor(4);
                        jump(30,5);
                        cout<<"---------------------------------------------------------------------------------";
                        jump(30,6);
                        cout<<"|                                 Warning !!!                                   |";
                        jump(30,7);
                        cout<<"---------------------------------------------------------------------------------";
                        jump(30,8);
                        cout<<"|                                                                               |";
                        jump(30,9);
                        cout<<"|                                                                               |";
                        jump(30,10);
                        cout<<"|            DataBase is Empty Please insert Some Data First                    |";
                        jump(30,11);
                        cout<<"|                                                                               |";
                        jump(30,12);
                        cout<<"|                                                                               |";
                        jump(30,13);
                        cout<<"|_______________________________________________________________________________|";
                        file.close();
                        Sleep(1500);

                        return ;
                    }
                    else {

                        textColor(2);
                        jump(row,col);
                        cout<<"------------------------------------------------------------------------------------------------------------------";
                        jump(row,col+1);
                        cout<<"|                                    ";textColor(4);cout<<"         Teacher's Short Details       ";textColor(2);cout<<"                                     |";
                        jump(row,col+2);
                        cout<<"------------------------------------------------------------------------------------------------------------------";

                        for(int a=3;a<10;a++){
                            jump(row,col+a);
                            cout<<"|                                                                                                                |";

                        }

                        row=17;col=10;
                        textColor(5);
                        jump(row,col++);
                        cout<<"-------------------------------------------------------------------------------------------------"<<endl;
                        jump(row,col++);
                        textColor(4);
                        cout<<left<<setw(10)<<"T_ID"<<setw(30)<<"  Name "<<setw(18)<<"Phone Number "<<setw(15)<<"Qualification "<<"Specification"<<endl;
                        jump(row,col++);
                        textColor(5);
                        cout<<"-------------------------------------------------------------------------------------------------"<<endl;

                        while(file){
                            teacherDetails.shortDetails(row,col);
                            col+=2;
                            file.read((char *)&teacherDetails,sizeof(teacherDetails));
                        }

                        file.close();

                        textColor(2);
                        jump(10,col);
                        cout<<"|                                                                                                                |";
                        jump(10,col+1);
                        cout<<"|                                                                                                                |";

                        jump(row-7,col+2);
                        cout<<"|________________________________________________________________________________________________________________|";



                        jump(row,col+4);
                        cout<<">>>>>>>>>>>  Press Any Key  >>>>>>>>>>>>> ";
                        getch();
                    }


        }

        bool Administratator :: configEnter(){

//                system("cls");
                 int row=45,col=35;

                        textColor(2);

                        jump(row,col+1);
                        textColor(5);cout<<"  RE-ENTER ";textColor(2);cout<<"                        ";textColor(5);cout<<" BACK ";

                        char ch;
                         textColor(7);
                         jump(row,col);
                         cout<<"------------";
                         jump(row,col+1);cout<<"|";
                         jump(row+11,col+1);cout<<"|";
                         jump(row,col+2);
                         cout<<"------------";

                        while(true){
                            ch=getch();

                            switch(ch){

                                case 77:
                                    if(row>45)
                                        row=13;
                                    row=row+32;
                                break;

                                case 75:
                                    if(row<=45)
                                        row=109;
                                    row=row-32;
                                break;

                                case 13:
                                    jump(row,col);
                                    cout<<"            ";
                                    jump(row,col+1);
                                    cout<<"            ";
                                    jump(row,col+2);
                                    cout<<"            ";

                                    textColor(2);
                                    jump(row-2,col+1);
                                    cout<<"------------";
                                    jump(row-2,col+2);cout<<"|";
                                    jump(row+9,col+2);cout<<"|";
                                    jump(row-2,col+3);
                                    cout<<"------------";

                                    if(row==45){
                                        textColor(7);
                                        jump(row,col+2);
                                        cout<<"RE-ENTER";
                                    }
                                    else if(row==77){
                                        textColor(7);
                                        jump(row,col+2);
                                        cout<<" BACK";
                                    }

                                    Sleep(300);

                                    if(row==45){
                                        return true;
                                    }
                                    else if(row==77){
                                        return false;
                                     }

                                break;


                            }
                            jump(45,35);
                            cout<<"            ";
                            jump(45,36); cout<<" ";
                            jump(45+11,36);cout<<" ";
                            jump(45,37);
                            cout<<"            ";

                            jump(77,35);
                            cout<<"            ";
                            jump(77,36); cout<<" ";
                            jump(77+11,36);cout<<" ";
                            jump(77,37);
                            cout<<"            ";




                            textColor(7);
                            jump(row,col);
                            cout<<"------------";
                            jump(row,col+1);cout<<"|";
                            jump(row+11,col+1);cout<<"|";
                            jump(row,col+2);
                            cout<<"------------";


                        }

        }

        int Administratator :: t_idConfig(char *departmentName){

                 char t_id[12];
                 char fileName[30];  int row=10,col=5;
                 strcpy(fileName,departmentName);
                 strcat(fileName,"Teacher.dat");

        repeat:
                Teacher teacherDetails;

                 ifstream file(fileName,ios::in | ios::binary);
                 file.read((char *)&teacherDetails,sizeof(teacherDetails));

                 if(file.eof()){     //Checking File is Empty or not

                        system("cls");
                        textColor(4);
                        jump(30,5);
                        cout<<"---------------------------------------------------------------------------------";
                        jump(30,6);
                        cout<<"|                                 Warning !!!                                   |";
                        jump(30,7);
                        cout<<"---------------------------------------------------------------------------------";
                        jump(30,8);
                        cout<<"|                                                                               |";
                        jump(30,9);
                        cout<<"|                                                                               |";
                        jump(30,10);
                        cout<<"|            DataBase is Empty Please insert Some Data First                    |";
                        jump(30,11);
                        cout<<"|                                                                               |";
                        jump(30,12);
                        cout<<"|                                                                               |";
                        jump(30,13);
                        cout<<"|_______________________________________________________________________________|";
                        file.close();
                        Sleep(1500);

                        return -1;
                }
                else {

                        system("cls");
                        textColor(6);
                        jump(30,5);
                        cout<<"---------------------------------------------------------------------------------";
                        jump(30,6);
                        cout<<"|                     Teacher Id Configration Window                            |";
                        jump(30,7);
                        cout<<"---------------------------------------------------------------------------------";
                        jump(30,8);
                        cout<<"|                                                                               |";
                        jump(30,9);
                        cout<<"|         ";textColor(2);cout<<"  ----------------------------------------------------   ";textColor(6);cout<<"             |";
                        jump(30,10);
                        cout<<"|          ";textColor(2);cout<<" | Enter Teacher Id :-                              |   ";textColor(6);cout<<"             |";
                        jump(30,11);
                        cout<<"|          ";textColor(2);cout<<" ----------------------------------------------------   ";textColor(6);cout<<"             |";
                        jump(30,12);
                        cout<<"|                                                                               |";
                        jump(30,13);
                        cout<<"|_______________________________________________________________________________|";

                        jump(64,10);
                        textColor(7);
                        cin.getline(t_id,12);
                        int pos=0;

                            while(file){

                                    if(strcmp(t_id,teacherDetails.getId())==0){
                                        file.close();
                                        return pos;
                                    }

                                    pos++;

                                    file.read((char *)&teacherDetails,sizeof(teacherDetails));

                            }
                            file.close();

                        if(configEnter())
                            goto repeat;

                        return -1;

                }




        }

        void Administratator :: editOptionDiagram(char *departmentName,int a){

                int row=26,col=8;
                int r=26,c=6;
                textColor(2);
                jump(r,c);
                cout<<"------------------------------------------------------------------------------"<<endl;;
                jump(r,c+1);
                if(a==0){
                    cout<<"|                     ";textColor(4);cout<<right<<setw(10)<<departmentName<<" TEACHERS EDIT WINDOW                        ";textColor(2);cout<<" |";
                }else{
                    cout<<"|                     ";textColor(4);cout<<right<<setw(10)<<departmentName<<" STUDENTS EDIT WINDOW                        ";textColor(2);cout<<" |";
                }
                jump(r,c+2);
                cout<<"------------------------------------------------------------------------------"<<endl;

                for(int a=3;a<36;a++){
                    jump(r,c+a);
                    cout<<"|                                                                            |"<<endl;
                }

                jump(r,c+36);
                cout<<"|____________________________________________________________________________|"<<endl;

                jump(row+5,col+2);
                cout<<"...................................................................."<<endl;

                for(int a = 3; a<34; a++){
                    jump(row+5,col+a);
                    cout<<".                                                                  ."<<endl;
                }

                jump(row+8,col+3);textColor(5);
                cout<<"      CHOOSE OPTION        ";textColor(2);cout<<"  : ";textColor(5);cout<<"          ABOUT OPTION ";

                jump(row+6,col+4);textColor(2);
                cout<<"..................................................................."<<endl;

                jump(row+8,col+6);
                textColor(5);
                cout<<"      PHONE  ";

                jump(row+8,col+10);
                textColor(5);
                cout<<"     F_NAME   ";

                jump(row+8,col+14);
                textColor(5);
                cout<<"     M_NAME  ";

                jump(row+8,col+18);
                textColor(5);
                cout<<"      NAME   ";

                jump(row+8,col+22);
                textColor(5);
                cout<<"    TEMP_ADDR  ";

                jump(row+8,col+26);
                textColor(5);
                cout<<"      DOB     ";

                jump(row+8,col+30);
                textColor(5);
                cout<<"      BACK   ";

                jump(row+6,col+33);
                textColor(2);
                cout<<"........................:......:..................................";

                for(int a=5;a<33;a++){
                    jump(row+30,col+a);
                    cout<<":";
                }
                for(int a=5;a<33;a++){
                    jump(row+37,col+a);
                    cout<<":";
                }
        }

        void Administratator :: teacherEditOption(char *departmentName , int pos){

                    char fileName[30];
                    strcpy(fileName,departmentName);
                    strcat(fileName,"Teacher.dat");



                    int row=36,col=13;

                    system("cls");

                    editOptionDiagram(departmentName);

                    textColor(7);
                    jump(row,col); cout<<"---------------";
                    jump(row,col+1);cout<<": ";
                    jump(row+14,col+1);cout<<": ";
                    jump(row,col+2);cout<<"---------------";

                    if(col==13){
                           textColor(7);
                            jump(66,15);
                            cout<<"After Pressing on this  ";
                            jump(66,17);
                            cout<<"Button you can Change the";
                            jump(66,19);
                            cout<<"Teachers Phone Number  !";

                    }

                    char ch;

                    while(true){
                            jump(96,32);
                            ch=getch();

                        switch(ch){

                            case 72:
                                if(col<17)
                                    col=41;

                                col-=4;
                            break;

                            case 80:
                                if(col>33)
                                    col=9;

                                col+=4;
                            break;

                            case 13:

                                jump(row,col); cout<<"               ";
                                jump(row,col+1);cout<<"               ";
                                jump(row,col+2);cout<<"               ";
                                textColor(5);
                                jump(row-2,col+1); cout<<"---------------";
                                jump(row-2,col+2);cout<<": "; jump(row+12,col+2);cout<<": ";
                                jump(row-2,col+3);cout<<"---------------";

                                if(col==13){
                                    textColor(6);
                                    jump(row-1,col+2);
                                    cout<<"  PHONE    ";
                                }
                                else if(col==17){
                                    textColor(6);
                                    jump(row-1,col+2);
                                    cout<<"  F_NAME    ";
                                }
                                else if(col==21){
                                    textColor(6);
                                    jump(row-1,col+2);
                                    cout<<"  M_NAME    ";
                                }
                                else if(col==25){
                                    textColor(6);
                                    jump(row-1,col+2);
                                    cout<<"   NAME   ";
                                }
                                else if(col==29){
                                    textColor(6);
                                    jump(row-1,col+2);
                                    cout<<" TEMP_ADDR ";

                                }
                                else if(col==33){
                                    textColor(6);
                                    jump(row-1,col+2);
                                    cout<<"   DOB  ";
                                }
                                else if(col==37){
                                    textColor(6);
                                    jump(row-1,col+2);
                                    cout<<"   BACK ";
                                }

                                jump(96,32);
                                Sleep(300);

                                fstream file(fileName,ios::in | ios::out | ios::ate | ios::binary);
                                Teacher teacherDetail;
                                file.seekg(pos*sizeof(teacherDetail));
                                file.read((char*)&teacherDetail,sizeof(teacherDetail));
                                system("cls");

                                if(col==13){
                                    teacherDetail.changePhone();
                                }
                                else if(col==17){
                                    teacherDetail.changeF_name();
                                }
                                else if(col==21){
                                    teacherDetail.changeM_name();
                                }
                                else if(col==25){
                                    teacherDetail.changeName();
                                }
                                else if(col==29){
                                    teacherDetail.changeTempAddr();
                                }
                                else if(col==33){
                                    teacherDetail.changeDOB();
                                }
                                else if(col==37){
                                    file.close();
                                    return ;

                                }


                                file.seekp(pos*sizeof(teacherDetail));
                                file.write((char *)&teacherDetail,sizeof(teacherDetail));

                                file.close();

                                system("cls");
                                editOptionDiagram(departmentName);

                            break;

                        }

                        jump(66,15);
                        cout<<"                               ";
                        jump(66,17);
                        cout<<"                               ";
                        jump(66,19);
                        cout<<"                               ";

                        if(col==13){
                            textColor(7);
                            jump(66,15);
                            cout<<"After Pressing on this  ";
                            jump(66,17);
                            cout<<"Button you can Change the";
                            jump(66,19);
                            cout<<"Teachers Phone Number  !";

                        }
                        else if(col==17){
                            textColor(7);
                            jump(66,15);
                            cout<<"After Pressing on this Button ";
                            jump(66,17);
                            cout<<"you can change the Teacher's ";
                            jump(66,19);
                            cout<<"Father Name   ";
                        }
                        else if(col==21){
                            textColor(7);
                            jump(66,15);
                            cout<<"After Pressing on this Button ";
                            jump(66,17);
                            cout<<"you can change the Teacher's ";
                            jump(66,19);
                            cout<<"Mother Name   ";
                        }
                        else if(col==25){
                            textColor(7);
                            jump(66,15);
                            cout<<"After Pressing on this Button ";
                            jump(66,17);
                            cout<<"you can change the Teacher's ";
                            jump(66,19);
                            cout<<"Name   ";
                        }
                        else if(col==29){
                            textColor(7);
                            jump(66,15);
                            cout<<"After Pressing on this Button ";
                            jump(66,17);
                            cout<<"you can change the Teacher's ";
                            jump(66,19);
                            cout<<"Temporary Address   ";

                        }
                        else if(col==33){
                            textColor(7);
                            jump(66,15);
                            cout<<"After Pressing on this Button ";
                            jump(66,17);
                            cout<<"you can change the Teacher's ";
                            jump(66,19);
                            cout<<"Date Of Birth ";
                        }
                        else if(col==37){
                            textColor(7);
                            jump(66,15);
                            cout<<"When you will be press on this ";
                            jump(66,17);
                            cout<<"Button it will take you back to";
                            jump(66,19);
                            cout<<"the Teacher Window ";

                        }



                            jump(36,13);cout<<"               ";
                            jump(36,14);cout<<"  "; jump(50,14);cout<<"  ";
                            jump(36,15);cout<<"               ";

                            jump(36,17);cout<<"               ";
                            jump(36,18);cout<<"  "; jump(50,18);cout<<"  ";
                            jump(36,19);cout<<"               ";

                            jump(36,21);cout<<"               ";
                            jump(36,22);cout<<"  "; jump(50,22);cout<<"  ";
                            jump(36,23);cout<<"               ";

                            jump(36,25);cout<<"               ";
                            jump(36,26);cout<<"  "; jump(50,26);cout<<"  ";
                            jump(36,27);cout<<"               ";

                            jump(36,29);cout<<"               ";
                            jump(36,30);cout<<"  "; jump(50,30);cout<<"  ";
                            jump(36,31);cout<<"               ";

                            jump(36,33);cout<<"               ";
                            jump(36,34);cout<<"  "; jump(50,34);cout<<"  ";
                            jump(36,35);cout<<"               ";

                            jump(36,37);cout<<"               ";
                            jump(36,38);cout<<"  "; jump(50,38);cout<<"  ";
                            jump(36,39);cout<<"               ";



                            textColor(7);
                            jump(row,col); cout<<"---------------";
                            jump(row,col+1);cout<<": "; jump(row+14,col+1);cout<<": ";
                            jump(row,col+2);cout<<"---------------";

                    }
        }

        void Administratator :: editTeacher(char *departmentName){

               int pos=t_idConfig(departmentName);

               if(pos>=0){

                teacherEditOption(departmentName,pos);
               }


        }

        void Administratator :: deleteTeacher(char *departmentName){

                int pos=t_idConfig(departmentName);

                if(pos>=0){

                    int Count=-1;
                    char fileName[30];
                    strcpy(fileName,departmentName);
                    strcat(fileName,"Teacher.dat");

                    ifstream file1(fileName,ios::in | ios::binary);

                    ofstream file2("temp.dat",ios::out | ios::app | ios::binary);

                    Teacher teacherDetails;

                    while(true){


                        file1.read((char*)&teacherDetails,sizeof(teacherDetails));
                        Count++;

                        if(!file1)
                            break;

                        if(Count==pos)
                            continue ;
                        file2.write((char*)&teacherDetails,sizeof(teacherDetails));
                    }

                    file1.close();
                    file2.close();

                    remove(fileName);
                    rename("temp.dat",fileName);

                }

        }

        void Administratator :: teacherFullDetails(char *departmentName){

                int pos=t_idConfig(departmentName);

                if(pos>=0){

                    int Count=-1;
                    char fileName[30];
                    strcpy(fileName,departmentName);
                    strcat(fileName,"Teacher.dat");

                    ifstream file(fileName,ios::in | ios::ate | ios::binary);

                    Teacher teacherDetails;
                    file.seekg(pos*sizeof(teacherDetails));

                    file.read((char *)&teacherDetails,sizeof(teacherDetails));

                    file.close();
                    system("cls");
                    jump(30,5);
                    cout<<"-------------------------------------------------------------------------------";
                    jump(30,6);
                    cout<<"|                         Teacher's Full Details Window                       |";
                    jump(30,7);
                    cout<<"-------------------------------------------------------------------------------";
                    for(int a=8;a<36;a++){
                        jump(30,a);
                        cout<<"|                                                                             |";
                    }

                    jump(30,36);
                    cout<<"|_____________________________________________________________________________|";


                    teacherDetails.fullDetails();

                    getch();

                }

        }

        void Administratator :: selectSessionDiagram(){

                 system("cls");
                int row=32,col=5;
                textColor(2);
                jump(row,col++);
                cout<<"------------------------------------------------------------------------------"<<endl;
                jump(row,col++);
                cout<<"|                            ";textColor(4);cout<<"    SELECT SESSION   ";textColor(2);cout<<"                           |";
                jump(row,col++);
                cout<<"------------------------------------------------------------------------------"<<endl;

                for(int a=0;a<21;a++){

                    jump(row,col++);
                    cout<<"|                                                                            |";
                }

                jump(44,9);
                textColor(2);
                cout<<"------------------------------------------------------";
                jump(44,10);
                textColor(2);
                cout<<"| ";textColor(5);cout<<"   Select Session Using Drop - Down ' V ' Button  ";textColor(2);cout<<" |"<<endl;
                jump(44,11);
                textColor(2);
                cout<<"------------------------------------------------------";

                jump(54,13);
                textColor(8);
                cout<<"Press SHIFT + A to Add Session ";

                jump(45,15);
                textColor(7);
                cout<<"------------------    --------   --------   --------";
                jump(45,16);
                cout<<"|";textColor(5);cout<<" CHOOSE SESSION ";textColor(7);cout<<"|    |  ";textColor(5);
                cout<<char(31);textColor(7);cout<<"   |   |";textColor(5);cout<<" NEXT";textColor(7);
                cout<<" |   |";textColor(5);cout<<" BACK ";textColor(7);cout<<"|";
                jump(45,17);
                cout<<"------------------    --------   --------   --------";

                jump(32,28);
                textColor(2);
                cout<<"|____________________________________________________________________________|";


                jump(50,19);
                cout<<"------------------------------------------";
                jump(64,19);
                cout<<" Option Details ";

                row=50,col=20;

                for(int a=0;a<=5;a++){
                    jump(row,col++);
                    cout<<"|                                        |";
                }

                jump(row,col++);
                textColor(2);
                cout<<"|________________________________________|";

        }

        void Administratator :: selectSession(char *departmentName){


                    char sessionName[15]="CHOSS SESSION";
                    int sessionPos;
                    int row=67,col=15;
                    selectSessionDiagram();

                    textColor(4);
                    jump(row,col); cout<<"--------";
                    jump(row,col+1); cout<<"|";
                    jump(row+7,col+1); cout<<"|";
                    jump(row,col+2); cout<<"--------";

                     textColor(3);
                     jump(52,21); cout<<" This is DROP - DOWN Button after";
                     jump(52,23); cout<<" clicking on this button a Drop - Down";
                     jump(52,25); cout<<" menu will be Opened !!!";

                     jump(89,25);
                     textColor(7);
                     cout<<char(219);
                    char ch;

                    while(true){

                        jump(89,25);
                        ch=getch();

                        switch(ch){

                            case 77:
                                if(row>=80)
                                    row=56;

                                row+=11;
                            break;

                            case 75:
                                if(row<76)
                                    row=100;
                                row-=11;
                            break;

                            case 'A':
                                system("cls");
                                createSession(departmentName);
                                break;

                            case 13:

                                jump(row,col);cout<<"          ";
                                textColor(4);
                                jump(row-1,col+1); cout<<"--------  ";
                                jump(row+3,col+2); cout<<"   |  ";
                                jump(row-1,col+3); cout<<"--------  ";

                                if(row==67){

                                    jump(row-1,col+2); cout<<"|  ";textColor(5);cout<<char(31);textColor(4);


                                }
                                else if(row==78){

                                    jump(row-1,col+2); cout<<"| ";textColor(5);cout<<"NEXT "; textColor(4);

                                }
                                else{


                                    jump(row-1,col+2); cout<<"| ";textColor(5);cout<<"BACK "; textColor(4);

                                }

                                jump(89,25);

                                Sleep(300);

                                if(row==67){
                                    char sessionFileName[30];
                                    strcpy(sessionFileName,departmentName);
                                    strcat(sessionFileName,"Session.dat");
                                    ifstream file(sessionFileName,ios::in|ios::ate|ios::binary);

                                    //file.read(sessionName,sizeof(sessionName));

                                    if(!file.eof()){     // producing garbage data still have to think about eof() function
                                        system("cls");
                                        sessionPos=dropDownSession(departmentName);
                                        file.seekg(sessionPos*sizeof(sessionName));
                                        file.read(sessionName,sizeof(sessionName));
                                        file.close();
                                    }else{
                                        textColor(4);
                                        jump(row-3,col); cout<<"   --------";
                                        jump(row-1,col+1); cout<<" |  ";textColor(5);cout<<char(31);textColor(4);cout<<"   |";

                                        jump(row-3,col+2); cout<<"   --------";

                                        jump(48,18);
                                        cout<<"Session Does not Exist Please Create First ";
                                        jump(89,25);
                                        Sleep(2000);
                                        jump(52,18);
                                        cout<<"                                              ";
                                    }
                                }
                                else if(row==78){
                                    system("cls");
                                    if(strcmp("CHOSS SESSION",sessionName)!=0){
                                        sessionNextButton(departmentName,sessionName);
                                    }
                                    else{

                                        jump(42,12);
                                        textColor(5);
                                        cout<<"---------------------------------------------";
                                        jump(42,13);
                                        cout<<"|";textColor(4);cout<<"                WARNING !!!! ";textColor(5);cout<<"              |";
                                        jump(42,14);
                                        cout<<"---------------------------------------------";
                                        jump(42,15);
                                        cout<<"|                                           |";
                                        jump(42,16);
                                        cout<<"|                                           |";
                                        jump(42,17);
                                        cout<<"|   ";textColor(4);cout<<"  Please Choose Session First !!!!  ";textColor(5);cout<<"    |";
                                        jump(42,18);
                                        cout<<"|                                           |";
                                        jump(42,19);
                                        cout<<"|                                           |";
                                        jump(42,20);
                                        cout<<"|___________________________________________|";
                                        Sleep(2000);
                                    }
                                }
                                else if(row==89)
                                    return;

                            break;
                        }

                        selectSessionDiagram();
                        jump(47,16);
                        cout<<"              ";
                        jump(47,16);

                        if(strcmp(sessionName,"CHOSS SESSION")){
                            textColor(2);
                        }
                        cout<<sessionName;

                        textColor(4);
                        jump(row,col); cout<<"--------";
                        jump(row,col+1); cout<<"|";
                        jump(row+7,col+1); cout<<"|";
                        jump(row,col+2); cout<<"--------";

                        jump(89,25);
                        textColor(7);
                        cout<<char(219);

                        if(row==67){
                            textColor(3);
                            jump(52,21); cout<<" This is DROP - DOWN Button after";
                            jump(52,23); cout<<" clicking on this button a Drop - Down";
                            jump(52,25); cout<<" menu will be Opened !!!";

                        }else if(row==78){
                            textColor(3);
                            jump(52,21); cout<<" Click on this Button After slecting";
                            jump(52,23); cout<<" the Session the selcted  ";
                            jump(52,25); cout<<" Session will be opened !!! ";

                        }else{

                            textColor(3);
                            jump(52,22); cout<<" This button will take you to ";
                            jump(52,24); cout<<" The SELECT SESSION Window !! ";
                        }
                    }

        }

        void Administratator :: createSession(char *departmentName){

            repeat:
                int row=42,col=5;
                jump(row,col++);
                textColor(3);
                cout<<"----------------------------------------------------------";
                jump(row,col++);
                cout<<":";textColor(7);cout<<"          Welcome To Create Session Window           ";textColor(3);cout<<"   :";
                jump(row,col++);
                cout<<"----------------------------------------------------------";

                for(short int a=0; a<15; a++){

                    jump(row,col+a);
                    cout<<"|                                                        | ";

                }

                jump(row,col+15);
                cout<<"|________________________________________________________|";
                row=50;
                col=9;
                jump(row,col++);
                textColor(5);
                cout<<"----------------------------------------";
                jump(row,col++);
                cout<<":";textColor(7);cout<<" Enter Session Name :-                ";textColor(5);cout<<":";
                jump(row,col++);
                cout<<"----------------------------------------";
                col+=4;
                jump(row+=6,col++);
                cout<<":-------------------------:";
                jump(row,col++);
                cout<<"| ";textColor(8);cout<<"If you want to Exit     ";textColor(5);cout<<"|";
                jump(row,col++);
                cout<<"| ";textColor(8);cout<<"this screen then Enter  ";textColor(5);cout<<"|";
                jump(row,col++);
                cout<<"| ";textColor(8);cout<<"The Escap Button Which  ";textColor(5);cout<<"|";
                jump(row,col++);
                cout<<"| ";textColor(8);cout<<"will take you to the    ";textColor(5);cout<<"|";
                jump(row,col++);
                cout<<"| ";textColor(8);cout<<"Previous window  !!!    ";textColor(5);cout<<"|";
                jump(row,col++);
                cout<<":_________________________:";

                row=74; col=10;
                char ch; int index=0;
                char session[15];

                while(true){

                    jump(row,col);
                    cout<<" ";
                    jump(row,col);
                    textColor(2);
                    ch=getch();

                    if(index>=9)
                        break;

                    if(isalpha(ch)){


                        jump(45,13);
                        textColor(4);
                        cout<<"Please Enter Digit only  \" Like : 2018 - 21 \" !! ";
                        Sleep(1000);
                        jump(45,13);
                        cout<<"                                                   ";
                    }
                    else if(ch==8){

                        jump(row-1,col);
                        putchar(' ');
                        row--;
                        session[index--]='\0';

                    }
                    else if(ch==27){
                        return ;
                    }
                    else{
                        if(ch==13){

                            break;
                        }

                        if(!isalpha(ch)){
                           if(islower(ch))
                             ch=toupper(ch);

                           if(ch==8){

                                row-=2;
                                jump(row,col);
                                putchar(' ');
                           }
                           else{
                                jump(row,col);
                                putchar(ch);
                                row++;
                                session[index++]=ch;
                           }
                        }

                   }

                }

                session[index]=NULL;

                if(createSessionConfig(departmentName,session)){
                    char depSession[30];                  //  Make it work for Session
                    strcpy(depSession,departmentName);
                    strcat(depSession,"Session.dat");

                    ofstream fileIn(depSession,ios::app | ios::binary);

                    fileIn.write(session,sizeof(session));

                    fileIn.close();

                    char studentdetails[40];
                    char studentmarks[40];

                    strcpy(studentdetails,departmentName);
                    strcpy(studentmarks,departmentName);

                    strcat(studentdetails,session);
                    strcat(studentmarks,session);


                    strcat(studentdetails,"St_Details.dat");
                    strcat(studentmarks,"St_Marks.dat");

                    fileIn.open(studentdetails,ios::out | ios::binary);
                    fileIn.close();
                    fileIn.open(studentmarks,ios::out | ios::binary);
                    fileIn.close();

                        jump(55,13);
                        cout<<" Saved Successfully \x3";
                        jump(74+strlen(session),10);
                        Sleep(1000);

                }
                else
                    goto repeat;

        }

        void Administratator :: createSessionConfigDiagram(){


                 system("cls");

                int row=42,col=5;
                textColor(2);
                jump(row,col++);
                cout<<"------------------------------------------------";
                jump(row,col++);
                cout<<"|           ";textColor(6);cout<<"  CONFORMATION WINDOW             ";textColor(2);cout<<" |";
                jump(row,col++);
                cout<<"------------------------------------------------";
                jump(row,col++);
                cout<<"|                                              |";
                jump(row,col++);
                cout<<"|     ";textColor(5);cout<<"-----------------------------------";textColor(2);cout<<"      |";
                jump(row,col++);
                cout<<"|     ";textColor(5);cout<<": New Session Name =              :";textColor(2);cout<<"      |";
                jump(row,col++); textColor(2);
                cout<<"|     ";textColor(5);cout<<"-----------------------------------";textColor(2);cout<<"      |";
                jump(row,col++);
                cout<<"|                                              |";
                jump(row,col++);
                cout<<"|                                              |";
                jump(row,col++);
                cout<<"|                                              |";
                jump(row,col++);
                cout<<"|                                              |";
                jump(row,col++);
                cout<<"|      ------------          ------------      |";
                jump(row,col++);
                cout<<"|      :   SAVE   :          : Re-Enter :      |";
                jump(row,col++);
                cout<<"|      ------------          ------------      |";
                jump(row,col++);
                cout<<"|                                              |";
                jump(row,col++);
                cout<<"|______________________________________________|";


        }

        bool Administratator :: createSessionConfig(char *sessionFile,char *session){


                int row=49,col=16; char ch;
                createSessionConfigDiagram();
                jump(70,10);
                cout<<session;

                textColor(4);
                jump(row,col);
                cout<<"------------";
                jump(row,col+1);
                cout<<":";jump(row+11,col+1);cout<<":";
                jump(row,col+2);
                cout<<"------------";

                while(true){
                        jump(74+strlen(session),10);
                        ch=getch();

                        switch(ch){

                            case 75:
                                if(row<=49)
                                    row=93;
                                row=row-22;
                            break;

                            case 77:
                                if(row>=71)
                                    row=27;
                                row=row+22;
                            break;

                            case 27:
                                return false;
                            break;

                            case 13:

                                {

                                    textColor(5);
                                    jump(row,col);
                                    cout<<"              ";
                                    jump(row-2,col+1);
                                    cout<<"------------  ";
                                    jump(row-2,col+3);
                                    cout<<"------------";

                                    if(row==49){
                                        jump(row-2,col+2);
                                        cout<<":";textColor(7);cout<<"  SAVE    ";textColor(5);cout<<":  ";

                                    }
                                    else if(row==71){
                                        jump(row-2,col+2);
                                        cout<<":";textColor(7);cout<<" Re-Enter ";textColor(5);cout<<":  ";
                                    }
                                }

                                Sleep(300);

                                {

                                    textColor(2);

                                    jump(row-2,col);
                                    cout<<"  ------------";
                                    jump(row-2,col+1);
                                    cout<<"  :  SAVE    :";
                                    jump(row-2,col+2);
                                    cout<<"  ------------";
                                    jump(row-2,col+3);
                                    cout<<"              ";

                                }


                                {

                                    if(row==49){
                                        char sessionName[15];

                                        char sessionFileName[30];
                                        strcpy(sessionFileName,sessionFile);
                                        strcat(sessionFileName,"Session.dat");

                                        ifstream file(sessionFileName,ios::in | ios::binary);

                                        file.read(sessionName,sizeof(sessionName));

                                        while(file){
                                            if(strcmp(sessionName,session)==0){

                                                jump(53,13);
                                                textColor(4);
                                                cout<<"Session Already Exist !! ";
                                                Sleep(2000);
                                                file.close();
                                                return false;
                                            }
                                            file.read(sessionName,sizeof(sessionName));
                                        }
                                        file.close();
                                        return true;
                                    }else
                                        return false;
                                }
                        }

                        createSessionConfigDiagram();

                        jump(73,10);
                        cout<<session;

                        textColor(4);
                        jump(row,col);
                        cout<<"------------";
                        jump(row,col+1);
                        cout<<":";jump(row+11,col+1);cout<<":";
                        jump(row,col+2);
                        cout<<"------------";
                }


        }

        int Administratator :: dropDownSessionDiagram(char *sessionFileName){


                ifstream file(sessionFileName,ios::in|ios::binary);

                char session[15];

                int sessionCount=0;

                system("cls");
                int row=30,col=5;
                textColor(2);
                jump(row,col++);
                cout<<"------------------------------------------------------------------------------"<<endl;
                jump(row,col++);
                cout<<"|                            ";textColor(4);cout<<"  SELECT SESSION     ";textColor(2);cout<<"                           |";
                jump(row,col++);
                cout<<"------------------------------------------------------------------------------"<<endl;

                for(int a=0;a<10;a++){

                    jump(row,col++);
                    cout<<"|                                                                            |";
                }

                jump(44,9);
                textColor(2);
                cout<<"------------------------------------------------------";
                jump(44,10);
                textColor(2);
                cout<<"| ";textColor(5);cout<<"  Select Session Using Drop - Down ' V ' Button   ";textColor(2);cout<<" |"<<endl;
                jump(44,11);
                textColor(2);
                cout<<"------------------------------------------------------";

                jump(54,13);
                textColor(8);
                cout<<"Press SHIFT + A to Add Session ";

                jump(45,15);
                textColor(7);
                cout<<"------------------    --------   --------   --------";
                jump(45,16);
                cout<<"|";textColor(5);cout<<" CHOOSE SESSION ";textColor(7);cout<<"|    |  ";textColor(5);
                cout<<char(31);textColor(7);cout<<"   |   |";textColor(5);cout<<" NEXT";textColor(7);
                cout<<" |   |";textColor(5);cout<<" BACK ";textColor(7);cout<<"|";
                jump(45,17);
                cout<<"------------------    --------   --------   --------";


                file.read(session,sizeof(session));
                while(file){
                        sessionCount+=1;
                        jump(row,col);
                        textColor(2);
                        cout<<"|                                                                            |";
                        jump(row+15,col++);
                        textColor(7);
                        cout<<"| "<<left<<setw(15)<<session<<"|";
                        jump(row,col);
                        textColor(2);
                        cout<<"|                                                                            |";
                        jump(row+15,col++);
                        textColor(7);
                        cout<<"------------------";
                        file.read(session,sizeof(session));
                }

                file.close();
                jump(row,col++);
                textColor(2);
                cout<<"|____________________________________________________________________________|";

                return sessionCount;
        }

        int Administratator :: dropDownSession(char *departmentName){

                char sessionFileName[30];
                strcpy(sessionFileName,departmentName);
                strcat(sessionFileName,"Session.dat");

                int row=47,col=17;

                int len=dropDownSessionDiagram(sessionFileName);

                ifstream file(sessionFileName,ios::in|ios::ate|ios::binary);

                char session[15];
                int sessionPossition;
                char ch;

                sessionPossition=(col-17)/2;
                file.seekg(sessionPossition*sizeof(session));
                file.read(session,sizeof(session));

                jump(47,16);
                textColor(2);
                cout<<left<<setw(15)<<session;


                jump(row+10,col+1);
                textColor(6);
                cout<<"\x3";

                while(true){
                    jump(60,16);
                    ch=getch();


                    switch(ch){

                        case 72:
                            if(col==17)
                                col=17+len*2;
                            col-=2;

                        break;

                        case 80:
                            if(col==15+len*2)
                                col=15;
                            col+=2;
                        break;

                        case 13:
                            file.close();
                            return (col-17)/2;
                           break;


                    }

                    if(col>17){
                        jump(row+10,col-1);
                        cout<<"  ";

                        jump(row+10,col+1);
                        textColor(6);
                        cout<<"\x3";

                        jump(row+10,col+3);
                        cout<<"  ";
                    }
                    else{
                        jump(row+10,col+1);
                        textColor(6);
                        cout<<"\x3";
                    }

                    sessionPossition=(col-17)/2;
                    file.seekg(sessionPossition*sizeof(session));
                    file.read(session,sizeof(session));

                    jump(47,16);
                    textColor(2);
                    cout<<left<<setw(15)<<session;

                    if(col==15+len*2){
                        jump(row+10,18+len*2);
                        textColor(2);
                        cout<<"__";
                    }

                    if(col==17){
                        jump(row+10,(15+len*2)+1);
                        cout<<"  ";
                    }else if(col== 17+len*2){

                        jump(row+10,17);
                        cout<<"  ";
                    }



                }

        }

        void Administratator :: sessionNextButtonDiagram(char *depName,char *session){

                int row=26,col=8;
                int r=26,c=6;
                textColor(2);
                jump(r,c);
                cout<<"------------------------------------------------------------------------------"<<endl;;
                jump(r,c+1);
                cout<<"|                        ";textColor(4);cout<<right<<setw(10)<<depName<<" STUDENT "<<left<<setw(8)<<session<<"                        ";textColor(2);cout<<" |";

                jump(r,c+2);
                cout<<"------------------------------------------------------------------------------"<<endl;

                for(int a=3;a<25;a++){
                    jump(r,c+a);
                    cout<<"|                                                                            |"<<endl;
                }

                jump(r,c+25);
                cout<<"|____________________________________________________________________________|"<<endl;

                jump(row+5,col+2);
                cout<<"...................................................................."<<endl;

                for(int a = 3; a<23; a++){
                    jump(row+5,col+a);
                    cout<<".                                                                  ."<<endl;
                }

                jump(row+8,col+3);textColor(5);
                cout<<"      CHOOSE OPTION        ";textColor(2);cout<<"  : ";textColor(5);cout<<"          ABOUT OPTION ";

                jump(row+6,col+4);textColor(2);
                cout<<"..................................................................."<<endl;

                jump(row+6,col+8);
                textColor(5);
                cout<<"        DETAILS ";

                jump(row+6,col+13);
                textColor(5);
                cout<<"         MARKS   ";

                jump(row+6,col+18);
                textColor(5);
                cout<<"         BACK ";

                jump(row+6,col+22);
                textColor(2);
                cout<<"........................:......:..................................";

                for(int a=5;a<23;a++){
                    jump(row+30,col+a);
                    cout<<":";
                }
                for(int a=5;a<23;a++){
                    jump(row+37,col+a);
                    cout<<":";
                }

        }

        void Administratator :: sessionNextButton(char *depName,char *session){

                    int row=36,col=14;
                    system("cls");
                    sessionNextButtonDiagram(depName,session);
                    textColor(7);
                    jump(row,col);  cout<<"................";
                    jump(row,col+1);cout<<":";jump(row+15,col+1);cout<<":";
                    jump(row,col+2);cout<<":";jump(row+15,col+2);cout<<":";
                    jump(row,col+3);cout<<":";jump(row+15,col+3);cout<<":";
                    jump(row,col+4);cout<<":..............:";

                    jump(66,15);
                    cout<<"After Pressing on this Student ";
                    jump(66,17);
                    cout<<"Button you can see or add the ";
                    jump(66,19);
                    cout<<"Details of the Stuedent of ";
                    jump(66,21);
                    textColor(3);cout<<left<<setw(8)<<depName;cout<<" Session "<<left<<setw(8)<<session;textColor(7);

                    char ch;

                    while(true){
                        jump(96,28);
                        ch=getch();

                        switch(ch){

                             case 80:
                                 if(col>19)
                                    col=9;

                                 col+=5;

                            break;

                            case 72:
                                if(col<19)
                                    col=29;

                                col-=5;
                            break;

                            case 13:
                                {

                                    jump(row,col);  cout<<"                ";
                                    jump(row,col+1);cout<<"                ";
                                    jump(row,col+2);cout<<"                ";
                                    jump(row,col+3);cout<<"                ";
                                    jump(row,col+4);cout<<"                ";
                                    textColor(2);
                                    jump(row-2,col+1);cout<<"................";
                                    jump(row-2,col+2);cout<<":";jump(row+15-2,col+2);cout<<":";
                                    jump(row-2,col+2);cout<<":              :";
                                    jump(row-2,col+4);cout<<":";jump(row+15-2,col+4);cout<<":";
                                    jump(row-2,col+5);cout<<":..............:";

                                    if(col==14){
                                        jump(row-2,col+3);cout<<": ";textColor(6);cout<<"  DETAILS   ";textColor(2);cout<<" :";
                                    }
                                    else if(col==19){
                                        jump(row-2,col+3);cout<<": ";textColor(6);cout<<"  MARKS    ";textColor(2);cout<<" :";
                                    }
                                    else if(col==24){
                                        jump(row-2,col+3);cout<<": ";textColor(6);cout<<"    BACK    ";textColor(2);cout<<" :";
                                    }
                                    Sleep(300);

                                    jump(row-2,col+1);cout<<"                ";
                                    jump(row-2,col+2);cout<<" ";jump(row+15-2,col+2);cout<<" ";
                                    jump(row-2,col+2);cout<<"                ";
                                    jump(row-2,col+4);cout<<" ";jump(row+15-2,col+4);cout<<" ";
                                    jump(row-2,col+5);cout<<"                ";

                                    if(col==14){
                                        jump(row-2,col+3);cout<<"  ";textColor(6);cout<<"            ";textColor(2);cout<<"  ";
                                        jump(row,col+2);cout<<"   ";textColor(5);cout<<" DETAILS   ";textColor(2);cout<<"  ";
                                    }
                                    else if(col==19){
                                        jump(row-2,col+3);cout<<"  ";textColor(6);cout<<"            ";textColor(2);cout<<"  ";
                                        jump(row,col+2);cout<<"   ";textColor(5);cout<<"  MARKS     ";textColor(2);cout<<"  ";
                                    }
                                    else if(col==24){
                                        jump(row-2,col+3);cout<<"  ";textColor(6);cout<<"            ";textColor(2);cout<<"  ";
                                        jump(row,col+2);cout<<"   ";textColor(5);cout<<"  BACK    ";textColor(2);cout<<"  ";
                                    }


                                }


                                if(col==14){                                         // Student Details Button
                                    sessionStudentDetailsWindow(depName,session);
                                    system("cls");
                                    sessionNextButtonDiagram(depName,session);
                                }
                                else if(col==19){
                                    system("cls");
                                    cout<<"THis is Students Marks Button "<<endl;
                                    cout<<"This Button is not completed yet "<<endl;
                                    cout<<"Sorry !!!!!!!!!!!!!!";
                                    Sleep(100);
                                    system("cls");
                                    sessionNextButtonDiagram(depName,session);       // Marks Button
                                    //return ;
                                }
                                else if(col==24)
                                    return ;

                            break;
                        }
                           jump(66,15);
                            cout<<"                               ";
                            jump(66,17);
                            cout<<"                               ";
                            jump(66,19);
                            cout<<"                               ";
                            jump(66,21);
                            cout<<"                               ";
                            jump(66,23);
                            cout<<"                               ";
                            jump(66,25);
                            cout<<"                               ";

                      if(col==14){
                            textColor(7);
                            jump(66,15);
                            cout<<"After Pressing on this Student ";
                            jump(66,17);
                            cout<<"Button you can see or add the ";
                            jump(66,19);
                            cout<<"Details of the Stuedent of ";
                            jump(66,21);
                            textColor(3);cout<<left<<setw(8)<<depName;cout<<" Session "<<left<<setw(8)<<session;textColor(7);

                      }
                      else if(col==19){

                            jump(66,15);
                            cout<<"After Pressing on this Button ";
                            jump(66,17);
                            cout<<"you can see or add the Marks of";
                            jump(66,19);
                            cout<<"all the Student's of ";textColor(3);cout<<left<<setw(8)<<depName;
                            jump(66,21);
                            cout<<"Session "<<left<<setw(8)<<session;textColor(7);cout<<" by There Roll";
                            jump(66,23);
                            cout<<"and Registration Number ";

                      }
                      else{
                            jump(66,15);
                            cout<<"After Pressing on this Back    ";
                            jump(66,17);
                            cout<<"Button you will be go back to  ";
                            jump(66,19);
                            cout<<"Select Department Window      ";
                      }

                     jump(row,14);  cout<<"                ";
                     jump(row,15);cout<<" ";jump(row+15,15);cout<<" ";
                     jump(row,16);cout<<" ";jump(row+15,16);cout<<" ";
                     jump(row,17);cout<<" ";jump(row+15,17);cout<<" ";
                     jump(row,18);cout<<"                ";

                     jump(row,19);  cout<<"                ";
                     jump(row,20);cout<<" ";jump(row+15,20);cout<<" ";
                     jump(row,21);cout<<" ";jump(row+15,21);cout<<" ";
                     jump(row,22);cout<<" ";jump(row+15,22);cout<<" ";
                     jump(row,23);cout<<"                ";

                     jump(row,24);  cout<<"                ";
                     jump(row,25);cout<<" ";jump(row+15,25);cout<<" ";
                     jump(row,26);cout<<" ";jump(row+15,26);cout<<" ";
                     jump(row,27);cout<<" ";jump(row+15,27);cout<<" ";
                     jump(row,28);cout<<"                ";

                     textColor(7);
                     jump(row,col);  cout<<"................";
                     jump(row,col+1);cout<<":";jump(row+15,col+1);cout<<":";
                     jump(row,col+2);cout<<":";jump(row+15,col+2);cout<<":";
                     jump(row,col+3);cout<<":";jump(row+15,col+3);cout<<":";
                     jump(row,col+4);cout<<":..............:";

                    }

        }

        void Administratator :: sessionStudentDetailsWindowDiagram(char *departmentName,char *session){

                int row=26,col=8;
                int r=26,c=6;
                textColor(2);
                jump(r,c);
                cout<<"------------------------------------------------------------------------------"<<endl;;
                jump(r,c+1);
                cout<<"|                        ";textColor(4);cout<<right<<setw(10)<<departmentName<<" STUDENT "<<left<<setw(8)<<session<<"                        ";textColor(2);cout<<" |";
                jump(r,c+2);
                cout<<"------------------------------------------------------------------------------"<<endl;

                for(int a=3;a<32;a++){
                    jump(r,c+a);
                    cout<<"|                                                                            |"<<endl;
                }

                jump(r,c+32);
                cout<<"|____________________________________________________________________________|"<<endl;

                jump(row+5,col+2);
                cout<<"...................................................................."<<endl;

                for(int a = 3; a<30; a++){
                    jump(row+5,col+a);
                    cout<<".                                                                  ."<<endl;
                }

                jump(row+8,col+3);textColor(5);
                cout<<"      CHOOSE OPTION        ";textColor(2);cout<<"  : ";textColor(5);cout<<"          ABOUT OPTION ";

                jump(row+6,col+4);textColor(2);
                cout<<"..................................................................."<<endl;

                jump(row+8,col+6);
                textColor(5);
                cout<<"       ADD   ";

                jump(row+8,col+10);
                textColor(5);
                cout<<"       VIEW   ";

                jump(row+8,col+14);
                textColor(5);
                cout<<"       EDIT  ";

                jump(row+8,col+18);
                textColor(5);
                cout<<"      DELETE ";

                jump(row+8,col+22);
                textColor(5);
                cout<<"     VIEW FULL ";

                jump(row+8,col+26);
                textColor(5);
                cout<<"       BACK  ";

                jump(row+6,col+29);
                textColor(2);
                cout<<"........................:......:..................................";

                for(int a=5;a<30;a++){
                    jump(row+30,col+a);
                    cout<<":";
                }
                for(int a=5;a<30;a++){
                    jump(row+37,col+a);
                    cout<<":";
                }
        }

        void Administratator :: sessionStudentDetailsWindow(char *departmentName,char *session){

                    int row=36,col=13;

                    system("cls");

                    sessionStudentDetailsWindowDiagram(departmentName,session);

                    textColor(7);
                    jump(row,col); cout<<"---------------";
                    jump(row,col+1);cout<<": ";
                    jump(row+14,col+1);cout<<": ";
                    jump(row,col+2);cout<<"---------------";

                    if(col==13){
                            textColor(7);
                            jump(66,15);
                            cout<<"After Pressing on this view    ";
                            jump(66,17);
                            cout<<"Button you can see the short   ";
                            jump(66,19);
                            cout<<"Details of All the Students ";
                            jump(66,21);

                    }

                    char ch;

                    while(true){
                            jump(96,32);
                            ch=getch();

                        switch(ch){

                            case 72:
                                if(col<17)
                                    col=37;

                                col-=4;
                            break;

                            case 80:
                                if(col>29)
                                    col=9;

                                col+=4;
                            break;

                            case 13:

                                jump(row,col); cout<<"               ";
                                jump(row,col+1);cout<<"               ";
                                jump(row,col+2);cout<<"               ";
                                textColor(5);
                                jump(row-2,col+1); cout<<"---------------";
                                jump(row-2,col+2);cout<<": "; jump(row+12,col+2);cout<<": ";
                                jump(row-2,col+3);cout<<"---------------";

                                if(col==13){
                                    textColor(6);
                                    jump(row-1,col+2);
                                    cout<<"    ADD     ";
                                }
                                else if(col==17){
                                    textColor(6);
                                    jump(row-1,col+2);
                                    cout<<"    VIEW    ";
                                }
                                else if(col==21){
                                    textColor(6);
                                    jump(row-1,col+2);
                                    cout<<"    EDIT    ";
                                }
                                else if(col==25){
                                    textColor(6);
                                    jump(row-1,col+2);
                                    cout<<"   DELETE   ";
                                }
                                else if(col==29){
                                    textColor(6);
                                    jump(row-1,col+2);
                                    cout<<"  VIEW FULL ";

                                }
                                else if(col==33){
                                    textColor(6);
                                    jump(row-1,col+2);
                                    cout<<"    BACK    ";
                                }

                                jump(96,32);
                                Sleep(300);


                                if(col==13){
                                    system("cls");
                                    addStudent(departmentName,session);
                                    system("cls");
                                    sessionStudentDetailsWindowDiagram(departmentName,session);
                                }
                                else if(col==17){
                                    system("cls");
                                    showStudentShortDetails(departmentName,session);
                                    system("cls");
                                    sessionStudentDetailsWindowDiagram(departmentName,session);
                                }
                                else if(col==21){
                                    system("cls");
                                    editStudent(departmentName,session);
                                    system("cls");
                                    sessionStudentDetailsWindowDiagram(departmentName,session);
                                }
                                else if(col==25){
                                    system("cls");
                                    deleteStudent(departmentName,session);
                                    system("cls");
                                    sessionStudentDetailsWindowDiagram(departmentName,session);
                                }
                                else if(col==29){
                                    system("cls");
                                    studentFullDetails(departmentName,session);
                                    system("cls");
                                    sessionStudentDetailsWindowDiagram(departmentName,session);
                                }
                                else if(col==33){

                                       return ;
                                }

                            break;

                        }

                        jump(66,15);
                        cout<<"                               ";
                        jump(66,17);
                        cout<<"                               ";
                        jump(66,19);
                        cout<<"                               ";
                        jump(66,21);
                        cout<<"                               ";
                        jump(66,23);
                        cout<<"                               ";
                        jump(66,25);
                        cout<<"                               ";
                        jump(66,27);
                        cout<<"                               ";
                        jump(66,29);
                        cout<<"                               ";
                        if(col==13){
                            textColor(7);
                            jump(66,15);
                            cout<<"After Pressing on this Add ";
                            jump(66,17);
                            cout<<"Button you can add a new ";
                            jump(66,19);
                            cout<<"Students Detail Who have ";
                            jump(66,21);
                            cout<<"Joined recently ";
                        }
                        else if(col==17){
                            textColor(7);
                            jump(66,15);
                            cout<<"After Pressing on this view    ";
                            jump(66,17);
                            cout<<"Button you can see the short   ";
                            jump(66,19);
                            cout<<"Details of All the Students ";
                            jump(66,21);

                        }
                        else if(col==21){
                            textColor(7);
                            jump(66,15);
                            cout<<"As it's name suggests it allows ";
                            jump(66,17);
                            cout<<"you to edit Student's Details ";
                            jump(66,19);
                            cout<<"All you have to do is just ";
                            jump(66,21);
                            cout<<"put the \" ID \" of the Student ";
                            jump(66,23);
                            cout<<"Whose details you want to edit ";
                            jump(66,25);
                            cout<<"it will offer you a \" DROE - ";
                            jump(66,27);
                            cout<<"DOWN Window \" Where you have  ";
                            jump(66,29);
                            cout<<"to choose What to edit ";
                        }
                        else if(col==25){
                            textColor(7);
                            jump(66,15);
                            cout<<"As it's name suggests it allows ";
                            jump(66,17);
                            cout<<"you to Delete Student's Details ";
                            jump(66,19);
                            cout<<"All you have to do is just ";
                            jump(66,21);
                            cout<<"put the \" ID \" of the Student ";
                            jump(66,23);
                            cout<<"Whose details you want to ";
                            jump(66,25);
                            cout<<"Delete ";
                        }
                        else if(col==29){
                            textColor(7);
                            jump(66,15);
                            cout<<"This Button Shows the Full ";
                            jump(66,17);
                            cout<<"Details of an individual  ";
                            jump(66,19);
                            cout<<"All you have to do is just ";
                            jump(66,21);
                            cout<<"put his \" ID \" and it will ";
                            jump(66,23);
                            cout<<"show you his full Details  ";
                            jump(66,25);
                            cout<<"in a new window ";

                        }
                        else if(col==33){
                            textColor(7);
                            jump(66,15);
                            cout<<"When you will be press on this ";
                            jump(66,17);
                            cout<<"Button it will take you back to";
                            jump(66,19);
                            cout<<"the select department ";
                        }



                            jump(36,13);cout<<"               ";
                            jump(36,14);cout<<"  "; jump(50,14);cout<<"  ";
                            jump(36,15);cout<<"               ";

                            jump(36,17);cout<<"               ";
                            jump(36,18);cout<<"  "; jump(50,18);cout<<"  ";
                            jump(36,19);cout<<"               ";

                            jump(36,21);cout<<"               ";
                            jump(36,22);cout<<"  "; jump(50,22);cout<<"  ";
                            jump(36,23);cout<<"               ";

                            jump(36,25);cout<<"               ";
                            jump(36,26);cout<<"  "; jump(50,26);cout<<"  ";
                            jump(36,27);cout<<"               ";

                            jump(36,29);cout<<"               ";
                            jump(36,30);cout<<"  "; jump(50,30);cout<<"  ";
                            jump(36,31);cout<<"               ";

                            jump(36,33);cout<<"               ";
                            jump(36,34);cout<<"  "; jump(50,34);cout<<"  ";
                            jump(36,35);cout<<"               ";


                            textColor(7);
                            jump(row,col); cout<<"---------------";
                            jump(row,col+1);cout<<": "; jump(row+14,col+1);cout<<": ";
                            jump(row,col+2);cout<<"---------------";

                    }

        }

        void Administratator :: addStudent(char *departmentName,char *session){

                    char fileName[40];
                    strcpy(fileName,departmentName);
                    strcat(fileName,session);
                    strcat(fileName,"St_Details.dat");

                 repeat:

                    ofstream file(fileName,ios::app | ios::binary);

                    if(!file)
                        assert(false);

                    Student stDetails;

                    if(stDetails.input(departmentName,session)){

                        if(!configSave()){
                            file.close();
                            goto repeat;
                        }

                        file.write((char *)&stDetails,sizeof(Student));

                        file.close();

                    }
                    else {
                        file.close();
                    }

        }

        void Administratator :: showStudentShortDetails(char *departmentName,char *session){
                     int row=10,col=5;

                    char fileName[40];
                    strcpy(fileName,departmentName);
                    strcat(fileName,session);
                    strcat(fileName,"St_Details.dat");

                    Student studentDetails;

                    ifstream file(fileName,ios::in | ios::binary);
                    file.read((char *)&studentDetails,sizeof(studentDetails));

                    if(file.eof()){     //Checking File is Empty or not

                        system("cls");
                        textColor(4);
                        jump(30,5);
                        cout<<"---------------------------------------------------------------------------------";
                        jump(30,6);
                        cout<<"|                                 Warning !!!                                   |";
                        jump(30,7);
                        cout<<"---------------------------------------------------------------------------------";
                        jump(30,8);
                        cout<<"|                                                                               |";
                        jump(30,9);
                        cout<<"|                                                                               |";
                        jump(30,10);
                        cout<<"|            DataBase is Empty Please insert Some Data First                    |";
                        jump(30,11);
                        cout<<"|                                                                               |";
                        jump(30,12);
                        cout<<"|                                                                               |";
                        jump(30,13);
                        cout<<"|_______________________________________________________________________________|";
                        file.close();
                        Sleep(1500);

                        return ;
                    }
                    else {

                        textColor(2);
                        jump(row,col);
                        cout<<"------------------------------------------------------------------------------------------------------------------";
                        jump(row,col+1);
                        cout<<"|                                    ";textColor(4);cout<<"         Teacher's Short Details       ";textColor(2);cout<<"                                     |";
                        jump(row,col+2);
                        cout<<"------------------------------------------------------------------------------------------------------------------";

                        for(int a=3;a<10;a++){
                            jump(row,col+a);
                            cout<<"|                                                                                                                |";

                        }

                        row=17;col=10;
                        textColor(5);
                        jump(row,col++);
                        cout<<"-------------------------------------------------------------------------------------------------"<<endl;
                        jump(row,col++);
                        textColor(4);
                        cout<<left<<setw(17)<<" Uni_Roll "<<setw(17)<<" Reg_Number "<<setw(10)<<" Roll "<<setw(30)<<" Student Name   "<<setw(15)<<" Phone "<<endl;
                        jump(row,col++);
                        textColor(5);
                        cout<<"-------------------------------------------------------------------------------------------------"<<endl;

                        while(file){
                            studentDetails.shortDetails(row,col);
                            col+=2;
                             file.read((char *)&studentDetails,sizeof(studentDetails));
                        }

                        file.close();

                        textColor(2);
                        jump(10,col);
                        cout<<"|                                                                                                                |";
                        jump(10,col+1);
                        cout<<"|                                                                                                                |";

                        jump(row-7,col+2);
                        cout<<"|________________________________________________________________________________________________________________|";



                        jump(row,col+4);
                        cout<<">>>>>>>>>>>  Press Any Key  >>>>>>>>>>>>> ";
                        getch();
                    }

        }

        int Administratator :: st_idConfig(char *departmentName,char *session){
                int row=10,col=5;

                char U_roll[20];
                char Reg[20];
                char Roll[10];

                char fileName[40];
                strcpy(fileName,departmentName);
                strcat(fileName,session);
                strcat(fileName,"St_Details.dat");

        repeat:
                Student studentDetails;

                 ifstream file(fileName,ios::in | ios::binary);
                 file.read((char *)&studentDetails,sizeof(studentDetails));

                 if(file.eof()){     //Checking File is Empty or not

                        system("cls");
                        textColor(4);
                        jump(30,5);
                        cout<<"---------------------------------------------------------------------------------";
                        jump(30,6);
                        cout<<"|                                 Warning !!!                                   |";
                        jump(30,7);
                        cout<<"---------------------------------------------------------------------------------";
                        jump(30,8);
                        cout<<"|                                                                               |";
                        jump(30,9);
                        cout<<"|                                                                               |";
                        jump(30,10);
                        cout<<"|            DataBase is Empty Please insert Some Data First                    |";
                        jump(30,11);
                        cout<<"|                                                                               |";
                        jump(30,12);
                        cout<<"|                                                                               |";
                        jump(30,13);
                        cout<<"|_______________________________________________________________________________|";
                        file.close();
                        Sleep(1500);

                        return -1;
                }
                else {

                        system("cls");
                        textColor(6);
                        jump(30,5);
                        cout<<"---------------------------------------------------------------------------------";
                        jump(30,6);
                        cout<<"|                     Student Id Configration Window                            |";
                        jump(30,7);
                        cout<<"---------------------------------------------------------------------------------";
                        jump(30,8);
                        cout<<"|                                                                               |";
                        jump(30,9);
                        cout<<"|         ";textColor(2);cout<<"  ----------------------------------------------------   ";textColor(6);cout<<"             |";
                        jump(30,10);
                        cout<<"|          ";textColor(2);cout<<" | Enter Reg_Num :-                                 |   ";textColor(6);cout<<"             |";


                        jump(30,11);
                        cout<<"|          ";textColor(2);cout<<" ----------------------------------------------------   ";textColor(6);cout<<"             |";
                        jump(30,12);
                        cout<<"|          ";textColor(2);cout<<" | Enter Uni_Roll :-                                |";textColor(6);cout<<"                |";


                        jump(30,13);
                        cout<<"|          ";textColor(2);cout<<" ----------------------------------------------------   ";textColor(6);cout<<"             |";

                        jump(30,14);
                        cout<<"|          ";textColor(2);cout<<" | Enter Class_Roll :-                              |";textColor(6);cout<<"                |";


                         jump(30,15);
                        cout<<"|          ";textColor(2);cout<<" ----------------------------------------------------   ";textColor(6);cout<<"             |";

                        jump(30,16);
                        cout<<"|_______________________________________________________________________________|";

                        jump(61,10); textColor(7); cin.getline(Reg,20);
                        jump(62,12); textColor(7); cin.getline(U_roll,20);
                        jump(64,14); textColor(7); cin.getline(Roll,10);

                        int pos=0;

                            while(file){

                                    if((strcmp(studentDetails.getUroll(),U_roll)==0) && (strcmp(studentDetails.getReg(),Reg)==0) && (strcmp(studentDetails.getRoll(),Roll)==0)){ // write logic to compare Ids of the students
                                        file.close();
                                        return pos;
                                    }

                                    pos++;

                                    file.read((char *)&studentDetails,sizeof(studentDetails));

                            }
                            file.close();

                        if(configEnter())
                            goto repeat;

                        return -1;

                }




        }

        void Administratator :: studentEditOption(char *departmentName ,char *session, int pos){

                    char fileName[40];
                    strcpy(fileName,departmentName);
                    strcat(fileName,session);
                    strcat(fileName,"St_Details.dat");



                    int row=36,col=13;

                    system("cls");

                    editOptionDiagram(departmentName,1);

                    textColor(7);
                    jump(row,col); cout<<"---------------";
                    jump(row,col+1);cout<<": ";
                    jump(row+14,col+1);cout<<": ";
                    jump(row,col+2);cout<<"---------------";

                    if(col==13){
                            textColor(7);
                            jump(66,15);
                            cout<<"After Pressing on this  ";
                            jump(66,17);
                            cout<<"Button you can Change the";
                            jump(66,19);
                            cout<<"Students Phone Number  !";

                    }

                    char ch;

                    while(true){
                            jump(96,32);
                            ch=getch();

                        switch(ch){

                            case 72:
                                if(col<17)
                                    col=41;

                                col-=4;
                            break;

                            case 80:
                                if(col>33)
                                    col=9;

                                col+=4;
                            break;

                            case 13:

                                jump(row,col); cout<<"               ";
                                jump(row,col+1);cout<<"               ";
                                jump(row,col+2);cout<<"               ";
                                textColor(5);
                                jump(row-2,col+1); cout<<"---------------";
                                jump(row-2,col+2);cout<<": "; jump(row+12,col+2);cout<<": ";
                                jump(row-2,col+3);cout<<"---------------";

                                if(col==13){
                                    textColor(6);
                                    jump(row-1,col+2);
                                    cout<<"  PHONE    ";
                                }
                                else if(col==17){
                                    textColor(6);
                                    jump(row-1,col+2);
                                    cout<<"  F_NAME    ";
                                }
                                else if(col==21){
                                    textColor(6);
                                    jump(row-1,col+2);
                                    cout<<"  M_NAME    ";
                                }
                                else if(col==25){
                                    textColor(6);
                                    jump(row-1,col+2);
                                    cout<<"   NAME   ";
                                }
                                else if(col==29){
                                    textColor(6);
                                    jump(row-1,col+2);
                                    cout<<" TEMP_ADDR ";

                                }
                                else if(col==33){
                                    textColor(6);
                                    jump(row-1,col+2);
                                    cout<<"   DOB  ";
                                }
                                else if(col==37){
                                    textColor(6);
                                    jump(row-1,col+2);
                                    cout<<"   BACK ";
                                }

                                jump(96,32);
                                Sleep(300);

                                fstream file(fileName,ios::in | ios::out | ios::ate | ios::binary);
                                Student studentDetails;
                                file.seekg(pos*sizeof(studentDetails));
                                file.read((char*)&studentDetails,sizeof(studentDetails));
                                system("cls");

                                if(col==13){
                                    studentDetails.changePhone();
                                }
                                else if(col==17){
                                    studentDetails.changeF_name();
                                }
                                else if(col==21){
                                    studentDetails.changeM_name();
                                }
                                else if(col==25){
                                    studentDetails.changeName();
                                }
                                else if(col==29){
                                    studentDetails.changeTempAddr();
                                }
                                else if(col==33){
                                    studentDetails.changeDOB();
                                }
                                else if(col==37){
                                    file.close();
                                    return ;

                                }


                                file.seekp(pos*sizeof(studentDetails));
                                file.write((char *)&studentDetails,sizeof(studentDetails));

                                file.close();

                                system("cls");
                                editOptionDiagram(departmentName,1);

                            break;

                        }

                        jump(66,15);
                        cout<<"                               ";
                        jump(66,17);
                        cout<<"                               ";
                        jump(66,19);
                        cout<<"                               ";

                        if(col==13){
                            textColor(7);
                            jump(66,15);
                            cout<<"After Pressing on this  ";
                            jump(66,17);
                            cout<<"Button you can Change the";
                            jump(66,19);
                            cout<<"Students Phone Number  !";

                        }
                        else if(col==17){
                            textColor(7);
                            jump(66,15);
                            cout<<"After Pressing on this Button ";
                            jump(66,17);
                            cout<<"you can change the Student's ";
                            jump(66,19);
                            cout<<"Father Name   ";
                        }
                        else if(col==21){
                            textColor(7);
                            jump(66,15);
                            cout<<"After Pressing on this Button ";
                            jump(66,17);
                            cout<<"you can change the Student's ";
                            jump(66,19);
                            cout<<"Mother Name   ";
                        }
                        else if(col==25){
                            textColor(7);
                            jump(66,15);
                            cout<<"After Pressing on this Button ";
                            jump(66,17);
                            cout<<"you can change the Student's ";
                            jump(66,19);
                            cout<<"Name   ";
                        }
                        else if(col==29){
                            textColor(7);
                            jump(66,15);
                            cout<<"After Pressing on this Button ";
                            jump(66,17);
                            cout<<"you can change the Student's ";
                            jump(66,19);
                            cout<<"Temporary Address   ";

                        }
                        else if(col==33){
                            textColor(7);
                            jump(66,15);
                            cout<<"After Pressing on this Button ";
                            jump(66,17);
                            cout<<"you can change the Student's ";
                            jump(66,19);
                            cout<<"Date Of Birth ";
                        }
                        else if(col==37){
                            textColor(7);
                            jump(66,15);
                            cout<<"When you will be press on this ";
                            jump(66,17);
                            cout<<"Button it will take you back to";
                            jump(66,19);
                            cout<<"the Student Window ";

                        }



                            jump(36,13);cout<<"               ";
                            jump(36,14);cout<<"  "; jump(50,14);cout<<"  ";
                            jump(36,15);cout<<"               ";

                            jump(36,17);cout<<"               ";
                            jump(36,18);cout<<"  "; jump(50,18);cout<<"  ";
                            jump(36,19);cout<<"               ";

                            jump(36,21);cout<<"               ";
                            jump(36,22);cout<<"  "; jump(50,22);cout<<"  ";
                            jump(36,23);cout<<"               ";

                            jump(36,25);cout<<"               ";
                            jump(36,26);cout<<"  "; jump(50,26);cout<<"  ";
                            jump(36,27);cout<<"               ";

                            jump(36,29);cout<<"               ";
                            jump(36,30);cout<<"  "; jump(50,30);cout<<"  ";
                            jump(36,31);cout<<"               ";

                            jump(36,33);cout<<"               ";
                            jump(36,34);cout<<"  "; jump(50,34);cout<<"  ";
                            jump(36,35);cout<<"               ";

                            jump(36,37);cout<<"               ";
                            jump(36,38);cout<<"  "; jump(50,38);cout<<"  ";
                            jump(36,39);cout<<"               ";



                            textColor(7);
                            jump(row,col); cout<<"---------------";
                            jump(row,col+1);cout<<": "; jump(row+14,col+1);cout<<": ";
                            jump(row,col+2);cout<<"---------------";

                    }
        }

        void Administratator :: editStudent(char *departmentName,char *session){

               int pos=st_idConfig(departmentName,session);

               if(pos>=0){
                studentEditOption(departmentName,session,pos);
               }


        }

        void Administratator :: deleteStudent(char *departmentName,char *session){

                int pos=st_idConfig(departmentName,session);

                if(pos>=0){

                    int Count=-1;

                    char fileName[40];
                    strcpy(fileName,departmentName);
                    strcat(fileName,session);
                    strcat(fileName,"St_Details.dat");


                    ifstream file1(fileName,ios::in | ios::binary);

                    ofstream file2("temp.dat",ios::out | ios::app | ios::binary);

                    Student studentDetails;

                    while(true){


                        file1.read((char*)&studentDetails,sizeof(studentDetails));
                        Count++;

                        if(!file1)
                            break;

                        if(Count==pos)
                            continue ;
                        file2.write((char*)&studentDetails,sizeof(studentDetails));
                    }

                    file1.close();
                    file2.close();

                    remove(fileName);
                    rename("temp.dat",fileName);

                }

        }

        void Administratator :: studentFullDetails(char *departmentName,char *session){

                int pos=st_idConfig(departmentName,session);

                if(pos>=0){

                    int Count=-1;

                    char fileName[40];
                    strcpy(fileName,departmentName);
                    strcat(fileName,session);
                    strcat(fileName,"St_Details.dat");

                    ifstream file(fileName,ios::in | ios::ate | ios::binary);

                    Student studentDetails;
                    file.seekg(pos*sizeof(studentDetails));


                    file.read((char *)&studentDetails,sizeof(studentDetails));

                    file.close();
                    system("cls");
                    jump(30,5);
                    cout<<"-------------------------------------------------------------------------------";
                    jump(30,6);
                    cout<<"|                         Student's Full Details Window                       |";
                    jump(30,7);
                    cout<<"-------------------------------------------------------------------------------";
                    for(int a=8;a<36;a++){
                        jump(30,a);
                        cout<<"|                                                                             |";
                    }

                    jump(30,36);
                    cout<<"|_____________________________________________________________________________|";


                    studentDetails.fullDetails();

                    getch();

                }

        }


















