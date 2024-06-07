// REU_Chat.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <string>

// GET returns a string representation of a list of ALL chat messages in the database
std::string GET(std::string url) {
    std::string cmd = "curl -s -w \\n%{http_code} " + url;
    FILE* p = _popen(cmd.c_str(), "r");
    char buffer[2];
    std::string body;
    if (!p) {
        return "Error running curl command";
    }
    while (fgets(buffer, sizeof(buffer), p)) {
        body += buffer;
    }
    std::string status = body.substr(body.find_last_of('\n') + 1);
    if (status == "200") {
        return body.substr(0, body.find_last_of('\n'));
    }
    else if (status == "404") {
        std::cout << "404 Not Found: Make sure the URL is correct" << std::endl;
    }
    else if (status == "500") {
        std::cout << "500 Internal Server Error: The server is not responding" << std::endl;
    }
    else if (status == "000") {
        std::cout << "000 Error: Make sure the URL is correct" << std::endl;
    }
    else {
        std::cout << "Error: " << status << std::endl;
    }
}

// POST sends a message to be stored in the database. If successful, it returns the string "200"
std::string POST(std::string url, std::string message) {
    std::string cmd = "curl -s POST -d \"chat=" + message + "\" " + url;
    FILE* p = _popen(cmd.c_str(), "r");
    char buffer[2];
    std::string body;
    if (!p) {
        return "Error running curl command";
    }
    while (fgets(buffer, sizeof(buffer), p)) {
        body += buffer;
    }
    if (body == "200") {
        return "200";
    }
    else {
        std::cout << "Error inserting message: Make sure the URL is correct" << std::endl;
    }
    return body;
}

int main()
{
    int choice;
    std::string message;
    std::string url = "http://nicks-mac.vrac.iastate.edu:5001/api/v1/chats";

    std::cin >> choice;
    while (choice != 3)
    {
        switch (choice)
        {
        case 1:
            GET(url);
            break;
        case 2:
            POST(url, message);
            break;
        default:
            break;
        }

    }

    std::cout << "Hello World!\n";
}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
