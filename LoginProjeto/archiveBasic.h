#ifndef ARCHIVEBASIC_H_INCLUDED
#define ARCHIVEBASIC_H_INCLUDED

#include <iostream>
#include <string>
#include <fstream>
using namespace std;

void openArchive_Out(fstream& archive,char nomeArchive[15])
{
    archive.open(nomeArchive,ios::out|ios::app);
}
void openArchive_In(fstream& archive,char nomeArchive[])
{
    archive.open(nomeArchive,ios::in);
}
void closeArchive(fstream& archive){
    archive.close();
}


#endif // ARCHIVEBASIC_H_INCLUDED
