#include <iostream>
#include <vector>
#include <thread>
#include <chrono>
#include <ctime>
#include <cstdlib>

using namespace std;
using namespace chrono;

void sleep(int ms) {
    this_thread::sleep_for(milliseconds(ms));
}

void clear() {
    cout << "\033[2J\033[1;1H";
}

int main() {
    srand(time(nullptr));

    // 起動演出
    clear();
    cout << "起動中";
    for (int i = 0; i < 5; i++) {
        cout << ".";
        cout.flush();
        sleep(300);
    }

    clear();

    // 神社ASCII
    cout << R"(
        ⛩  ⛩  ⛩
      ───────────
        年 越 神 社
      ───────────
    )" << endl;

    sleep(1000);

    cout << "おみくじ箱を振っています" << endl;
    sleep(500);

    // ガラガラ演出
    vector<string> drum = {"◐", "◓", "◑", "◒"};
    for (int i = 0; i < 20; i++) {
        cout << "\r" << drum[i % drum.size()] << " ガラガラ…" << flush;
        sleep(100);
    }
    cout << endl;

    struct Omikuji {
        string name;
        string message;
        int exit_code;
    };

    vector<Omikuji> fortunes = {
        {"大吉", "世界はまだまだ面白くなる", 0},
        {"中吉", "人との縁が後から効いてくる", 0},
        {"小吉", "迷ってもちゃんと前進中", 0},
        {"吉",   "思ったより悪くない年", 0},
        {"末吉", "来年に遅延実行される", 0},
        {"凶",   "今日は無理するな。寝ろ", 1}
    };

    Omikuji result = fortunes[rand() % fortunes.size()];

    sleep(800);
    clear();

    // 結果表示
    cout << "━━━━━━━━━━━━━━━━━━━" << endl;
    cout << "        🎍 お み く じ 🎍        " << endl;
    cout << "━━━━━━━━━━━━━━━━━━━" << endl;
    cout << endl;

    cout << "   運勢： 【 " << result.name << " 】" << endl << endl;
    cout << "   " << result.message << endl << endl;

    // 特殊演出
    if (result.name == "大吉") {
        cout << "   ✨✨✨✨✨✨✨✨✨" << endl;
        cout << "   祝！生存＆進行中！" << endl;
    }

    if (result.name == "凶") {
        cout << "   ⚠ SYSTEM WARNING ⚠" << endl;
        cout << "   本日は無理をしないでください" << endl;
    }

    cout << endl;
    cout << "   引いた時刻: " << time(nullptr) << endl;
    cout << endl;
    cout << "━━━━━━━━━━━━━━━━━━━" << endl;

    return result.exit_code;
}
