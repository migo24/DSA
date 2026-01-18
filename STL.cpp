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

    cout << "size of vector is: " << vec.size() << endl;

    for(int i=0; i<vec.size(); i++){
        cout << vec[i] << " ";
    }
    cout << endl;

    // I T E R A T O R (iterator)
    vector<int>::iterator beginItr = vec.begin();
    vector<int>::iterator endItr = vec.end(); // vec.end() and endItr are pointers pointing to the memory location AFTER the last element
    cout << "beginItr: " << *beginItr << endl; // itr is a pointer

    for(vector<int>::iterator i = beginItr; i<endItr; i++){
        cout<<*i<<" ";
    }

    cout << endl;

    /*
    endItr = endItr - 1;
    for(vector<int>::iterator i = beginItr; i<=endItr; i++){
        cout<<*i<<" ";
    }
    */

    // The above still works cause the endItr points to AFTER the last element

    // auto is a C++ keyword that automatically assigns the type of the iterator, SO:

    /*
    EASIER WAY TO WRITE IT: 

    auto beginItr = vec.begin();
    auto endItr = vec.end();

    for(auto i = beginItr; i < endItr; i++){
        cout<<*i<<" ";
    }
    */

    // EVEN EASIER WAY TO WRITE IT USING THE FOR EACH LOOP
    // ITERATOR
    for(auto i : vec){
        cout << i << " ";
    }

    cout << endl;

    //REVERSE ITERATOR
    auto reverseBegin = vec.rbegin();
    auto reverseEnd = vec.rend(); // points to somewhere before before first element
    for(auto i = reverseBegin; i < reverseEnd; i++){
        cout << *i << " ";
    }
    cout << endl;

    vector<int> vec2(5);
    vec2.push_back(3);
    vec2.push_back(5);
    vec2.emplace_back(2);

    for(auto i: vec2){
        cout << i << " ";
    }
    cout << endl;
    
    vector<int> vec3(5, 8);
    vec3.push_back(4);
    vec3.push_back(5);
    vec3.emplace_back(1);

    for(auto i: vec3){
        cout << i << " ";
    }
    cout << endl;
    vector<int> vec4 = {7, 8};
    vec4.push_back(3);
    vec4.push_back(5);
    vec4.emplace_back(2);

    for(auto i: vec4){
        cout << i << " ";
    }
    cout << endl;

    cout << "duplicate vector: ";
    vector<int> dupVec(vec);
    for(auto i : dupVec){
        cout << i << " ";
    }

    cout << endl;

    // to take a subset of another vector, define the range you wnat, like this:
    vector<int> dupVec2(vec2.begin()+1, vec2.end());
    for(auto i : dupVec2){
        cout << i << " ";
    }

    cout << endl;

    //or this:

    vector<int> dupVec3(vec2.begin()+3, vec2.end()-1);
    for(auto i : dupVec3){
        cout << i << " ";
    }

    cout << endl;
    cout << endl;

    for(auto i : vec){
        cout<<i<< " ";
    }
    cout << endl;
    cout << "first element: " << vec.front(); // gives the first element of the vector
    cout<< endl;
    cout << "last element: " << vec.back(); // gives the last element of the vector
    vec.pop_back();
    cout<< endl;
    cout << "last element after pop_back: " << vec.back();

    cout << endl;

    for(auto i: vec4){
        cout << i << " ";
    }
    cout << endl;

    /*
    vec4.erase(vec4.begin()); // erases first element

    for(auto i: vec4){
        cout << i << " ";
    }
    cout << endl;
    vec4.erase(vec4.begin()+3); // erases fourth element (1 based indexing)

    for(auto i: vec4){
        cout << i << " ";
    }
    cout << endl;
    */

    // deleting a range
    vec4.erase(vec4.begin()+1, vec4.end()-1);

    for(auto i: vec4){
        cout << i << " ";
    }
    cout << endl;

    vec4.clear(); //removes everything

    for(auto i: vec4){
        cout << i << " ";
    }
    cout << endl;

    for(auto i: vec3){
        cout << i << " ";
    }
    cout << endl;

    // to access
    cout << vec3.at(7); // noone uses this
    cout << endl;

    //or preferably:

    cout << vec3[6]; // 0 beased indexing!

    // swap: swaps two vectors

    cout << endl;

    vector<int> vecc1 = {7, 8};
    vector<int> vecc2 = {4, 5};

    cout << " before swap: " << endl;

    cout << "vector 1: ";

    for(auto i : vecc1){
        cout << i << " ";
    }
    cout << endl;

    cout << "vector 2: ";

    for(auto i : vecc1){
        cout << i << " ";
    }
    cout << endl;

    swap(vecc1, vecc2);

    cout << "After swap: ";
    cout << endl;

    cout << "vector 1: "; 
    for(auto i : vecc1){
        cout << i << " ";
    }
    cout << endl;

    cout << "vector 2: ";

    for(auto i : vecc1){
        cout << i << " ";
    }
    cout << endl;

    //Insertion

    vector<int> anothaOne = {7, 8, 8, 6, 7};
    for(auto i: anothaOne){
        cout << i << " ";
    }
    cout << endl;
    cout << "Inserting a 4 before 0 index (using: anothaOne.insert(anothaOne.begin(), 4);): " << endl;

    anothaOne.insert(anothaOne.begin(), 4); // inser 4 before begin
    for(auto i: anothaOne){
        cout << i << " ";
    }
    cout << endl;

    cout << "Inserting a 12 before 2nd index (using: anothaOne.insert(anothaOne.begin() + 2, 4);): " << endl;

    anothaOne.insert(anothaOne.begin() + 2, 12); // inser 4 before begin
    for(auto i: anothaOne){
        cout << i << " ";
    }
    cout << endl;


}
void explainList(){
    // List is also a cointainer
    // pushback, erase, delete, iterator all the same as vector
    // all of the fuctions/ methods will work here since the concept is the same
    // 0 based indexing to n-1

    // DIFFERENCE FROM VECTOR
    // List allows you to insert at front: push_front

    //push_front / emplace_front

    list<int> ls = {6, 7};
    ls.push_front(1);
    for(auto i: ls){
        cout << i << " ";
    }
    cout << endl;
}
void explainDeque(){
    //A container, everything is same, behaves same as vector or list
    // also allows push front
    //In vectors the underlying DS is an arry, so it modifies the array, uses dynamic arrya

    // BUT! FOR DEQUE WE USE A LINKED LIST!!!!!
}
void explainStack(){
    //LIFO: Last In First Out: like books piled in a bucket, one on top of the other

    //DOES NOT HAVE AN ITERATOR

    stack<int> st;
    st.push(1);
    st.push(7);

    cout << st.top() << " "; //7
    st.pop(); // deletes 7 from the stack
    cout << st.top() << " "; //1
    st.pop(); // deletes 1 from the stack

    //this line will do nothing and cause a runtime error

    //cout << st.top() << " ";

    // runtime error if you try to access something that is not there
    cout << st.size() << endl;

    stack<int> st1;
    st1.push(1);
    st1.push(3);
    st1.push(5);
    st1.push(4);
    st1.push(7);
    st1.push(2);
    st1.push(8);

    while(st1.empty() == false){
        cout << st1.top() << " ";
        st1.pop();
    }

    //stack has limited fuctionalities, but it is extremely useful.
}
void explainQueue(){
    //FIFO: First In First Out
    //like at a ticket counter
    queue<int> q;
    q.push(2);
    q.push(3);
    q.push(6);
    q.push(5);
    q.push(7);
    q.push(9);

    while(q.empty()==false){
        cout << q.front() << " ";
        q.pop();
    }

    cout << endl;

    // A way I could get the input from the user for a defined number of inputs.

    queue<int> qu;
    int x;
    cout << "Enter the number of elements you wisht to enter into the queue: ";
    cin >> x;

    for(int i=0; i<x; i++){
        int y;
        cin >> y;
        qu.push(y);
    }
    cout << endl;

    while(qu.empty() == false){
        cout << qu.front() << " ";
        qu.pop();
    }
    cout << endl << endl;

    // for unsure number of inputs:

    queue<int> que;

    cout << "Enter Y if you want to enter an element. Otherwise enter any other charachter: ";

    char want;
    cin >> want;

    while(want=='Y'||want=='y'){
        int x;
        cout << "Enter the element: ";
        cin >> x;
        que.push(x);
        cout << endl << "Do you want to enter another element?: ";
        cin >> want;
    }

    // Nice. I did it myself!

}
void explainPriorityQueue(){
    //Stores the highest element at the top
    //underneath is a heap, which is a tree concept
    priority_queue<int> pq;
    pq.push(5);
    pq.push(7);
    pq.push(11);
    pq.push(4);
    pq.push(8);
    pq.push(10);

    while(pq.empty() == false){
        cout << pq.top() << " ";
        pq.pop();
    }
    cout << endl;

    //you can also do it for the smallest elemet at the top with this format:

    priority_queue<int, vector<int>, greater<int>> pq_min; // this is a comparator: "greater<int>": we can use it to customize our heap.

    // COMPARATORS?

    //minimum heap --> Internally we have a heap data structure that stores the smallest element at the top

    // can do both min and max for characters and other data types also
    pq_min.push(5);
    pq_min.push(7);
    pq_min.push(11);
    pq_min.push(4);
    pq_min.push(8);
    pq_min.push(10);

    while(pq_min.empty() == false){
        cout << pq_min.top() << " ";
        pq_min.pop();
    }
    cout << endl;
}
void explainSet(){
    //set is apparenty a Data structure that only stores unique elements, in ascending order

    // It has an iterator!

    set<int> st;
    st.insert(2);
    st.insert(21);
    st.insert(21);
    st.insert(21);
    st.insert(12);
    st.insert(9);

    for(auto i : st){
        cout << i << " ";
    }
    cout << endl;

    auto i = st.find(12); // returns an iterator to 12

    if(i != st.end()){ //If find() does not find 12 it will always return the end iterator, because it will reach the element after end, and it will say, "I didnt find it"

        cout << *i; // This gives the element at i --> This is wrond, cause i is an iterator, i.e an object, not an index. So I cant return the index I found the element at. Apparently. I need to go google this now.

        // Do I need to write *i cause it is outside an iterator

//Iterators
// Iterators are objects that point to elements within a container
// and provide a way to traverse through the container. They are 
// essential for accessing and modifying elements in STL containers.
    }
    cout << endl;

    cout << st.count(21); // returns 1 if element is there and 0 if not.

    cout << endl;

    st.erase(21);
    for(auto it: st){
        cout << it << " "; // why does writing *i instead of it print "12 12 12" ?
    }
    cout << endl;

    auto it = st.end(); // to erase a specific location
    it--; // this prints 2 9 and: it--; it--; print 2 12
    st.erase(it);
    for(auto it : st){
        cout << it << " ";
    }
    cout << endl;
}


int main(){
    explainSet();
    return 0;
}