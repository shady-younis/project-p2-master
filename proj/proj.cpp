#include <iostream>
#include <conio.h>
using namespace std;
void display(char x[][100], int& hr, int& hc) {
    for (int i = 0; i < 20; i++) {
        for (int j = 0; j < 100; j++) {
            cout << x[i][j];
        }
        cout << endl;
    }
}
// tofa7a bt3mel 7aga 3l ladder
void tofa7a(char x[][100], int& tr, int& tc) {
	x[tr][tc] = 229;
}//
void drawladder(char x[][100], int& lr, int& lc) {
    x[lr - 10][lc + 0] = 'o';
    x[lr - 10][lc + 1] = '=';
    x[lr - 10][lc + 2] = '=';
    x[lr - 10][lc + 3] = '=';
    x[lr - 10][lc + 4] = 'o';
    x[lr - 9][lc + 0] = '|';
    x[lr - 9][lc + 1] = '=';
    x[lr - 9][lc + 2] = '=';
    x[lr - 9][lc + 3] = '=';
    x[lr - 9][lc + 4] = '|';
    x[lr - 8][lc + 0] = '|';
    x[lr - 8][lc + 1] = '=';
    x[lr - 8][lc + 2] = '=';
    x[lr - 8][lc + 3] = '=';
    x[lr - 8][lc + 4] = '|';
    x[lr - 7][lc + 0] = '|';
    x[lr - 7][lc + 1] = '=';
    x[lr - 7][lc + 2] = '=';
    x[lr - 7][lc + 3] = '=';
    x[lr - 7][lc + 4] = '|';
    x[lr - 6][lc + 0] = '|';
    x[lr - 6][lc + 1] = '=';
    x[lr - 6][lc + 2] = '=';
    x[lr - 6][lc + 3] = '=';
    x[lr - 6][lc + 4] = '|';
    x[lr - 5][lc + 0] = '|';
    x[lr - 5][lc + 1] = '=';
    x[lr - 5][lc + 2] = '=';
    x[lr - 5][lc + 3] = '=';
    x[lr - 5][lc + 4] = '|';
    x[lr - 4][lc + 0] = '|';
    x[lr - 4][lc + 1] = '=';
    x[lr - 4][lc + 2] = '=';
    x[lr - 4][lc + 3] = '=';
    x[lr - 4][lc + 4] = '|';
    x[lr - 3][lc + 0] = '|';
    x[lr - 3][lc + 1] = '=';
    x[lr - 3][lc + 2] = '=';
    x[lr - 3][lc + 3] = '=';
    x[lr - 3][lc + 4] = '|';
    x[lr - 2][lc + 0] = '|';
    x[lr - 2][lc + 1] = '=';
    x[lr - 2][lc + 2] = '=';
    x[lr - 2][lc + 3] = '=';
    x[lr - 2][lc + 4] = '|';
    x[lr - 1][lc + 0] = '|';
    x[lr - 1][lc + 1] = '=';
    x[lr - 1][lc + 2] = '=';
    x[lr - 1][lc + 3] = '=';
    x[lr - 1][lc + 4] = '|';
    x[lr - 0][lc + 0] = 'o';
    x[lr - 0][lc + 1] = '=';
    x[lr - 0][lc + 2] = '=';
    x[lr - 0][lc + 3] = '=';
    x[lr - 0][lc + 4] = 'o';
}
int checkmove(char x[][100], int& hr, int& hc, char letter) {
    if (letter == 'a') {
        if ((x[hr][hc - 2] == ' ' && x[hr + 1][hc - 2] == ' ' && x[hr + 2][hc - 2] == ' ') || (x[hr][hc - 2] == '|' || x[hr][hc-2] == '=' || x[hr][hc - 2] == 'o')) {
            return 1;
        }

    }
    if (letter == 'w') {
        if (x[hr - 1][hc] == ' ' || x[hr - 1][hc] == '|' || x[hr - 1][hc] == '=') {
            return 1;
        }
    }
    if (letter == 'd') {
        if ((x[hr][hc + 2] == ' ' && x[hr + 1][hc + 2] == ' ' && x[hr + 2][hc + 2] == ' ' )|| (x[hr][hc + 2] == '|' || x[hr][hc+2] == '=' || x[hr][hc + 2] == 'o')) {
            return 1;
        }
    }
    if (letter == 's') {
        if (x[hr + 3][hc] == ' ' || x[hr + 3][hc] == '|' || x[hr + 3][hc] == '=') {
            return 1;
        }
    }
    return 0; 
}            
void drawhero(char x[][100], int& hr, int& hc)
{            
             
    x[hr][hc] = 'O';
    x[hr + 1][hc - 1] = '/';
    x[hr + 1][hc] = '|';
    x[hr + 1][hc + 1] = '\\';
    x[hr + 2][hc - 1] = '/';
    x[hr + 2][hc + 1] = '\\';


}
void clearhero(char x[][100], int& hr, int& hc) {
    x[hr][hc] = ' ';
    x[hr + 1][hc - 1] = ' ';
    x[hr + 1][hc] = ' ';
    x[hr + 1][hc + 1] = ' ';
    x[hr + 2][hc - 1] = ' ';
    x[hr + 2][hc + 1] = ' ';
}
void movehero(char x[][100], int& hr, int& hc, char letter, char& dir) {
    clearhero(x, hr, hc);
    int dirr = hr, dirc = hc;

    if (letter == 'a') {
        dirc--;
        dir = 'a';
    }
    if (letter == 'd') {
        dirc++;
        dir = 'd';
    }
    if (letter == 'w') {
        dirr--;
        dir = 'w';
    }
    if (letter == 's') {
        dirr++;
        dir = 's';
    }
    if (checkmove(x, hr, hc, letter)) {
        hr = dirr;
        hc = dirc;
    }
    drawhero(x, hr, hc);
}
void jumpstate(char x[][100], int& hr, int& hc, int jstate, int &count) {
    
    if (jstate == 1&&count<4) {
        if (checkmove(x, hr, hc, 'w')) {
            clearhero(x, hr, hc);
            hr--;
            drawhero(x, hr, hc);
        }

        system("cls");
        display(x, hr, hc);
        count++;
    }
    else {
		jstate = 0;
        count = 0;
    }

}
void jump(char x[][100], int& hr, int& hc, int &jstate) {

    if (checkmove(x, hr, hc, 'w')) {
        jstate=1;
    }


}
void map(char x[][100]) {
    for (int i = 0; i < 20; i++) {
        for (int j = 0; j < 100; j++) {
            if (i == 0 || i == 19 || j == 0 || j == 99)
                x[i][j] = 219;
            else
                x[i][j] = ' ';
        }
    }
    for (int j = 0; j < 30; j++) {
        x[15][j] = 219;
    }

    for (int j = 35; j < 40; j++) {
        x[15][j] = 219;
    }
    for (int j = 0; j < 15; j++) {
        x[j][60] = 219;
    }
}
void gravity(char x[][100], int& hr, int& hc, char letter,int jstate) {
    if (x[hr + 3][hc] != '|' && x[hr + 3][hc] != '='&&jstate!=1) {
        if (x[hr + 3][hc] == ' ') {
            clearhero(x, hr, hc);
            hr++;
            drawhero(x, hr, hc);
        }
    }
}
void BulletSingle(char x[][100], int& hr, int& hc, char& bulletDir, int& bulletActive, char& bulletChar, int& bx, int& by) {

    if (bulletActive!=1) {
        if (bulletDir == 'a') {
            bx = hr + 1;
            by = hc - 2;
            bulletChar = '<';
        }

        if (bulletDir == 'd') {
            bx = hr + 1;
            by = hc + 2;
            bulletChar = '>';
        }

        if (bulletDir == 'w') {
            bx = hr - 1;
            by = hc;
            bulletChar = '^';
        }

        if (bulletDir == 's') {
            bx = hr + 3;
            by = hc;
            bulletChar = 'v';
        }

        if (x[bx][by] == ' ') {
            bulletActive = 1;
        }
    }
  
}
void SingleUpdate(char x[][100], int& hr, int& hc, char& bulletDir, int& bulletActive, char& bulletChar, int& bx, int& by) {
    if (bulletActive==1) {
        x[bx][by] = ' ';
        if (bx <= 0 || bx >= 19 || by <= 0 || by >= 99 || x[bx][by] != ' ') {
            bulletActive = 0;
        }
        else {
            system("cls");
            display(x, hr, hc);
           

            if (bulletDir == 'a')
                by--;
            if (bulletDir == 'd')
                by++;
            if (bulletDir == 'w')
                bx--;
            if (bulletDir == 's')
                bx++;
        }
        if (x[bx][by] == ' ') {
            x[bx][by] = bulletChar;
        }
        else {
			bulletActive = 0;
        }

    }
}
    void laser(char x[][100], int& hr, int& hc, char dir, char letter)
    {
        if (dir == 'a' && x[hr + 1][hc - 2] == x[hr + 1][hc - 3] && x[hr + 1][hc - 3] == x[hr + 1][hc - 4] && x[hr + 1][hc - 4] == x[hr + 1][hc - 5] && x[hr + 1][hc - 5] == x[hr + 1][hc - 6] && x[hr + 1][hc - 2] == ' ') {
            x[hr + 1][hc - 2] = '-';
            x[hr + 1][hc - 3] = '-';
            x[hr + 1][hc - 4] = '-';
            x[hr + 1][hc - 5] = '-';
            x[hr + 1][hc - 6] = '-';
            for (int i = 0; i < 5; i++)
            {
                system("cls");
                display(x, hr, hc);
            }
            x[hr + 1][hc - 2] = ' ';
            x[hr + 1][hc - 3] = ' ';
            x[hr + 1][hc - 4] = ' ';
            x[hr + 1][hc - 5] = ' ';
            x[hr + 1][hc - 6] = ' ';
        }

        if (dir == 'd' && x[hr + 1][hc + 2] == x[hr + 1][hc + 3] && x[hr + 1][hc + 3] == x[hr + 1][hc + 4] && x[hr + 1][hc + 4] == x[hr + 1][hc + 5] && x[hr + 1][hc + 5] == x[hr + 1][hc + 6] && x[hr + 1][hc + 2] == ' ') {
            x[hr + 1][hc + 2] = '-';
            x[hr + 1][hc + 3] = '-';
            x[hr + 1][hc + 4] = '-';
            x[hr + 1][hc + 5] = '-';
            x[hr + 1][hc + 6] = '-';
            for (int i = 0; i < 5; i++)
            {
                system("cls");
                display(x, hr, hc);
            }
            x[hr + 1][hc + 2] = ' ';
            x[hr + 1][hc + 3] = ' ';
            x[hr + 1][hc + 4] = ' ';
            x[hr + 1][hc + 5] = ' ';
            x[hr + 1][hc + 6] = ' ';
        }

        if (dir == 'w' && x[hr - 1][hc] == x[hr - 2][hc] && x[hr - 2][hc] == x[hr - 3][hc] && x[hr - 3][hc] == x[hr - 4][hc] && x[hr - 4][hc] == x[hr - 5][hc] && x[hr - 1][hc] == ' ') {
            x[hr - 1][hc] = '|';
            x[hr - 2][hc] = '|';
            x[hr - 3][hc] = '|';
            x[hr - 4][hc] = '|';
            x[hr - 5][hc] = '|';
            for (int i = 0; i < 5; i++)
            {
                system("cls");
                display(x, hr, hc);
            }
            x[hr - 1][hc] = ' ';
            x[hr - 2][hc] = ' ';
            x[hr - 3][hc] = ' ';
            x[hr - 4][hc] = ' ';
            x[hr - 5][hc] = ' ';
        }

        if (dir == 's' && x[hr + 3][hc] == x[hr + 4][hc] && x[hr + 4][hc] == x[hr + 5][hc] && x[hr + 3][hc] == ' ') {
            x[hr + 3][hc] = '|';
            x[hr + 4][hc] = '|';
            x[hr + 5][hc] = '|';
            for (int i = 0; i < 5; i++)
            {
                system("cls");
                display(x, hr, hc);
            }
            x[hr + 3][hc] = ' ';
            x[hr + 4][hc] = ' ';
            x[hr + 5][hc] = ' ';
        }
    }


    int main()
    {
		int tr = 14, tc = 36;
		int lr = 18, lc = 30;
        int hr = 8, hc = 4;
        char letter = 'p';
        char dir = 'd';
        char x[20][100];
        char bulletDir = ' ';
        int bulletActive = 0;
        int bx = 0, by = 0;
        char bulletChar = ' ';
        int jstate = 0;
        int countj = 0;
        map(x);
        drawhero(x, hr, hc);
        display(x, hr, hc);
		

        for (;;)
        {
            for (; !_kbhit();)
            {
                gravity(x, hr, hc, letter,jstate);
                SingleUpdate(x, hr, hc, bulletDir, bulletActive, bulletChar, bx, by);
                drawladder(x, lr, lc);
                tofa7a(x, tr, tc);
                jumpstate(x, hr, hc, jstate, countj);
                drawhero(x, hr, hc);
                system("cls");
                display(x, hr, hc);
            }

            letter = _getch();
            if (letter == 'f')
            {
                if (bulletActive != 1) {
                    bulletDir = dir;
                    BulletSingle(x, hr, hc, bulletDir, bulletActive, bulletChar, bx, by);
                }
            }
            if (letter == 'x')
            {
                laser(x, hr, hc, dir, letter);
            }
            if (letter == 'w' && x[hr + 3][hc] != ' '&& (x[hr - 1][hc] != '|' && x[hr - 1][hc] != '='))
            {
                if (jstate == 0) {
                    jump(x, hr, hc, jstate);
                }
                else {
					jumpstate(x, hr, hc, jstate,countj);
                }
                    if (_kbhit())
                    {
                        letter = _getch();
                    }
                    movehero(x, hr, hc, letter, dir);
                
            }
            else
            {
                movehero(x, hr, hc, letter, dir);
            }
            SingleUpdate(x, hr, hc, bulletDir, bulletActive, bulletChar, bx, by);
            

        }
        return 0;
    }


