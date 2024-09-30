#include<iostream>
#include<stack>
#include<queue>
using namespace std;
int main(){
	//stack example(LIFO)
	stack<int>stackExample;
	//adding elements to the stack
	stackExample.push(1);
	stackExample.push(2);
	stackExample.push(3);
	cout<<"Stack (LIFO) Example:"<<endl;
	//popping elements from stack
	while(!stackExample.empty()){
		cout<<stackExample.top()<<"";//prints the top element
		stackExample.pop();//remove the top element
	}
	cout<<endl<<endl;
	//queue example(FIFO)
	queue<int>queueExample;
	//adding elements to the queue
	queueExample.push(1);
	queueExample.push(2);
	queueExample.push(3);
	cout<<"Queue(FIFO) Example:"<<endl;
	//removng elements from a queue
	while(!queueExample.empty()){
		cout<<queueExample.front()<<"";//prints the front element
		queueExample.pop();//removes the front element
	}
	cout<<endl;
	return 0;
	
}