// ConsoleApplication1.cpp : �R���\�[�� �A�v���P�[�V�����̃G���g�� �|�C���g���`���܂��B
//

#include "stdafx.h"
#include <iostream>

using namespace std;

int main() {
	// �X�^�b�N�̈��int�^�̕ϐ���2�m��
	int stackVal1 = 0;
	int stackval2 = 0;

	// int�^�̃|�C���^�ϐ���2�錾
	int *heapVal1;
	int *heapVal2;

	// �q�[�v�̈��int�^�̕ϐ���2�m��
	heapVal1 = new int(0);
	heapVal2 = new int(0);

	// �X�^�b�N�̈�Ɋm�ۂ����ϐ��̃A�h���X��\��
	cout << "stackVal1�̃A�h���X�� " << hex << &stackVal1 << endl;
	cout << "stackVal2�̃A�h���X�� " << hex << &stackval2 << endl;

	// �q�[�v�̈�Ɋm�ۂ����ϐ��̃A�h���X��\��
	cout << "heapVal1�̃A�h���X�� " << hex << heapVal1 << endl;
	cout << "heapVal2�̃A�h���X�� " << hex << heapVal2 << endl;

	// �m�ۂ����q�[�v�̈�����
	delete heapVal1;
	delete heapVal2;
}