#include <iostream>

using namespace std;

int main() {
	// ������� 1: �������������� ��������
	int a = 10, b = 5;

	cout � "a + b = " � a + b � endl;
	cout � "a - b = " � a - b � endl;
	cout � "a * b = " � a * b � endl;
	cout � "a / b = " � a / b � endl;
	cout � "a % b = " � a % b � endl; // ������� �� �������
	cout � "a++ = " � a++ � endl; // ����������� ���������
	cout � "a = " � a � endl; // �������� a ����� ����������
	cout � "b� = " � b� � endl; // ����������� ���������
	cout � "b = " � b � endl; // �������� b ����� ����������

	// ������� 2: ��������� ���������
	cout � endl � "��������� ���������:" � endl;
	cout � "a == b: " �(a == b) � endl;
	cout � "a != b: " �(a != b) � endl;
	cout � "a > b: " �(a > b) � endl;
	cout � "a < b: " �(a < b) � endl;
	cout � "a >= b: " �(a >= b) � endl;
	cout � "a <= b: " �(a <= b) � endl;

	// ������� 3: ���������� ���������
	cout � endl � "���������� ���������:" � endl;
	bool c = true, d = false;

	cout � "!c: " � !c � endl; // ���������� ���������
	cout � "c && d: " �(c && d) � endl; // ���������� �
	cout � "c || d: " �(c || d) � endl; // ���������� ���

	return 0;
}