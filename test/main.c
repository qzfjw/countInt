#include<stdio.h>
#define FALSE 0
#define TRUE 1
/*
  你这个程序的主要功能是什么？没收到最新版本啊~~
*/
int main(){
    char nextChar;
    int gotI=FALSE;
    int gotIN=FALSE;
    int count=0;
    printf("程序功能:在输入的字符串中统计连续的int的出现次数\n");
    printf("enter your string:");
    while(nextChar!='\n'){
        scanf("%c",&nextChar);
        switch(nextChar){
            case'i':
                gotI=TRUE;
                gotIN=FALSE;
                break;
            case'n':
                if(gotIN)
                    gotIN=FALSE;
                if(gotI)
                    gotIN=TRUE;
                //gotIN=FALSE; 哥们码代码的时候细心点啊！！！
                break;
            case't':
                if(gotIN)
                    count++;
                gotI=FALSE;
                gotIN=TRUE;
                break;
            default:
                gotI=FALSE;
                gotIN=FALSE;
            }
    }
    printf("count=%d\n",count);
}
