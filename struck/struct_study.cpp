// 이진트리 구현 및 순회 구조체 포인터
/*
#include <iostream>

using namespace std;

//하나의 노드 정보 선언
typedef struct node *treePointer;
typedef struct node{
    int data;
    treePointer leftChild, rightChild;
}node;

//전위 순회
void preorder(treePointer ptr){
    if(ptr){
        cout<<ptr->data<<' ';
        preorder(ptr->leftChild);
        preorder(ptr->rightChild);
    }
}

//중위 순회
void inorder(treePointer ptr){
    if(ptr){
        inorder(ptr->leftChild);
        cout<<ptr->data<<' ';
        inorder(ptr->rightChild);
    }
}

//후위 순회
void postorder(treePointer ptr){
    if(ptr){
        postorder(ptr->leftChild);
        postorder(ptr->rightChild);
        cout<<ptr->data<<' ';
    }
}

int main(){

int num=15;
node nodes[num+1];

for(int i=1;i<=num; i++){
nodes[i].data=i;
nodes[i].leftChild=NULL;
nodes[i].rightChild=NULL;
}


for(int i=1;i<=num;i++){
    if(i%2==0){
        nodes[i/2].leftChild=&nodes[i];
    }
    else{
        nodes[i/2].rightChild=&nodes[i];
    }
}

preorder(&nodes[1]);
inorder(&nodes[1]);
postorder(&nodes[1]);
    return 0;
}*/

// 이진탐색
/*#include <iostream>

using namespace std;

int binarySearch(int arr[], int size, int target);

int main(){

int arr[100];

int num=100;
int tar=80;

for(int i=0;i<num;i++){
arr[i]=i;
}


cout<<binarySearch(arr,100,80)<<endl;


    return 0;
}

int binarySearch(int arr[],int size, int target){

int low=0;
int high=size-1;
int mid=0;

while(low<=high)
{
    mid=(low+high)/2;

    if(target<arr[mid])
    high=mid-1;
    else if(target>arr[mid])
    low=mid+1;
    else
    return mid;
}
return -1;
}*/

// heap
// 우선순위 큐()

/*#include <iostream>
#include <queue>

using namespace std;

int main(){

queue<int>q;
q.push(1);
q.push(9);
q.push(5);

int size=q.size();

for(int i=0;i<size;i++){
    cout<<q.front()<<',';
    q.pop();
}cout<<'\n';

priority_queue<int>p_qu_l;
p_qu_l.push(1);
p_qu_l.push(9);
p_qu_l.push(5);

size=p_qu_l.size();
for(int i=0;i<size;i++){
    cout<<p_qu_l.top()<<',';
    p_qu_l.pop();
}cout<<'\n';

priority_queue<int,vector<int>,less<int> >pq;
pq.push(1);
pq.push(9);
pq.push(5);
size=pq.size();

for(int i=0;i<size;i++){
    cout<<pq.top()<<',';
    pq.pop();
}cout<<'\n';


    return 0;
}*/

// 상속
/*#include <iostream>
using namespace std;

class A{

private:
int a;
int b;

public:
A(int _a, int _b){

    a=_a;
    b=_b;
}
int add(){

    return a+b;

}
};

class B:A{
public:
B(int _a,int _b) :A(_a,_b){}
void printResult(){

}

};*/


//heap


//algorithm stl
/*
#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;


template <typename Iter>
void print(Iter begin, Iter end){
while ((begin!=end)){
    cout<<*begin<<" ";
    begin++;
}

cout<<'\n';
}

int main(){

vector<int> vec;

vec.push_back(5);
vec.push_back(3);
vec.push_back(1);
vec.push_back(6);
vec.push_back(4);
vec.push_back(7);
vec.push_back(2);

cout<<"정렬 전 --\n";
print(vec.begin(),vec.end());

sort(vec.begin(),vec.end());

cout<<"정렬 후 ---\n";
print(vec.begin(),vec.end());

    return 0;
}
*/


#include <iostream>
#include <string>
#include <vector>

using namespace std;

int main(){

vector<char> data;
data.push_back('a');
data.push_back('b');
data.push_back('c');
data.insert(data.begin()+data.size(),'x');
//data.erase(data.begin()+data.size()-2);
for(int i=0; i<data.size();i++)
cout<<data[i]<<endl;


    return 0;
}