#ifndef FIB_H
#define FIB_H
class Fib{
public:
    static int secondLast, last;
    Fib(){}
    int next(){
        int nxt = secondLast + last;
        secondLast = last;
        last = nxt;
        return last;
    };
        int next(bool Value){
            if(Value){
            secondLast = 0;
            last = 1;
            }
    return this->next();
    };
};
#endif