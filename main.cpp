#include <iostream>
#include <string>
#include <fstream>
#include "main.h"
#include <pthread.h>
#include <sstream>
#include "time.h"
using namespace std;

int main() {

    int t, time;

    int A = 0, k = 0;
    ifstream inp;
    long long all_sum = 0;
    pthread_t threads[10];
    thr_data* threadData = new thr_data[10];
    time = clock();
    while (k<=9){

    threadData[k].num = k;
    threadData[k].sum = 0;

   pthread_create(&(threads[k]), NULL, Summaaaaaaaaaa, &threadData[k]);
        k++;

}

    k=0;
    while (k<=9) {
        pthread_join(threads[k], NULL);
        A = A + threadData[k].sum ;
        k++;
}
    t = clock();
    cout << "More output: "<< A <<endl;
    cout <<"Time: "<< (t-time)/1000.0 << "sec"<<endl;
    cout <<endl;
    time = clock();
    cout << "One output: "<< One() << endl;
    t = clock();
    cout <<"Time: "<< (t-time)/1000.0 << "sec"<<endl;

    delete[]threadData;
   inp.close();
    return 0;
}


