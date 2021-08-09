# 1 "afile.h"
# 1 "<command-line>"
# 1 "afile.h"



# 1 "bfile.h" 1



# 1 "afile.h" 1
# 5 "bfile.h" 2

class BFile
{
public:
    BFile();
private:
AFile a;
};
# 5 "afile.h" 2


class AFile
{
public:
    AFile();
private:
BFile *b;
};
