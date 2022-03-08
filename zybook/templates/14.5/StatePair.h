#ifndef STATEPAIR
#define STATEPAIR

template<typename T1, typename T2>
class StatePair {

// TODO: Define a constructor, mutators, and accessors 
//       for StatePair
    public: 
        StatePair(){}
        
        void SetKey(T1 key)
        {
            x = key;
        }

        void SetValue(T2 value)
        {
            y = value;
        }

        

        void PrintInfo()
        {

        }
    private:
        T1 x;
        T2 y;
// TODO: Define PrintInfo() method
};

#endif