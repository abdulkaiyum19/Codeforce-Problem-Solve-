#include <iostream>
#include <string>
#include <deque>

using namespace std;

struct CrewMember {
    string name;
    string status;
};

int main() {
    int t;
    cin >> t;

    while (t--) {
        int n;
        cin >> n;

        deque<CrewMember> sortedCrew;

        for (int i = 0; i < n; ++i) {
            CrewMember member;
            cin >> member.name >> member.status;

            if (member.status == "captain") {
                sortedCrew.push_front(member);
            } else if (member.status == "rat") {
                sortedCrew.push_back(member);
            } else {
                // Find the index to insert woman/child after the last man or captain
                int insertIndex = 0;
                while (insertIndex < sortedCrew.size() &&
                       (sortedCrew[insertIndex].status == "woman" || sortedCrew[insertIndex].status == "child")) {
                    insertIndex++;
                }
                sortedCrew.insert(sortedCrew.begin() + insertIndex, member);
            }
        }

        for (const auto& member : sortedCrew) {
            cout << member.name << endl;
        }
    }

    return 0;
}
