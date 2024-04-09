#include<iostream>
using namespace std;

class MyIntStack{
    int *p;         //동적 할당 공간의 주소를 저장할 변수
    int size;       //동적 할당 공간의 크기를 저장할 변수
    int tos;        //스택의 현재 주소값을 저장 top of stack, 마지막 tos 값 확인까지 해보기.
public:
    MyIntStack();           //기본 생성자
    MyIntStack(int size);   //크기를 지정한 생전전
    MyIntStack(const MyIntStack &s);   //복사생성자
    ~MyIntStack();  //소멸자
    bool push(int n);   //스택에 값을 푸시하는 값를 저장하기
    bool pop(int &n);   //스택에서 값을 푸시하는 값를 삭제하기
    void tos_show();    //스택의 최상단 값를 출력하기
    void p_show();      //스택의 내용값를 출력하기
};

MyIntStack::MyIntStack(){
    this->size = 10;    //기본 크기를 10으로 초기화
    this->p = new int[this->size] {0};  //기본크기의 배열 동적할당,
    this->tos = 0;      //스텍의 최상단 인덱스 초기화
}
MyIntStack::MyIntStack(int size){       
    this->size = size;          //지정한 크기로 배열크기 설정
    this->p = new int[this->size] {0};  //배열 동적할당, 모든요소를 0으로 초기화
    this->tos = 0;              //스택의 최상단 인덱스 초기화
}
MyIntStack::MyIntStack(const MyIntStack &s){
    this->size = s.size;        //복사 대상의 배열크기 가져오기
    this->p = new int[this->size] {0};  //배열 동적할당, 모든요소를 0으로 초기화
    //배열의 요소값 복사(깊은복사), 주소복사는 안 됨(얕은복사)
    for(int i=0; i<this->size; i++) this->p[i] = s.p[i];    
    this->tos = s.tos;      //복사대상의 최상단 인덱스 가져오기
}
MyIntStack::~MyIntStack(){
    if(this->p) delete [] this->p;  //동적할당된 메모리 해제
}
bool MyIntStack::push(int n){
    if (tos > (size-1)) {return false;} //스택이 가득 찬 경우 실패 반환
        else {p[tos] = n; tos++; return true;}  //스택에 값을 푸시하고 최상단 인덱스 증가
}
bool MyIntStack::pop(int &n){
    if (tos < 1) {return false;}   //스택이 비어 있는 경우 실패 반환
        else {tos--; n = p[tos]; p[tos] = 0; return true;}  //최상단 인덱스 감소하고 해당값 팝
}
void MyIntStack::tos_show(){
    cout << this->tos << endl;      //최상단 인덱스 출력
}

void MyIntStack::p_show(){
    for(int i=0; i<this->size; i++) cout << this->p[i] << ' ';
    cout << endl;   //배열의 요소 출력
}
int main(void){
    MyIntStack a(10);   //크기가 10인 스택생성
    a.push(10);         //값 10을 푸시
    a.push(20);         //값 20을 푸시
       
    MyIntStack b = a;   //객체a를 복사하여 b생성(복사생성자 호출)
    b.push(30);         //값 30을 푸시
    a.p_show();         //스텍의 a상태 내용값 출력
    b.p_show();         //스텍의 b상태 내용값 출력

    int n;
    a.pop(n);           // 스택 a에서 팝하고 값을 n에 저장
    cout << "스택 a에서 팝 한 값" << n << endl;
    b.pop(n);           // 스택 b에서 팝하고 값을 n에 저장
    cout << "스택 b에서 팝 한 값" << n << endl;

    return 0;
}