#ifndef MAIN_H
#define MAIN_H

/*
��ǥ : ���� ���� ��� windbg

�ؾ��� ��
��� : C, Assembly + (������ ���α׷���)
���ڵ� �� ��ȯ -> �迭�� ����
C�� ��� ���� �� C#���� gui


���� ȯ��
Visual Studio 2019 live share �̿�

���� ����
�켱 C#���� ���������...

���� ����
����
��/�� ���� 9~11��



DLL ���̺귯�� ���


GUI

��ɾ�
OPCODE
���Ͽ��� (PE)


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

�ڵ� ������ ���� (�ּ��� �ʿ���� �ּ��� �� �ڵ�)

new delete
malloc free

��� �Լ��� �α� �ڱ�


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