#ifndef MAIN_H
#define MAIN_H

/*
목표 : 선형 스윕 방식 windbg

해야할 일
언어 : C, Assembly + (윈도우 프로그래밍)
옵코드 맵 변환 -> 배열로 구현
C로 기능 구현 후 C#으로 gui


개발 환경
Visual Studio 2019 live share 이용

개발 순서
우선 C#으로 껍데기부터...

개발 시작
매주
수/목 저녁 9~11시



DLL 라이브러리 기능


GUI

명령어
OPCODE
파일열기 (PE)


class, if, while, switch, for, do while - > example

if() {

}

function - > example
start()
{

}

---------------------------------------------------------------

class, struct

sturct {
        m_
}

function(p_)
{

}

코드 개쉽게 적자 (주석이 필요없이 주석이 곧 코드)

new delete
malloc free

모든 함수에 로그 박기


16bit : AX, BX, CX, DX, SP, BP, SI, DI
32bit : EAX, EBX, ECX, EDX, ESP, EBP, ESI, EDI
stack : 

calculation : INC, DEC, ADD, SUB,
function : CALL

control Flow instructions : jmp, je, jne, jz, jg, jge, jl, jle, cmp, call, ret
stack : MOV, PUSH, POP, POP, LEA
flag bit : CF, PF, AF, ZF, SF, TF, IF, DF, OF, IO-PL, NF, RF, VM, AC, VIF, VIP, ID
mov eax , esp
0x8B
83C3 12 - > ADD EBX, 12
C3 = 11|000|011  sub eax , 8
2AC008

0b|11|101|000

*/

#include <stdio.h>

enum state_option {
        READY = 0, TRYING, RUNNING, FAIL, WAIT, DIE
};

enum state_option state;

void initinterpreter();

void start();


#endif