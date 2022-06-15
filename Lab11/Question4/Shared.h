#ifndef LA10_Shared_h
#define LA10_Shared_h
class Shared {
    private :
    unsigned int _ref;
    protected :
    Shared (){
		_ref=0;
    }
    virtual ~Shared () { }
    public :
    // This returns the current reference to the counter value. 
    unsigned getref () const {
        return _ref;
    }
    void ref () {
        _ref++;
    }
    void unref() {
        if(_ref>0){
            _ref--;
        }
        if(_ref==0){
            delete this;  
        }
    }
};
#endif