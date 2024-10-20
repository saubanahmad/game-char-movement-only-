#include <iostream>
#include <windows.h>
using namespace std;

void map1();

void printplayerL();
void eraseplayerL();
void movepL();
void printplayerR();
void movepR();
void eraseplayerR();
void printplayerU();
void eraseplayerU();
void movepU();
void printplayerD();
void eraseplayerD();
void movepD();

void gotoxy(int x, int y);


int pprx=10, ppry=35;
int eprx=10, epry=35;


main()
{
    map1();
    printplayerR();
    while(true)
    {

        if (GetAsyncKeyState(VK_DOWN))
        {
            //eraseplayerL();
            //eraseplayerR();
            printplayerD();
            movepD();
        }
    }
}

void printplayerL()
{
    int pplx=pprx, pply=ppry;
    int eplx=eprx, eply=epry;
    gotoxy(pplx, pply);
    cout<<"                       "<<endl;
    gotoxy(pplx, pply+1);
    cout<<"          ____________  "<<endl;
    gotoxy(pplx, pply+2);
    cout<<"         |     ____   | "<<endl;
    gotoxy(pplx, pply+3);
    cout<<"_________|____|    |  | "<<endl;
    gotoxy(pplx, pply+4);
    cout<<"______________|    |  | "<<endl;
    gotoxy(pplx, pply+5);
    cout<<"         |    |____|  | "<<endl;
    gotoxy(pplx, pply+6);
    cout<<"         |____________| "<<endl;
    gotoxy(pplx, pply+7);
    cout<<"                       "<<endl;
    gotoxy(pplx, pply+8);
    cout<<"                       "<<endl;
}
void eraseplayerL()
{
    int pplx=pprx, pply=ppry;
    int eplx=eprx, eply=epry;
    gotoxy(eplx, eply);
    cout<<"                       "<<endl;
    gotoxy(eplx, eply+1);
    cout<<"                       "<<endl;
    gotoxy(eplx, eply+2);
    cout<<"                       "<<endl;
    gotoxy(eplx, eply+3);
    cout<<"                       "<<endl;
    gotoxy(eplx, eply+4);
    cout<<"                       "<<endl;
    gotoxy(eplx, eply+5);
    cout<<"                       "<<endl;
    gotoxy(eplx, eply+6);
    cout<<"                       "<<endl;
    gotoxy(eplx, eply+7);
    cout<<"                       "<<endl;
    gotoxy(eplx, eply+8);
    cout<<"                       "<<endl;
}
void movepL()
{
    eraseplayerL();
    pprx=pprx-1;
    printplayerL();
}
void printplayerR()
{
    gotoxy(pprx, ppry);
    cout<<"                        "<<endl;
    gotoxy(pprx, ppry+1);
    cout<<"  ____________          "<<endl;
    gotoxy(pprx, ppry+2);
    cout<<" |   ____     |         "<<endl;
    gotoxy(pprx, ppry+3);
    cout<<" |  |    |____|_________"<<endl;
    gotoxy(pprx, ppry+4);
    cout<<" |  |     ______________"<<endl;
    gotoxy(pprx, ppry+5);
    cout<<" |  |____|    |         "<<endl;
    gotoxy(pprx, ppry+6);
    cout<<" |____________|         "<<endl;
    gotoxy(pprx, ppry+7);
    cout<<"                        "<<endl;
    gotoxy(pprx, ppry+8);
    cout<<"                        "<<endl;
}
void eraseplayerR()
{
    gotoxy(eprx, epry);
    cout<<"                        "<<endl;
    gotoxy(eprx, epry+1);
    cout<<"                        "<<endl;
    gotoxy(eprx, epry+2);
    cout<<"                        "<<endl;
    gotoxy(eprx, epry+3);
    cout<<"                        "<<endl;
    gotoxy(eprx, epry+4);
    cout<<"                        "<<endl;
    gotoxy(eprx, epry+5);
    cout<<"                        "<<endl;
    gotoxy(pprx, ppry+6);
    cout<<"                        "<<endl;
    gotoxy(pprx, ppry+7);
    cout<<"                        "<<endl;
    gotoxy(pprx, ppry+8);
    cout<<"                        "<<endl;
}
void movepR()
{
    
    eraseplayerR();
    pprx=pprx+1;
    printplayerR();
}

void printplayerU()
{
    int ppux=pprx, ppuy=ppry;
    int epux=eprx, epuy=epry;
    gotoxy(ppux,ppuy);
    cout<<"          | |          "<<endl;
    gotoxy(ppux,ppuy+1);
    cout<<"          | |          "<<endl;
    gotoxy(ppux,ppuy+2);
    cout<<"      ____| |____      "<<endl;
    gotoxy(ppux,ppuy+3);
    cout<<"     |    | |    |     "<<endl;
    gotoxy(ppux,ppuy+4);
    cout<<"     |  __| |__  |     "<<endl;
    gotoxy(ppux,ppuy+5);
    cout<<"     | |       | |     "<<endl;
    gotoxy(ppux,ppuy+6);
    cout<<"     | |_______| |     "<<endl;
    gotoxy(ppux,ppuy+7);
    cout<<"     |___________|     "<<endl;
}
void eraseplayerU()
{
    int ppux=pprx, ppuy=ppry;
    int epux=eprx, epuy=epry;
    gotoxy(ppux,ppuy);
    cout<<"                       "<<endl;
    gotoxy(ppux,ppuy+1);
    cout<<"                       "<<endl;    
    gotoxy(ppux,ppuy+2);
    cout<<"                       "<<endl;
    gotoxy(ppux,ppuy+3);
    cout<<"                       "<<endl;
    gotoxy(ppux,ppuy+4);
    cout<<"                       "<<endl;
    gotoxy(ppux,ppuy+5);
    cout<<"                       "<<endl;
    gotoxy(ppux,ppuy+6);
    cout<<"                       "<<endl;
    gotoxy(ppux,ppuy+7);
    cout<<"                       "<<endl;
}
void movepU()
{
    eraseplayerU();
    ppry=ppry-1;
    printplayerU();
}
void printplayerD()
{
    int ppdx=pprx, ppdy=ppry;
    int epdx=eprx, epdy=epry;
    gotoxy(ppdx, ppdy);
    cout<<"      ___________      "<<endl;
    gotoxy(ppdx+1, ppdy);
    cout<<"     |  _______  |     "<<endl;
    gotoxy(ppdx+2, ppdy);
    cout<<"     | |       | |     "<<endl;
    gotoxy(ppdx+3, ppdy);
    cout<<"     | |_______| |     "<<endl;
    gotoxy(ppdx+4, ppdy);
    cout<<"     |    | |    |     "<<endl;
    gotoxy(ppdx+5, ppdy);
    cout<<"     |____| |____|     "<<endl;
    gotoxy(ppdx+6, ppdy);
    cout<<"          | |          "<<endl;
    gotoxy(ppdx+7, ppdy);
    cout<<"          | |          "<<endl;
    gotoxy(ppdx+8, ppdy);
    cout<<"          | |          "<<endl;
}
void eraseplayerD()

{
    int ppdx=pprx, ppdy=ppry;
    int epdx=eprx, epdy=epry;
    gotoxy(ppdx, ppdy);
    cout<<"                       "<<endl;
    gotoxy(ppdx+1, ppdy);
    cout<<"                       "<<endl;
    gotoxy(ppdx+2, ppdy);
    cout<<"                       "<<endl;
    gotoxy(ppdx+3, ppdy);
    cout<<"                       "<<endl;
    gotoxy(ppdx+4, ppdy);
    cout<<"                       "<<endl;
    gotoxy(ppdx+5, ppdy);
    cout<<"                       "<<endl;
    gotoxy(ppdx+6, ppdy);
    cout<<"                       "<<endl;
    gotoxy(ppdx+7, ppdy);
    cout<<"                       "<<endl;
    gotoxy(ppdx+8, ppdy);
    cout<<"                       "<<endl;
} 
void movepD()
{
    eraseplayerD();
    ppry=ppry+1;
    printplayerD();
    Sleep(200);
}


void map1()
{
    system("cls");
    cout<<" @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@ "<<endl;
    cout<<" @@                                                                                                                                                                                                                                                              @@ "<<endl;
    cout<<" @@                                                                                                                                                                                                                                                              @@ "<<endl;
    cout<<" @@                                                                                                                                                                                                                                                              @@ "<<endl;
    cout<<" @@                                                                                                                                                                                                                                                              @@ "<<endl;
    cout<<" @@                                                                                                                                                                                                                                                              @@ "<<endl;
    cout<<" @@                                                                                                                                                                                                                                                              @@ "<<endl;
    cout<<" @@                                                                                                                                                                                                                                                              @@ "<<endl;
    cout<<" @@                                                                                                                                                                                                                                                              @@ "<<endl;
    cout<<" @@                                                                                                                                                                                                                                                              @@ "<<endl;
    cout<<" @@                                                                                                                                                                                                                                                              @@ "<<endl;
    cout<<" @@                                                                                                                                                                                                                                                              @@ "<<endl;
    cout<<" @@                                                                                                                                                                                                                                                              @@ "<<endl;
    cout<<" @@                                                                                                                                                                                                                                                              @@ "<<endl;
    cout<<" @@                                                                                                                                                                                                                                                              @@ "<<endl;
    cout<<" @@                                                                                                                                                                                                                                                              @@ "<<endl;
    cout<<" @@                                                                                                                                                                                                                                                              @@ "<<endl;
    cout<<" @@                                                                                                                                                                                                                                                              @@ "<<endl;
    cout<<" @@                                                                                                                                                                                                                                                              @@ "<<endl;
    cout<<" @@                                                                                                                                                                                                                                                              @@ "<<endl;
    cout<<" @@                                                                                                                                                                                                                                                              @@ "<<endl;
    cout<<" @@                                                                                                                                                                                                                                                              @@ "<<endl;
    cout<<" @@                                                                                                                                                                                                                                                              @@ "<<endl;
    cout<<" @@                                                                                                                                                                                                                                                              @@ "<<endl;
    cout<<" @@                                                                                                                                                                                                                                                              @@ "<<endl;
    cout<<" @@                                                                                                                                                                                                                                                              @@ "<<endl;
    cout<<" @@                                                                                                                                                                                                                                                              @@ "<<endl;
    cout<<" @@                                                                                                                                                                                                                                                              @@ "<<endl;
    cout<<" @@                                                                                                                                                                                                                                                              @@ "<<endl;
    cout<<" @@                                                                                                                                                                                                                                                              @@ "<<endl;
    cout<<" @@                                                                                                                                                                                                                                                              @@ "<<endl;
    cout<<" @@                                                                                                                                                                                                                                                              @@ "<<endl;
    cout<<" @@                                                                                                                                                                                                                                                              @@ "<<endl;
    cout<<" @@                                                                                                                                                                                                                                                              @@ "<<endl;
    cout<<" @@                                                                                                                                                                                                                                                              @@ "<<endl;
    cout<<" @@                                                                                                                                                                                                                                                              @@ "<<endl;
    cout<<" @@                                                                                                                                                                                                                                                              @@ "<<endl;
    cout<<" @@                                                                                                                                                                                                                                                              @@ "<<endl;
    cout<<" @@                                                                                                                                                                                                                                                              @@ "<<endl;
    cout<<" @@                                                                                                                                                                                                                                                              @@ "<<endl;
    cout<<" @@                                                                                                                                                                                                                                                              @@ "<<endl;
    cout<<" @@                                                                                                                                                                                                                                                              @@ "<<endl;
    cout<<" @@                                                                                                                                                                                                                                                              @@ "<<endl;
    cout<<" @@                                                                                                                                                                                                                                                              @@ "<<endl;
    cout<<" @@                                                                                                                                                                                                                                                              @@ "<<endl;
    cout<<" @@                                                                                                                                                                                                                                                              @@ "<<endl;
    cout<<" @@                                                                                                                                                                                                                                                              @@ "<<endl;
    cout<<" @@                                                                                                                                                                                                                                                              @@ "<<endl;
    cout<<" @@                                                                                                                                                                                                                                                              @@ "<<endl;
    cout<<" @@                                                                                                                                                                                                                                                              @@ "<<endl;
    cout<<" @@                                                                                                                                                                                                                                                              @@ "<<endl;
    cout<<" @@                                                                                                                                                                                                                                                              @@ "<<endl;
    cout<<" @@                                                                                                                                                                                                                                                              @@ "<<endl;
    cout<<" @@                                                                                                                                                                                                                                                              @@ "<<endl;
    cout<<" @@                                                                                                                                                                                                                                                              @@ "<<endl;
    cout<<" @@                                                                                                                                                                                                                                                              @@ "<<endl;
    cout<<" @@                                                                                                                                                                                                                                                              @@ "<<endl;
    cout<<" @@                                                                                                                                                                                                                                                              @@ "<<endl;
    cout<<" @@                                                                                                                                                                                                                                                              @@ "<<endl;
    cout<<" @@                                                                                                                                                                                                                                                              @@ "<<endl;
    cout<<" @@                                                                                                                                                                                                                                                              @@ "<<endl;
    cout<<" @@                                                                                                                                                                                                                                                              @@ "<<endl;
    cout<<" @@                                                                                                                                                                                                                                                              @@ "<<endl;
    cout<<" @@                                                                                                                                                                                                                                                              @@ "<<endl;
    cout<<" @@                                                                                                                                                                                                                                                              @@ "<<endl;
    cout<<" @@                                                                                                                                                                                                                                                              @@ "<<endl;
    cout<<" @@                                                                                                                                                                                                                                                              @@ "<<endl;
    cout<<" @@                                                                                                                                                                                                                                                              @@ "<<endl;
    cout<<" @@                                                                                                                                                                                                                                                              @@ "<<endl;
    cout<<" @@                                                                                                                                                                                                                                                              @@ "<<endl;
    cout<<" @@                                                                                                                                                                                                                                                              @@ "<<endl;
    cout<<" @@                                                                                                                                                                                                                                                              @@ "<<endl;
    cout<<" @@                                                                                                                                                                                                                                                              @@ "<<endl;
    cout<<" @@                                                                                                                                                                                                                                                              @@ "<<endl;
    cout<<" @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@ "<<endl;    
   
}

void gotoxy(int x, int y)
{
    COORD coord;
    coord.X = x;
    coord.Y = y;
    SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE),coord);
}