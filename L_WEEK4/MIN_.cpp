#include <iostream>
#include <cstring>
#include <algorithm>
#include <vector>
#include <sstream>

using namespace std;
using std::stringstream;

int main() {
    string str_1;
    long int n;
    long int j = 0;
    cin >> n;
    cin.ignore(); // 忽略换行符
    getline(cin, str_1);
    long int n_array[n];

    char space_delimiter = ' ';
//    string space_delimiter = " ";
    vector<string> str_1_array{};
//
    stringstream sstream(str_1);
    string str_1_array_temp;

    while(std::getline(sstream, str_1_array_temp,space_delimiter)){
        str_1_array_temp.erase(std::remove_if(str_1_array_temp.begin(),str_1_array_temp.end(),::ispunct),str_1_array_temp.end());
        str_1_array.push_back(str_1_array_temp);
    }


//    size_t pos = 0;
//    while((pos =str_1.find(space_delimiter))!=string::npos){//npos是一个常数，是一个最大的数
//        str_1_array.push_back(str_1.substr(0,pos));//substr(起始位置，长度)
//        str_1.erase(0,pos+space_delimiter.length());//erase(起始位置，长度)
//    }
//
//    for(const auto &i:str_1_array){
//        cout << i << " ";
//    }
//    cout << str_1_array[0] << endl;

    for(int i=0;i<n;i++) {
//        if (i % 2 == 0) {
//            cout << i << " ";
//            cout << endl;
            n_array[j] = atoi(str_1_array[i].c_str());
//            cout << n_array[j] << " ";
            j++;
//        } else {
//            continue;
//        }

    }

//    cout << j << endl;

    int min=n_array[0];
    for(long int i=1;i<j;i++){
        if(n_array[i]<min){
            min=n_array[i];
        }
    }

//    cout << n_array[1] << endl;
//    sort(n_array+1,n_array+j+1); // #include <algorithm> (sort函数
//    cout << n_array[1] << endl;
    cout << min << endl;
    return 0;
}