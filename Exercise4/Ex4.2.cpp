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

int main() {
    int rows, cols;
    cin >> rows;
    cin >> cols;

    // 'playground' is a pointer to a dynamically-allocated array of pointers
    // to 'tile' structures (one per row)
    tile **playground = new tile*[rows];
    for (int i = 0; i < rows; i++) {
        // Each pointer in the 'playground' array points to a
        // dynamically-allocated array of tiles
        playground[i] = new tile[cols];
    }

    int x, y;
    x = rows/2;
    y = cols/2;

    
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            playground[i][j].x = j;
            playground[i][j].y = i;
            playground[i][j].isperson = (j == y && i == x);
            playground[i][j].isWall = (j==0 || i==(rows-1) || (i==0 && j!=3) || j==(cols-1));
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
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
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
        
        for (int i = 0; i < rows; i++) {
            for (int j = 0; j < cols; j++) {
                playground[i][j].x = j;
                playground[i][j].y = i;
                playground[i][j].isperson = (j == y && i == x);
                playground[i][j].isWall = (j==0 || i==(rows-1) || (i==0 && j!=3) || j==(cols-1));
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
        for (int i = 0; i < rows; i++) {
            for (int j = 0; j < cols; j++) {
                cout << symbol(playground[i][j].type);
            }
            cout << endl;
        }
            cin >> input;
    }

}