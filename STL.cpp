#include <bits/stdc++.h>
using namespace std;

void explainPair()
{
    pair<int, int> pr1 = {2, 8};
    // pair is under std library, so write std::pair<DT, DT> var_name
    cout << pr1.first << " " << pr1.second << endl;

    pair<int, char> pr2 = make_pair(2, 'b');
    cout << pr2.first << " " << pr2.second << endl;

    pair<pair<int, char>, int> pr3 = {{5, 'c'}, 6};
    cout << pr3.first.second << endl;
}
void explainVector()
{
    vector<int> vec;
    vec.push_back(1);
    vec.push_back(2);
    vec.emplace_back(0);

    cout << "size of vector is: " << vec.size() << endl;

    for (int i = 0; i < vec.size(); i++)
    {
        cout << vec[i] << " ";
    }
    cout << endl;

    // I T E R A T O R (iterator)
    vector<int>::iterator beginItr = vec.begin();
    vector<int>::iterator endItr = vec.end();  // vec.end() and endItr are pointers pointing to the memory location AFTER the last element
    cout << "beginItr: " << *beginItr << endl; // itr is a pointer

    for (vector<int>::iterator i = beginItr; i < endItr; i++)
    {
        cout << *i << " ";
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
    for (auto i : vec)
    {
        cout << i << " ";
    }

    cout << endl;

    // REVERSE ITERATOR
    auto reverseBegin = vec.rbegin();
    auto reverseEnd = vec.rend(); // points to somewhere before before first element
    for (auto i = reverseBegin; i < reverseEnd; i++)
    {
        cout << *i << " ";
    }
    cout << endl;

    vector<int> vec2(5);
    vec2.push_back(3);
    vec2.push_back(5);
    vec2.emplace_back(2);

    for (auto i : vec2)
    {
        cout << i << " ";
    }
    cout << endl;

    vector<int> vec3(5, 8);
    vec3.push_back(4);
    vec3.push_back(5);
    vec3.emplace_back(1);

    for (auto i : vec3)
    {
        cout << i << " ";
    }
    cout << endl;
    vector<int> vec4 = {7, 8};
    vec4.push_back(3);
    vec4.push_back(5);
    vec4.emplace_back(2);

    for (auto i : vec4)
    {
        cout << i << " ";
    }
    cout << endl;

    cout << "duplicate vector: ";
    vector<int> dupVec(vec);
    for (auto i : dupVec)
    {
        cout << i << " ";
    }

    cout << endl;

    // to take a subset of another vector, define the range you want, like this:
    vector<int> dupVec2(vec2.begin() + 1, vec2.end());
    for (auto i : dupVec2)
    {
        cout << i << " ";
    }

    cout << endl;

    // or this:

    vector<int> dupVec3(vec2.begin() + 3, vec2.end() - 1);
    for (auto i : dupVec3)
    {
        cout << i << " ";
    }

    cout << endl;
    cout << endl;

    for (auto i : vec)
    {
        cout << i << " ";
    }
    cout << endl;
    cout << "first element: " << vec.front(); // gives the first element of the vector
    cout << endl;
    cout << "last element: " << vec.back(); // gives the last element of the vector
    vec.pop_back();
    cout << endl;
    cout << "last element after pop_back: " << vec.back();

    cout << endl;

    for (auto i : vec4)
    {
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
    vec4.erase(vec4.begin() + 1, vec4.end() - 1);

    for (auto i : vec4)
    {
        cout << i << " ";
    }
    cout << endl;

    vec4.clear(); // removes everything

    for (auto i : vec4)
    {
        cout << i << " ";
    }
    cout << endl;

    for (auto i : vec3)
    {
        cout << i << " ";
    }
    cout << endl;

    // to access
    cout << vec3.at(7); // noone uses this
    cout << endl;

    // or preferably:

    cout << vec3[6]; // 0 beased indexing!

    // swap: swaps two vectors

    cout << endl;

    vector<int> vecc1 = {7, 8};
    vector<int> vecc2 = {4, 5};

    cout << " before swap: " << endl;

    cout << "vector 1: ";

    for (auto i : vecc1)
    {
        cout << i << " ";
    }
    cout << endl;

    cout << "vector 2: ";

    for (auto i : vecc1)
    {
        cout << i << " ";
    }
    cout << endl;

    swap(vecc1, vecc2);

    cout << "After swap: ";
    cout << endl;

    cout << "vector 1: ";
    for (auto i : vecc1)
    {
        cout << i << " ";
    }
    cout << endl;

    cout << "vector 2: ";

    for (auto i : vecc1)
    {
        cout << i << " ";
    }
    cout << endl;

    // Insertion

    vector<int> anothaOne = {7, 8, 8, 6, 7};
    for (auto i : anothaOne)
    {
        cout << i << " ";
    }
    cout << endl;
    cout << "Inserting a 4 before 0 index (using: anothaOne.insert(anothaOne.begin(), 4);): " << endl;

    anothaOne.insert(anothaOne.begin(), 4); // inser 4 before begin
    for (auto i : anothaOne)
    {
        cout << i << " ";
    }
    cout << endl;

    cout << "Inserting a 12 before 2nd index (using: anothaOne.insert(anothaOne.begin() + 2, 4);): " << endl;

    anothaOne.insert(anothaOne.begin() + 2, 12); // inser 4 before begin
    for (auto i : anothaOne)
    {
        cout << i << " ";
    }
    cout << endl;
}
void explainList()
{
    // List is also a cointainer
    // pushback, erase, delete, iterator all the same as vector
    // all of the fuctions/ methods will work here since the concept is the same
    // 0 based indexing to n-1

    // DIFFERENCE FROM VECTOR
    // List allows you to insert at front: push_front

    // push_front / emplace_front

    list<int> ls = {6, 7};
    ls.push_front(1);
    for (auto i : ls)
    {
        cout << i << " ";
    }
    cout << endl;
}
void explainDeque()
{
    // A container, everything is same, behaves same as vector or list
    //  also allows push front
    // In vectors the underlying DS is an arry, so it modifies the array, uses dynamic arrya

    // BUT! FOR DEQUE WE USE A LINKED LIST!!!!!
}
void explainStack()
{
    // LIFO: Last In First Out: like books piled in a bucket, one on top of the other

    // DOES NOT HAVE AN ITERATOR

    stack<int> st;
    st.push(1);
    st.push(7);

    cout << st.top() << " "; // 7
    st.pop();                // deletes 7 from the stack
    cout << st.top() << " "; // 1
    st.pop();                // deletes 1 from the stack

    // this line will do nothing and cause a runtime error

    // cout << st.top() << " ";

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

    while (st1.empty() == false)
    {
        cout << st1.top() << " ";
        st1.pop();
    }

    // stack has limited fuctionalities, but it is extremely useful.
}
void explainQueue()
{
    // FIFO: First In First Out
    // like at a ticket counter
    queue<int> q;
    q.push(2);
    q.push(3);
    q.push(6);
    q.push(5);
    q.push(7);
    q.push(9);

    while (q.empty() == false)
    {
        cout << q.front() << " ";
        q.pop();
    }

    cout << endl;

    // A way I could get the input from the user for a defined number of inputs.

    queue<int> qu;
    int x;
    cout << "Enter the number of elements you wisht to enter into the queue: ";
    cin >> x;

    for (int i = 0; i < x; i++)
    {
        int y;
        cin >> y;
        qu.push(y);
    }
    cout << endl;

    while (qu.empty() == false)
    {
        cout << qu.front() << " ";
        qu.pop();
    }
    cout << endl
         << endl;

    // for unsure number of inputs:

    queue<int> que;

    cout << "Enter Y if you want to enter an element. Otherwise enter any other charachter: ";

    char want;
    cin >> want;

    while (want == 'Y' || want == 'y')
    {
        int x;
        cout << "Enter the element: ";
        cin >> x;
        que.push(x);
        cout << endl
             << "Do you want to enter another element?: ";
        cin >> want;
    }

    // Nice. I did it myself!
}
void explainPriorityQueue()
{
    // Stores the highest element at the top
    // underneath is a heap, which is a tree concept
    priority_queue<int> pq;
    pq.push(5);
    pq.push(7);
    pq.push(11);
    pq.push(4);
    pq.push(8);
    pq.push(10);

    while (pq.empty() == false)
    {
        cout << pq.top() << " ";
        pq.pop();
    }
    cout << endl;

    // you can also do it for the smallest elemet at the top with this format:

    priority_queue<int, vector<int>, greater<int>> pq_min; // this is a comparator: "greater<int>": we can use it to customize our heap.

    // COMPARATORS?

    // minimum heap --> Internally we have a heap data structure that stores the smallest element at the top

    // can do both min and max for characters and other data types also
    pq_min.push(5);
    pq_min.push(7);
    pq_min.push(11);
    pq_min.push(4);
    pq_min.push(8);
    pq_min.push(10);

    while (pq_min.empty() == false)
    {
        cout << pq_min.top() << " ";
        pq_min.pop();
    }
    cout << endl;
}
void explainSet()
{
    // set is apparenty a Data structure that only stores unique elements, in ascending order

    // It has an iterator!

    set<int> st;
    st.insert(2);
    st.insert(21);
    st.insert(21);
    st.insert(21);
    st.insert(12);
    st.insert(9);

    for (auto i : st)
    {
        cout << i << " ";
    }
    cout << endl;

    auto i = st.find(12); // returns an iterator to 12

    if (i != st.end())
    { // If find() does not find 12 it will always return the end iterator, because it will reach the element after end, and it will say, "I didnt find it"

        cout << *i; // This gives the element at i --> This is wrond, cause i is an iterator, i.e an object, not an index. So I cant return the index I found the element at. Apparently. I need to go google this now.

        // Do I need to write *i cause it is outside an iterator

        // Iterators
        //  Iterators are objects that point to elements within a container
        //  and provide a way to traverse through the container. They are
        //  essential for accessing and modifying elements in STL containers.
    }
    cout << endl;

    cout << st.count(21); // returns 1 if element is there and 0 if not.

    cout << endl;

    st.erase(21);
    for (auto it : st)
    {
        cout << it << " "; // why does writing *i instead of it print "12 12 12" ?
    }
    cout << endl;

    auto it = st.end(); // to erase a specific location
    it--;               // this prints 2 9 and: it--; it--; print 2 12
    st.erase(it);
    for (auto it : st)
    {
        cout << it << " ";
    }
    cout << endl;

    set<int> set1;
    set1.insert(2);
    set1.insert(21);
    set1.insert(27);
    set1.insert(7);
    set1.insert(6);
    set1.insert(5);

    for (auto i : set1)
    {
        cout << i << " ";
    }
    cout << endl;

    auto it1 = set1.begin();
    it1++;
    auto it2 = set1.end();
    it2--;
    set1.erase(it1, it2);

    for (auto i : set1)
    {
        cout << i << " ";
    }
    cout << endl;

    set<int> set2;
    set2.insert(2);
    set2.insert(21);
    set2.insert(27);
    set2.insert(7);
    set2.insert(6);
    set2.insert(5);

    for (auto i : set2)
    {
        cout << i << " ";
    }
    cout << endl;

    // lower bound : returns an iterator that points to an element that is >= (less than or equal to) number given

    auto it3 = set2.lower_bound(3);
    cout << *it3 << endl;

    auto it4 = set2.lower_bound(291);
    if (it4 == set2.end())
    {
        cout << "end" << endl; // no star of end iterator, cause it is not a valid memory location
    }

    // returns iterator that points to an element that is greater than the number given
    auto ite5 = set2.upper_bound(3);
    cout << *ite5;
}
void explainMultiSet()
{
    // Like set, but can also store repeating elements
    multiset<int> ms;
    ms.insert(1);
    ms.insert(1);
    ms.insert(1);
    ms.insert(1);
    ms.insert(2);
    ms.insert(0);
    ms.insert(3);
    ms.insert(21);
    ms.insert(7);
    ms.insert(72);
    ms.insert(21);
    ms.insert(21);

    for (auto it : ms)
    {
        cout << it << " ";
    }
    cout << endl;

    // store all the elements including the duplicates in the ascending order.
    // But te functionalities are not same (all of them atleast)

    auto ite = ms.find(1); // points to the first 1

    // to erase only one 1, then:

    auto itee = ms.erase(ms.find(1)); // this is cause ms.find() is an iterator pointing to a location, so it only deletes that location.
    for (auto i : ms)
    {
        cout << i << " ";
    }
    cout << endl;

    // if you erase all 1's, then

    auto it = ms.erase(1);
    for (auto it : ms)
    {
        cout << it << " ";
    }
    cout << endl;

    cout << ms.count(21); // returns 3 cause there are 3 21's

    // all others all the same.
}
void explainUnorderedSet()
{
    // similar to set, but no ordering
    // but it will store unique elements
    //  all functionalities of set are applied here except lower_bound and upper_bound --> because it is not sorted, and the inner mechanisms for this are usually binary search

    // has better time complexity

    unordered_set<int> us;
    us.insert(1);
    us.insert(7);
    us.insert(2);
    us.insert(14);
    us.insert(1);
    us.insert(5);
    us.insert(8);
    us.insert(19);
    us.insert(6);
    us.insert(6);

    for (auto i : us)
    {
        cout << i << " ";
    }
    cout << endl;

    auto it = us.find(14); // almost happens in a constant time complexity --> O(1), in very rare senarios, it takes O(N)

    // In unordered set, in an average case, we have better search functionaity, in terms of time complexity

    // Time complexity will be understood in hashing, so leave it be for the time being.
}
void explainMap()
{
    // unique keys, sorted order
    // does not store duplicates
    map<int, string> mpp; // int is key where we will store roll no. & Key can be any data type, a pair, or a vector too. same for value
    mpp[1] = "abc";       // stored in the cocept of pairs
    mpp[2] = "bcd";
    mpp[1] = "dog"; // so the value pair can be chaged, the lates iteration is saved
    mpp[3] = "cat";
    mpp.insert({4, "Raj"});

    for (auto it : mpp)
    {
        cout << it.first << "->" << it.second << endl; // stores according to ascending order of keys
    }
    cout << endl;

    auto it = mpp.find(4); // it will return an iterator that will point to the location roll_no 4, this will be a key value pair

    cout << (*it).first << "->" << (*it).second << endl; // map.find() is an iterator, so a *it will give us a value which has a pair (and we put it in a () cause syntax, don't look too much into it), so we get it's first.

    auto i = mpp.find(5);
    if (i == mpp.end()) // what is this??
    {
        cout << "not found" << endl;
    }

    // same for lower bound, first key >=
    // same for upper bound, first key >
    // other things are same, with keys
}
void explainUnorderedMap()
{
    // similar to unordered set, but a map
    // does not store anything in any order
    // so time complexity of UOM is O(1), until and unless the data structure is huge, and there are collisions inside the map (once in a blue moon)
    // we don't care about the ordering, we want fast search fuctionality
    unordered_map<int, string> mpp;
    mpp[1] = "abc";
    mpp[2] = "bcd";
    mpp[1] = "dog";
    mpp[3] = "cat";
    mpp.insert({4, "Raj"});

    for (auto i : mpp)
    {
        cout << i.first << "->" << i.second << endl;
    }
    cout << endl;
}
void explainMultiMap()
{
    // Can have duplicates, sorts and stores according to key values,  not the pair values.
    multimap<int, char> mpp;
    mpp.insert({3, 'b'});
    mpp.insert({1, 'a'});
    mpp.insert({1, 'b'});
    mpp.insert({1, 'a'});
    mpp.insert({2, 'a'});
    mpp.insert({2, 'a'});
    mpp.insert({2, 'b'});

    for (auto it : mpp)
    {
        cout << it.first << "->" << it.second << endl;
    }
    cout << endl;

    // to figure out the range from the starting of 2 to the ending of two

    //.equal_range() will give the range where a single element lies
    auto it = mpp.equal_range(2); // returns a pair of iterartors (first tells us the starting place, and secon tells us the ending place)
    for (auto i = it.first; i != it.second; i++)
    { // i's an iterator //I have no idea why we used != like ????? what even???

        // ohhh!
        // because in map the elements are not stored in consecutive order

        cout << (*i).first << "->" << (*i).second << endl; // the value at *i is a pair, for syntax, we are putting it in a bracket I guess? I dont really know what even is going on at this point

        // I don't even know anymore. My brain is fried, and the library is about to close.
    }
}

// functions and Algo's from here on out:

void explainSort()
{
    int arr[5] = {6, 2, 1, 7, 8};

    for (int i = 0; i < 5; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;

    sort(arr, arr + 5);
    for (int i = 0; i < 5; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;

    // if you only want to sort a range:

    int arr1[5] = {6, 2, 1, 7, 8};
    sort(arr1 + 1, arr1 + 4);
    for (int i = 0; i < 5; i++)
    {
        cout << arr1[i] << " ";
    }
    cout << endl;

    vector<int> vec = {6, 2, 1, 7, 8};
    sort(vec.begin(), vec.end());
    for (auto it : vec)
    {
        cout << it << " ";
    }
    cout << endl;

    // can also do it in specific parts:
    vector<int> vec1 = {6, 2, 1, 7, 8};
    sort(vec.begin() + 1, vec.end() - 1);
    for (auto it : vec1)
    {
        cout << it << " ";
    }
    cout << endl;
}
void explainAccumulate()
{
    int arr[5] = {6, 2, 1, 7, 0};
    cout << accumulate(arr, arr + 5, 0); // this starts with sum = 0, the sum becomes 16, if it was 1, the sum will start from 1 and we get 17
}
void explainCount()
{
    int arr[5] = {6, 2, 1, 1, 0};
    int num = 1;
    cout << count(arr, arr + 5, num); // tells us how many times it appears
}
void explainFind()
{
    int arr[5] = {6, 2, 1, 1, 0};
    auto it = find(arr, arr + 5, 1); // points to the first 1 in the array //returs an iterator
    cout << *it << endl;
    auto ite = find(arr, arr + 5, 8);
    if (ite == arr + 5)
    { // iterator pointing to the last iterator
        cout << "not found";
    }

    // works the same for vector
}
void explainNextPermutation()
{
    // works for vector, str etc.
    string str = "abc";
    do
    {
        cout << str << endl;
    } while (next_permutation(str.begin(), str.end()));
    cout << endl;

    string str1 = "bca";
    do
    {
        cout << str1 << endl;
    } while (next_permutation(str1.begin(), str1.end()));
    cout << endl;

    string str2 = "bca";

    cout << "The str is: " << str2 << endl;
    do
    {
        cout << str2 << endl;
    } while (next_permutation(str2.begin(), str2.end() - 1)); // or from str1.begin(), str1.begin()+2
    cout << endl;
}
void explainPrevPermutation()
{
    string str2 = "cba";

    cout << "The str is: " << str2 << endl;
    do
    {
        cout << str2 << endl;
    } while (prev_permutation(str2.begin(), str2.end())); // or from str1.begin(), str1.begin()+2
    cout << endl;
}
void explainMaxElement()
{
    int arr[] = {7, 6, 5, 10, 9};
    auto it = max_element(arr, arr + 5); // It will always point to an iterator which is the max element
    cout << *it << endl;                 // since it is an iterator, so we print *it, to get the value the iterator is pointing to
}
void explainMinElement()
{
    int arr[] = {7, 6, 5, 10, 9};
    auto it = min_element(arr, arr + 5); // It will always point to an iterator which is the min element
    cout << *it << endl;                 // since it is an iterator, so we print *it, to get the value the iterator is pointing to
}
void explainReverse()
{
    int arr[] = {7, 6, 5, 10, 9};
    reverse(arr, arr + 5); // you can set a different range and reverse only the elements within that range too
    for (int i = 0; i < sizeof(arr) / sizeof(arr[0]); i++)
    {                          // or just put 5 yknow cause it's size is 5, why are you making this difficult for yourself
        cout << arr[i] << " "; // reverses array without sorting it
    }
    cout << endl;
}
void explainPow()
{
    int x = pow(4, 2);
    cout << x << endl;
}

bool internalComparator1(int el1, int el2)
{
    if (el1 < el2)
        return false; // so we can reverse it using this
    return true;      // can do the reverse to get the normal result too
}
void explainComparator1()
{
    // el1 is 5
    // el2 is 6
    // internal comparator that takes el1 and el2
    // and tells you if el1 should be before elf2 or not
    // true if it should be, false if not
    int arr[] = {5, 6, 1, 4};
    sort(arr, arr + 4);
    for (int i = 0; i < 4; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;

    sort(arr, arr + 4, internalComparator1);
    for (int i = 0; i < 4; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
}

bool internalComparator(pair<int, int> el1, pair<int, int> el2)
{
    if (el1.second > el2.second)
        return true;
    if (el1.second < el2.second)
        return false;
    if (el1.first < el2.first)
        return true;
    return false;
}
void explainComparator()
{
    pair<int, int> arr[] = {{1, 6}, {1, 5}, {2, 6}, {2, 9}, {3, 9}};
    // sort it according to
    // the second element
    //  {2, 9}, {3, 9}, {1, 6}, {2, 6}, {1, 5}

    // directly sorting it using the sort function we get it sorted according to the first element
    cout << endl;

    sort(arr, arr + 5, internalComparator);
    for (int i = 0; i < 5; i++)
    {
        cout << "{" << arr[i].first << ", " << arr[i].second << "} ";
    }
    cout << endl;
}

int main()
{
    explainMap();
    explainUnorderedMap();
    explainMultiMap();
    return 0;
}