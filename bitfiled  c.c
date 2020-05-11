#include <stdio.h>
#include <stdbool.h>
enum modes {READ=0b01,WRITE=0b10,READ_WRITE=0b11};

typedef unsigned int Bit;
typedef const char* String;
typedef struct{
    Bit modified: 1;//use 1bit
    Bit mode:     2;//use 2bit
    
    String filename;
    
}File;

bool isRead(File *file){
     return file->mode &READ;
     
}

bool isWrite(File *file){
    return file->mode &WRITE;
    
}

void write(File *file,String text){
    if(isWrite(file)){
        printf("%s:write\n",file->filename);
        
    }
    if(isRead(file)){
        printf("%s:read\n",file->filename);
    }
    file->modified=0b01;
    
}

int main(){
    File foo1={.filename="foo1",.mode=READ};
    File foo2={.filename="foo2",.mode=WRITE};
    
    write(&foo1,"XD");
    write(&foo2,"XD1");
    return 0;
}
