### C++ Cheat Sheet

#### Basics :

##### Advanced :

###### - Vectors ~ Array lists   :

```cpp
vector <int> dynamicArray ; // each time it expands copied to new place in memory

dynamicArray.push_back(the added integer);

RadixSort(&dynamicArray) ; // pass it by address to avoid copy

dynamicArray[3] ; //can be indexed using [] not like java .get(index) 

dynamicArray.size() ;

dynamicArray.clear() ;

dynamicArray.swap(anotherVector) ;

dynamicArray.erase(dynamicArray.begin()+index) ; // clear spicific index

dynamicArray.begin() ; //returns pointer to first element 

dynamicArray.end() ; //pointer to end index

dynamicArray.insert(dynamicArray.end()-5,dynamicArray.begin(),dynamicArray.begin()+1);
// insert  elements    ^ at this pos.       ^ start of set         ^ end of set

dynamicArray.insert(position , number of times , the input) ;
```

###### - Map ~ Dictionary  :

```cpp
map <string,string> myDictinary ; //link two <strings> together key and value

unordered_map <int,string> myUnorderedDictionary ; //defult map is ordered keys

myDictionary.insert(pair<string,string>(key1,value1)); // pair of strings

myDictionary[key1] ;

myDictionary.size() ;

myDictionary.clear() ;

myDictionary.erase(key1) ;
```

###### - Lists  :

```cpp
list <string> names ;
names,push_back(myName) ;
```

##### Tips :

```cpp
int *dArray ; // creating Array with pointer stored in stack
dArray = new int [n] ;  // Allocate n integers in memory
delete [] dArray ; // free array memory space
dArray = Null ; // free the pointer
```

```cpp
for(car : Cars) {...} //copying each member of array to variable car 
(boo_cond ? "True" : "False"); // can be inlined in any statment
```

- Play on index as much as you can .
- Use your functions more than repeating conditions.

##### - OOP :

```cpp
public:
// public until change modifier .
```

##### - .h :

```cpp
bool empty() const; // const -> dont Edit any of attributes ( informative ) 
// return boolean ;
typedef int myint ; //my int act as int keyword
void display(ostream & out) const ;
ostream & operator<< (ostream & out , const List & aList ) ; 
//                                   (const) -> cant modify List refrence
```

##### - ostream :

```cpp
ostream cout ; // console out defined keyword 
k = cout ; 
k << "anything" ;
cout << "anything" ; // << overrided operator  
cerr << "Error Message" ; // Wait action to complete excuting
```

#### - operator Overloading :

```cpp

```