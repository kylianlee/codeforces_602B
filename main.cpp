//
// Created by Kylian Lee on 2021/04/09.
//
<<<<<<< HEAD

#include <iostream>

using namespace std;

int main(){

=======
#include <iostream>
#include <algorithm>

int points[100001];

using namespace std;

int main() {
    int n;
    cin >> n;

    for(int i = 0; i < n; i++){
        cin >> points[i];
    }

    int M = points[0], m = points[0];
    int count = 1, answer = -1;

    for(int i = 1; i < n; i++){
        if(abs(points[i] - m) <= 1 && abs(points[i] - M) <= 1){
            m = min(m, points[i]);
            M = max(M, points[i]);
            count++;

            cout << "M : " << M << " m : " << m << " count : " << count << endl;
        }
        else{
            answer = max(answer, count);

            cout << "M : " << M << " m : " << m << " count : " << count << endl;

            m = points[i];
            M = points[i];
            count = 0;

            for(int j = i; j >= 0; j--){
                if(abs(points[i] - m) <= 1 && abs(points[i] - M) <= 1) {
                    m = min(m, points[j]);
                    M = max(M, points[j]);
                    count++;
                }
                else
                    break;
            }
        }
    }
    cout << max(answer, count) << endl;

    return 0;
>>>>>>> push
}
