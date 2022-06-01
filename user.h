//
// Created by Roman on 01-Jun-22.
//

#ifndef CHAT_APP_USER_H

struct user {
    int id;
    char *name;
    int color;
    struct chat *chats;
};

#define CHAT_APP_USER_H

#endif //CHAT_APP_USER_H
