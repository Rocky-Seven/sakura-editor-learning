#include <stdio.h>
#include "util.h"

int main(void)
{
    int retry = 0;

    if (connect_db() != 0) {
        while (retry < 3) {
            printf("再接続します\n");
            if (connect_db() == 0) {
                break;
            }
            retry++;
        }
    }

    for (int i = 0; i < 5; i++) {
        if (i % 2 == 0) {
            printf("偶数: %d\n", i);
        } else {
            printf("奇数: %d\n", i);
        }
    }

    close_db();
    return 0;
}
