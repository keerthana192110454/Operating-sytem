#include<stdio.h>
main(intarc,char*ar[])
{
intpid;chars[100];pid=fork();
if(pid<0)
printf("error");
elseif(pid>0)
{
wait(NULL);
printf("\nParentProcess:\n");
printf("\n\tParentProcessid:%d\t\n",getpid());
execlp("cat","cat",ar[1],(char*)0);
error("can� texecutecat%s,",ar[1]);
}
else
{
printf("\nChildprocess:");
printf("\n\tChildprocessparentid:\t%d"
,getppid());
printf(s,"\n\tChildprocessid:\t%d",getpid());
write(1,s,strlen(s));
printf("");
printf("");
printf("");
execvp(ar[2],&ar[2]);
error("can� texecute%s",ar[2]);
}
}
