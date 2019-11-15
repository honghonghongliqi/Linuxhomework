#include"myhead.h"
void read_file_1( ){//文件读函数版本号为:1
    char file_name[20];
    char buf[2048];
    int handle;
    printf("请输入您想要读取的文件名:");
    scanf("%s",file_name);
    if((handle=open(file_name,O_RDONLY,S_IWRITE|S_IREAD))==-1)
    {
       perror("read fail");
       exit(1);
    }
    if(read(handle,buf,sizeof(buf))==-1)
    {
       perror("read fail");
       exit(1);
    }
    printf("读取成功！,文件内容如下:\n");
    printf("---------------------------------------------\n");
    printf("%s",buf);
    printf("\n---------------------------------------------\n");
    close(handle);
    printf("\n\n按任意键返回主菜单");
    getchar();
    getchar();
}
