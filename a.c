#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<unistd.h>
#include<sys/types.h>
#include<sys/socket.h>
#include<netinet/in.h>
#include <arpa/inet.h>
#include <sys/types.h>
       #include <sys/stat.h>
       #include <fcntl.h>

struct Course{
    char course_code[100];
	char course_name[100];
    char facultyUID[100];
    int  credits;
    int  currentStudentsEnrolled;
    int  maxStudentsAllowed;
	int status;
	int studentIsEnrolled;
	//status=1 course active
	//status=0 course removed
};
int main(){
    struct Course n;
    const char* courseFile="Courses.txt";
    int fd1=open(courseFile,O_RDONLY);
    while (read(fd1,&n,sizeof(n))>0){
       // printf("%s\n",n.course_code);
        printf("%d",n.currentStudentsEnrolled);
    
    }
    
    
}