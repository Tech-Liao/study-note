# const 指针 引用

## const与指针

常量指针同常量引用一样,允许指向常量或非常量,但是存放常量对象的地址只能是常量指针

```cpp
const int A=1;	//常量
const int *pA=&A;	//常量指针
```

const与指针的组合有多种方式,对这些组合的解释说明采用从右向左方式.

**const默认作用于其左边的东西，否则作用于其右边的东西**

```cpp
const int *A=1;// 指向常量int的指针 ==int const *
int * const B=1;//B是一个指向int的常量指针
const int *const C=1;//1.C是一个常量指针,指向一个常量int类型
```



## const与引用

引用是为对象起了一个另外名字,引用必须初始化.

```cpp
int A=1;
int &B=A;	//其实B=A=1
//对B操作等价于对A操作
```

> const <类型> & 被称为常量引用



const与引用组合时,对const的引用不能被用作修改它的对象.引用类型必须与引用对象一致,

```cpp
const int A = 1;
const int &B=A;	//这是正确的
int &C=B;//错误的,非常量指向常量对象
const int &D=C;	//允许绑定到普通对象
```

例外情况:在const类型的初始化时,允许可以转化成引用类型的任意表达式

```cpp
int i=42;
const int &r1 = i;	//正确
const int &r2=42;	//42是常量类型
const int &r3= r1*2;	//r1*2能转化成常量引用
int &r4= r1*2;	//r1*2是一个常量类型引用,而r4是非常量引用
```

## 特殊指针

空指针是不指向任何对象.

**空指针**用**nullptr**表示,0也可以用来生成空指针,NULL也行

void的指针:只知道存放一个地址,不知道其类型是什么.因此void指针应该可以强制转换成其他类型

## new与delete

程序除了静态内存和栈内存,还有堆内存.堆内存是根据程序控制来分配的.**new**就是为对象分配空间且返回一个指向该对象的指针.**delete**是销毁new创建的指针.

```cpp
int *p1=new int;	//分配一个未初始化的指针对象
int *p2=new int(1024);	///分配一个指针对象,指向1024
vector<int> *pv=new vector<int>{0,1,2,3,4,5};	
```

```cpp
delete p;//p必须是一个new创建的指针或者空指针
```

