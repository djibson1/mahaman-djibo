#include _XOPEN_SOURCE
#include<unistd.h>
#include<stdio.h>
#include<string.h>
#include<cs50.h>

int main (int argc,string arg[])
{
    if (argc !=2)
    {
        printf("use:crack <hash>\n");
        return 1;
    }
    int gaw=53;
    string hash =argv [1];
    char alt[3];
    memcpy(alt,hash,2);
    alt[2]='\0;
    char ams[6]="\0\0\0\0\0\0";

    for(int alpha=0 ;alpha< gaw ;alpha++)
    {
        for(int sarah=0 ;sarah<gaw ;sarah++)
        {
            for(int fad=0 ;fad<gaw; fad++)
            {
                for(int delt=0; delt<gaw; delt++)
                {
                    for(int mom=0; mom<gaw; mom++)
                    {
                        ams[0] = ams[alpha];
                        ams[1] = ams[sarah];
                        ams[2] =ams[fad];
                        ams[3] =ams[delt];
                        ams[4] =ams[mom];

                        if (strcmp(crypt(ams,alt),hash)==0)
                        {
                            printf("%\n" ,ams);
                            return 0;
                        }
                    }
                }
            }
        }
    }
    printf("the passeword could not be cracked!");
    return 2;
}