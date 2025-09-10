import random

def chatbot():
    print("🤖 Chatbot: Hello! Type 'bye' to exit.")
    greetings = ["hi", "hello", "hey"]
    while True:
        user = input("You: ").lower()

        if user in ["bye", "exit", "quit"]:
            print("🤖 Chatbot: Goodbye! Have a nice day 👋")
            break
        elif user in greetings:
            print("🤖 Chatbot:", random.choice(["Hello!", "Hi there!", "Hey!"]))
        elif "how are you" in user:
            print("🤖 Chatbot: I'm just a bot, but I'm doing great! 😃")
        elif "help" in user:
            print("🤖 Chatbot: You can try saying hello, ask how I am, or type bye to exit.")
        else:
            print("🤖 Chatbot: Sorry, I didn’t understand that.")

if __name__ == "__main__":
    chatbot()
