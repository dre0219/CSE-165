#include "Time.h"
int main() {
    Time time1(1, 20, 30);
    Time time2(3, 15, 8);

    Time time3 = time1 + time2;
    Time time4 = time1 + time3;
    Time time5 = time4 + time4;

    time3.print();
    time4.print();
    time5.print();
}
