//链栈: 链式存储的栈(单链表)
#define ElemType int

//--------------------------------类型描述--------------------------------
typedef struct Linknode{
    ElemType data;          //数据域
    struct Linknode *next;  //指针域
}*LiStack;                  //栈类型的定义

//--------------------------------基本操作--------------------------------