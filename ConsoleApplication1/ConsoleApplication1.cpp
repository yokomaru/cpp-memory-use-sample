// ConsoleApplication1.cpp : コンソール アプリケーションのエントリ ポイントを定義します。
//

#include "stdafx.h"
#include <iostream>

using namespace std;

int main() {
	// スタック領域にint型の変数を2つ確保
	int stackVal1 = 0;
	int stackval2 = 0;

	// int型のポインタ変数を2つ宣言
	int *heapVal1;
	int *heapVal2;

	// ヒープ領域にint型の変数を2つ確保
	heapVal1 = new int(0);
	heapVal2 = new int(0);

	// スタック領域に確保した変数のアドレスを表示
	cout << "stackVal1のアドレスは " << hex << &stackVal1 << endl;
	cout << "stackVal2のアドレスは " << hex << &stackval2 << endl;

	// ヒープ領域に確保した変数のアドレスを表示
	cout << "heapVal1のアドレスは " << hex << heapVal1 << endl;
	cout << "heapVal2のアドレスは " << hex << heapVal2 << endl;

	// 確保したヒープ領域を解放
	delete heapVal1;
	delete heapVal2;
}