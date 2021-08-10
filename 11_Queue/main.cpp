//
//  main.cpp
//  10_Queue
//
//  Created by 세광 on 2021/08/10.
//

/*
 큐 기본 함수
 
 [추가 및 삭제]
 - push(element): 큐에 원소 추가(뒤에)
 - pop(): 큐에 있는 원소 삭제(앞에)
 [조회]
 - front(): 큐 제일 앞에 있는 원소를 반환
 - back(): 큐 제일 뒤에 있는 원소를 반환
 [기타]
 - empty(): 큐가 비어있으면 true 아니면 false를 반환
 - size(): 큐 사이즈를 반환
 */

#include <iostream>
#include <queue>

using namespace std;

int main() {
    queue<int> q;
    q.push(7);
    q.push(5);
    q.push(4);
    q.pop();
    q.push(6);
    q.pop();
    
    while(!q.empty()) {
        cout << q.front() << ' ';
        q.pop();
    }
    cout << endl;
}
