#include <stdio.h>
//#include-包含，std(standard)-标准 i(input)-输入 o(output)-输出
// 这样才能正确使用函数
// c语言中一定要有main函数，有且仅有一个
//标准的主函数(main函数)写法
// -----------------------------------
//int main()
//{
//	printf("hehe\n");
//	return 0;
//}
// ------------------------------------
// int-整形类型
// main函数是程序的入口（C语言的规定）
//printf()-库函数：专门用来打印数据的
//""里的是字符串
// \n--换行
// return-返回
//0-整数(约定俗成)
//ctrl+F5-运行代码
// ------------------------------------------------------------------
//int main()
//{
//	printf("%d\n",sizeof(char));//(char类型数据在内存中所占大小-字符）
//	printf("%zu\n", sizeof(short));//d-有些编译器会报警告
//	printf("%zu\n", sizeof(int));//zu--打印一个sizeof()返回的无符号整型
//	printf("%zu\n", sizeof(long));//( 这样是最合理的)
//	printf("%zu\n", sizeof(long long));
//	printf("%zu\n", sizeof(float));
//	printf("%zu\n", sizeof(double));
//	return 0;
//}
// ------------------------------------------------------------------
//sizeof()--谁的大小？
//C语言规定：sizeof(long)>=sizeof(int)
//当我们需要不同范围的数据时，就给不同类型表示--更贴切
//类型丰富---使用灵活，空间利用率提高
//------------------------------------------------------------------	
//类型的作用
//int main()
//{
//	short age = 20;//代表向内存申请short类型(2字节)的空间把20放进去
//	double price = 66.6;//创建变量的本质-向内存申请空间-可以存放数据
//	return 0;
//}
//------------------------------------------------------------------
//变量与常量
//int b = 20;//全局变量
//int main()
//{
//	//short age = 20;//年龄
//	//int high = 168;//身高
//	//float weight = 62.5;//体重
//	int a = 10;//局部变量
//	return 0;
//}
//注意类型与变量名之间有空格
//变量有局部变量和全局变量
//全局变量-{}外部定义/局部变量-{}内部定义
//在同一范围内变量只能定义一次，不能重复定义
//int main()
//{
//	int a = 10;
//	int a = 20;//这样是错误的
//	return 0;
//}
//------------------------------------------
//当全局变量和局部变量相同的情况下，局部优先
//int a = 20;
//int main()
//{
//	int a = 10;
//	printf("a=%d\n", a);
//	return 0;
//}
//但是不建议全局变量与局部变量的名字一致---为了区分
//-----------------------------------------------------------------
//变量的使用--写一个代码，计算2个整数之和
//int main()
//{
//	int num1 = 0;//开始时赋值--初始化，如果不赋值。则变量值是随机的
//	int num2 = 0;//好处-避免警告，错误/更好的掌握变量
//
//	//输入两个整数
//	scanf("%d %d", &num1, &num2);
//
//	//求和
//	int sum = num1 + num2;
//
//	//输出
//	printf("%d\n", sum);
//
//	return 0;
//}
//scanf()--输入函数
//前一个%d表示输入一个整数，空格%d表示再输入一个整数
//&-取地址  &num1表示取num1地址
//记得用逗号隔开
//-------------------------------------------------------------------
//变量的作用域--那里可以使用那里就是作用域
//1.全局变量--整个工程
//
//2.局部变量--是变量所在的局部范围--{}
//extern int a;//extern--用来声明调用外部符号
//
//int a = 10;
//
//void test()
//{
//	printf("test-->%d\n", a);
//}
//
//int main()
//{
//	test();//调用--执行需要
//	{
//		printf("%d\n", a);
//	}
//	printf("%d\n", a);
//	return 0;
//}
// --------------------------------------------------------------
//变量的生命周期--没办法演示出效果
//全局变量--与整个程序的生命周期一致
//局部变量--进入作用域--{--生命周期开始，离开作用域--}--生命周期结束
//int main()
//{
//	{
//		int a = 100;
//		printf("%d\n", a);
//	}
//	printf('%d\n', a);
//
//	return 0;
//}
//---------------------------------------------------------------
//常量
//1.字面常量
//2.const修饰的常变量 
//3.define 定义的标识符常量
//4.枚举常量

//int main()
//{
//	10;//字面常量
//	10.5;//字面浮点型常量
//	'w';//字符--C语言中用--''--单引号来引出一个常量
//	"abc";//字符串
//	const int a = 10;
//	//a本来是个变量--加上const--a变成const修饰的常变量--不能被改变--有常量的属性
//	// const修饰的a--不能被改变--有常量的属性
//	a = 20;
//	//变量是可以改变的
//	printf("%d\n", a);
//	return 0;
//}
//--------------------------------------------------------------------------------
//证明const--a是一个变量
//int main()
//{
//	const int a = 10;//报错--缺少常量值--const修饰的是常变量
//	int arr[a] = {0};//arr[]--创建一个数组--一个连续的空间，可以存放10个int--整型
//	return 0;
//}
//---------------------------------------------------------------------------------
//#define MAX 100//define定义一个符号MAX赋值100
//#define STR "abcdef"//定义的不一定是整数
//int main()
//{
//	printf("%d\n", MAX);//MAX--#define定义的标识符常量
//	int a = MAX;
//	printf("a=%d\n", a);
//	printf("%s\n", STR);//%s--用来打印字符串的
//	MAX = 200;//此时MAX是常量无法更改
//	return 0;   
//}
//---------------------------------------------------------------------------------
//enum Color//enum-枚举符号
//{
//	RED,
//	GREEN,
//	BLUE//这三个常量就是enum Color在未来的可能-取值
//};
//int main()
//{
//	enum Color c = RED;
//	return 0;
//}
//----------------------------------------------------------------------------------

//int main()
//{
//
//	 'w';//字符
//	"abcd";//（常量）字符串
//	char arr1[10] = "abcdef";//字符串用字符数组储存
//	//当不知道要储存多少字符时可填-arr []-可自动识别后续字符数量-申请对应空间
//	//字符串的末尾隐藏了一个-\0-所以如果要初始化arr就需要至少6+1=7个字符
//
//	char arr2[] = {'a','b','c','d','e','f'};//这种情况下无-\0-
//
//	printf("%s\n", arr1);//结果--abcdef
//	printf("%s\n", arr2);//结果--abcdef烫烫烫烫烫烫烫烫烫烫烫`鵠鎘
//	//\0--打印字符串时结束的标识
//	char arr3[] = { 'a','b','c','d','e','f','\0'};
//	printf("%s\n", arr3);//结果--abcdef
//
//	int len = strlen(arr1);//求字符串长度--string length--所需头文件--string.h
//	printf("%d\n",strlen(arr3));//结果--6--此结果下不包含-\0-
//
//	return 0;
//}
//----------------------------------------------------------------------------------

//int main()
//{
//	printf("abcn");
//	printf("abc\n");//加上\后n就不再是一个单纯的--字符n--而是--换行
//    
//    printf("abc0def\n");//abc0def
//    printf("abc\0def\n");//abc--\0--终止打印字符串
//
//	printf("\n%s\n", "are you ok\?\?");//\?--防止三字母词--??)--]/??(--[
//
//	printf("%c", '\'');//结果--'--加\使其转义变成单纯的字符
//
//	printf("abcd"); //只有字符串可以简化成这种形式
//	printf("%s\n", "abcd");//指定类型--字符串--进行打印
//
//	printf("abc\\0def");//--abc\0def--"\"被转义,破坏了终止打印符"\0"的实现
//
//	printf("c:\test\tese.c");//--c:      est     ese.c
//	printf("c:\\test\\tese.c");//--c:\test\tese.c
//	//打印路径时使用--\\--
//
//	printf("\a");//警告字符--触发电脑的蜂鸣器
//
//	printf("%c\n", '\130');//--x--把8进制130转换成十进制后的数字对应ascii码的字符
//	//--\130--是一个字符-x
//
//	printf("%c\n", '\x60');//--`--16进制
//	return 0;
//}
//--------------------------------------------------------------------------------
//练习

//int main()
//{
//	//printf("%d\n",strlen("abcd e"));//--6--
//
//	//printf("%d\n", strlen("c:\test\628\test.c"));//--14--\t,\62,\t--均为转义符
//
//	return 0;
//}
//-----------------------------------------------------------------------------------
//C语言的注释风格--/*,*/--不支持嵌套注释
//C++的注释风格--//--

//int main()
//{
//	/*
//	int a = 10;
//	int b = 20;
//	*/
//	
//	return 0;
//}
//---------------------------------------------------------------------------------------
//选择
//int main()
//{
//	int input = 0;
//	printf("玩APEX\n双排吗(1/0)?\n");
//	scanf("%d", &input);
//	if(input == 1)//为真就执行
//	{
//		printf("上分\n");
//	}
//	else//分支
//	{
//		printf("练枪\n");
//	}
//
//	return 0;
//}
//------------------------------------------------------------------------------------------
//循环
//while语句
//for语句--后期讲
//do...while语句--后期讲
//int main()
//{
//	int line = 0;
//	printf("打apex\n");
//
//	while (line<1000)
//	{
//		printf("练枪:%d\n",line);
//		line++;// line行号加一
//	}
//	if (line == 1000)
//	{
//		printf("猎杀\n");
//	}
//	else
//	{
//		printf("继续\n");
//	}
//
//	return 0;
//}
//-----------------------------------------------------------------------------------
//C语言是-结构化-的程序设计语言
//求两个任意整数之和
//int main()
//{
//	int n1 = 0;
//	int n2 = 0;
//	//输入
//	scanf("%d %d", &n1, &n2);
//	//求和
//	int sum = n1 + n2;
//
//	//打印
//	printf("%d\n", sum);
//
//	return 0;
//}
//--------------------------------------------------------------------------------

//--用函数求和--可以通过反复调用减少代码量
//int Add(int x, int y)
//{
//	int z = 0;
//	z = x + y;
//	return z;
//}
//int main()
//{
//	int n1 = 0;
//	int n2 = 0;
//	//输入
//	scanf("%d %d", &n1, &n2);
//	//求和
//	int sum = Add(n1, n2);
//
//	//打印
//	printf("%d\n", sum);
//
//	return 0;
//}
//----------------------------------------------------------------------------------

//--数组--可以放一组相同类型的元素
//--数组的下标--从0开始
//--数组是通过下标来访问的

//int main()
//{
//	int arr[] = { 1,2,3,4,5,6,7,8,9 };
//	char d[] = { 'a','b','c'};
//	//printf("%d\n", arr[1]);//--2
//	
//	int i = 0;
//	while (i < 9)
//	{
//		printf("%d\n", arr[i]);
//		i = i + 1;
//	}
//
//	char k = 0;
//	while (k < 3)
//	{
//		printf("%c\n", d[k]);
//		k = k + 1;
//	}
//	
//	return 0;
//}
//-----------------------------------------------------------------
//--作业

//int max(int x, int y)
//{
//	if (x > y)
//	
//		return x;
//	else
//
//	    return y;
//}
//
//int main()
//{
//	int a = 0;
//	int b = 0;
//	scanf("%d %d", &a, &b);
//	int r = max(a, b);
//	printf("%d\n", r);
//	return 0;
//}
//------------------------------------------------------------------------


//#include <stdio.h>
//
//int main()
//{
//    int x = 0;
//    int y = 0;
//    scanf("%d", &x);
//    if (x < 0)
//        y = 1;
//    else if (x == 0)
//        y = 0;
//    else
//        y = -1;
//
//    printf("%d\n", y);
//    return 0;
//}
//------------------------------------------------------------------------------------

//--操作符
//--%--取模

//int main()
//{
//	int a = 5 / 2;
//	printf("%d\n", a);
//
//	int b = 5 % 2;// 两端只能是整数
//	printf("%d\n", b);//除的余数
//
//	float c = 5.0 / 2;
//	printf("%.2f\n", c);//--.2-- 小数点后打印两位小数
//
//	return 0;
//}

//--赋值操作符

//int main()
//{
//	int a = 0;//初始化
//
//	a = 20;//赋值
//
//	a = a + 3;
//	a += 3;
//
//	a = a - 3;
//	a -= 3;
//
//	return 0;
//}

//--C语言中0表假 非0表真
//--单目操作符

//int main()
//{
//	int flat = 0;//--0为假
//	if (!flat)//--!0则为真
//	{
//		printf("ol\n");
//	}
//	int sum = 0;//--0为假
//	if (sum)
//	{
//		printf("ol\n");
//	}
//	int w = 2;//--0为假
//	if (!w)//--!0则为真
//	{
//		printf("ol\n");
//	}
//
//	int d = 2;
//	printf("%d\n",sizeof(d));//--4
//	printf("%d\n",sizeof(int));//--4
//	printf("%d\n", sizeof d);//--证明-sizeof-是操作符，不是函数
//
//	int arr[10] = { 0 };
//	printf("%d\n", sizeof(arr));//--40--计算的是整个数组的大小，单位是字节
//	printf("%d\n", sizeof(arr[0]));//--4
//	printf("%d\n", sizeof(arr)/sizeof(arr[10]));//--10--数组的元素个数
//
//	int e = 10;
//	int f = e++;//--后置++，先使用，后++
//	//int f = e; e = e+1;
//
//	int g = 10;
//	int h = ++g;//--前置++，先++，后++
//	//int h = g+1;g = g+1;
//
//	printf("%d\n", e);//--10
//	printf("%d\n", f);//--11
//
//	printf("%d\n", g);//--11
//	printf("%d\n", h);//--11
//
//	int i = (int)3.06;//--(int)--把类型强制转换成int类型
//	//--3.06-- 字面浮点数，编译器默认理解为double类型
//	printf("%d\n", i);//--3
//
//	return 0;
//}

//int main()
//{
//	int  a = 10;
//	if (a == 3)
//	{
//		printf("ol\n");
//	}
//
//	return 0;
//}

//int main()
//{
//	//&& 逻辑与--并且
//	//|| 逻辑或--或者
//	int a = 1;
//	int b = 1;
//	if (a && b)
//	{
//		printf("ol\n");
//	}
//
//	int c = 1;
//	int d = 0;
//	if (c || d)
//	{
//		printf("ol\n");
//	}
//
//	return 0;
//} 

//int main()
//{
//	int a = 10;
//	int b = 20;
//
//	int r = a > b ? a : b;//--三目操作符
//	printf("%d\n", r);//--20
//
//	return 0;
//}

//int main()
//{
//	int a = 10;
//	int b = 20;
//	int c = 5;
//	int d = (c = b - c, a = a + b, a - c);
//	//c = 15; a = 30; 15
//	printf("%d\n", d);//--15
//
//	return 0;
//}

//int add(int x, int y)
//{
//	return x + y;
//}
//int main()
//{
//	int sum = add(2, 3);//--add 2 3  都是()的操作符
//	printf("%d\n", sum);
//	return 0;
//}
//----------------------------------------------------------------------------------

//--typedef--类型定义（类型重命名）--简化

//typedef unsigned int uind;//--typedef将unsigned int定义为uind
//
//typedef struct Node
//{
//	int data;
//	struct Node* next;//--定义链表节点的一种方式
//}Node;
//int main()
//{
//    unsigned int num1 = 1;
//	niud num2 = 0;
//
//	struct Node n1;
//	Node n2;
//
//	return 0;
//}

//--static--修饰变量和函数

//--修饰局部变量--静态局部变量
//--修饰全局变量--静态全局变量
//--修饰函数------静态函数

//int test()
{
	int a = 1;
	a++;
	printf("%d ", a);
}

//int a = 1;
//int test2()
{
	a++;
	printf("%d\n", a);
	return 0;
}

//int main()
{
	int i = 0;
	while (i < 10)
	{
		test();
		test2();
		i++;
	}
	return 0;
}
