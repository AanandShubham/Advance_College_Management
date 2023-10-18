
        #include<iostream>
        #include<windows.h>
        #include<ctime>
        #include<thread>
        #include<mmsystem.h>

        using namespace std;

        void textColor(int a){

                HANDLE color = GetStdHandle(STD_OUTPUT_HANDLE);

                SetConsoleTextAttribute(color ,a);
        }

       void jump(int a,int b){

                COORD m;
                m.X=a;
                m.Y=b;

            SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE),m);
       }

       void time(){

                time_t now ;

                tm nowLocal;

                now = time(NULL);

                nowLocal = *localtime(&now);

                bool flag=false;

                if(nowLocal.tm_hour>12){
                    nowLocal.tm_hour-=12;
                    flag=true;
                }

                if(nowLocal.tm_hour<10)
                    cout<<"TIME : 0";
                else cout<<"TIME : ";
                    cout<<nowLocal.tm_hour;

                if(nowLocal.tm_min<10)
                    cout<<":0";
                else cout<<":";
                    cout<<nowLocal.tm_min;

                if(nowLocal.tm_sec<10)
                    cout<<":0";
                else cout<<":";cout<<nowLocal.tm_sec;

                if(flag)
                    cout<<" PM";
                else
                    cout<<" AM";


       }

       void date(){


                time_t now ;

                tm nowLocal;

                now = time(NULL);

                nowLocal = *localtime(&now);

                 if(nowLocal.tm_mday<10)
                    cout<<"DATE : 0";
                else
                    cout<<"DATE : ";
                cout<<nowLocal.tm_mday;

                if(nowLocal.tm_mon<9)
                    cout<<"/0";
                else
                    cout<<"/";

                cout<<nowLocal.tm_mon+1<<"/"<<nowLocal.tm_year+1900;

       }


        void println(int a){
            for(int s=1;s<=a;s++){
                textColor(7);
                Sleep(10);
                cout<<"~";
            }
       }


      void Om(){

        PlaySound(TEXT("Om_Mantra_.wav"),NULL,SND_SYNC);

//        textColor(6);
//        cout<<"\t\t\t          # # # # # # # # # # # # # # # # #       \n";
//        cout<<"\t\t\t\t        #                                   #      \n";
//        cout<<"\t\t\t\t       #     @ @ @ @ @ @ @ @ @ @ @ @ @ @     #      \n";
//        cout<<"\t\t\t\t      #    @                            @     #    \n";
//        cout<<"\t\t\t\t     #    @       *  ^  *                @     #    \n";
//        cout<<"\t\t\t\t    #    @          * *                   @     #    \n";
//        cout<<"\t\t\t\t    #    @         *  *  *                 @    #  \n";
//        cout<<"\t\t\t\t    #    @       *         *               @    #  \n";
//        cout<<"\t\t\t\t    #    @       *         *               @    #  \n";
//        cout<<"\t\t\t\t    #    @                *                @    #  \n";
//        cout<<"\t\t\t\t    #    @          *    *                 @    #  \n";
//        cout<<"\t\t\t\t    #    @            *  *  *  *           @    #   \n";
//        cout<<"\t\t\t\t    #    @                 *     *  *  *   @    #  \n";
//        cout<<"\t\t\t\t    #    @     *           *      *   *    @    #    \n";
//        cout<<"\t\t\t\t    #    @     *           *       * *     @    #     \n";
//        cout<<"\t\t\t\t    #     @     *         *               @     #     \n";
//        cout<<"\t\t\t\t     #     @      *  *  *                @     #         \n";
//        cout<<"\t\t\t\t      #     @                           @     #         \n";
//        cout<<"\t\t\t\t       #     @                         @     #         \n";
//        cout<<"\t\t\t\t        #      @ @ @ @ @ @ @ @ @ @ @ @      #            \n";
//        cout<<"\t\t\t\t         #                                 #              \n";
//        cout<<"\t\t\t\t           # # # # # # # # # # # # # # # #                \n";

     }

     void SSS(){

        cout<<"\t\t\t\t";
        textColor(4);
        cout<<"\n";
        cout<<"\t\t\t\t        * * * *       * * * *        * * * *      \n";
        cout<<"\t\t\t\t       *             *              *        \n";
        cout<<"\t\t\t\t       *             *              *           \n";
        cout<<"\t\t\t\t        * * * *       * * * *        * * * *   \n";
        cout<<"\t\t\t\t               *             *              *   \n";
        cout<<"\t\t\t\t               *             *              *  \n";
        cout<<"\t\t\t\t        * * * *       * * * *        * * * * \n";
        cout<<"\t\t\t\t";
    }




     void leftCir()
        {
            textColor(5);
           int ccst=55,rrst=3,i=0;
           for(i=1;i<=68;i++)
           {
               if(i<8)
               {
                   jump(ccst,rrst);
                   cout<<"#";
                   Sleep(40);
                   ccst=ccst-2;
               }
               else if(i>8&&i<=12)
               {
                   jump(ccst,rrst);
                   cout<<"#";
                   Sleep(40);
                   ccst=ccst-1;rrst=rrst+1;
               }
               else if(i>12&&i<=23)
               {
                   jump(ccst,rrst);
                   cout<<"#";
                   Sleep(40);
                   //ccst=ccst-2;
                   rrst +=1;
               }
               else if(i>23&&i<=27)
               {
                   jump(ccst,rrst);
                   cout<<"#";
                   Sleep(40);
                   ccst=ccst+1; rrst +=1;
               }
               else if(i>27&&i<=41)
               {
                   jump(ccst,rrst);
                   cout<<"#";
                   Sleep(40);
                   ccst=ccst+2;
               }
               else if(i>41&&i<=45)
               {
                   jump(ccst,rrst);
                   cout<<"#";
                   Sleep(40);
                   ccst=ccst+1;rrst=rrst-1;
               }
               else if(i>45&&i<=56)
               {
                   jump(ccst,rrst);
                   cout<<"#";
                   Sleep(40);
                   rrst -=1;
               }
               else if(i>56&&i<=60)
               {
                   jump(ccst,rrst);
                   cout<<"#";
                   Sleep(40);
                   ccst=ccst-1; rrst -=1;
               }
               else if(i>60&&i<=68)
               {
                   jump(ccst,rrst);
                   cout<<"#";
                   Sleep(40);
                   ccst=ccst-2;
               }

           }
        }

        //left Circle End

        //Right Cir Open
        void rightCir()
        {
            textColor(6);
           int cst=55,rst=4,i=0;
           for(int i=1;i<=60;i++)
           {
               if(i<=6)
               {
                   jump(cst,rst);
                   cout<<"*";
                   Sleep(45);
                   cst +=2;
               }
               else if(i>6&&i<=10)
               {
                   jump(cst,rst);
                   cout<<"*";
                   Sleep(45);
                   cst=cst+1;rst +=1;
               }
               else if(i>10&&i<=19)
               {
                   jump(cst,rst);
                   cout<<"*";
                   Sleep(45);
                   rst+=1;
               }
               else if(i>19&&i<=23)
               {
                   jump(cst,rst);
                   cout<<"*";
                   Sleep(45);
                   cst=cst-1; rst+=1;
               }
               else if(i>23&&i<=35)
               {
                   jump(cst,rst);
                   cout<<"*";
                   Sleep(45);
                   cst=cst-2;
               }
               else if(i>35&&i<=39)
               {
                   jump(cst,rst);
                   cout<<"*";
                   Sleep(45);
                   cst=cst-1;rst -=1;
               }
               else if(i>39&&i<49)
               {
                   jump(cst,rst);
                   cout<<"*";
                   Sleep(45);
                   rst-=1;
               }
               else if(i>49&&i<=53)
               {
                   jump(cst,rst);
                   cout<<"*";
                   Sleep(45);
                   cst=cst+1; rst-=1;
               }
               else if(i>53&&i<=60)
               {
                   jump(cst,rst);
                   cout<<"*";
                   Sleep(45);
                   cst=cst+2;
               }
           }
        }

         void Omm()
           {
            textColor(4);
            jump(49,10);
            cout<<"@";
            Sleep(80);
            jump(49,9);
            cout<<"@";
            Sleep(80);
            jump(51,8);
            cout<<"@";
            Sleep(80);
            jump(53,7);
            cout<<"@";
            Sleep(80);
            jump(55,7);
            cout<<"@";
            Sleep(80);
            jump(57,7);
            cout<<"@";
            Sleep(80);
            jump(59,8);
            cout<<"@";
            Sleep(80);
            jump(61,9);
            cout<<"@";
            Sleep(80);
            jump(61,10);
            cout<<"@";
            Sleep(80);
            jump(59,11);
            cout<<"@";
            Sleep(80);
            jump(57,12);
            cout<<"@";
            Sleep(80);
            jump(53,14);
            cout<<"@";
            Sleep(80);
                         // Second Wala
            jump(55,13);
            cout<<"@";
            Sleep(80);
            jump(57,14);
            cout<<"@";
            Sleep(80);
            jump(59,15);
            cout<<"@";
            Sleep(80);
            jump(61,16);
            cout<<"@";
            Sleep(80);
            jump(61,17);
            cout<<"@";
            Sleep(80);
            jump(59,18);
            cout<<"@";
            Sleep(80);
            jump(57,19);
            cout<<"@";
            Sleep(80);
            jump(55,19);
            cout<<"@";
            Sleep(80);
            jump(53,19);
            cout<<"@";
            Sleep(80);
            jump(51,18);
            cout<<"@";
            Sleep(80);
            jump(49,17);
            cout<<"@";
            Sleep(80);
            jump(47,16);
            cout<<"@";
            Sleep(80);
            jump(45,15);
            cout<<"@";
            Sleep(80);
            jump(43,16);
            cout<<"@";
            Sleep(80);



                    // last wala
            jump(60,14);
            cout<<"@";
            Sleep(80);
            jump(62,14);
            cout<<"@";
            Sleep(80);
            jump(64,14);
            cout<<"@";
            Sleep(80);
//            jump(66,12);
//            cout<<"@";
//            Sleep(80);
            jump(65,15);
            cout<<"@";
            Sleep(80);

            jump(65,16);
            cout<<"@";
            Sleep(80);
            jump(64,17);
            cout<<"@";
            Sleep(80);
            jump(63,18);
            cout<<"@";
            Sleep(80);
            jump(64,19);
            cout<<"@";
            Sleep(80);
            jump(66,19);
            cout<<"@";
            Sleep(80);
            jump(67,18);
            cout<<"@";
            Sleep(80);

            //chandra bindu

            Sleep(100);
            jump(52,5);
            cout<<"@";
            Sleep(100);
            jump(54,6);
            cout<<"@";
            Sleep(100);
            jump(56,6);
            cout<<"@";
            Sleep(100);
            jump(58,5);
            cout<<"@";
            Sleep(100);
            jump(55,5);
            cout<<"^";

//            Sleep(2000);
            //jump(55,30);
        }

        void bindAll(){
             leftCir();
            rightCir();
            Omm();
        }
        void playAll(){

            thread t(Om);
            thread t1(bindAll);
            t.join();
            t1.join();

        }

/*
        int main()

        {

            leftCir();
            rightCir();
            Omm();
            //OM Start
            /*
            {
            jump(49,8);
            cout<<"*";
            Sleep(80);
            jump(49,7);
            cout<<"*";
            Sleep(80);
            jump(51,6);
            cout<<"*";
            Sleep(80);
            jump(53,5);
            cout<<"*";
            Sleep(80);
            jump(55,5);
            cout<<"*";
            Sleep(80);
            jump(57,5);
            cout<<"*";
            Sleep(80);
            jump(59,6);
            cout<<"*";
            Sleep(80);
            jump(61,7);
            cout<<"*";
            Sleep(80);
            jump(61,8);
            cout<<"*";
            Sleep(80);
            jump(59,9);
            cout<<"*";
            Sleep(80);
            jump(57,10);
            cout<<"*";
            Sleep(80);
            jump(53,12);
            cout<<"*";
            Sleep(80);
                         // Second Wala
            jump(55,11);
            cout<<"*";
            Sleep(80);
            jump(57,12);
            cout<<"*";
            Sleep(80);
            jump(59,13);
            cout<<"*";
            Sleep(80);
            jump(61,14);
            cout<<"*";
            Sleep(80);
            jump(61,15);
            cout<<"*";
            Sleep(80);
            jump(59,16);
            cout<<"*";
            Sleep(80);
            jump(57,17);
            cout<<"*";
            Sleep(80);
            jump(55,17);
            cout<<"*";
            Sleep(80);
            jump(53,17);
            cout<<"*";
            Sleep(80);
            jump(51,16);
            cout<<"*";
            Sleep(80);
            jump(49,15);
            cout<<"*";
            Sleep(80);
            jump(47,14);
            cout<<"*";
            Sleep(80);
            jump(45,13);
            cout<<"*";
            Sleep(80);
            jump(43,14);
            cout<<"*";
            Sleep(80);



                    // last wala
            jump(60,12);
            cout<<"*";
            Sleep(80);
            jump(62,12);
            cout<<"*";
            Sleep(80);
            jump(64,12);
            cout<<"*";
            Sleep(80);
//            jump(66,12);
//            cout<<"*";
//            Sleep(80);
            jump(65,13);
            cout<<"*";
            Sleep(80);

            jump(65,14);
            cout<<"*";
            Sleep(80);
            jump(64,15);
            cout<<"*";
            Sleep(80);
            jump(63,16);
            cout<<"*";
            Sleep(80);
            jump(64,17);
            cout<<"*";
            Sleep(80);
            jump(66,17);
            cout<<"*";
            Sleep(80);
            jump(67,16);
            cout<<"*";
            Sleep(80);

            //chndra bindu

            Sleep(200);
            jump(52,3);
            cout<<"*";
            Sleep(200);
            jump(54,4);
            cout<<"*";
            Sleep(200);
            jump(56,4);
            cout<<"*";
            Sleep(200);
            jump(58,3);
            cout<<"*";
            Sleep(200);
            jump(55,3);
            cout<<"^";

            Sleep(2000);
            jump(55,30);
        }* / //OM END

        } */

