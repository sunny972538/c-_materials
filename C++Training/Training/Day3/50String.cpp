#include<iostream>
#include<string>
#include <regex>
using namespace std;

namespace nm50
{

	void main50()
	{
		/*auto str1 = u8"I'm a UTF-8 string.";
		auto str2 = u"This is a UTF-16 string.";
		auto str3	=U"This is a UTF-32 string.";

		cout << str1 << endl << str2 << endl << str3 << endl;*/

		//cout << (char*)str2 << endl;

		auto str4 = R"delimiter(india is great \n The best is sachin)delimiter";
		//auto str4 = R"(india is great \n The best is sachin)";
		cout << str4 << endl;
	}

	void main()
	{
		std::string s = "Some people, when confronted with a problem, think "
			"\"I know, I'll use regular expressions.\" "
			"Now they have two problems.";

		std::regex word_regex("(\\S+)");
		auto words_begin =
			std::sregex_iterator(s.begin(), s.end(), word_regex);
		auto words_end = std::sregex_iterator();

		std::cout << "Found "
			<< std::distance(words_begin, words_end)
			<< " words\n";


		const int N = 6;
		std::cout << "Words longer than " << N << " characters:\n";
		for (std::sregex_iterator i = words_begin; i != words_end; ++i) {
			std::smatch match = *i;
			std::string match_str = match.str();
			if (match_str.size() > N) {
				std::cout << "  " << match_str << '\n';
			}
		}
	}

}