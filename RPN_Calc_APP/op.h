#ifndef OP_H
#define OP_H

// function pointer
typedef double(*op_ptr)(const double&,const double&);

//Op: Object to hold operator precedence and function pointer
class Op{
public:
    int precedence;
    op_ptr func;
    //constructors:
    Op(){precedence = 0;func = 0;}
    Op(int val,op_ptr funcPtr){precedence = val; func = funcPtr;}

};


#endif // OP_H
