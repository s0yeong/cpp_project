#include <iostream>
#include <string>
using namespace std;

class Buffer {
	string text;
public:
	Buffer(string text) { this->text = text; }
	void add(string next) { text += next; }		//text에 next 문자열 덧붙이기
	void print() { cout << text << endl; }
};

Buffer& append(Buffer& buf, string text) {
	buf.add(text);
	return buf;
}

int main() {
	Buffer buf("Hello");
	Buffer& temp = append(buf, "Guys"); //buf의 문자열에 "Guys" 덧붙임
	temp.print();
	buf.print();
}