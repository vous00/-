// 백준 10828
/*#include <iostream>
#include <string>
#define SIZE 10000

using namespace std;

class Stack
{

private:
    int *arr;
    int top;
    int capacity; // 스택의 용량

public:
    Stack(int size = SIZE);
    ~Stack();

    void push(int x);
    int pop();
    int size();
    bool isEmpty();
    bool isFull();
    int peek();
};

Stack::Stack(int size)
{ // 생성자 초기화

    arr = new int[size];
    capacity = size;
    top = -1;
}

Stack::~Stack()
{ // 소멸자 초기화
    delete[] arr;
}

void Stack::push(int x)
{ // 삽입

    if (isFull())
    {
        cout << "스택이 가득 차있습니다.\n";
    }
    else
    {
        arr[++top] = x;
    }
}

int Stack::pop()
{ // 삭제

    if (isEmpty())
    {
       top=0;
       cout<<-1<<endl;
    }
    else
    {
        cout<<peek()<<endl;
    }
    return arr[top--];
}

int Stack::size()
{ // 스택의 용량

    return top +1;
}

bool Stack::isEmpty()
{ // 비어있을 때

    return top == -1;
}

bool Stack::isFull()
{ // 가득 차있을 때
    return top == capacity - 1;
}

int Stack::peek()
{

    if (!isEmpty())
    {
        return arr[top];
    }
    else
    {   int a = -1;
        return a;
    }
}

int main()
{

    int num;
    cin >> num;

    Stack st;

    for (int i = 0; i < num; i++)
    {

        string l;
        cin >> l;

        if (l == "push")
        {
            int p;
            cin >> p;
            st.push(p);
        }
        else if (l == "pop")
        {
            st.pop();
        }
        else if (l == "size")
        {
            cout<<st.size()<<endl;
        }
        else if (l == "empty")
        {
            cout << st.isEmpty() << endl;

        }
        else if (l == "top")
        {
            cout << st.peek() << endl;
        }
    }

    return 0;
}*/

// 백준 10845
/*#include <iostream>
#include <string>
#define SIZE 10000

using namespace std;

class Q
{
private:
    int *arr;
    int fron;
    int rear;
    int count;
    int capacity;
public:
    Q(int size = SIZE);
    ~Q();

    void push(int x);
    int pop();
    int size();
    bool empty();
    bool full();
    int front();
    int back();
};

Q::Q(int size)
{
    capacity=size;
    arr = new int[size];
    fron = -1;
    rear = -1;
    count = 0;
}
Q::~Q()
{
    delete[] arr;
}

bool Q::empty()
{
    return (rear == fron);
}

int Q ::size()
{

    return count;
}
bool Q::full()
{
    return (size()==capacity);
}

void Q::push(int x)
{
    if (full())
    {
        cout << "큐가 가득 차있습니다.\n";
    }
    else
    {
        arr[++rear] = x;
        count++;
    }
}

int Q::pop()
{

    if (empty())
    {
        cout << "-1\n";
    }
    else
    {
        cout << arr[++fron] << endl;
        count--;
    }

    return 0;
    ;
}

int Q::front()
{
    if (empty())
    {
        cout << "-1" << endl;
        return 0;
    }
    else
        cout << arr[fron + 1] << endl;
    return 0;
}

int Q::back()
{
    if (empty())
    {
        int a = -1;
        return -1;
    }
    else
        return arr[rear];
}

int main()
{

    int m;
    cin >> m;

    Q q;

    for (int i = 0; i < m; i++)
    {
        string a;
        cin >> a;

        if (a == "push")
        {
            int num;
            cin >> num;
            q.push(num);
        }
        else if (a == "pop")
        {
            q.pop();
        }
        else if (a == "size")
        {
            cout << q.size() << endl;
        }
        else if (a == "empty")
        {
            cout << q.empty() << endl;
        }
        else if (a == "front")
        {
            q.front();
        }
        else if (a == "back")
        {
            cout << q.back() << endl;
        }
    }

    return 0;
}*/

// 백준 9012
/*#include <iostream>
#include <string>
#include <stack>
using namespace std;

string vps(string s)
{

    stack<char> st;
    for (int i = 0; i < s.size(); i++)
    {

        if (s[i] == '(')
        {
            st.push(s[i]);
        }
        else
        {
            if (!st.empty())
                st.pop();
            else
                return "NO";
        }
    }

    if (st.empty())
        return "YES";
    else
        return "NO";
}

int main()
{

    string s;

    int num;
    cin >> num;

    for (int i = 0; i < num; i++)
    {

        cin >> s;
        cout << vps(s) << endl;
    }
    return 0;
}*/

// 백준 1920
/*#include <iostream>
using namespace std;

int main()
{

    int n;
    cin >> n;

    cin.ignore();
    string s;

    getline(cin, s);
    s.erase(remove(s.begin(), s.end(), ' '), s.end());

    int m;
    cin >> m;

    cin.ignore();
    string s1;

    getline(cin, s1);
    s1.erase(remove(s1.begin(), s1.end(), ' '), s1.end());

    for (int i = 0; i < s1.size(); i++)
    {
        int cnt = 0;

        for (int j = 0; j < s.size(); j++)
        {
            if (s1[i] == s[j])
            {
                cnt++;
            }
        }
        if (cnt >= 1)
            cout << "1\n";
        else
            cout << "0\n";
    }

    return 0;
}*/

// 백준 1920
/*#include <iostream>
#include <algorithm>
using namespace std;

int arr[100000];
int N;
int M;
int n;

int solve(int num);

int main(){

ios::sync_with_stdio(false);
cin.tie(NULL);

cin>>N;

for(int i=0;i<N;i++){
    cin>>arr[i];
}

sort(arr,arr+N);

int M;
cin>>M;

for(int j=0;j<M;j++){
int M;
cin>>M;
cout<<solve(M)<<'\n;
}
    return 0;
}

int solve(int num){

int low=0;
int high=N-1;

while(low<=high)
{
    int mid=(low+high)/2;
    if(arr[mid]==num)
    return true;
    else if(num<arr[mid]) high=mid-1;
    else if(num>arr[mid]) low=mid+1;

}
return 0;
} */

// 백준 10773
/*#include <iostream>
#include <stack>

using namespace std;

int num;
int money;

int main()
{
    int total=0;
    int size=0;

    stack<int> st;

    cin >> num;

    for (int i = 0; i < num; i++)
    {
        cin >> money;
        if (money == 0)
            st.pop();
        else
            st.push(money);
    }

    size=st.size();

    if (st.empty() == true)
    {
        cout<<"0\n";

    }
    else
    {
        for (int j = 0; j <size; j++)
        {

            total = total + st.top();
            st.pop();
            
        }
        cout << total<<endl;
    }
    
    return 0;
}*/

//백준 216
/*#include <iostream>
#include <queue>

using namespace std;

int main(){

queue<int>q;

int num;
cin>>num;

for(int i=1;i<=num;i++){
    q.push(i);
}


while(q.size()!=1){

q.pop();
q.push(q.front());
q.pop();
}
cout<<q.front()<<endl;

    return 0;
} */

//백준 1874

/*
#include <iostream>
#include <stack>
#include <vector>

using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int n;
    cin >> n;
    
    vector<int> st;
    vector<char> ch;

    int cnt = 0;
    int num[100001];

    for (int i = 0; i < n; i++) cin >> num[i];
    
        for (int j = 1; j <= n; j++)
        {
            st.push_back(j);
            ch.push_back('+');

            while(!st.empty() && st.back() == num[cnt])
            {
                st.pop_back();
                ch.push_back('-');
                cnt++;
            }
        }

    if (!st.empty()) cout << "NO"; 
    else for (int i = 0; i < ch.size(); i++) cout << ch[i] << '\n';
    
    return 0;
}
*/

//백준 1927
/*

#include <iostream>
#include <algorithm>
#include <vector>
#include <queue>

using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    priority_queue<int, vector<int>, greater<int> > pq;

    int N;
    cin >> N;

    int input;
    for (int i = 0; i < N; i++)
    {
        cin >> input;

        if (pq.empty() && input == 0) cout << 0 << '\n';
        
        else if(input == 0)
        {
            cout << pq.top() << '\n';
            pq.pop();
        }
        else pq.push(input);
        
    }
    return 0;
}
*/

//백준 11279
/*
#include <iostream>
#include <algorithm>
#include <queue>
#include <vector>

using namespace std;

int main()
{

    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int N;
    cin >> N;

    priority_queue<int, vector<int>, less<int> > q;
    int data;

    for (int i = 0; i < N; i++)
    {
        cin>>data;

        if (q.empty() && data == 0)
            cout << 0 << '\n';
        else if (data == 0)
        {
            cout << q.top() << '\n';
            q.pop();
        }
        else q.push(data);
    }

    return 0;
}
*/

//백준 10799
/*
#include <iostream>
#include <stack>
#include <vector>
#include <algorithm>
#include <string>

using namespace std;

int main()
{

    int index = 0;

    string s;
    stack<char> st;

    cin >> s;

    for (int i = 0; i < s.length(); i++)
    {

        if (s[i] == '(')
        {
            st.push(s[i]);
        }
        else if (s[i] == ')' && s[i-1]=='(')
        {
            st.pop();
            index +=st.size();
        }
        else
        {
            index++;
            st.pop();
        }

        
    }
    cout << index << endl;

    return 0;
}
*/

//백준 1406 ( 수 정 )

/*#include <iostream>
#include <stack>
#include <vector>
#include <string>

using namespace std;

int main()
{
    cin.tie(NULL);
	ios::sync_with_stdio(false);

    vector<char> data;

    string s;
    cin >> s;

    for (int i = 0; i < s.length(); i++)
    {
        data.push_back(s[i]);
    }

    int num;
    cin >> num;

    string input;

    int point = data.size();
    cin.ignore();

    for (int i = 0; i < num; i++)
    {
        getline(cin, input);

        if (input[0] == 'P')
        {
            data.insert(data.begin() + point, input[2]);

            if (point == data.size())
                point = data.size();
            else
                point++;
        }
        else if (input[0] == 'L')
        {
            if (point < 0)
                point = 0;
            else

                point--;
        }
        else if (input[0] == 'D')
        {
            if (point == data.size())
                point = data.size();
            else
                point++;
        }
        else if (input[0] == 'B')
        {
            if (point == 0)
            {
                point = 0;
            }
            else if (point == data.size())
            {
                point--;
                data.erase(data.begin() + point);
            }
            else
            {
                point--;
                data.erase(data.begin() + point);
            }
        }
    }

    string a(data.begin(), data.end());
    cout << a << endl;
    
    return 0;
}
*/
//