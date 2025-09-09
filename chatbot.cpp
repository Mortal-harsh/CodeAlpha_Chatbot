#include <iostream>
#include <string>
#include <algorithm>
#include <vector>
#include <cstdlib>
#include <ctime>
using namespace std;

// Function to convert string to lowercase
string toLowerCase(string str) {
    transform(str.begin(), str.end(), str.begin(), ::tolower);
    return str;
}

// Function to generate random reply from a list
string randomReply(vector<string> replies) {
    int index = rand() % replies.size();
    return replies[index];
}

// Main function to get chatbot response
string getResponse(string userInput) {
    userInput = toLowerCase(userInput);

    if (userInput == "hello" || userInput == "hi" || userInput == "hey") {
        vector<string> greetings = {"Hi there!", "Hello!", "Hey, how can I help you today?"};
        return randomReply(greetings);

    } else if (userInput == "how are you") {
        vector<string> replies = {"I'm doing great, thanks!", "I'm fine, how about you?", "Feeling awesome today!"};
        return randomReply(replies);

    } else if (userInput == "what is your name") {
        return "I'm your friendly CodeAlpha Chatbot 🤖";

    } else if (userInput == "bye") {
        return "Goodbye! Have a nice day 👋";

    } else if (userInput == "help") {
        return "You can try asking: hello, how are you, what is your name, bye.";

    } else {
        return "Sorry, I don't understand that. Type 'help' for options.";
    }
}

int main() {
    srand(time(0)); // Seed for random replies
    string input;

    cout << "🤖 Chatbot: Hello! I'm here to chat. Type 'bye' to exit.\n";

    while (true) {
        cout << "You: ";
        getline(cin, input);

        string response = getResponse(input);
        cout << "🤖 Chatbot: " << response << endl;

        if (toLowerCase(input) == "bye") {
            break;
        }
    }

    return 0;
}
