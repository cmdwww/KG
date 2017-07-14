#include <time.h>
#include <fstream>
#include <iostream>

using namespace std;

void main() {
	srand(time(NULL));
	ofstream File;
	char WORDS[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZ1234567890";
	File.open("Data.txt");
	int k,i = 0;
	cout << "Type K: ";
	cin >> k;
	while (i != k) {
		File << WORDS[rand() % 36] << WORDS[rand() % 36] << WORDS[rand() % 36] << WORDS[rand() % 36] << WORDS[rand() % 36];
		File << "-";
		File << WORDS[rand() % 36] << WORDS[rand() % 36] << WORDS[rand() % 36] << WORDS[rand() % 36] << WORDS[rand() % 36];
		File << "-";
		File << WORDS[rand() % 36] << WORDS[rand() % 36] << WORDS[rand() % 36] << WORDS[rand() % 36] << WORDS[rand() % 36];
		File << endl;
		i++;
	}
	system("pause");
	File.close();
}