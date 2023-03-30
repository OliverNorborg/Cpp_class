#include <iostream>
#include <string>
#include <stdlib.h>     /* Library containing functions such as
                           rand (a generator of random numbers) */
using namespace std;

// We declare here an enumeration type called "material"
enum material {wood, stone, person};

struct tile {
    int x, y;
    bool isWall;
    bool isperson;
    material type;
};

char symbol(material m) {
    // Switch is a sort of if-then-else, useful when there many cases.
    // Remember to always break each branch!
    switch (m) {
    case wood:
        return ' ';
    case stone:
        return '*';
    case person:
        return 'O';
    default:
        return '?';
    }
}
#define NROWS 12
#define NCOLS 16


int main() {
    tile playground[NROWS][NCOLS];

    int x, y;
    x = 5;
    y = 5;
    
    for (int i = 0; i < NROWS; i++) {
        for (int j = 0; j < NCOLS; j++) {
            playground[i][j].x = j;
            playground[i][j].y = i;
            playground[i][j].isperson = (j == y && i == x);
            playground[i][j].isWall = (j==0 || i==(NROWS-1) || (i==0 && j!=3) || j==(NCOLS-1));
            if (playground[i][j].isWall) {
                playground[i][j].type = stone;
            } else if (playground[i][j].isperson){
                playground[i][j].type = person;
            }else {
                playground[i][j].type = wood;
            }
        }
    }

    // Printing the playground
    for (int i = 0; i < NROWS; i++) {
        for (int j = 0; j < NCOLS; j++) {
            cout << symbol(playground[i][j].type);
        }
        cout << endl;
    }

    char input;
    cin >> input;

    while(input != 'q'){
        if(input == 'u'){
            if(!playground[x-1][y].isWall){
                x--;
            }
        }else if(input == 'd'){
            if(!playground[x+1][y].isWall){
                x++;
            }
        }else if(input == 'l'){
            if(!playground[x][y-1].isWall){
                y--;
            }
        }else if(input == 'r'){
            if(!playground[x][y+1].isWall){
                y++;
            }
        }
        
        for (int i = 0; i < NROWS; i++) {
            for (int j = 0; j < NCOLS; j++) {
                playground[i][j].x = j;
                playground[i][j].y = i;
                playground[i][j].isperson = (j == y && i == x);
                playground[i][j].isWall = (j==0 || i==(NROWS-1) || (i==0 && j!=3) || j==(NCOLS-1));
                if (playground[i][j].isWall) {
                    playground[i][j].type = stone;
                } else if (playground[i][j].isperson){
                    playground[i][j].type = person;
                }else {
                    playground[i][j].type = wood;
                }
            }
        }

        // Printing the playground
        for (int i = 0; i < NROWS; i++) {
            for (int j = 0; j < NCOLS; j++) {
                cout << symbol(playground[i][j].type);
            }
            cout << endl;
        }
            cin >> input;
    }

}