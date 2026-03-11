#include <iostream>
#include "player.h"

using namespace std;

int main() {

    Player player;

    cout << "=========================\n";
    cout << "     修仙文字冒险\n";
    cout << "=========================\n";

    cout << "你的属性：\n";
    cout << "生命: " << player.hp << endl;
    cout << "攻击: " << player.attack << endl;
    cout << "金币: " << player.gold << endl;

    cout << "\n你来到青云山脚下。\n";

    cout << "1. 上山\n";
    cout << "2. 去村庄\n";
    cout << "3. 退出\n";

    int choice;
    cin >> choice;

    if(choice == 1){
        cout << "你踏上修仙之路...\n";
    }
    else if(choice == 2){
        cout << "你来到村庄。\n";
    }
    else{
        cout << "游戏结束。\n";
    }

    return 0;
}
