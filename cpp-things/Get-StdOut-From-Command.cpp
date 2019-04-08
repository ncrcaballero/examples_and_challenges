#include <iostream>
#include <string>
//#include something else that i forgot

std::string GetStdoutFromCommand(std::string cmd) {
    std::string data;
    FILE * stream;
    const int max_buffer = 256;
    char buffer[max_buffer];
    cmd.append(" 2>&1"); // only if you want the last characters

    stream = popen(cmd.std::string::c_str(), "r");
    if (stream) {
        while (!feof(stream)){
            if (fgets(buffer, max_buffer, stream) != NULL) data.append(buffer);
        }
        pclose(stream);
    }
    else{
        printf("Problema al ejecutar Sub Proceso");
    }
    return data;
}

int main(){
  std::string str = "ping 8.8.8.8";
  cout << GetStdoutFromCommand(str);
  return 0;
}
