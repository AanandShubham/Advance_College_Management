
                #include<iostream>
                #include<cstring>
                #include<stdlib.h>
                #include<windows.h>
                #include<fstream>
                #include<iomanip>
                #include<conio.h>
                #include<cstring>
                #include"DataBase.h"
                #include"System_Design.h"

                using namespace std;

         void box(){

             int a=0;
               // system("cls");

                cout<<endl<<endl<<"  "<<char(178);
                while(a++<130)
                    cout<<char(223);
                cout<<char(178)<<endl;
                a=0;
                while(a++<33)
                cout<<"  "<<char(178)<<"                                                                                                                                  "<<char(178)<<endl;


                cout<<"  "<<char(178);
                a=0;
                while(a++<130)
                    cout<<char(220);
                cout<<char(178)<<endl;

        }

        // -------------------------> START OF LOGIN CLASS DEFINITION <------------------------

        void Login :: takeIdAndPass(bool p){

               int r=35,c=7;
               jump(r,c);
               system("cls");
               textColor(2);
               jump(r,c++);
               cout<<"------------------------------------------------------------"<<endl;
               if(p){
                         jump(r,c++);
                    textColor(4);
                    cout<<":       ----->       ENTER NEW ID & PASS.       <-----     :"<<endl;

               }else {
                    jump(r,c++);
                    textColor(4);
                    cout<<":       ----->         ENTER ID & PASS.       <-----       :"<<endl;
               }
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
              textColor(5);
              jump(r+5,c-1);
                cout<<": Enter Login ID :-                              :";
               jump(r,c++);
              textColor(2);
              cout<<"|    --------------------------------------------------    |"<<endl;
               jump(r,c++);
              cout<<"|                                                          |"<<endl;
               jump(r,c++);
              cout<<"|    --------------------------------------------------    |"<<endl;
               jump(r,c++);
              cout<<"|                                                          |"<<endl;
               textColor(5);
               jump(r+5,c-1);
               cout<<": Enter Login Pass :-                            :";
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

               //char loginid[30];
               jump(60,13);
               textColor(6);
               cin.getline(loginId,30);
               //char loginpass[30];
               jump(62,17);
               cin.getline(loginPass,30);

        }

        bool Login :: cheakIdAndPass(char *id,char *pass){


                     if(strcmp(loginId,id)==0){
                        if(strcmp(loginPass,pass)==0)
                            return true;
                        else
                            return false;
                    }else
                        return false;
        }

        void Login :: showIdAndPass(){

                cout<<"Login ID : "<<loginId<<endl;
                cout<<"Login Pass : "<<loginPass<<endl;
        }

        //  -------------------------> END OF LOGIN CLASS DEFINITION <------------------------

        //-------------------------> START OF PERSON CLASS DEFINITION <-------------------------

        bool Person::inputPersonDetails(){

            char ch;
            textColor(2);
            jump(33,14);
            cout<<"--------------------------------------------------------------------"<<endl;
            jump(33,15);
            cout<<"| Enter Name :                                                     |";
            textColor(3);
            jump(48,15);

            ch=getch();
            if(ch==27)
                return false;
            cin.getline(name,50);


            jump(33,16);
            textColor(2);
            cout<<"--------------------------------------------------------------------"<<endl;
            jump(33,17);
            cout<<"| Enter Father's Name :                                            |";
            textColor(3);
            jump(57,17);

            ch=getch();
            if(ch==27)
                return false;
            cin.getline(f_name,50);


            jump(33,18);
            textColor(2);
            cout<<"--------------------------------------------------------------------"<<endl;
            jump(33,19);
            cout<<"| Enter Mother's Name :                                            |";
            textColor(3);
            jump(57,19);

            ch=getch();
            if(ch==27)
                return false;
            cin.getline(m_name,50);


            jump(33,20);
            textColor(2);
            cout<<"--------------------------------------------------------------------"<<endl;
            jump(33,21);
            cout<<"| Enter Date Of Birth :                                            |";
            textColor(3);
            jump(57,21);

            ch=getch();
            if(ch==27)
                return false;
            cin.getline(DOB,12);


            jump(33,22);
            textColor(2);
            cout<<"--------------------------------------------------------------------"<<endl;
            jump(33,23);
            cout<<"| Enter Phone Number :                                             |";
            textColor(3);
            jump(56,23);

            ch=getch();
            if(ch==27)
                return false;
            cin.getline(Phone,15);

            jump(33,24);
            textColor(2);
            cout<<"--------------------------------------------------------------------"<<endl;
            jump(33,25);
            cout<<"| Enter Aadhar Number :                                            |";
            textColor(3);
            jump(57,25);

            ch=getch();
            if(ch==27)
                return false;
            cin.getline(Adhar,18);


            jump(33,26);
            textColor(2);
            cout<<"--------------------------------------------------------------------"<<endl;
            jump(33,27);
            cout<<"| Enter Permanent Address :                                        |";
            textColor(3);
            jump(62,27);

            ch=getch();
            if(ch==27)
                return false;
            cin.getline(p_add,80);


            jump(33,28);
            textColor(2);
            cout<<"--------------------------------------------------------------------"<<endl;
            jump(33,29);
            cout<<"| Enter Temporary Address :                                        |";
            textColor(3);
            jump(62,29);

            ch=getch();
            if(ch==27)
                return false;
            cin.getline(t_add,80);


            jump(33,30);
            textColor(2);
            cout<<"--------------------------------------------------------------------"<<endl;
            jump(33,31);
            cout<<"| Enter Email :                                                    |";
            textColor(3);
            jump(49,31);

            ch=getch();
            if(ch==27)
                return false;
            cin.getline(email,21);

            jump(33,32);
            textColor(2);
            cout<<"--------------------------------------------------------------------"<<endl;

            return true;

        }

        void Person :: showPersonDetails(){

            int x=40,y=15;
            jump(x,y++);textColor(2);cout<<"--------------------------------------------------------"<<endl;
            jump(x,y++);textColor(4);cout<<"Name : ";textColor(3);cout<<name<<endl;
            jump(x,y++);textColor(2);cout<<"--------------------------------------------------------"<<endl;
            jump(x,y++);textColor(4);cout<<"Father's Name : ";textColor(3);cout<<f_name<<endl;
            jump(x,y++);textColor(2);cout<<"--------------------------------------------------------"<<endl;
            jump(x,y++);textColor(4);cout<<"Mother's Name : ";textColor(3);cout<<m_name<<endl;
            jump(x,y++);textColor(2);cout<<"--------------------------------------------------------"<<endl;
            jump(x,y++);textColor(4);cout<<"Date Of Birth : ";textColor(3);cout<<DOB<<endl;
            jump(x,y++);textColor(2);cout<<"--------------------------------------------------------"<<endl;
            jump(x,y++);textColor(4);cout<<"Aadhaar Number : ";textColor(3);cout<<Adhar<<endl;
            jump(x,y++);textColor(2);cout<<"--------------------------------------------------------"<<endl;
            jump(x,y++);textColor(4);cout<<"Phone Number : ";textColor(3);cout<<Phone<<endl;
            jump(x,y++);textColor(2);cout<<"--------------------------------------------------------"<<endl;
            jump(x,y++);textColor(4);cout<<"Email : ";textColor(3);cout<<email<<endl;
            jump(x,y++);textColor(2);cout<<"--------------------------------------------------------"<<endl;
            jump(x,y++);textColor(4);cout<<"Permanent Address : ";textColor(3);cout<<p_add<<endl;
            jump(x,y++);textColor(2);cout<<"--------------------------------------------------------"<<endl;
            jump(x,y++);textColor(4);cout<<"Temporary++ Address : ";textColor(3);cout<<t_add<<endl;
            jump(x,y++);textColor(2);cout<<"--------------------------------------------------------"<<endl;

        }

        char* Person :: getName(){ return name ; }
        char* Person :: getFname(){ return f_name; }
        char* Person :: getMname(){ return m_name ; }
        char* Person :: getDob(){ return DOB; }
        char* Person :: getPaddress(){ return p_add; }
        char* Person :: getTaddress(){ return t_add ; }
        char* Person :: getAdhar(){ return Adhar; }
        char* Person :: getPhone(){ return Phone; }
        char* Person :: getEmail(){ return email; }

        void Person :: changeName(const char *changeName){ strcpy(name,changeName); }
        void Person :: changeMname(const char *changeMname){ strcpy(m_name,changeMname); }
        void Person :: changeFname(char *changeFname){ strcpy(f_name,changeFname); }
        void Person :: changeDob(char *changeDob){ strcpy(DOB,changeDob); }
        void Person :: changeP_address(char *changePadd){ strcpy(p_add,changePadd); }
        void Person :: changeT_address(char *changeTadd){ strcpy(t_add,changeTadd); }
        void Person :: changeAdhar(char *changeAdhar){ strcpy(Adhar,changeAdhar); }
        void Person :: changePhone(char *changePhone){ strcpy(Phone,changePhone); }
        void Person :: changeEmail(char *changeEmail){ strcpy(email,changeEmail);}



        //------------------------> END OF PERSON CLASS DEFINITION <------------------------


        // **************************> STARTING OF STUDENT CLASS DEFINITION <**********************

        bool Student :: cheakID(char *U_roll,char *Reg,char *Roll){
                    if(strcmp(U_roll,U_rollno)==0)
                        return true;
                    else if(strcmp(Reg_num,Reg)==0)
                        return true;
                    else if(strcmp(roll,Roll)==0)
                        return true;
                    else
                        return false;
        }

        char* Student :: getUroll() { return U_rollno; }
        char* Student :: getReg() { return Reg_num ; }
        char* Student :: getRoll() { return roll; }

        bool Student :: input(char *departmentName,char *session){

                char fileName[40];
                strcpy(fileName,departmentName);
                strcat(fileName,session);
                strcat(fileName,"St_Details.dat");


               char ch;
                system("cls");
                textColor(3);
                jump(30,3);
               cout<<"---------------------------------------------------------------------------"<<endl;
               jump(30,4);
               cout<<"|                           Input Student's Details                       |"<<endl;
               jump(30,5);
               cout<<"---------------------------------------------------------------------------"<<endl;
               for(int a=6;a<40;a++){
                    jump(30,a);
                    cout<<"|                                                                         |"<<endl;
               }
               jump(30,33);
               cout<<"|_________________________________________________________________________|"<<endl;

               jump(30,39);
               cout<<"|_________________________________________________________________________|"<<endl;

               jump(33,8);
               textColor(2);
               cout<<"--------------------------------------------------------------------"<<endl;
               jump(33,9);
               cout<<"| Enter University Roll Number :                                   |";
               textColor(3);

               jump(66,9);
               ch=getch();
               if(ch==27)
                return false;
               cin.getline(U_rollno,20);

               jump(33,10);
               textColor(2);
               cout<<"--------------------------------------------------------------------"<<endl;
               jump(33,11);
               cout<<"| Enter University Registration Number :                           |";
               textColor(3);

                jump(74,11);
               ch=getch();
               if(ch==27)
                return false;
               cin.getline(Reg_num,20);

               jump(33,12);
               textColor(2);
               cout<<"--------------------------------------------------------------------"<<endl;
               jump(33,13);
               cout<<"| Enter Class Roll Number :                                        |";
               textColor(3);

               jump(61,13);
               ch=getch();
               if(ch==27)
                return false;
               cin.getline(roll,10);

               ifstream file(fileName,ios::in | ios::binary);

               Student s;

               file.read((char *)&s,sizeof(Student));

               while(file){
                    if(cheakID(s.getUroll(),s.getReg(),s.getRoll())){

                            file.close();

                            system("cls");
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
                           cout<<"|   ";textColor(4);cout<<"  !!!! ID Already Available   !!!!  ";textColor(5);cout<<"    |";
                           jump(42,18);
                           cout<<"|                                           |";
                           jump(42,19);
                           cout<<"|                                           |";
                           jump(42,20);
                           cout<<"|___________________________________________|";
                           Sleep(2000);

                           return false ;
                    }

                    file.read((char *)&s,sizeof(Student));
               }

               file.close();


               return p.inputPersonDetails();

        }


        void Student :: shortDetails(int row,int col){
                jump(10,col);
                textColor(2);
                cout<<"|                                                                                                                |";
                jump(row+1,col++);
                textColor(7);
                cout<<left<<setw(18)<<U_rollno<<setw(17)<<Reg_num<<setw(12)<<roll<<setw(30)<<p.getName()<<setw(20)<<p.getPhone()<<endl;
                jump(10,col);
                textColor(2);
                cout<<"|                                                                                                                |";
                jump(row,col++);
                textColor(5);
                cout<<"-------------------------------------------------------------------------------------------------"<<endl;

        }

        void Student :: fullDetails(){

                int x=40,y=9;
                jump(x,y++);textColor(2);cout<<"--------------------------------------------------------"<<endl;
                jump(x,y++);textColor(4);cout<<"University Registration Number : ";textColor(3);cout<<Reg_num<<endl;
                jump(x,y++);textColor(2);cout<<"--------------------------------------------------------"<<endl;
                jump(x,y++);textColor(4);cout<<"University Roll Number : ";textColor(3);cout<<U_rollno<<endl;
                jump(x,y++);textColor(2);cout<<"--------------------------------------------------------"<<endl;
                jump(x,y++);textColor(4);cout<<"Class Roll Number : ";textColor(3);cout<<roll<<endl;

                p.showPersonDetails();
        }

        void Student :: changePhone(){

              char Phone[15];
                        system("cls");
                        textColor(6);
                        jump(30,5);
                        cout<<"---------------------------------------------------------------------------------";
                        jump(30,6);
                        cout<<"|                                Edit Phone Window                              |";
                        jump(30,7);
                        cout<<"---------------------------------------------------------------------------------";
                        jump(30,8);
                        cout<<"|                                                                               |";
                        jump(30,9);
                        cout<<"|         ";textColor(2);cout<<"  ----------------------------------------------------   ";textColor(6);cout<<"             |";
                        jump(30,10);
                        cout<<"|          ";textColor(2);cout<<" | Enter Phone :-                                   |   ";textColor(6);cout<<"             |";
                        jump(30,11);
                        cout<<"|          ";textColor(2);cout<<" ----------------------------------------------------   ";textColor(6);cout<<"             |";
                        jump(30,12);
                        cout<<"|                                                                               |";
                        jump(30,13);
                        cout<<"|_______________________________________________________________________________|";

                        jump(59,10);
                        textColor(7);
                        cin.getline(Phone,15);

              p.changePhone(Phone);
         }

        void Student :: changeName(){

              char Name[50];
                        system("cls");
                        textColor(6);
                        jump(30,5);
                        cout<<"---------------------------------------------------------------------------------";
                        jump(30,6);
                        cout<<"|                                Edit Name Window                               |";
                        jump(30,7);
                        cout<<"---------------------------------------------------------------------------------";
                        jump(30,8);
                        cout<<"|                                                                               |";
                        jump(30,9);
                        cout<<"|         ";textColor(2);cout<<"  ----------------------------------------------------   ";textColor(6);cout<<"             |";
                        jump(30,10);
                        cout<<"|          ";textColor(2);cout<<" | Enter Name :-                                    |   ";textColor(6);cout<<"             |";
                        jump(30,11);
                        cout<<"|          ";textColor(2);cout<<" ----------------------------------------------------   ";textColor(6);cout<<"             |";
                        jump(30,12);
                        cout<<"|                                                                               |";
                        jump(30,13);
                        cout<<"|_______________________________________________________________________________|";

                        jump(58,10);
                        textColor(7);
                        cin.getline(Name,50);

              p.changeName(Name);
         }

        void Student :: changeF_name(){

              char F_name[50];
                        system("cls");
                        textColor(6);
                        jump(30,5);
                        cout<<"---------------------------------------------------------------------------------";
                        jump(30,6);
                        cout<<"|                            Edit Father's Name Window                          |";
                        jump(30,7);
                        cout<<"---------------------------------------------------------------------------------";
                        jump(30,8);
                        cout<<"|                                                                               |";
                        jump(30,9);
                        cout<<"|         ";textColor(2);cout<<"  ----------------------------------------------------   ";textColor(6);cout<<"             |";
                        jump(30,10);
                        cout<<"|          ";textColor(2);cout<<" | Enter F_Name :-                                  |   ";textColor(6);cout<<"             |";
                        jump(30,11);
                        cout<<"|          ";textColor(2);cout<<" ----------------------------------------------------   ";textColor(6);cout<<"             |";
                        jump(30,12);
                        cout<<"|                                                                               |";
                        jump(30,13);
                        cout<<"|_______________________________________________________________________________|";

                        jump(60,10);
                        textColor(7);
                        cin.getline(F_name,50);

              p.changeFname(F_name);
        }

        void Student :: changeM_name(){

              char M_name[50];
                        system("cls");
                        textColor(6);
                        jump(30,5);
                        cout<<"---------------------------------------------------------------------------------";
                        jump(30,6);
                        cout<<"|                            Edit Mother's Name Window                          |";
                        jump(30,7);
                        cout<<"---------------------------------------------------------------------------------";
                        jump(30,8);
                        cout<<"|                                                                               |";
                        jump(30,9);
                        cout<<"|         ";textColor(2);cout<<"  ----------------------------------------------------   ";textColor(6);cout<<"             |";
                        jump(30,10);
                        cout<<"|          ";textColor(2);cout<<" | Enter M_Name :-                                  |   ";textColor(6);cout<<"             |";
                        jump(30,11);
                        cout<<"|          ";textColor(2);cout<<" ----------------------------------------------------   ";textColor(6);cout<<"             |";
                        jump(30,12);
                        cout<<"|                                                                               |";
                        jump(30,13);
                        cout<<"|_______________________________________________________________________________|";

                        jump(60,10);
                        textColor(7);
                        cin.getline(M_name,50);

              p.changeMname(M_name);
         }

        void Student :: changeDOB(){

              char dob[15];
                        system("cls");
                        textColor(6);
                        jump(30,5);
                        cout<<"---------------------------------------------------------------------------------";
                        jump(30,6);
                        cout<<"|                                   Edit DOB Window                             |";
                        jump(30,7);
                        cout<<"---------------------------------------------------------------------------------";
                        jump(30,8);
                        cout<<"|                                                                               |";
                        jump(30,9);
                        cout<<"|         ";textColor(2);cout<<"  ----------------------------------------------------   ";textColor(6);cout<<"             |";
                        jump(30,10);
                        cout<<"|          ";textColor(2);cout<<" | Enter DOB :-                                     |   ";textColor(6);cout<<"             |";
                        jump(30,11);
                        cout<<"|          ";textColor(2);cout<<" ----------------------------------------------------   ";textColor(6);cout<<"             |";
                        jump(30,12);
                        cout<<"|                                                                               |";
                        jump(30,13);
                        cout<<"|_______________________________________________________________________________|";

                        jump(57,10);
                        textColor(7);
                        cin.getline(dob,15);

              p.changeDob(dob);
         }

        void Student :: changeTempAddr(){

              char tempAddr[80];
                        system("cls");
                        textColor(6);
                        jump(30,5);
                        cout<<"---------------------------------------------------------------------------------";
                        jump(30,6);
                        cout<<"|                           Edit Temporary Addr Window                          |";
                        jump(30,7);
                        cout<<"---------------------------------------------------------------------------------";
                        jump(30,8);
                        cout<<"|                                                                               |";
                        jump(30,9);
                        cout<<"|         ";textColor(2);cout<<"  ----------------------------------------------------   ";textColor(6);cout<<"             |";
                        jump(30,10);
                        cout<<"|          ";textColor(2);cout<<" | Enter T_Addr :-                                  |   ";textColor(6);cout<<"             |";
                        jump(30,11);
                        cout<<"|          ";textColor(2);cout<<" ----------------------------------------------------   ";textColor(6);cout<<"             |";
                        jump(30,12);
                        cout<<"|                                                                               |";
                        jump(30,13);
                        cout<<"|_______________________________________________________________________________|";

                        jump(60,10);
                        textColor(7);
                        cin.getline(tempAddr,50);

              p.changeT_address(tempAddr);
         }


        // -------------------------------> END OF STUDENT CLASS DEFINITION <--------------------------------------


        //********************************> START OF MARKS CLASS DEFINITION <**************************************


          void Marks :: subjectCode(int a,int b){

                char subjectcode[7]{"1BCA1"};
                char ch=48,c=48;
                ch+=a; c+=b;
                subjectcode[0]=ch;
                subjectcode[4]=c;
                strcpy(subCode,subjectcode);



                //return subjectcode;
        }

          void Marks :: input(){

                 textColor(2);
                // box();

                 cout<<"------------------------------------------"<<endl;
                 cout<<"Enter Semester : ";
                 cin>>sem;

                if(sem == 2|| sem == 4){

                    subjectCode(sem,1);
                    cout<<"------------------------------------------"<<endl;
                    cout<<"Enter "<<subCode<<" Marks : ";
                    cin>>sub1;
                    cout<<"------------------------------------------"<<endl;
                    subjectCode(sem,2);
                    cout<<"Enter "<<subCode<<" Marks : ";
                    cin>>sub2;
                    cout<<"------------------------------------------"<<endl;                    subjectCode(sem,3);
                    cout<<"Enter "<<subCode<<" Marks : ";
                    cin>>sub3;
                    cout<<"------------------------------------------"<<endl;
                    subjectCode(sem,4);
                    cout<<"Enter "<<subCode<<" Marks : ";
                    cin>>sub4;
                    cout<<"------------------------------------------"<<endl;
                    subjectCode(sem,5);
                    cout<<"Enter "<<subCode<<" Marks : ";
                    cin>>sub5;
                    cout<<"------------------------------------------"<<endl;                    subjectCode(sem,6);
                    cout<<"Enter "<<subCode<<" Marks : ";
                    cin>>sub6;
                    cout<<"------------------------------------------"<<endl;                    subjectCode(sem,7);
                    cout<<"Enter "<<subCode<<" Marks : ";
                    cin>>sub7;
                    cout<<"------------------------------------------"<<endl;                    subjectCode(sem,8);
                    cout<<"Enter "<<subCode<<" Marks : ";
                    cin>>sub8;
                    cout<<"------------------------------------------"<<endl;
                    subjectCode(sem,9);
                    cout<<"Enter "<<subCode<<" Marks : ";
                    cin>>sub9;
                    cout<<"------------------------------------------"<<endl;
                }
                else if(sem == 6){

                    cout<<"------------------------------------------"<<endl;                    subjectCode(sem,1);
                    cout<<"Enter "<<subCode<<" Marks : ";
                    cin>>sub1;
                    cout<<"------------------------------------------"<<endl;
                    subjectCode(sem,2);
                    cout<<"Enter "<<subCode<<" Marks : ";
                    cin>>sub2;
                    cout<<"------------------------------------------"<<endl;
                }
                else if(sem == 1 || sem == 3 || sem == 5){

                    cout<<"------------------------------------------"<<endl;
                    subjectCode(sem,1);
                    cout<<"Enter "<<subCode<<" Marks : ";
                    cin>>sub1;
                    cout<<"------------------------------------------"<<endl;
                    subjectCode(sem,2);
                    cout<<"Enter "<<subCode<<" Marks : ";
                    cin>>sub2;
                    cout<<"------------------------------------------"<<endl;
                    subjectCode(sem,3);
                    cout<<"Enter "<<subCode<<" Marks : ";
                    cin>>sub3;
                    cout<<"------------------------------------------"<<endl;
                    subjectCode(sem,4);
                    cout<<"Enter "<<subCode<<" Marks : ";
                    cin>>sub4;
                    cout<<"------------------------------------------"<<endl;
                    subjectCode(sem,5);
                    cout<<"Enter "<<subCode<<" Marks : ";
                    cin>>sub5;
                    cout<<"------------------------------------------"<<endl;
                    subjectCode(sem,6);
                    cout<<"Enter "<<subCode<<" Marks : ";
                    cin>>sub6;
                    cout<<"------------------------------------------"<<endl;
                    subjectCode(sem,7);
                    cout<<"Enter "<<subCode<<" Marks : ";
                    cin>>sub7;
                    cout<<"------------------------------------------"<<endl;
                    subjectCode(sem,8);
                    cout<<"Enter "<<subCode<<" Marks : ";
                    cin>>sub8;
                    cout<<"------------------------------------------"<<endl;
                }
                else{

                    cout<<"Please Enter Valid Semester \x2"<<endl;
                }

          }

          bool Teacher :: input(){
                char ch;
                system("cls");
                textColor(3);
                jump(30,3);
               cout<<"---------------------------------------------------------------------------"<<endl;
               jump(30,4);
               cout<<"|                           Input Teacher's Details                       |"<<endl;
               jump(30,5);
               cout<<"---------------------------------------------------------------------------"<<endl;
               for(int a=6;a<40;a++){
                    jump(30,a);
                    cout<<"|                                                                         |"<<endl;
               }
               jump(30,33);
               cout<<"|_________________________________________________________________________|"<<endl;

               jump(30,39);
               cout<<"|_________________________________________________________________________|"<<endl;

               jump(33,8);
               textColor(2);
               cout<<"--------------------------------------------------------------------"<<endl;
               jump(33,9);
               cin.clear();
               cout<<"| Enter Teacher ID :                                               |";
               textColor(3);
               jump(54,9);

               ch=getch();
               if(ch==27)
                return false;
               cin.getline(T_ID,12);


               jump(33,10);
               textColor(2);
               cout<<"--------------------------------------------------------------------"<<endl;
               jump(33,11);
               cout<<"| Enter Qualification :                                            |";
               textColor(3);

               jump(58,11);
               ch=getch();
               if(ch==27)
                return false;
               cin.getline(qualification,20);


               jump(33,12);
               textColor(2);
               cout<<"--------------------------------------------------------------------"<<endl;
               jump(33,13);
               cout<<"| Enter Specification :                                            |";
               textColor(3);
               jump(58,13);

               ch=getch();
               if(ch==27)
                return false;
               cin.getline(specification,30);


              // p.inputPersonDetails();

               return  p.inputPersonDetails();

          }

          void Teacher :: fullDetails(){
               // system("cls");
                 int x=40,y=9;
                jump(x,y++);textColor(2);cout<<"--------------------------------------------------------"<<endl;
                jump(x,y);textColor(4);cout<<"Teacher's Id : ";textColor(3);jump(x+15,y++);cout<<T_ID<<endl;
                jump(x,y++);textColor(2);cout<<"--------------------------------------------------------"<<endl;
                jump(x,y);textColor(4);cout<<"Specification : ";textColor(3);jump(x+16,y++);cout<<specification<<endl;
                jump(x,y++);textColor(2);cout<<"--------------------------------------------------------"<<endl;
                jump(x,y);textColor(4);cout<<"Qualification : ";textColor(3);jump(x+16,y++);cout<<qualification<<endl;

                p.showPersonDetails();


          }

          void Teacher :: shortDetails(int row,int col){

                jump(10,col);
                textColor(2);
                cout<<"|                                                                                                                |";
                jump(row,col++);
                textColor(7);
                cout<<left<<setw(10)<<T_ID<<setw(30)<<p.getName()<<setw(20)<<p.getPhone()<<setw(15)<<qualification<<specification<<endl;
                jump(10,col);
                textColor(2);
                cout<<"|                                                                                                                |";
                jump(row,col++);
                textColor(5);
                cout<<"-------------------------------------------------------------------------------------------------"<<endl;


          }

          char* Teacher :: getId(){ return T_ID ; }

          void Teacher :: changeName(){

              char Name[50];
                        system("cls");
                        textColor(6);
                        jump(30,5);
                        cout<<"---------------------------------------------------------------------------------";
                        jump(30,6);
                        cout<<"|                                Edit Name Window                               |";
                        jump(30,7);
                        cout<<"---------------------------------------------------------------------------------";
                        jump(30,8);
                        cout<<"|                                                                               |";
                        jump(30,9);
                        cout<<"|         ";textColor(2);cout<<"  ----------------------------------------------------   ";textColor(6);cout<<"             |";
                        jump(30,10);
                        cout<<"|          ";textColor(2);cout<<" | Enter Name :-                                    |   ";textColor(6);cout<<"             |";
                        jump(30,11);
                        cout<<"|          ";textColor(2);cout<<" ----------------------------------------------------   ";textColor(6);cout<<"             |";
                        jump(30,12);
                        cout<<"|                                                                               |";
                        jump(30,13);
                        cout<<"|_______________________________________________________________________________|";

                        jump(58,10);
                        textColor(7);
                        cin.getline(Name,50);

              p.changeName(Name);
         }

          void Teacher :: changePhone(){

              char Phone[15];
                        system("cls");
                        textColor(6);
                        jump(30,5);
                        cout<<"---------------------------------------------------------------------------------";
                        jump(30,6);
                        cout<<"|                                Edit Phone Window                              |";
                        jump(30,7);
                        cout<<"---------------------------------------------------------------------------------";
                        jump(30,8);
                        cout<<"|                                                                               |";
                        jump(30,9);
                        cout<<"|         ";textColor(2);cout<<"  ----------------------------------------------------   ";textColor(6);cout<<"             |";
                        jump(30,10);
                        cout<<"|          ";textColor(2);cout<<" | Enter Phone :-                                   |   ";textColor(6);cout<<"             |";
                        jump(30,11);
                        cout<<"|          ";textColor(2);cout<<" ----------------------------------------------------   ";textColor(6);cout<<"             |";
                        jump(30,12);
                        cout<<"|                                                                               |";
                        jump(30,13);
                        cout<<"|_______________________________________________________________________________|";

                        jump(59,10);
                        textColor(7);
                        cin.getline(Phone,15);

              p.changePhone(Phone);
         }

          void Teacher :: changeF_name(){

              char F_name[50];
                        system("cls");
                        textColor(6);
                        jump(30,5);
                        cout<<"---------------------------------------------------------------------------------";
                        jump(30,6);
                        cout<<"|                            Edit Father's Name Window                          |";
                        jump(30,7);
                        cout<<"---------------------------------------------------------------------------------";
                        jump(30,8);
                        cout<<"|                                                                               |";
                        jump(30,9);
                        cout<<"|         ";textColor(2);cout<<"  ----------------------------------------------------   ";textColor(6);cout<<"             |";
                        jump(30,10);
                        cout<<"|          ";textColor(2);cout<<" | Enter F_Name :-                                  |   ";textColor(6);cout<<"             |";
                        jump(30,11);
                        cout<<"|          ";textColor(2);cout<<" ----------------------------------------------------   ";textColor(6);cout<<"             |";
                        jump(30,12);
                        cout<<"|                                                                               |";
                        jump(30,13);
                        cout<<"|_______________________________________________________________________________|";

                        jump(60,10);
                        textColor(7);
                        cin.getline(F_name,50);

              p.changeFname(F_name);
         }

          void Teacher :: changeM_name(){

              char M_name[50];
                        system("cls");
                        textColor(6);
                        jump(30,5);
                        cout<<"---------------------------------------------------------------------------------";
                        jump(30,6);
                        cout<<"|                            Edit Mother's Name Window                          |";
                        jump(30,7);
                        cout<<"---------------------------------------------------------------------------------";
                        jump(30,8);
                        cout<<"|                                                                               |";
                        jump(30,9);
                        cout<<"|         ";textColor(2);cout<<"  ----------------------------------------------------   ";textColor(6);cout<<"             |";
                        jump(30,10);
                        cout<<"|          ";textColor(2);cout<<" | Enter M_Name :-                                  |   ";textColor(6);cout<<"             |";
                        jump(30,11);
                        cout<<"|          ";textColor(2);cout<<" ----------------------------------------------------   ";textColor(6);cout<<"             |";
                        jump(30,12);
                        cout<<"|                                                                               |";
                        jump(30,13);
                        cout<<"|_______________________________________________________________________________|";

                        jump(60,10);
                        textColor(7);
                        cin.getline(M_name,50);

              p.changeMname(M_name);
         }

          void Teacher :: changeDOB(){

              char dob[15];
                        system("cls");
                        textColor(6);
                        jump(30,5);
                        cout<<"---------------------------------------------------------------------------------";
                        jump(30,6);
                        cout<<"|                                   Edit DOB Window                             |";
                        jump(30,7);
                        cout<<"---------------------------------------------------------------------------------";
                        jump(30,8);
                        cout<<"|                                                                               |";
                        jump(30,9);
                        cout<<"|         ";textColor(2);cout<<"  ----------------------------------------------------   ";textColor(6);cout<<"             |";
                        jump(30,10);
                        cout<<"|          ";textColor(2);cout<<" | Enter DOB :-                                     |   ";textColor(6);cout<<"             |";
                        jump(30,11);
                        cout<<"|          ";textColor(2);cout<<" ----------------------------------------------------   ";textColor(6);cout<<"             |";
                        jump(30,12);
                        cout<<"|                                                                               |";
                        jump(30,13);
                        cout<<"|_______________________________________________________________________________|";

                        jump(57,10);
                        textColor(7);
                        cin.getline(dob,15);

              p.changeDob(dob);
         }

          void Teacher :: changeTempAddr(){

              char tempAddr[80];
                        system("cls");
                        textColor(6);
                        jump(30,5);
                        cout<<"---------------------------------------------------------------------------------";
                        jump(30,6);
                        cout<<"|                           Edit Temporary Addr Window                          |";
                        jump(30,7);
                        cout<<"---------------------------------------------------------------------------------";
                        jump(30,8);
                        cout<<"|                                                                               |";
                        jump(30,9);
                        cout<<"|         ";textColor(2);cout<<"  ----------------------------------------------------   ";textColor(6);cout<<"             |";
                        jump(30,10);
                        cout<<"|          ";textColor(2);cout<<" | Enter T_Addr :-                                  |   ";textColor(6);cout<<"             |";
                        jump(30,11);
                        cout<<"|          ";textColor(2);cout<<" ----------------------------------------------------   ";textColor(6);cout<<"             |";
                        jump(30,12);
                        cout<<"|                                                                               |";
                        jump(30,13);
                        cout<<"|_______________________________________________________________________________|";

                        jump(60,10);
                        textColor(7);
                        cin.getline(tempAddr,50);

              p.changeT_address(tempAddr);
         }



