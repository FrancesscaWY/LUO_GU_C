#include <iostream>
#include <vector>
#include <iomanip>

using namespace std;

int main() {
    int n;
    cin >> n;
    vector<double> scores(n);
    for (int i = 0; i < n; i++) {
        int score;
        cin >> score;
        scores[i] = score;
    }
    double Max = scores[0];
    double Min = scores[0];
    for (int j = 1; j < n; j++) {
        if (scores[j] > Max) {
            Max = scores[j];
        }
        if (scores[j] < Min) {
            Min = scores[j];
        }
    }

    int count1 = 0, count = 0;
    double sum = 0;
    double average = 0;
    double x = n - 2;
    for (int k = 0; k < n; k++) {
        if(count1==1 && count==1){
            break;
        }
        if (scores[k] == Max&&count1==0) {
//            cout << scores[k] << " ";
            scores.erase(scores.begin() + k);
            k--;
            count1++;
        } else if (scores[k] == Min&&count==0) {
//            cout << scores[k] << " ";
            scores.erase(scores.begin() + k);
            count++;
            k--;
        }

    }
    int size = scores.size();
    for (int k = 0; k < size; k++) {
        sum += scores[k];
    }

    average = sum / x;
    cout << fixed << setprecision(2) << average << endl;
    return 0;
}
//
// Created by 86138 on 2024/4/21.
//
