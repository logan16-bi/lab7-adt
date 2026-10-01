/*
 * Course: COEN 2220 - Programming 2
 * Name: Logan N. Ramirez Rodriguez
 * Lab: Lab 7 - Abstract Data Types
 * Description: ADT contract, implementation, and client code practice
 * Due date: 10/1/2026
 */

#include <iostream>
using namespace std;

/*
 * StudySessionLog ADT
 *
 * Data:
 * A sequence of up to four study session durations, measured in minutes,
 * recorded by the Tutoring Center.
 *
 * Operations:
 * addSession(minutes): Adds one study session duration when space remains;
 * returns true if it was added and false if the log cannot accept another session.
 * totalMinutes(): Returns the sum of all stored session durations, or 0 when none are stored.
 * longestSession(): Returns the largest stored session duration.
 * Precondition: at least one study session is stored.
 * size(): Returns the number of stored study sessions.
 * isEmpty(): Reports whether no study sessions are stored.
 */
class StudySessionLog
{
private:
    static const int CAPACITY = 4;
    int sessionMinutes[CAPACITY];
    int count;

public:
    StudySessionLog()
    {
        count = 0;
    }

    bool addSession(int minutes)
    {
        bool wasAdded = false;
        if (count < CAPACITY)
        {
            sessionMinutes[count] = minutes;
            count++;
            wasAdded = true;
        }
        return wasAdded;
    }

    int totalMinutes() const
    {
        int total = 0;
        for (int h = 0; h < count; h++)
        {
            total += sessionMinutes[h];
        }
        return total;
    }

    int longestSession() const
    {
        int longest = sessionMinutes[0];
        for (int h = 1; h < count; h++)
        {
            if (sessionMinutes[h] > longest)
            {
                longest = sessionMinutes[h];
            }
        }
        return longest;
    }

    int size() const { return count; }
    bool isEmpty() const { return count == 0; }
};

int main()
{
    // ===== Resolve these TODOs later (Part E) =====

    // TODO (Part E): Create a StudySessionLog object and print whether it starts empty.
    // TODO (Part E): Add four dummy session durations and attempt to add a fifth.
    // TODO (Part E): Print the number of stored sessions and whether the fifth session was accepted.
    // TODO (Part E): Print the total minutes and the longest stored session.
    // TODO (Part E): Print descriptive English labels for all results.

    return 0;
}