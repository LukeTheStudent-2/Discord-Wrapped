#include <ctime>
#include <string>
#include <iostream>
#include <sstream>
#include <regex>

#ifndef MESSAGE_H
#define MESSAGE_H

class Message {
    public:
        time_t timeStamp;
        std::string content;

        int mentionCount;
        int wordCount;
        bool isReply;
        time_t callTime;
        bool containsLink;

        // Default constructor
        Message() : timeStamp(0), content(""), mentionCount(0), wordCount(0), isReply(false), callTime(0), containsLink(false){};

        Message(time_t time, std::string message);

        void printMessage();

    private:
        int getMentionCount();
        int getWordCount();
        bool getIsReply();
        time_t getCallTime();
        bool getContainsLink();
};

#endif
