#include <iostream>
#include <string>

using namespace std;

int CountCommas(const string& s) {
    int k = 0;
    size_t pos = 0;
    while ((pos = s.find(',', pos)) != string::npos) {
        pos++;
        k++;
        if (k == 3) {
            return pos;
        }
    }
    return -1;
}

string Change(string& s) {
    size_t pos = 0;
    while ((pos = s.find(',', pos)) != string::npos) {
        s.replace(pos, 1, "**");
        pos += 2;
    }
    return s;
}

int main() {
    string str;
    cout << "Enter string:" << endl;
    getline(cin, str);

    int thirdCommaPos = CountCommas(str);
    if (thirdCommaPos != -1) {
        cout << "Position of the third comma: " << thirdCommaPos << endl;

        string dest = Change(str);
        cout << "Modified string (param) : " << str << endl;
        cout << "Modified string (result): " << dest << endl;
    }
    else {
        cout << "String does not contain at least three commas." << endl;
    }

    return 0;
}
