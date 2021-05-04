#ifndef INTEGERARRAY_H

#define INTEGERARRAY_H


class IntegerArray

{

private:

    static const int N = 10;

    int numbers[10];

    int length = 0;


public:

    int getLength(); 

    int getLastelm(void) 

    void printAll(void) 
    
    void fillUp(void);

    void sortAsc(void);

    void removeLastelm(void);

    void appendElement(int v);

};


#endif