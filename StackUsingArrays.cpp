template <typename T> 

class StackUsingArrays{
    private :
        T *data ; 
        int totsize ; 
        int nextIndex ; 

    public:


        StackUsingArrays(){
            data = new int[4] ; 
            this -> nextIndex = 0 ; 
            this -> totsize = 4 ; 
        }
        StackUsingArrays(int totsize){
            data = new T[totsize] ; 
            this -> totsize = totsize ; 
            this -> nextIndex = 0 ; 
        }

        bool isEmpty(){
            return !(this -> nextIndex) ; 
        }

        int size(){
            return this -> nextIndex ; 
        }

        T pop(){
            if(nextIndex == 0) return 0 ; 
            return(data[this -> nextIndex--]) ; 
        }

        void push(int newElement){
            if(nextIndex >= totsize){
                T *newdat = new T[this -> totsize * 2] ; 
                for(int i = 0 ; i < this -> totsize ; ++i){
                    newdat[i] = this -> data[i] ; 
                }
                delete this -> data ;
                this -> data = newdat ; 
                this -> totsize *= 2 ; 
            }
            data[this -> nextIndex] = newElement ; 
            this ->  nextIndex++ ; 
        }

        T top(){
            if(nextIndex == 0) return 0 ; 
            return this -> data[this -> nextIndex - 1] ; 
        }
};