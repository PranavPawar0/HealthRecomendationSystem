#include <iostream>
#include <string>
using namespace std;

struct User {
    string name;
    int age;
    int stepsTaken;
};

void provideRecommendations(const User& user) {
    if (user.stepsTaken < 5000) {
        cout << "You should aim for more steps per day." << endl;
    } else if (user.stepsTaken < 10000) {
        cout << "You're doing a good job with your daily steps!" << endl;
    } else {
        cout << "Excellent! You're very active." << endl;
    }
}

int main() {
    User user;
    cout << "Enter your name: ";
    cin >> user.name;
    cout << "Enter your age: ";
    cin >> user.age;
    cout << "Enter steps taken today: ";
    cin >> user.stepsTaken;

    cout << "Hello, " << user.name << "!" << endl;
    cout << "Based on your age and steps taken:" << endl;
    
    provideRecommendations(user);
    
    return 0;
}
