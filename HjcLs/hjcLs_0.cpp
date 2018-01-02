//#include "apue.h"
#include <dirent.h>
#include <stdio.h>

int main(int argc, char *argv[])
{
    DIR *dp;
    struct dirent *dirp;

    if(argc != 2)
    {
        printf("demo: ls dirName \n");
        return -1;
    }

    dp = opendir(argv[1]);

    if(dp == NULL)
    {
        printf("can not open this dir: %s \n",argv[1]);
        return -2;
    }

    dirp = readdir(dp);

    while (dirp!= NULL)
    {
        printf("%s \n",dirp->d_name);
        dirp = readdir(dp);
    }

    closedir(dp);
    return 1;
}
