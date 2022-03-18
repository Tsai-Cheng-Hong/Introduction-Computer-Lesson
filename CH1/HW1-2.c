#include <stdio.h> //把stdio.h這個檔案含括進來
#include <stdlib.h>//把stdlib.h這個檔案含括進來

/*多行註解:ASCII code*/
//單行註解:ASCII code

int main(void)//主函數main()從這兒開始
{
    int y;
    int c;
    int d;
    int m;
    int w;
    printf("Input y:");//呼叫printf()函數
    scanf("%d", &y);
    printf("Input c:");
    scanf("%d", &c);
    printf("Input m:");
    scanf("%d", &m);
    printf("Input d:");
    scanf("%d", &d);
    w=(y+(y/4)+(c/4)-(2*c)+(26*(m+1)/10)+d-1)%7;
    printf("%d\n" ,w);//呼叫printf()函數
    system("pause");//呼叫dos裡的pause指令，用來暫停程式指令
    return 0;
}
