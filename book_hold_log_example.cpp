/*
 * Course: COEN 2220 - Programming 2
 * Name: Logan N. Ramirez Rodriguez
 * Lab: Lab 7 - Abstract Data Types
 * Description: Guided example - ADT contract, implementation, and client code
 * Due date: 10/1/2026
 */

#include <iostream>
#include <string>
using namespace std;

/*
 * BookHoldLog ADT
 *
 * Data:
 * A sequence of up to four book hold IDs.
 *
 * Operations:
 * addHold(id): Adds one book hold ID when space remains; returns whether it was added.
 * contains(id): Reports whether an equal book hold ID is stored.
 * size(): Returns the number of stored hold IDs.
 * isEmpty(): Reports whether no hold IDs are stored.
 */
class BookHoldLog
{
private:
    static const int CAPACITY = 4;
    string holdIds[CAPACITY];
    int count;

public:
    BookHoldLog()
    {
        count = 0;
    }

    bool addHold(const string& holdId)
    {
        bool wasAdded = false;
        if (count < CAPACITY)
        {
            holdIds[count] = holdId;
            count++;
            wasAdded = true;
        }
        return wasAdded;
    }

    bool contains(const string& holdId) const
    {
        bool found = false;
        for (int h = 0; h < count; h++)
        {
            if (holdIds[h] == holdId)
            {
                found = true;
            }
        }
        return found;
    }

    int size() const { return count; }
    bool isEmpty() const { return count == 0; }
};

int main()
{
    cout << boolalpha;
    BookHoldLog holds;
    cout << "Stored holds: " << holds.size() << endl;
    cout << "Log is empty: " << holds.isEmpty() << endl;

    holds.addHold("BK-104");
    holds.addHold("BK-215");
    cout << "Stored holds: " << holds.size() << endl;

    cout << "Contains BK-215: " << holds.contains("BK-215") << endl;
    cout << "Contains BK-310: " << holds.contains("BK-310") << endl;

    return 0;
}