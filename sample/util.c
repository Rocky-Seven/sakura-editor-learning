#include <stdio.h>
#include "util.h"

/* DBに接続する。成功したら0を返す */
int connect_db(void)
{
    printf("DB接続中...\n");
    return 0;
}

/* DB接続を閉じる */
void close_db(void)
{
    printf("DB切断\n");
}
