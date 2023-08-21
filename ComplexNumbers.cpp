class ComplexNumbers{
    private:
    int imaginary ;
    int real ; 

    public:
    ComplexNumbers(int real , int imaginary){
        this -> imaginary = imaginary ; 
        this -> real = real ; 
    }

    void print(){
        cout << this -> real << " + " << "i" << this -> imaginary << endl  ; 
    }

    ComplexNumbers operator+(ComplexNumbers const &c2){
         
        int r = this -> real + c2.real ; 
        int i = this -> imaginary + c2.imaginary ; 
        ComplexNumbers cnew(r , i) ;
        return cnew ; 
    }

    ComplexNumbers operator*(ComplexNumbers const &c2){

        int i  = this -> imaginary * c2.real + this -> real * c2.imaginary ; 
        int r = this -> real * c2.real - this -> imaginary * c2.imaginary ; 
        ComplexNumbers cnew(r , i) ; 
        return cnew ; 
    }

    bool operator==(ComplexNumbers const &c2){

        if(this -> real == c2.real && this -> imaginary == c2.imaginary){
            return true ; 
        }

        return false ; 
    }

    bool operator!=(ComplexNumbers const &c2){
        if(!(*this == c2)){
            return true ;
        }
        return false ; 
    }

    ComplexNumbers& operator+=(ComplexNumbers const &c2){
        this -> real = this -> real + c2.real ; 
        this -> imaginary = this -> imaginary + c2.imaginary ; 

        return *this ; 
    }

};