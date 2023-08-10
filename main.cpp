#include "Calculator.h"
 
int main()
{
    Calculator* calculator = new Calculator();

    calculator->CalcStart();

    delete calculator;

    return 0;
}

//1. +인지 -인지 판단하는 함수 필요
//ex) 55 - -5 == 55+5 
//    -5*-5 == 5*5
//  최종 결과값 +/- 저장 변수, 계산시 +/- 저장변수 만들기
//  입력받은 string에서 기호 뺴주는 함수 만들기

//2. 소수점을 저장하는 변수 만들기
//   string->int 변환시 소수점 위치 저장
//   계산완료후 
//      출력시 if(position==소수점 위치 저장 변수) cout<<"."; 
//      저장시 if(position==소수점 위치 저장 변수) num.push_back('.');
// 입력받은 string에서 . 뺴주고 위치 저장하는 함수 만들기
// 소수점 위치 계산 함수 만들기
