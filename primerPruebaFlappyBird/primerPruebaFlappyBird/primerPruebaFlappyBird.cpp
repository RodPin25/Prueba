#include <iostream>
#include <windows.h>
#include <stdio.h>
#include <conio.h>
#include <cstdlib>
#include <ctime>


using namespace std;

//Prototipos de funciones
void gotoxy(int x, int y);
void paintBorders();

//Prototipos de funciones

//Class que controlara al pajarito
class bird {
    int x;
    int y;
    int hearts;
public:
    bird(int _x, int _y, int _hearts) : x(_x), y(_y), hearts(_hearts) {}
    //void paintBird();
};


int main()
{
    paintBorders();
}

void gotoxy(int x, int y) {
    HANDLE hCon;
    hCon = GetStdHandle(STD_OUTPUT_HANDLE);
    COORD dwPos;
    dwPos.X = x;
    dwPos.Y = y;


    SetConsoleCursorPosition(hCon, dwPos);
}

void paintBorders() {
    //Los limites en x son 1 y 119
    // Los limites en y son 0 y 29
    for (int i = 0; i < 120; i++) {
        gotoxy(i, 0);
        printf("=");

        gotoxy(i, 29);
        printf("=");
    }

    for (int i = 1; i < 29; i++) {
        gotoxy(0, i);
        printf("%c",186);

        gotoxy(119, i);
        printf("%c",186);
    }
}
