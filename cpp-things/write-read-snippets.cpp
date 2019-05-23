#include <iostream>
#include <fstream>

bool ReadCharfile(char *output){
    bool retval;
    char input_frame[64];
    FILE *fp;
    fp = fopen("/home/nicolas/Escritorio/file10", "r");
    if(fp == NULL){
        printf("\nerror opening file10\n");
        retval = false;
    }else{
        if(fgets(input_frame, 64, fp) != NULL){
            for(int i=0;i<64;i++)
                output[i] = input_frame[i];
        }else{
            printf("\nerror reading file10\n");
            retval = false;
        }
        fclose(fp);
        retval = true;
    }

    return retval;
}

std::string ReadStringfile(std::string path){
    std::string lineparsed;
    std::string line;
    std::ifstream conffile (path);
    if(conffile.is_open()){
        while(std::getline(conffile,line)){
            lineparsed = line.c_str();
        }
        conffile.close();
    }else{
        lineparsed = "";
        printf("error leer archivo");
    }

    return lineparsed;
}

bool WriteCharToFile(char msg[], std::string filepath){
    bool retval;
    std::ofstream file (filepath, std::ios::trunc);
    if(file.is_open()){
        file << msg;
        file.close();
        retval = true;
    }else{
        printf("Unable to open file");
        retval = false;
    }
    return retval;
}
