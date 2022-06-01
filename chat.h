//
// Created by Roman on 01-Jun-22.
//

#ifndef CHAT_APP_CHAT_H
#define CHAT_APP_CHAT_H

struct chat {
    int id;
    char *title;
    struct user *users;
    struct message *history;
};

#endif //CHAT_APP_CHAT_H
