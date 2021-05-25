#ifndef UNTITLED9_MAIN_H
#define UNTITLED9_MAIN_H
#include <sstream>
#include <iostream>
#include <string>
#include <fstream>
#include <pthread.h>
using namespace std;

struct thr_data {
    int num;
    int sum;
};

void* Summaaaaaaaaaa(void *thread_data) {
    int b=0;
    stringstream ss;
    ifstream inp;
    thr_data *data = (thr_data*) thread_data;

    ss << "C:\\Users\\PC\\CLionProjects\\untitled9\\Files\\" << data->num << ".txt";
    inp.open(ss.str());
    ss.str(string());


    while (!inp.eof()) {
        inp >>b;
        data->sum = data->sum+b;
      }
    inp.close();
}

int Summ(ifstream &inp) {
    int b, a;
    a = 0;
    b = 0;
    inp >> a;
    inp >>b;
    a = a+b;
    while (!inp.eof()) {
        inp >> b;
        a = a+b;}
    return a;
}

int One( ) {
    ifstream inp;
    stringstream ss;
    char i = '0';
    int A = 0, k = 0;
   while (k < 10){

    ss << "C:\\Users\\PC\\CLionProjects\\untitled9\\Files\\" << k << ".txt";

       inp.open(ss.str());

       ss.str(string());
        A = A + Summ(inp);
       k ++;
       inp.close();
    }

    return A;
}
#endif //UNTITLED9_MAIN_H
