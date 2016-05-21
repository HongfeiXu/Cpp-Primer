//
//Revise the loop that printed the first paragraph in text 
//to instead change the elements in text that correspond 
//to the first paragraph to all uppercase. 
//After you’ve updated text, print its contents.
//

#include <iostream>
#include <vector>
#include <string>
#include <cctype>

using std::vector; using std::string; using std::cout; using std::cin; using std::isalpha;

int main()
{
	vector<string> text;
	// 输入每一行
	string line;
	while (getline (cin, line))
		text.push_back (line);
	// 用迭代器的方式处理
	for (auto it = text.begin (); it != text.end () && !it->empty(); ++it)		// it为vector<string>::iterator

	{
		for (auto it2 = it->begin (); it2 != it->end (); ++it2)					// it2为string::iterator
		{
			*it2 = toupper (*it2);
		}
		cout << *it << endl;
	}

    return 0;
}
