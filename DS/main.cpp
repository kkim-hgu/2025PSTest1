// 이름: (이름)
// 학번: (학번)
// 아너코드: 나 OOO은(는) 하나님과 사람 앞에서 정직하고 성실하게 코딩 테스트를 수행하겠습니다.

#include "MyStringStack.h"
#include <iostream>
#include <string>
#include <sstream>

using namespace std;

int main() {
    MyStringStack back_pages("Back Pages");     // 뒤로가기 URL 스택
    MyStringStack fore_pages("Fore Pages");     // 앞으로가기 URL 스택
    string current = "Home";                    // 현재 URL

    string command, url;                        // 입력받는 문자열
    while (true){
        cin >> command;
        if (command == "NEW") {
            cin >> url;




        } 
        else if (command == "BACK") {





        } 
        else if (command == "FORE") {





        }
        else if (command == "CURRENT") {
            cout << "> " << current << endl;
        }
        else if (command == "SHOW") {
            cout << "> Current: " << current << endl;
            back_pages.printAll();
            fore_pages.printAll();
        }
        else if (command == "Q") {
            break;
        }
        else {
            cout << "> Wrong command." << endl;
        }
    }

    return 0;
}
