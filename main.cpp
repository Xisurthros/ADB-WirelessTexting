#include <iostream>
#include <string>
#include <regex>
#include <unordered_map>

void text(std::string number, std::string message);

int main(int argc, char const *argv[])
{
	std::string user;
	std::string message;

	std::unordered_map<std::string, std::string> data = {
		{"Person1", "+1800000000"},
		{"Person2", "+1800000000"},
		{"Person3", "+1800000000"},
		{"Person4", "+1800000000"},
		{"Person5", "+1800000000"},
	};

	std::cout << "Name: ";
	std::getline(std::cin, user);
	std::cout << "Message: ";
	std::getline(std::cin, message);
	std::cout << "Send: " << message << " To: " << data[use] << std::endl;
	return 0;
}

void text(std::string number, std::string message)
{
	message = std::regex_replace(number, std::regex(" "), "\\ ");
	command = "adb shell service call isms 5 i32 1 s16 \\\"com.android.mms\\\" s16 \\\"null\\\" s16 \\\"" + number + "\\\" s16 \\\"null\\\" s16 \\\"" + user_input + "\\\" s16 \\\"null\\\" s16 \\\"null\\\" i32 1 i64 0";
    system(command.c_str());
}