
        void box();

        class Login{

                 char loginId[30];
                 char loginPass[30];

             public:

                void takeIdAndPass(bool);
                bool cheakIdAndPass(char *,char *);
                void showIdAndPass();
        };

        class Person{

                char name[50];
                char f_name[50];
                char m_name[50];
                char DOB[12];
                char p_add[80];
                char t_add[80];
                char Adhar[18];
                char Phone[15];
                char email[21];

            public:

                bool inputPersonDetails();
                void showPersonDetails();

                char *getName();
                char *getFname();
                char *getMname();
                char *getDob();
                char *getPaddress();
                char *getTaddress();
                char *getAdhar();
                char *getPhone();
                char *getEmail();

                void changeName(const char *);
                void changeMname(const char *);
                void changeFname(char *);
                void changeDob(char *);
                void changeP_address(char *);
                void changeT_address(char *);
                void changeAdhar(char *);
                void changePhone(char *);
                void changeEmail(char *);

        };


        class Student{


                Person p;

                char U_rollno[20];
                char Reg_num[20];
                char roll[10];

            public:
                bool cheakID(char *,char *,char *);
                bool input(char *,char *);
                void shortDetails(int , int);
                void fullDetails();
                void changeName();
                void changePhone();
                void changeF_name();
                void changeM_name();
                void changeDOB();
                void changeTempAddr();
                char *getUroll();
                char *getReg();
                char *getRoll();

        };


        class Marks{

                int sem;
                long int U_rollno;
                long int Reg_num;
                char *Name;
                char subCode[7];

                int sub1,sub2,sub3,sub4,sub5,sub6,sub7,sub8,sub9;

            public:
                void subjectCode(int,int);
                bool getRoll_AND_Reg();
                void input();
                void showMarks();
                void editMarks();

        };


        class Teacher{

                char T_ID[12];
                char specification[50];
                char qualification[20];
                char PanNum[15];
                int joiningYear;

                Person p;

            public:

                bool input();
                void shortDetails(int,int);
                void fullDetails();
                char *getId();
                void changeName();
                void changePhone();
                void changeF_name();
                void changeM_name();
                void changeDOB();
                void changeTempAddr();


        };

        class Notice{

                char Title[30];
                char noticeDetails[200];

            public:

                void inputNotice();
                void showNotice();
                char *getTitle();

        };

        class Department{

            public:
                void crateSession();
                void chooseSession();

                void chooseSemester();

                void addTeacher();
                void editTeacher();
                void deleteTeacher();

                void addStudent();
                void editStudent();
                void deleteStudent();

                void addMarks();
                void editMarks();
                void showMarks();

                void chooseHOD();

                void addNotice();
                void deletNotice();

        };

        class Administratator{


            public:
                void administratorDaigram();
                void menu();
                void createDepartment();
                bool createDepartmentConfig(char *);
                void createDepartmentConfigDiagram();
                void selectDepartment();
                void selectDepartmentDaigram();
                 int dropDownMenuDiagram();
                 int dropDownMenu();
                void nextButtonDiagram(char*);
                void nextButton(char*);
                void teacherWindowDiagram(char *);
                void teacherWindow(char *);
                void addTeacher(char *);
                bool configSave();
                void showShortDetails(char *);
                void editTeacher(char *);
                 int t_idConfig(char *);
                bool configEnter();

                void editOptionDiagram(char *departmentName , int a=0);

                void teacherEditOption(char *,int);
                void deleteTeacher(char *);
                void teacherFullDetails(char *);

                void selectSessionDiagram();
                void selectSession(char *);
                void createSession(char *);
                void createSessionConfigDiagram();
                bool createSessionConfig(char *,char *);
                 int dropDownSessionDiagram(char *);
                 int dropDownSession(char *);
                void sessionNextButtonDiagram(char *,char *);
                void sessionNextButton(char *,char *);
                void sessionStudentDetailsWindowDiagram(char *,char *);
                void sessionStudentDetailsWindow(char *,char *);
                void addStudent(char *,char *);
                void showStudentShortDetails(char *,char *);
                 int st_idConfig(char *,char *);
                void studentEditOption(char *,char *, int);
                void editStudent(char *,char *);
                void deleteStudent(char *,char *);
                void studentFullDetails(char *,char *);



                void loginPage();
                void loginDigram();
                bool login();
                void forget();

        };
