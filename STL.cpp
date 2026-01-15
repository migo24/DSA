#include<bits/stdc++.h>
using namespace std;

void explainPair(){
    pair<int, int> pr1 = {2, 8};
    // pair is under std library, so write std::pair<DT, DT> var_name
    cout << pr1.first << " " << pr1.second << endl;

    pair<int, char> pr2 = make_pair(2, 'b');
    cout << pr2.first << " " << pr2.second << endl;

    pair<pair<int, char>, int> pr3 = {{5, 'c'}, 6};
    cout << pr3.first.second << endl;
}
void explainVector(){
    vector<int> vec;
    vec.push_back(1);
    vec.push_back(2);
    vec.emplace_back(0);

    cout << vec.size() << endl;

    for(int i=0; i<vec.size(); i++){
        cout << vec[i] << " ";
    }
}

int main(){
    explainVector();
    return 0;
}