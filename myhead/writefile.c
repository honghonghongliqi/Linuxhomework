#include"myhead.h"
void write_file_1(){//文件读写函数版本号:1
    char file_name[20];
    int flag=1;
    printf("请输入您想要写入内容的文件名:\n");
    scanf("%s",file_name);
    int handle;
    if((handle=open(file_name,O_WRONLY | O_CREAT | O_TRUNC ,0664))==-1){
        printf("Error!\n");
        exit(1);
    }
    printf("确认文件打开成功或创建成功，可以开始写入!\n");
    printf("请输入您想要写入的内容,一次性只能输出1024个字符的内容,退出输入请输入回车\n");
    char write_mes[1024];
    memset(write_mes,0x00,sizeof(char)*1024);
    printf("您本次的输入:\n");
    scanf("%s",write_mes);
    write(handle,write_mes,sizeof(write_mes));
    close(handle);
    printf("文件写入操作成功！，按任意键回到主菜单！\n");
    getchar();
    getchar();
}
