#include <iostream>
#include <string>

using namespace std;

int main() {
    int t;
    cin >> t;

    while (t--) {
        char board[3][3];
        for (int i = 0; i < 3; ++i) {
            for (int j = 0; j < 3; ++j) {
                cin >> board[i][j];
            }
        }

        bool draw = true;
        char winner = '.';

        for (int i = 0; i < 3; ++i) {
       
            if (board[i][0] == board[i][1] && board[i][1] == board[i][2] && board[i][0] != '.') {
                winner = board[i][0];
                draw = false;
                break;
            }
    
            if (board[0][i] == board[1][i] && board[1][i] == board[2][i] && board[0][i] != '.') {
                winner = board[0][i];
                draw = false;
                break;
            }
        }

    
        if (board[0][0] == board[1][1] && board[1][1] == board[2][2] && board[0][0] != '.') {
            winner = board[0][0];
            draw = false;
        }
        if (board[0][2] == board[1][1] && board[1][1] == board[2][0] && board[0][2] != '.') {
            winner = board[0][2];
            draw = false;
        }

        if (draw) {
            cout << "DRAW" << endl;
        } else {
            cout << winner << endl;
        }
    }

    return 0;
}
