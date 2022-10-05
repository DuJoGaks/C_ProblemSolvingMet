#include<stdio.h>

char* FindStringInString(char str[], char find_str[]) {
    char* i_cnt, * j_find_cnt;
    if (*find_str == 0) return (char*)str;
    while (*str != 0) {
        if (*str == *find_str) {
            i_cnt = str + 1;
            j_find_cnt = find_str + 1;
            while (*j_find_cnt != 0 && *i_cnt != 0 && *i_cnt == *j_find_cnt) {
                i_cnt++;
                j_find_cnt++;
            }
            if (*j_find_cnt == 0) return (char*)str;
            if (*i_cnt == 0) break;
        }
        str++;
    }
    return NULL;
}

int main() {
    char str[50] = "asfksafjksdkjksla dkas hong assd dong";
    char str2[10] = "hong";
    //find str2 in str array

}