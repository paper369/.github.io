#include <iostream>
using namespace std;
int main(void){
    
    int H, W, h0, w0;
    std::cin >> H >> W >> h0 >> w0;
    char s, Num[H][W];
    
    for (int i=0; i < H; i++){
        for (int n =0; n < W; n++){
            std::cin >> s;
            Num[i][n] = s;
        }
    }
    
    
    int x = h0 - 1, y = w0 - 1 ,z = 0;              //zは方向記録用
    while ( x > -1 && x < H && y > -1 && y < W ){
        if (Num[x][y] == '.'){
            Num[x][y] = '*';
            z++;
            }
        else {
            Num[x][y] = '.';
            z--;
            
            }
            
            if ( z == 4){
                z = 0;
            }
            
            else if (z == -1){
                z = 3;
            }
            switch (z){               //進む方向
                case 0 :
                    x--;

                    break;
                case 1 :
                    y++;

                    break;
                case 2 :
                    x++;
                    
                    break;
                case 3 :
                    y--;

                    break;
                    
                }
        }
        
    
    for (int i =0; i < H; i++){               //
            for ( int n =0; n < W; n++){
            std::cout << Num[i][n];
        
            }
            std::cout << endl;
    }
    
    return 0;
}
