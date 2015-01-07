#include <memory>
#include <iostream>

#include "mecab.h"
//#include "winmain.h"

int main(int argc, char **argv){
    char input[] = "�����Y��ł��ˁB";
    std::unique_ptr<MeCab::Tagger> tagger(MeCab::createTagger(""));
    std::cout << tagger->parse(input) << std::endl;

    return 0;
}
