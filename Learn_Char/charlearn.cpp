#include "charlearn.h"

CharLearn::CharLearn(int argc, char *arg[]):iArgc(argc)
{
    getArgviLen (iArgc,arg);
}

void CharLearn::getArgviLen(int argc,char *argv[])
{

    for(int i=0;i<argc;++i)
    {
//        int len=1000;
        cout<<"i:\t"<<i<<"\targv\t"<<argv[i]<<endl;
        cP=argv[i];
        int laen=strnlen (argv[i],1000);
//        if(cP)
//        {
//            while (*cP++!='\0') {
//                len++;
//            }
//        }
//        iArgLen=len;
        cout<<"leb:"<<laen<<endl;
        char rg[laen];
//        strcpy (rg,argv[i]);
        strncpy (rg,argv[i],laen);
        for(int j=0;j<laen;++j)
        {
            cout<<"argv[j]:"<<rg[j]<<endl;
        }
    }
}

