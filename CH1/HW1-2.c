#include <stdio.h> //��stdio.h�o���ɮקt�A�i��
#include <stdlib.h>//��stdlib.h�o���ɮקt�A�i��

/*�h�����:ASCII code*/
//������:ASCII code

int main(void)//�D���main()�q�o��}�l
{
    int y;
    int c;
    int d;
    int m;
    int w;
    printf("Input y:");//�I�sprintf()���
    scanf("%d", &y);
    printf("Input c:");
    scanf("%d", &c);
    printf("Input m:");
    scanf("%d", &m);
    printf("Input d:");
    scanf("%d", &d);
    w=(y+(y/4)+(c/4)-(2*c)+(26*(m+1)/10)+d-1)%7;
    printf("%d\n" ,w);//�I�sprintf()���
    system("pause");//�I�sdos�̪�pause���O�A�ΨӼȰ��{�����O
    return 0;
}
