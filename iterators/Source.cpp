#include <iostream>
#include <vector>
#include <fstream>
#include <string>
#include <iterator>
using namespace std;

void main() {
	/*vector<double> v = { 0.12,0.23,0.33,0.44,0.55,0.66 };
	vector<double>::const_iterator it;
	ofstream file("1.txt");
	ostream_iterator<double> ft(file, "\t");
	copy(v.begin(),v.end(),ft);
	file.close();
	
	vector<double> b;
	ifstream fout("1.txt");
	istream_iterator<double> Itin(fout);
	istream_iterator<double> inEnd;
	copy(Itin, inEnd, back_inserter(b));
	for (it=b.begin();it!=b.end();it++)
	{
		cout << *it << "\t";
	}
	cout << endl;
*/

	string str;
	string str2;

	cin >> str;
	str2 = str;
	reverse(str2.begin(), str2.end());
	if (str==str2)
	{
		cout << "this is palindrom\n";
	}



	system("pause");
}