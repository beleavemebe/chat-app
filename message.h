//
// Created by Roman on 01-Jun-22.
//

#ifndef CHAT_APP_MESSAGE_H
#define CHAT_APP_MESSAGE_H

struct message {
    int id;
    long timestamp;
    struct user *author;
};

#endif //CHAT_APP_MESSAGE_H
