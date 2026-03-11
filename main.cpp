#include <iostream>
#include "player.h"

using namespace std;

int main() {#include <iostream>
#include "player.h"
#include "battle.h"
#include "save.h"

using namespace std;

int main()
{
    Player player;

    int choice;
    bool running = true;

    cout << "=====================\n";
    cout << "   修仙文字冒险\n";
    cout << "=====================\n";

    while(running)
    {
        cout << "\n====== 主菜单 ======\n";
        cout << "1 去村庄\n";
        cout << "2 去森林\n";
        cout << "3 查看属性\n";
        cout << "4 存档\n";
        cout << "5 读档\n";
        cout << "6 退出\n";

        cin >> choice;

        if(choice == 1)
        {
            cout << "你来到村庄。\n";
        }

        else if(choice == 2)
        {
            cout << "你进入森林...\n";
            fight(player);
        }

        else if(choice == 3)
        {
            cout << "生命: " << player.hp << endl;
            cout << "攻击: " << player.attack << endl;
            cout << "金币: " << player.gold << endl;
        }

        else if(choice == 4)
        {
            saveGame(player);
            cout << "游戏已保存。\n";
        }

        else if(choice == 5)
        {
            loadGame(player);
            cout << "读取存档成功。\n";
        }

        else if(choice == 6)
        {
            running = false;
            cout << "游戏结束。\n";
        }
    }

    return 0;
}

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
