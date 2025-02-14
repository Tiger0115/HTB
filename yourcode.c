#include <stdio.h>
#include <unistd.h>
#include <fcntl.h>

int main()
{
    
    printf("checking if we can directly access the file \n");
    char *c= "file1";
    int fd = open(c, O_RDONLY);

    struct stat filestats;

    if(fd==-1)
    {
        printf("Failed to read file directly")
    }
    else
    {
        stat(c, &filestats);

        printf("file size - %ld \n", filestats.st_size);
        printf("file mode: %o\n", filestats.st_mode);
        printf("owner uid: %d\n", filestats.st_uid);
        printf("group gid: %d\n", filestats.st_gid);
        return 0;
    }       

    
    printf("Real UID = %d \n", getruid());
    printf("Effective UID = %d \n", geteuid());
    printf("Saved UID = %d \n", getsuid());

    
    char *dir1="/home";
    char *dir2="/home/dir1";
    char *pathname="/home/dir1/file";

    printf("Checking for access to dir1 \n");

    bool flag=false;

    if(access(dir1, R_OK)==0)
    {
        printf("We have access \n");
    }
    else
    {
        printf("Setting our UID to RES Jim \n")

        if(setresuid(jim,jim,jim)==0 && access(dir1, R_OK)==0)
        {
            printf("We have access \n");
            flag=true;
        }
        
    }

    
    return 0;
}