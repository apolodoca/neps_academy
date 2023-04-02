#include <iostream>
#include <utility>
#include <queue>
#include <vector>
#include <string>
#include <algorithm>


using namespace std;
#define mp make_pair
#define pq priority_queue

int main(){
    vector <vector <string>> team;
    pq < pair <int, string>> players;
    int n, t;
    cin >> n >> t;

    for(int i=0; i<t; i++) team.push_back(vector <string>());

    for(int i=0; i<n; i++){
        string name;
        int h;
        cin >> name >> h;

        players.push(mp(h, name));
    }
      int curTeam = 0;

    while(players.size() > 0){
        team[curTeam].push_back(players.top().second);
        players.pop();
        curTeam = (curTeam+1)%t;
    }
    for(int i=0; i<t; i++){
        sort(team[i].begin(), team[i].end());

        cout << "Time " << i+1 << "\n";
        for(int j=0; j<team[i].size(); j++){
            cout << team[i][j] << "\n";
        }
        cout << "\n";
    }





}
