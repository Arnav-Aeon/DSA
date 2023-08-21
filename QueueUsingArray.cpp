template <typename T> 

class QueueUsingArray {
    T *data ; 
    int nextIndex ; 
    int firstIndex ;   
    int size ; 
    int totsize ; 

    public:
        QueueUsingArray(int size){
            this -> size = 0 ;
            totsize = size ;
            data = new T[size] ; 
            firstIndex = -1 ;
            nextIndex = 0 ;
        }

        int getSize(){
            return size ; 
        }

        bool isEmpty(){
            return size == 0 ; 
        }

        void enqueue(T element){
            if(size == totsize){
                T *newData = new T[2*totsize] ; 
                for(int i = 0 ; i < size ; ++i){
                    newData[i] = data[firstIndex % totsize] ; 
                    firstIndex++ ;
                }
                delete data ; 
                data = newData ;
                nextIndex = totsize ; 
                totsize *= 2 ;
                firstIndex = 0 ;  
            }
            data[nextIndex] = element ;
            nextIndex = (nextIndex + 1)%totsize ; 
            if(firstIndex == -1){
                firstIndex = 0 ; 
            }
            size++ ;
        }

        T front(){
            if(isEmpty()){
                cout << "Queue is empty !" << endl ; 
                return 0 ; 
            }
            return data[firstIndex] ; 
        }

        T dequeue(){
            if(isEmpty()){
                cout << "Queue is empty !" << endl ;
                return 0 ; 
            }
            T del = data[firstIndex] ; 
            firstIndex = (firstIndex + 1)% totsize; 
            size-- ; 
            if(size == 0){
                firstIndex = -1 ;
                nextIndex = 0 ;  
            }

            return del ; 
        }

};