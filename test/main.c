#include<stdio.h>
#define FALSE 0
#define TRUE 1
/*
  ������������Ҫ������ʲô��û�յ����°汾��~~
*/
int main(){
    char nextChar;
    int gotI=FALSE;
    int gotIN=FALSE;
    int count=0;
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
                //gotIN=FALSE; ����������ʱ��ϸ�ĵ㰡������
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
