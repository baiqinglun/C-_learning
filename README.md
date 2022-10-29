

C++

## 1、基础语法

### 1.1 初识c++

1. 命名空间，可以直接使用`using namespace std;`语句，当然也可以定义命名空间；
2. :: 表示作用域；
3. std::cin 表示名为cin定义在std的命名空间内（namespace）；

**分别定义命名空间**

```c
int main() {
	 //：：表示作用域
	std::cout << "enter two numbers:" << std::endl;
	int v1 = 0, v2 = 0;
	std::cin >> v1 >> v2;  //名字cout、cin和endl是定义在std的命名空间内（namespace）
	std::cout << "the sum of " << v1 << " and " << v2 << " is " << v1 + v2<< std::endl;
	return 0;
}
```

**using namespace std**

```c
#include <iostream>
using namespace std;

int main() {
	cout << "Hello World!" << endl;
	system("pause");
	return 0;
}
```

### 1.2 注释

1. 单行注释和多行注释；
2. 块注释是不能嵌套的，会提示输入表达式而非；

```c
// 这是单行注释
/*
	这是多行
	注释
*/
```

**块注释嵌套**

```c
int main() {
	// 会提示输入表达式而非*/
	/* int v1 = 0, v2 = 0;
	 * std::cout << "The sum of " << v1
	 * << " and " << v2
	 * << " is " << v1 + v2 << std::endl;/**/
	 */
}
```

**判断是否合法**

```c
std::cout << "/*" << std::endl; //成立，会输出/*
std::cout << "*/" << std::endl; //成立，会输出*/
//std::cout << /* "*/" */; //报错
std::cout << /* "*/" /* "/*" */ << std::endl; //成立，会输出/*
```

### 1.3 变量

1. 变量类型 变量名 = 初始值；
2. 列表初始化，使用花括号 `int units_sold = {0};`或`int units_sold{0}`;
3. 


```c
#include <iostream>
using namespace std;

int main() {
	int num = 10;
	cout << "num=" << num << endl;
	system("pause");
	return 0;

}
```

### 1.4 常量

1. #define定义宏常量：`#define 常量名 常量值` (通常在文件上方定义，表示一个常量)；
2. const修饰的变量 `const 数据类型 常量名 = 变量值;`
3. 注意#define语句后面不加分号；

```c
#include <iostream>
using namespace std;

// 常量定义方式
// 1.#define
// 2.const修饰的变量

#define Day 7

int main() {
	cout << "一周共有"<< Day << "天" << endl;

	const int month = 12; // const修饰的变量也是常量，不能修改
	system("pause");
	return 0;

}
```

### 1.5 关键字

[菜鸟教程](https://www.runoob.com/w3cnote/cpp-keyword-intro.html)

![](https://test-123456-md-images.oss-cn-beijing.aliyuncs.com/img/202203282321032.jpg#crop=0&crop=0&crop=1&crop=1&id=SHdFq&originHeight=363&originWidth=689&originalType=binary&ratio=1&rotation=0&showTitle=false&status=done&style=none&title=)

### 1.6 标识符

起名规则

- 第一个字符必须是字母（不分大小写）或下划线(_);
- 后跟字母（不分大小写）、下划线（_）或数字组成;
- 标识符中的大小写字母有区别；
- 不能与c编译系统已经预定义的、具有特殊用途的保留标识符（即关键字）同名。比如，不能将标识符命名为float,auto,break,case,this,try,for,while,int,char,short, unsigned,等等；

### 1.7 类

1. 用来定义数据结构；
2. 对于标准库文件，使用尖括号(<>)，对于不属于标准库的头文件，则使用双引号("")；

**写入Sales_item**

```c
#include<iostream>
#include "Sales_item.h"

int main() {
	Sales_item book;
	std::cin >> book;
	std::cout << book << std::endl;
	return 0;
}
```

输入：0-201-70353-x 4 24.99
输出：0-201-70353-x 4 99.96 24.99

**对象相加**

```c
#include<iostream>
#include "Sales_item.h"

int main() {
	Sales_item book1,book2;
	std::cin >> book1>>book2;
	std::cout << book1+book2 << std::endl;
	return 0;
}
```

0-201-78345-x 3 20.00
0-201-78345-x 2 25.00
0-201-78345-x 5 110 22

## 2、数据类型

内置数据类型：算数类型和空类型

算数类型：整形和浮点型

### 2.1 整型

1. 定义超出范围会溢出；

| 数据类型              | 占用空间                            | 取值范围      |
| --------------------- | ----------------------------------- | ------------- |
| short（短整型）       | 2字节                               | (-215~215-1)  |
| int（整型）           | 4字节                               | (-231~231-1)  |
| long（长整型）        | win为4，linux为4（32位），8（64位） | (-231~231-1） |
| long long（长长整型） | 8字节                               | (-263~263-1)  |


```c
#include<iostream>
using namespace std;

int main(){
	// 1.短整型
	short a = 10;

	// 2.整型
	int b = 10;

	// 3.长整型
	long c = 10;

	// 4.长长整型
	long long d = 10;

	cout << "num1=" << a << endl;
	cout << "num2=" << b << endl;
	cout << "num3=" << c << endl;
	cout << "num4=" << d << endl;

	system("pause");

	return 0;
}
```

### 2.2 sizeof

1. 用来查询变量占用的内存空间；
2. short<int<=long<=long long;

```c
cout << "short占用的空间是" << sizeof(a) << endl;
cout << "int占用的空间是" << sizeof(int) << endl;
cout << "long占用的空间是" << sizeof(c) << endl;
cout << "long long占用的空间是" << sizeof(d) << endl;
```

![](https://test-123456-md-images.oss-cn-beijing.aliyuncs.com/img/ryRs3PZYfS5gkEo.png#crop=0&crop=0&crop=1&crop=1&id=UO4y6&originHeight=639&originWidth=1223&originalType=binary&ratio=1&rotation=0&showTitle=false&status=done&style=none&title=)

### 2.3 实型

1. 用于表示小数；
2. 单精度float和双精度double；
3. 小数默认为双精度，定义float时需要加f，如`float a =3.14f;`，否则会截断；
4. 科学计数法，`float f2 = 3e2;//3*10^2` `float f2 = 3e-2;//3*0.1^2`

**区别**

| 数据类型 | 占用空间 | 有效数字类型    |
| -------- | -------- | --------------- |
| float    | 4字节    | 7位有效数字     |
| double   | 8字节    | 15-16位有效数字 |


```c
#include<iostream>
using namespace std;

int main() {

	float a = 3.14f;
	double b = 3.14;

	system("pause");
	return 0;
}
```

### 2.4 字符型

1. 表示形式`char ch = 'a';`
2. 单引号里面只能写一个字符；
3. 只占用一个字节；
4. 字符型进行存储时以ASCII存储；

```c
#include<iostream>
using namespace std;

int main() {
	// 创建字符型变量
	char ch = 'a';
	cout << "字符为" << ch << endl;
	cout << "字符所占内存为" << sizeof(ch) << endl;
	cout << "字符ch对应的ASCII编码为" << (int)ch << endl;

	system("pause");
	return 0;
}
```

### 2.5 转义字符

```
\a:蜂鸣，响铃 
\b:回退：向后退一格 
\f:换页 
\n:换行，光标到下行行首 
\r:回车，光标到本行行首 
\t:水平制表 
\v:垂直制表 
\\:反斜杠 
\':单引号 
\":双引号 
\?:问号 
\ddd:三位八进制 
\xhh:二位十六进制 
\0:空字符(NULL),什么都不做
```

### 2.6 字符串型

1. C语言类型：`char 变量名[] = "字符串值";`
2. C++类型：`string 变量名 = "字符串值";`
3. `iostream`已经隐式地包含了string库，但最好还是显式一下，以免发生错误。头文件`#include<string>`
4. 


```c
#include<iostream>
#include<string>
using namespace std;

int main() {
	// 1、C语言风格
	char string1[] = "hello";
	// 2、C++风格
	string string2 = "world";

	cout << "string1="<<string1 << endl;
	cout << "string2="<<string2 << endl;

	system("pause");
	return 0;
}
```

### 2.7 布尔类型

1. true和false；
2. 只占用1字节；
3. 实质上true为1，false为0；

```c
#include<iostream>
using namespace std;

int main() {
	// bool
	bool flag = true;
	cout << "flag=" << flag << endl; //输出为flag=1

	system("pause");
	return 0;
}
```

### 2.8 输入

1. `cin 变量名`

```c
#include<iostream>
using namespace std;

int main() {
	// 1、整型
	int a = 10;
	cout << "a=" << a << endl;
	cin >> a;
	cout << "a之后=" << a << endl;
	// 2、字符串
	string str = "helllo";
	cout << "str1=" << str << endl;
	cin >> str;
	cout << "str2=" << str << endl;
	system("pause");
	return 0;
}
```

### 2.9 decltype类型指示符

1.  从表达式的类型推算出要定义变量的类型，而不使用该对象的初始化变量； 
2.  `decltype(f()) sum = 0;`sum的类型就是f()函数返回值类型； 

**关于引用类型**

```c
#include<iostream>

int main()
{
	const int ci = 0, & cj = ci;
	decltype(ci) x = ci; //x类型是const int
	decltype(cj) y = x; //y类型是const int&
	// decltype(cj) z; //错误，z的类型为引用，必须初始化；
}
```

**指针解引用**

1. 解引用之后得到引用类型

```c
int i = 42, * p = &i, & r = i;
decltype(r + 0) b;
//decltype(*p) c; //错误，*p解引用之后类型为引用，即int&
```

**多层括号**

1. 双层括号永远是引用

```c
int i = 42;
//decltype((i)) d; // 错误，加括号之后（i）为表达式，得到引用类型
decltype(i) d;
```

### 2.10 自定义数据结构

**定义结构体**

```c
struct Sales_data {
	std::string bookNo;
	unsigned units_sold = 0;
	double revenue = 0.0;
};
```

```c
#include<iostream>
#include<string>
#include "Sales_data.h"


int main()
{
	Sales_data data1, data2;
	double price1 = 0;
	std::cout << "Please input data1:" << std::endl;
	std::cin >> data1.bookNo >> data1.units_sold >> price1;
	data1.revenue = data1.units_sold * price1;
	double price2 = 0;
	std::cout << "Please input data2:" << std::endl;
	std::cin >> data2.bookNo >> data2.units_sold >> price2;
	data1.revenue = data2.units_sold * price2;

	if (data1.bookNo == data2.bookNo) {
		// 如果索引一致，加和
		unsigned totalCnt = data1.units_sold + data2.units_sold;
		double totalRevenue = data1.revenue + data2.revenue;

		std::cout << data1.bookNo << " " << totalCnt
			<< " " << totalRevenue << "";
		if (totalCnt != 0)
			std::cout << totalRevenue / totalCnt << std::endl;
		return 0;
	}
	else {
		std::cerr << "Data must refer to the same ISBN" << std::endl;
		return -1;
	}
}
```



### 2.11 预处理器

1. #define：把一个名义设定为预处理变量；
2. #ifdef：当变量已定义时为真；
3. #ifndef：当变量未定义时为真；
4. #endif：检查结束；

```c
#ifndef SALES_DATA_H //若没定义
#define SALES_DATA_H //则定义
struct Sales_data {
	std::string bookNo;
	unsigned units_sold = 0;
	double revenue = 0.0;
};
#endif // !SALES_DATA_H
```



### 2.12 typid和type_info

typeid用于获取变量（或者表达式）的类型，typeid(int).name()获取类型名称字符串

既可以用于C++基本数据类型，也可用于自定义数据类型



type_info类重载了 == 和 != 运算符，用于对类型进行比较。```typeid(int) == typeid(a)```

1. type_info的构造函数是private属性，也没有拷贝构造函数，所以不能直接实例化，只能右编译器再内部实例化。





## 3、字符串、向量和数组

### 3.1 命名空间的using声明

1. `using namesapce :: name`;
2. 每个独立变量都需要独立声明；

**使用**

```c
#include<iostream>
using std::cin;

int main()
{
	int i;
	cin >> i;
	// cout << i; //cout没在命名空间里声明
}
```

### 3.2 标准库类型string

1. 


#### 3.2.1 定义和初始化

1. 4种类型

```c
string s1;

string s2(s1);
string s2 = s1;

string s3("Value");//直接初始化
string s3 = "Value";//拷贝初始化

string s4(n,'c');
```

### 3.3 标准库Vector

1. vector是模板而非类型；
2. 实质上是个容器；
3. 拷贝时，vector类型必须一致；

**拷贝**

## 3、运算符

### 3.1 算数运算符

1. 两个小数不能做取模运算；

| 运算符 | 描述                             | 实例             |
| ------ | -------------------------------- | ---------------- |
| +      | 把两个操作数相加                 | A + B 将得到 30  |
| -      | 从第一个操作数中减去第二个操作数 | A - B 将得到 -10 |
| *      | 把两个操作数相乘                 | A * B 将得到 200 |
| /      | 分子除以分母                     | B / A 将得到 2   |
| %      | 取模运算符，整除后的余数         | B % A 将得到 0   |

| ++ | [自增运算符](https://www.runoob.com/cplusplus/cpp-increment-decrement-operators.html)
，整数值增加 1 | A++ 将得到 11 |
| -- | [自减运算符](https://www.runoob.com/cplusplus/cpp-increment-decrement-operators.html)
，整数值减少 1 | A-- 将得到 9 |


**前置自增和后置自增**

```c
#include <iostream>
using namespace std;
 
int main()
{
   int a = 21;
   int c ;
 
   // a 的值在赋值之前不会自增
   c = a++;   
   cout << "Line 1 - Value of a++ is :" << c << endl ;
 
   // 表达式计算之后，a 的值增加 1
   cout << "Line 2 - Value of a is :" << a << endl ;
 
   // a 的值在赋值之前自增
   c = ++a;  
   cout << "Line 3 - Value of ++a is  :" << c << endl ;
   return 0;
}
```

```
Line 1 - Value of a++ is :21
Line 2 - Value of a is :22
Line 3 - Value of ++a is  :23
```

### 3.2 赋值运算符

| 算符    | 描述                                                         | 实例                              |
| ------- | ------------------------------------------------------------ | --------------------------------- |
| =       | 简单的赋值运算符，把右边操作数的值赋给左边操作数             | C = A + B 将把 A + B 的值赋给 C   |
| +=      | 加且赋值运算符，把右边操作数加上左边操作数的结果赋值给左边操作数 | C += A 相当于 C = C + A           |
| -=      | 减且赋值运算符，把左边操作数减去右边操作数的结果赋值给左边操作数 | C -= A 相当于 C = C - A           |
| *=      | 乘且赋值运算符，把右边操作数乘以左边操作数的结果赋值给左边操作数 | C _= A 相当于 C = C _ A           |
| /=      | 除且赋值运算符，把左边操作数除以右边操作数的结果赋值给左边操作数 | C /= A 相当于 C = C / A           |
| %=      | 求模且赋值运算符，求两个操作数的模赋值给左边操作数           | C %= A 相当于 C = C % A           |
| <<=     | 左移且赋值运算符                                             | C <<= 2 等同于 C = C << 2         |
| >>=     | 右移且赋值运算符                                             | C >>= 2 等同于 C = C >> 2         |
| &=      | 按位与且赋值运算符                                           | C &= 2 等同于 C = C & 2           |
| ^=      | 按位异或且赋值运算符                                         | C ^= 2 等同于 C = C ^ 2           |
| &#124;= | 按位或且赋值运算符                                           | C &#124;= 2 等同于 C = C &#124; 2 |


```c
#include<iostream>
using namespace std;

int main() {
	int a = 8;
	a >>= 2;	// 等于8/2^2
	cout << "a = " << a << endl;

	system("pause");
	return 0;
}
```

### 3.3 比较运算符

1. 输出时加括号；`(a==b);`
2. 计算时可加可不加；

| 运算符 | 描述                                                         | 实例              |
| ------ | ------------------------------------------------------------ | ----------------- |
| ==     | 检查两个操作数的值是否相等，如果相等则条件为真。             | (A == B) 不为真。 |
| !=     | 检查两个操作数的值是否相等，如果不相等则条件为真。           | (A != B) 为真。   |
| >      | 检查左操作数的值是否大于右操作数的值，如果是则条件为真。     | (A > B) 不为真。  |
| <      | 检查左操作数的值是否小于右操作数的值，如果是则条件为真。     | (A < B) 为真。    |
| >=     | 检查左操作数的值是否大于或等于右操作数的值，如果是则条件为真。 | (A >= B) 不为真。 |
| <=     | 检查左操作数的值是否小于或等于右操作数的值，如果是则条件为真。 | (A <= B) 为真。   |


```c
#include<iostream>
using namespace std;

int main() {
	int a = 8;
	int b = 10;
	cout << (a==b) << endl;
	bool c = a != b;
	cout << c << endl;
	system("pause");
	return 0;
}
```

```
line 1:0
line 2:1
```

### 3.4 逻辑运算符

假设变量 A 的值为 1，变量 B 的值为 0，则：

| 运算符       | 描述                                                         | 实例                         |
| ------------ | ------------------------------------------------------------ | ---------------------------- |
| &&           | 称为逻辑与运算符。如果两个操作数都 true，则条件为 true。     | (A && B) 为 false。          |
| &#124;&#124; | 称为逻辑或运算符。如果两个操作数中有任意一个 true，则条件为 true。 | (A &#124;&#124; B) 为 true。 |
| !            | 称为逻辑非运算符。用来逆转操作数的逻辑状态，如果条件为 true 则逻辑非运算符将使其为 false。 | !(A && B) 为 true。          |


## 4、程序流程结构

1. 顺序结构、选择结构、循环结构

### 4.1 选择结构

1. if
2. if...else
3. if...else if..else if...

```c
#include<iostream>
using namespace std;

int main() {
	int score = 0;
	cout << "请输入分数" << endl;
	cin >> score;
	if (score > 600) {
		cout << "及格了" << endl;
	}

	system("pause");
	return 0;
}
```

**顺序计数器**

```c
#include<iostream>

int main() {
	int currVal = 0, val = 0;
	if (std::cin >> currVal) {
		int cnt = 1;
		while (std::cin >> val) {
			if (val == currVal)
				++cnt;
			else {
				std::cout << currVal << " occurs " << cnt << " times" << std::endl;
				currVal = val;
				cnt = 1;
			}
		}
		std::cout << currVal << " occurs " << cnt << " times" << std::endl;
	}
	return 0;
}
```

### 4.2 三目运算符

1. 做简单的判断；
2. `a > b ? a : b ;`a比b大则为a，否则为b；

### 4.3 switch

1. switch选择结构；
2. switch只能判断整型或者字符型，不能是区间；
3. switch效率较高；

```c
#include<iostream>
using namespace std;

int main() {
	int score = 0;
	cout << "请输入分数" << endl;
	cin >> score;
	switch (score) {
		case 10:
			cout << "经典" << endl;
			break;
		case 9:
			cout << "还行" << endl; 
			break;
		default:
			cout << "不行"<< endl;
			break;
	}
	
	system("pause");
	return 0;
}
```

### 4.4 while

![](https://test-123456-md-images.oss-cn-beijing.aliyuncs.com/img/GmU91p2bXekIsBN.jpg#crop=0&crop=0&crop=1&crop=1&id=ssv2m&originHeight=463&originWidth=414&originalType=binary&ratio=1&rotation=0&showTitle=false&status=done&style=none&title=)

1. `while(循环条件){循环结构}`

**while语句**

```c
int main() {
	int sum = 0, val = 1;
	while (val <=10)
	{
		sum += val;
		++val;
	}
	std::cout << "Sum of 1 to 10 inclusive is "
		<< sum << std::endl;
	return 0;
}
```

输出：um of 1 to 10 inclusive is 55

**猜数字**

```c
#include<iostream>
using namespace std;


int main() {
	int num = 0;
	int numRam = rand() % 100 + 1;// 生成1-100的随机数
	cout << "请输入数字" << endl;
	cin >> num;
	while (num != numRam) {
		if (num > numRam) {
			cout << "大了" << endl;
			cin >> num;
		}
		else {
			cout << "小了" << endl;
			cin >> num;
		}
	}
	cout << "猜对了" << endl;
	system("pause");
	return 0;
}
```

### 4.5 do...while

1. `do{ 循环语句 } while { 循环条件 };`
2. 会先执行一次；

```c
#include<iostream>
using namespace std;

int main() {
	int num = 100;
	do {
		int a = 0;
		int b = 0;
		int c = 0;
		a = num / 100;
		b = num / 10 % 10;
		c = num % 10;
		if (a*a*a + b*b*b + c*c*c == num) {
			cout << "是水仙花数" << num << endl;
		}
		num++;
	} while (num >= 100 && num < 1000);
	system("pause");
	return 0;
}
```

### 4.6 for循环

1. `for( 起始表达式； 条件表达式；循环语句 ){ 循环语句 }`
2. 可以用来读取一组数据；

```c
#include<iostream>
using namespace std;

int main() {
	int a = 0;
	int b = 0;
	for (int num = 1; num < 100; num++) {
		a = num / 10;
		b = num % 10;
		if (a == 7 || b == 7 || num % 7 == 0) {
			cout << "敲桌子" << num << endl;
		}
	}
	system("pause");
	return 0;
}
```

**读取输入不定的输入数据**

```c
int main() {
	int sum = 0, value = 0;
	while (std::cin >> value)
	{
		sum += value;
	}
	std::cout << "Sum is: " << sum << std::endl;
	return 0;
}
```

输入：1 2 3 4 5 6 8 da
输出：Sum is: 29

> 或者ctrl+z，再按Enter，表示输入结束


输入：1 2 3 4^z
输出：Sum is: 10

**乘法口诀**

```c
#include<iostream>
using namespace std;

int main() {
	for (int i = 1; i < 10; i++) {
		for (int j = 1; j <= i; j++) {
			cout << j <<"*"<<i <<"=" <<i*j<<"\t";
		}
		cout << endl;
	}
	system("pause");
	return 0;
}
```

### 4.7 break和continue

1. break跳出循环体；
2. continue，执行到本行不往下执行，但是循环会继续，只是跳出本次执行块；

### 4.8 goto

1. 需要一个表示符，标识符命名规范同变量；
2. 标识符一般大写；

```c
goto FLAG;

FLAG:
cout << "跳转执行到这" << endl;
```

## 5、数组

1. 存放相同类型的数据；
2. 索引从0开始；

### 5.1 一维数组

1. 定义

- `数据类型 数组名[ 数组长度 ];`
- `数据类型 数组名[ 数组长度 ] = { 值1 ，值2 ，值3...};`
- `数组类型 数组名[] = {值1 ，值2，值3...};`

2. 获取数组中的数据`arr[i]`；
3. 数组占居内存大小`sizeof(arr)`；
4. 元素个数`sizeof(arr)/sizeof(arr[0])`；
5. 直接打印arr，输出为首地址；元素地址为`&arr[0]`；

## 6、引用

### 6.1 基本介绍

1. 引用是变量的别名；
2. 本质就是一个指针常量；
3. 应用必须初始化，初始化后不能改变；
4. 可以使用引用进行地址传递；

**基本使用**

```c
#include<iostream>
using namespace std;

int main() {
	int a = 10;
	int& b = a;
	b = 20;
	cout << a << endl << b << endl;
}
```

### 6.2 3种交换函数

1. 地址传递；

```c
#include<iostream>
using namespace std;

// 值传递

void f1(int a, int b) {
	int temp = a;
	a = b;
	b = temp;
}

// 地址传递

void f2(int *a ,int*b) {
	int temp = *a;
	*a = *b;
	*b = temp;
}

// 引用传递

void f3(int &a, int &b) {
	int temp = a;
	a = b;
	b = temp;
}


int main(){
	int a = 10;
	int b = 20;
	//f1(a, b);
	//f2(&a, &b);
	f3(a, b);
	cout << "a = " << a<<endl;
	cout << "b = " << b;

}
```

### 6.3 引用函数函数返回值

1. 不要返回局部变量的引用（较老的版本中）；
2. 函数的调用可以作为左值；

```c
int& test02() {
	static int a = 20;
	return a; //返回引用地址
}

int main() {
	int& res = test02();
	cout << res << endl;
	test02() = 1000;
	cout << res << endl;

}
```

输出为

20

1000

### 6.4 常量引用

1. 使用场景：用来修饰形参，防止误操作；

```c
#include<iostream>
using namespace std;

void f1(const int &a) {
	// 不能再修改
	// a = 20;
	cout << a << endl;
}

int main() {
	// 编译器会修改为 int temp= 10；const int &a = temp;只不过这个临时变量我们不知道 
	const int& a = 10;
	// 修改a会报错,a已为只读
	// a = 20;
	int b = 10;
	f1(b);
}
```

## 7、结构体

### 7.1 结构体概念

1. 用户自定义数据类型；

### 7.2 结构体使用

1. `struct 结构体名称 { 结构体成员列表 }`
2. 实例化的三种方法

- struct 结构体名 变量名
- struct 结构体名 变量名 = {成员1值，成员2值...}
- 定义结构体时顺便创建

**创建结构体**

```c
struct Student {
	string name;
	int age;
	int score;
}s3;
```

**实例化**

```c
//1. struct 结构体名 变量名
struct Student s1;
s1.name = "张三";
s1.age = 18;
s1.score = 78.5;
cout << s1.name << "\t" << s1.age << "\t" << s1.score << endl;

//2. struct 结构体名 变量名 = {}
struct Student s2 = { "李四",20,80.0 };
cout << s2.name << "\t" << s2.age << "\t" << s2.score << endl;


//3. 创建结构体时创建变量s3
s3.name = "王五";
s3.age = 23;
s3.score = 90.0;
cout << s3.name << "\t" << s3.age << "\t" << s3.score << endl;
```

### 7.3 结构体数组

1. `struct Student stuArray[2] = {{"张三",18,60},{"李四",20,80}};`
2. 索引从第0个开始

```c
#include<iostream>
using namespace std;

//1. 定义结构体
struct Student {
	string name;
	int age;
	double score;
};


int main()
{
	//2. 创建结构体数组
	struct Student stuArray[3] = {
		{"张三",18,20},
		{"李四",18,20},
		{"王五",18,20},
	};

	//3. 赋值
	stuArray[2].name = "赵六";
	stuArray[2].age = 20;
	stuArray[2].score = 30;

	//4. 遍历
	for (int i = 0; i < 3; i++) {
		cout << stuArray[i].name << "\t" << stuArray[i].age << "\t" << stuArray[i].score << endl;
	}


}
```

![](https://test-123456-md-images.oss-cn-beijing.aliyuncs.com/img/dXKQRcAVmEWfrhx.png#crop=0&crop=0&crop=1&crop=1&id=mjoK4&originHeight=767&originWidth=1470&originalType=binary&ratio=1&rotation=0&showTitle=false&status=done&style=none&title=)

### 7.4 结构体指针

1. 指向结构体`struct Student* p = &s;`,其中`struct`可以省略；
2. 访问结构体指针访问`p->name`;

```c
#include<iostream>
using namespace std;

//1.定义结构体
struct Student {
	string name;
	int age;
	double score;
};


int main() {
	//2.创建结构体变量
	struct Student s = {"张三",18,80};

	//3.通过指针指向结构体变量
	struct Student* p = &s;

	//4.通过指针访问结构体变量
	cout << p->name <<"\t" << p->age<<"\t" << p->score << endl;
}
```

### 7.5 结构体嵌套结构体

1. 结构体1作为结构体2的成员变量；
2. 结构体1应该定义在结构体2前面；
3. 结构体里结构体赋值`t.stu.score = 80;`或者`t.stu = { "张三",20,100 };`

```c
#include<iostream>
using namespace std;

// 定义学生的结构体
struct Student {
	string name;
	int age;
	double score;
};

// 定义老师的结构体
struct Teacher {
	int id;
	string name;
	int age;
	//将另一个结构体作为本结构体的成员
	struct Student stu;
};


int main() {
	Teacher t;
	t.id = 01;
	t.name = "老师1";
	t.age = 45;
	t.stu.name = "学生1";
	t.stu.age = 18;
	t.stu.score = 80;
	//或者
	t.stu = { "张三",20,100 };

	cout << t.stu.name << endl;
}
```

### 7.6 结构体做函数参数

1.  将结构体作为参数传递到函数里； 
2.  值传递,不会修改原对象值； 
3.  地址传递，会改变原对象值； 

```c
#include<iostream>
using namespace std;

// 定义学生的结构体
struct Student {
	string name;
	int age;
	double score;
};

// 值传递,不会修改原对象值
void printStudent(struct Student s) {
	cout << "1.打印信息：" << s.name << "\t" << s.age << "\t" << s.score << endl;
};
// 地址传递，会改变原对象值
void printStudent(struct Student *p) {
	cout << "2.打印信息：" << p->name << "\t" << p->age << "\t" << p->score << endl;
};

int main() {
	struct Student s = {"张三",18,90};
	printStudent(s);
	printStudent(&s);

}
```

### 7.7 结构体const

在某些时候我们需要将结构体变量传入到一个函数内，如果使用值传递就会占用大量的内存空间，因为每调用一次函数，计算机就会赋值出一个新的结构体变量，大小和原变量相同，所以应采用地址传递来节省空间，因为指针只占用4个字节。但是使用地址传递会带来一个隐患，即可以在函数体内修改原结构体变量的值，这对数据来说是不安全的，我们需要用const进行修饰，使结构体变量不可更改。

```c
#include<iostream>
using namespace std;

// 定义学生的结构体
struct Student {
	string name;
	int age;
	double score;
};

// 加上const修饰，就可以避免在地址传递时，函数体内修改原变量的属性
void printStu(const Student* p) {

	//p->age = 20;//错误，不能修改
	cout << p->name << "\t" << p->age << "\t" << p->score << endl;

}

int main() {
	//创建结构体变量
	Student s = { "张三",18,90 };
	printStu(&s);
}
```

### 7.8 结构体案例1

1. 注意字符串字面量和字符相加，使用+=比较好；
2. 随机数种子；
3. 判断数据类型`typeid(i).name();`

```c
#include<iostream>
using namespace std;
#include<string>
#include<ctime>

// 定义学生的结构体
struct Student {
	string name;
	int score;
};


// 老师的结构体
struct Teacher {
	string name;
	Student stuArray[5];
};


// 给老师和学生赋值函数
void allocateSpace(struct Teacher teaArray[], int len) {
	string nameSpace = "ABCDE";
	for (int i = 0; i < len; i++) {
		string tname = "Teacher_" ;
		tname += nameSpace[i];
		teaArray[i].name =  tname;
		// 学生赋值
		for (int j= 0; j < 5; j++) {
			string sname = "Student_" ;
			sname += +nameSpace[j];
			int sscore = rand() % 61 + 40;//40~100
			teaArray[i].stuArray[j].name = sname;
			teaArray[i].stuArray[j].score = sscore;
		}
	}
}

void printFor(struct Teacher teaArray[], int len) {
	for (int i = 0; i < len; i++) {
		cout << teaArray[i].name << endl;
		for (int j = 0; j < 5; j++) {
			cout << "\t" << teaArray[i].stuArray[j].name << "\t" << teaArray[i].stuArray[j].score << endl;
		}
	}
}

int main() {

	// 随机数种子
	srand((unsigned int)time(NULL));

	// 创建3名老师
	struct Teacher teaArray[3];

	// 给老师的学生赋值
	int len = sizeof(teaArray) / sizeof(teaArray[0]);
	allocateSpace(teaArray, len); //数组本身就是地址传递
	printFor(teaArray, len);

}
```

### 7.9 结构体案例2

1. 冒泡排序；
2. 临时变量temp，类型为hero；

```c
#include<iostream>
#include<string>
using namespace std;

// 设计结构体
struct hero {
	string name;
	int age;
	string sex;
};

// 冒泡排序函数
void rink(struct hero heroArray[],int len) {
	for (int i = 0; i < len-1; i++) {
		for (int j = 0; j < len - i - 1; j++) {
			if (heroArray[j].age > heroArray[j+1].age) {
				struct hero temp = heroArray[j];
				heroArray[j] = heroArray[j+1];
				heroArray[j+1] = temp;
			}
		}
	}
}

// 打印输出
void printHero(struct hero heroArray[], int len) {
	for (int i = 0; i < len; i++) {
		cout << heroArray[i].name << "\t" << heroArray[i].age << "\t" << heroArray[i].sex << endl;
	}

}


int main() {

	// 创建英雄
	struct hero heroArray[5] = {
		{"刘备",23,"男"},
		{"关羽",22,"男"},
		{"张飞",20,"男"},
		{"赵云",21,"男"},
		{"貂蝉",19,"男"},
	};

	// 数组排序
	int len = sizeof(heroArray) / sizeof(heroArray[0]);
	rink(heroArray, len);

	// 打印输出
	printHero(heroArray, len);

	system("pause");
	return 0;
}
```

### 7.10 简单链表

链表：需要的时候就分配一块空间，内存是动态变化的。而数组长度是固定不变的。

<strong style="color:#00b050;">实现</strong>

1. 定义一个超女结构体，含有编号、姓名、下一个超女的指针；

```c++
struct SuperGril
	{// 定义编号、姓名和下一个超女的指针
		int no;
		string name;
		struct SuperGril* next;
	};
```

2. 初始化头号超女header、尾部超女tail 、临时超女temp;`SuperGril* header = nullptr, * tail = nullptr, * temp = nullptr;`

3. 使用临时节点创建超女，并给header和tail赋值

```c++
	// 分配第一个节点，并赋值
	temp = new SuperGril({ 1,"西施",nullptr });
	header = tail = temp;

	temp = new SuperGril({ 2,"冰冰",nullptr });
	tail->next = temp; // 上一个节点的next指向新节点
	tail = temp; // 尾部为新节点

	temp = new SuperGril({ 3,"丽英",nullptr });
	tail->next = temp; // 上一个节点的next指向新节点
	tail = temp; // 尾部为新节点
```

4. 遍历链表

```c++
	// 遍历链表
	temp = header;
	while (temp!=nullptr)
	{
		cout << "编号" << temp->no << "\t姓名" <<temp->name << "\t下一个节点" << temp->next << endl;
		temp = temp->next; // 向后查找
	}
```

5. 释放链表内存

```c++
	// 释放链表内存
	while (header!=nullptr)
	{
		temp = header;
		header = header->next;
		delete temp;
	}
```



<strong style="color:#00b050;">全部代码</strong>

```c++
#include<iostream>
#include<string>
using std::cout;
using std::string; using std::endl;

int main()
{
	struct SuperGril
	{// 定义编号、姓名和下一个超女的指针
		int no;
		string name;
		struct SuperGril* next;
	};

	SuperGril* header = nullptr, * tail = nullptr, * temp = nullptr;

	// 分配第一个节点，并赋值
	temp = new SuperGril({ 1,"西施",nullptr });
	header = tail = temp;

	temp = new SuperGril({ 2,"冰冰",nullptr });
	tail->next = temp; // 上一个节点的next指向新节点
	tail = temp; // 尾部为新节点

	temp = new SuperGril({ 3,"丽英",nullptr });
	tail->next = temp; // 上一个节点的next指向新节点
	tail = temp; // 尾部为新节点

	// 传统赋值
	//temp->no = 1;
	//temp->name = "西施";
	//temp->next = nullptr;

	// c++11推荐
	//*(temp) = { 1,"西施",nullptr };

	// 遍历链表
	temp = header;
	while (temp!=nullptr)
	{
		cout << "编号" << temp->no << "\t姓名" <<temp->name << "\t下一个节点" << temp->next << endl;
		temp = temp->next; // 向后查找
	}

	// 释放链表内存
	while (header!=nullptr)
	{
		temp = header;
		header = header->next;
		delete temp;
	}

	printf("释放完毕\n");

	system("pause");
	return 0;
}
```



### 7.11 共同体

1. 共同体占用的内存大小是成员占用内存最大的大小；（内存对齐）
2. 全部成员使用一块内存；

```c++
#include<iostream>
using std::string; using std::cout; using std::endl;

int main()
{
	union MyUnion
	{
		int a; 
		double b;
		char c[21];
	};
	MyUnion data;

	// 占用大小
	cout << "内存占用大小=" << sizeof(data) << endl; //24

	cout << "内存地址data.a=" << (void*) &data.a << endl;
	cout << "内存地址data.b=" << (void*) &data.b << endl;
	cout << "内存地址data.c=" << (void*) &data.c << endl;

	system("pause");
	return 0;
}
```

![image-20221023115211935](http://test-123456-md-images.oss-cn-beijing.aliyuncs.com/img/image-20221023115211935.png)





### 7.12 枚举

**<u>创建常量的一种方式</u>**

<strong style="color:#00b050;">创建常量的方法：</strong>

1. 宏常量，用预处理指令#define创建
2. 用const关键字创建；
3. 枚举

<strong style="color:#00b050;">注意事项：</strong>

1. 枚举创建的变量取值只能在枚举范围之内；
2. 枚举的作用域与变量的作用域相同；
3. 可以设置枚举量的值
4. 整型强制转为枚举量：```Colors cc = Colors(1);```



```c++
#include<iostream>
using std::string; using std::cout; using std::endl;

int main()
{
	enum Colors
	{
		red=0,yellow,blue,other
	};

	// 创建一个枚举变量，只能为Colors中的一个
	Colors color = red;

	switch (color) // color是整数，可以用来switch
	{
		case red: // red是整型常量，可用来case
			cout << "红色" << endl;
			break;
		case yellow:
			cout << "黄色" << endl;
			break;
		case blue:
			cout << "蓝色" << endl;
			break;
		case other:
			cout << "红色" << endl;
			break;
		default:
			cout << "未知" << endl;
			break;
	}

	system("pause");
	return 0;
}
```













## 8、内存分配

c++共分为4个区，不同的区赋予不同的声明周期

- 代码区：存放函数体的二进制代码，由操作系统进行管理；
- 全局区：存放全局变量和静态变量以及常量；
- 栈区：由编译器自动分配释放，存放函数的参数值、局部变量；
- 堆区：由程序员分配和释放，若程序员不释放，程序结束时由操作系统回收；

### 8.1 程序运行前

在程序编译后，生成了exe可执行程序，未执行该程序前分为两个区域
代码区：

1. 存放CPU执行的机器指令
2. 代码区具共享的，共享的目的是对于频繁被执行的程序，只需要在内存中有一份代码即可
3. 代码区只读的，使其只读的原因是防止程序意外地修改了它的指令

全局区：

1. 全局变量和静态变量存放在此，
2. 全局区还包含了常量区，字符串常量和其他常量也存放在此
3. 该区域的数据在程序结束后由操作系统释放，

> 怎么理解全局区的地址呢？代码演示


```c
#include<iostream>
using namespace std;

int g_a = 10;
int g_b = 10;
const int c_g_a = 10;
const int c_g_b = 10;

int main() {
	// 全局区
	// 全局变量、静态变量、常量

	// 局部变量
	int l_a = 10;
	int l_b = 10;

	// 静态变量，用static修饰的
	static int s_l_a = 10;
	static int s_l_b = 10;

	// 常量
	// 字符串常量和const修饰的变量
	const int c_l_a = 10;
	const int c_l_b = 10;



	// 输出地址
	cout << "局部变量l_a的地址是：" << int(&l_a)  << endl;
	cout << "局部变量l_b的地址是：" << int( & l_b) << endl;
	cout << "全局变量g_a的地址是：" << int( & g_a) << endl;
	cout << "全局变量g_b的地址是：" << int( & g_b) << endl;
	cout << "静态变量s_l_a的地址是：" << int( & s_l_a) << endl;
	cout << "静态变量s_l_b的地址是：" << int( & s_l_b) << endl;
	cout << "字符串常量的地址是：" << int( & "Hello") << endl;
	cout << "const局部常量c_l_a的地址是：" << int( & c_l_a) << endl;
	cout << "const局部常量c_l_b的地址是：" << int( & c_l_b) << endl;
	cout << "const全局常量c_g_a的地址是：" << int( & c_g_a) << endl;
	cout << "const全局常量c_g_b的地址是：" << int( & c_g_b) << endl;
}
```

![](https://test-123456-md-images.oss-cn-beijing.aliyuncs.com/img/yCeTOHuSNRw1IYU.png#crop=0&crop=0&crop=1&crop=1&id=PPolo&originHeight=788&originWidth=1793&originalType=binary&ratio=1&rotation=0&showTitle=false&status=done&style=none&title=)

局部变量和const局部常量在一起

全局变量、静态变量、字符串常量、全局常量在一起

![](https://test-123456-md-images.oss-cn-beijing.aliyuncs.com/img/LC6VPZW3ntyMxsJ.png#crop=0&crop=0&crop=1&crop=1&id=DBCD0&originHeight=421&originWidth=1224&originalType=binary&ratio=1&rotation=0&showTitle=false&status=done&style=none&title=)

### 8.2 程序运行后

**栈区**：

由编译器自动分配释放，存放函数的参数值，局部变量等
注意事项：**不要返回局部变量的地址**，栈区开辟的数据由编译器自动释放

```c
#include<iostream>
using namespace std;

int* fn(int b) { //形参存放在栈区
	b = 20;
	int a = 10;
	return &a; // 不要返回局部变量地址
}

int main() {
	int* p = fn(1);
	cout << *p << endl; // 第一次打印10
	cout << *p << endl; // 第二次乱码
}
```

> 为什么我的一直打印10呢，也没有出现乱码？
>
> 答：因为编译器不同、版本不同，对程序的保留情况不同；


**堆区**

由程序员分配释放若程序员不释放程序结束时由操作系统回收
在C++中主要利用new在堆区开辟内存

```c
#include<iostream>
using namespace std;
// 利用new创建堆中数据

int* fn() {
	int* p = new int(10); //*p本质上是栈区的指针
	return p;
}

int main() {
	int* p = fn();
	cout << *p << endl;
	cout << *p << endl;

	system("pause");
	return 0;
}
```

![](https://test-123456-md-images.oss-cn-beijing.aliyuncs.com/img/73HSb6I4ZUscRXk.png#crop=0&crop=0&crop=1&crop=1&id=Duul0&originHeight=410&originWidth=780&originalType=binary&ratio=1&rotation=0&showTitle=false&status=done&style=none&title=)

### 8.3 new关键字

1. C++中利用new操作符在堆区开辟数据
2. 堆区开辟的数据，由程序员手动开辟，手动释放，释放利用操作符`delete`
3. 语法：new数层类型
4. 利用new创建的数据，会返回该数据对应的类型的指针

```c
int* fn() {
	int* p = new int(10);
	return p;
}

int main() {
	int* p = fn();
	cout << *p << endl;
	cout << *p << endl;

	delete p; // 释放

	system("pause");
	return 0;
}
```

### 8.4 动态数组

1.  当我们用new T[]分配一个数组时，得到的是数组元素的指针，而不是数组类型的对象； 
2.  new分配对数组初始化`int *pia = new int[10]()`；加个() 
3.  新标准中，`int *pia = new int[4]{0,1,2,3}`或`string* pia = new string[10]{ "a","b","the",string(3,'x') };`前4个给定初始化，剩余未空字符串 
4.  用`delete[] arr;`释放数组； 

```c
int* pia1 = new int[10]{ 0,1,2 }; //前三个给定初始化，其余为0
for (int i = 0; i < 10; i++) {
  cout << *(pia1+i)<< endl;
}
```

![](https://test-123456-md-images.oss-cn-beijing.aliyuncs.com/img/JYW2pQDowtlzcCf.png#crop=0&crop=0&crop=1&crop=1&id=xEj3D&originHeight=347&originWidth=1171&originalType=binary&ratio=1&rotation=0&showTitle=false&status=done&style=none&title=)

### 8.5 堆和栈的比较

> 使用栈就象我们去饭馆里吃饭，只管点菜（发出申请）、付钱、和吃（使用），吃饱了就走，不必理会切菜、洗菜等准备工作和洗碗、刷锅等扫尾工作，他的好处是快捷，但是自由度小。
> 使用堆就象是自己动手做喜欢吃的菜肴，比较麻烦，但是比较符合自己的口味，而且自由度大。


1、内存分配方面：

堆：一般由程序员分配释放， 若程序员不释放，程序结束时可能由OS回收 。注意它与数据结构中的堆是两回事，分配方式是类似于链表。可能用到的关键字如下：new、malloc、delete、free等等。

栈：由编译器(Compiler)自动分配释放，存放函数的参数值，局部变量的值等。其操作方式类似于数据结构中的栈。

2、申请方式方面：

堆：需要程序员自己申请，并指明大小。在c中malloc函数如p1 = (char *)malloc(10)；在C++中用new运算符，但是注意p1、p2本身是在栈中的。因为他们还是可以认为是局部变量。

栈：由系统自动分配。 例如，声明在函数中一个局部变量 int b；系统自动在栈中为b开辟空间。

3、系统响应方面：

堆：操作系统有一个记录空闲内存地址的链表，当系统收到程序的申请时，会遍历该链表，寻找第一个空间大于所申请空间的堆结点，然后将该结点从空闲结点链表中删除，并将该结点的空间分配给程序，另外，对于大多数系统，会在这块内存空间中的首地址处记录本次分配的大小，这样代码中的delete语句才能正确的释放本内存空间。另外由于找到的堆结点的大小不一定正好等于申请的大小，系统会自动的将多余的那部分重新放入空闲链表中。

栈：只要栈的剩余空间大于所申请空间，系统将为程序提供内存，否则将报异常提示栈溢出。

4、大小限制方面：

堆：是向高地址扩展的数据结构，是不连续的内存区域。这是由于系统是用链表来存储的空闲内存地址的，自然是不连续的，而链表的遍历方向是由低地址向高地址。堆的大小受限于计算机系统中有效的虚拟内存。由此可见，堆获得的空间比较灵活，也比较大。

栈：在Windows下, 栈是向低地址扩展的数据结构，是一块连续的内存的区域。这句话的意思是栈顶的地址和栈的最大容量是系统预先规定好的，在WINDOWS下，栈的大小是固定的（是一个编译时就确定的常数），如果申请的空间超过栈的剩余空间时，将提示overflow。因此，能从栈获得的空间较小。

5、效率方面：

堆：是由new分配的内存，一般速度比较慢，而且容易产生内存碎片，不过用起来最方便，另外，在WINDOWS下，最好的方式是用VirtualAlloc分配内存，他不是在堆，也不是在栈是直接在进程的地址空间中保留一快内存，虽然用起来最不方便。但是速度快，也最灵活。

栈：由系统自动分配，速度较快。但程序员是无法控制的。

6、存放内容方面：

堆：一般是在堆的头部用一个字节存放堆的大小。堆中的具体内容有程序员安排。

栈：在函数调用时第一个进栈的是主函数中后的下一条指令（函数调用语句的下一条可执行语句）的地址然后是函数的各个参数，在大多数的C编译器中，参数是由右往左入栈，然后是函数中的局部变量。

注意: 静态变量是不入栈的。当本次函数调用结束后，局部变量先出栈，然后是参数，最后栈顶指针指向最开始存的地址，也就是主函数中的下一条指令，程序由该点继续运行。

7、存取效率方面：

堆：char *s1 = "Hello Word"；是在编译时就确定的；

栈：char s1[] = "Hello Word"； 是在运行时赋值的；用数组比用指针速度要快一些，因为指针在底层汇编中需要用edx寄存器中转一下，而数组在栈上直接读取。

## 9、指针

1. 


```c
double dval;
double* pd = &dval;
double* pd2 = pd;
*pd2 = 2.0;
cout << "dval是"<<dval << endl;
cout << "dval的地址是"<<&dval << endl;
cout << "*pd是"<<*pd << endl;
cout << "pd的地址是"<<&pd << endl;
cout << "pd本身是"<<pd << endl;
cout << "pd2是"<<*pd2 << endl;
```

dval是2
dval的地址是0000004D63EFF808

pd是2
pd的地址是0000004D63EFF828
pd本身是0000004D63EFF808
pd2是2

## 10、函数

### 10.1 函数默认值

1. 如果一个形参位置已经有默认值，则后面的形参都得有默认值；
2. 如果函数声明中形参已经有默认值，在函数定义时就不能给默认值，否则会报错；

```c
#include<iostream>
using namespace std;

int f1(int a, int b = 20, int c = 30)
{
	return a + b + c;
}

int main() {
	f1(10); //可以只传递一个，因为在函数中b、c已经给过值
	f1(10,60); //如果给b传了值，则用传入的
}
```

**声明和定义**

```c
#include<iostream>
using namespace std;

int f2(int a = 10, int b = 10);

int f2(int a = 10,int b = 10)
{
	
}

int main() {
	f2();
}
```

报错：f2重定义默认参数

### 10.2 函数占位参数

1.  c++函数形参列表可以有站位参数，但调用函数时必须补齐该位置； 
2.  语法：`数据类型int 函数名f(数据类型int)`； 
3.  占位参数也可以有默认参数； 

```c
void f(int)
{
	cout << "你好" << endl;
}

int main()
{
	f(10);
}
```

默认参数

```c
void f(int = 10)
{
  cout << "你好" << endl;
}
int main()
{
	f();//这里就可以不用传
}
```

### 10.3 函数的重载

> - 同一个作用域内；
> - 函数名相同；
> - 函数参数**类型不同**或者**个数不同**或者**顺序不同**；


1. 函数名可以相同，提高复用性；
2. 返回值不可以作为重载的条件；`void f()和int f()`；

```c
#include<iostream>
using namespace std;

void f()
{
	cout << "f()调用了！" << endl;
}
void f(int a)
{
	cout << "f(int a)调用了！" << endl;
}
void f(int a,int b)
{
	cout << "f(int a,int b)调用了！" << endl;
}
void f(double b)
{
	cout << "f(double b)调用了！" << endl;
}

int main()
{
	f();
	f(10);
	f(10.0);
	f(10,20);
}
```

![](https://test-123456-md-images.oss-cn-beijing.aliyuncs.com/img/Snipaste_2022-03-27_21-09-09.png#crop=0&crop=0&crop=1&crop=1&id=h6clW&originHeight=1016&originWidth=2489&originalType=binary&ratio=1&rotation=0&showTitle=false&status=done&style=none&title=)

### 10.4 函数重载注意事项

1. 引用作为重载的条件；

```c
#include<iostream>
using namespace std;

void f(int &a) {
	cout << "f(int &a)调用了！" << endl;
}
void f(const int &a) {
	cout << "f(const int &a)调用了！" << endl;
}

int main() {
	int a = 10;
	f(a); // f(int &a)调用了！
	f(10);// f(const int &a)调用了！
}
```

**函数重载遇见默认参数**

```c
#include<iostream>
using namespace std;

void f(int &a,int &b = 10) {
	cout << "f(int &a ,int &b = 10)调用了！" << endl;
}
void f(int &a) {
	cout << "f(const int &a)调用了！" << endl;
}

int main() {
	int a = 10;
	f(a); // 错误
}
```



### 10.5 内联函数

函数声明之后定义，在主函数中被多次调用，原始写法：这样的写法会使程序在函数之间来回跳转，消耗一定的执行速度代价。使用内联函数的方法可以将show函数放在main函数里，避免来回跳转；但会占用一定的内存；使用较小的函数体

```c++
#include<iostream>
using std::cout; using std::endl; using std::string;

void show(const short num, const string message);

int main()
{
	show(1, "我是啥啥鸟");
	show(2, "我是啥啥鸟");
	show(3, "我是啥啥鸟");

	system("pause");
	return 0;
}

void show(const short num, const string message)
{
	cout << "亲爱的" << num << "号，" << message << endl;
}
```

内联函数：相当于把函数嵌入进去

1. 内联函数不能递归
2. 函数体太大的函数，编译器不会将其作为内联函数

```c++
inline void show(const short num, const string message);

int main()
{
	show(1, "我是啥啥鸟");
	//{
	//	short num = 1;
	//	string message = "我是啥啥鸟";
	//	cout << "亲爱的" << num << "号，" << message << endl;
	//}
	show(2, "我是啥啥鸟");
	//{
	//	short num = 1;
	//	string message = "我是啥啥鸟";
	//	cout << "亲爱的" << num << "号，" << message << endl;
	//}
	show(3, "我是啥啥鸟");
	//{
	//	short num = 1;
	//	string message = "我是啥啥鸟";
	//	cout << "亲爱的" << num << "号，" << message << endl;
	//}

	system("pause");
	return 0;
}

inline void show(const short num, const string message)
{
	cout << "亲爱的" << num << "号，" << message << endl;
}
```





## 11、类和对象

c++面向对象的三大特性：**封装、继承、多态**

万物皆可对象

### 11.1 封装

封装的意义：

- 将属性和行为作为一个整体，表现在生活中的事物；
- 将属性和行为加以权限控制；

**设计一个圆类**

```c
const double PI = 3.14;
// 设计一个圆类
class Circle
{

public:
	int m_r;
	double calculateZC()
	{
		return 2 * PI * m_r;
	}
};

int main()
{
	//创建一个对象
	Circle c1;
	c1.m_r = 10;
	cout<<"圆的周长为"<< c1.calculateZC() <<endl;
}
```

**学生案例**

1. 可以使用`setName`函数对`name`进行赋值；
2. 可用`name = cname`，也可以使用`this->name = cname`；

```c
#include<iostream>
using namespace std;

class Student
{
	
public:
	string name;
	int id;
	void showStudent()
	{
		cout << "学生的信息为:" << endl << "\t" << name << "\t" << id << endl;
	}
	void setName(string cname)
	{
		this->name = cname;
		//name = cname;
	}
};

int main()
{
	Student s1,s2;

	s1.id = 01;
	s1.name = "张三";
	s1.showStudent();

	s2.id = 02;
	s2.setName("李四");
	s2.showStudent();
}
```

### 11.2 访问权限

> 公共权限：public 			类内可以访问、类外可以访问
>
> 保护权限：protected		类内可以访问、类外不可以访问	儿子可以访问父亲的保护内容
>
> 私有权限：private			类内可以访问、类外不可以访问


### 11.3 struct和class区别

1. 主要区别就在于默认权限，struct默认为公共权限，class为私有权限。

![](https://test-123456-md-images.oss-cn-beijing.aliyuncs.com/img/image-20220329220145754.png#crop=0&crop=0&crop=1&crop=1&id=zLmks&originHeight=886&originWidth=1433&originalType=binary&ratio=1&rotation=0&showTitle=false&status=done&style=none&title=)

**代码**

```c
#include<iostream>
using namespace std;

struct T1 
{
	int a;
};

class T2 
{
	int a;
};

int main() 
{
	T1 t1;
	t1.a = 1;
	T2 t2;
	t2.a = 1;
}
```

### 11.4 成员属性私有

1. 可以自己控制成员的读写权限；
2. 对于写权限可以检测数据的有效性；

```c
#include<iostream>
using namespace std;

class Student
{
private:
	string name; //可读写
	int age; //可读
	string lover; //可写
public:
	void setName(string name)
	{
		this->name = name;
	}
	string getName()
	{
		return this->name;
	}
	int getAge()
	{
		return this->age;
	}
	void setAge(int age)
	{
		if (age < 0 || age>150)
		{
			cout << "年龄不在合理范围！" << endl;
			return;
		}
		this->age = age;
	}
	void setLover(string lover)
	{
		this->lover = lover;
	}
};

int main()
{
	Student s1;
	s1.setName("张三");
	s1.setLover("翠花");
	s1.setAge(20);
	cout << "\t" << s1.getName() << "\t" << s1.getAge() << endl;
}
```

### 11.5 案例：立方体

1. 创建一个长方体类，将属性设为private，其他成员函数设置为public；
2. 分别通过全局函数和成员函数的方法判断两个立方体是否相等；
3. 在设置判断函数时，最好使用引用进行接收（地址传递），节省内存；

```c
#include<iostream>
using namespace std;

class Cube {
private:
	int m_W;
	int m_L;
	int m_H;

public:
	void setL(int l) {
		m_L = l;
	}
	int getL() {
		return m_L;
	}
	void setW(int w) {
		m_W = w;
	}
	int getW() {
		return m_W;
	}
	void setH(int h) {
		m_H = h;
	}
	int getH() {
		return m_H;
	}
	bool isSame(Cube &c) {
		if (m_L == c.getL() && m_W == c.getW() && m_H == c.getH()) {
			return true;
		}
		return false;
	}
};

bool isSame(Cube& c1,Cube &c2) {
	if (c1.getL() == c2.getL() && c1.getW() == c2.getW() && c1.getH() == c2.getH()) {
		return true;
	}
	return false;
}

int main() {
	Cube c1, c2;
	c1.setW(10);
	c1.setL(10);
	c1.setH(10);
	c2.setW(10);
	c2.setL(10);
	c2.setH(10);
	
	bool res1 = isSame(c1, c2);
	if (res1) {
		cout << "相同" << endl;
	}
	else {
		cout << "不相同" << endl;
	}

	bool res2 = c1.isSame(c2);
	if (res2) {
		cout << "相同" << endl;
	}
	else {
		cout << "不相同" << endl;
	}
}
```

![](https://test-123456-md-images.oss-cn-beijing.aliyuncs.com/img/image-20220330222128350.png#crop=0&crop=0&crop=1&crop=1&id=ZFdr7&originHeight=1021&originWidth=2000&originalType=binary&ratio=1&rotation=0&showTitle=false&status=done&style=none&title=)

### 11.6 案例：点和圆

1. 创建一个点和一个圆，判断圆和点的相对位置；
2. class类的嵌套，一个类作为另一个类的属性；

```c
#include<iostream>
using namespace std;

class Point
{
public:
	void setCoor(int x,int y)
	{
		m_x = x;
		m_y = y;
	}
	int getCoorX()
	{
		return m_x;
	}
	int getCoorY()
	{
		return m_y;
	}
private:
	int m_x;
	int m_y;
};

class Circle
{
public:
	void setCenter(Point p)
	{
		m_Center = p;
	}
	void setR(int r) {
		m_R = r;
	}
	int getR()
	{
		return m_R;
	}
	Point getCenter()
	{
		return m_Center;
	}
private:
	int m_R;
	Point m_Center;
};

// 判断圆和点的关系
void estRel(Point &p,Circle &c)
{
	//计算两点距离的平方
	int dis;
	dis = (p.getCoorX() - c.getCenter().getCoorX()) * (p.getCoorX() - c.getCenter().getCoorX())
		+ (p.getCoorY() - c.getCenter().getCoorY()) * (p.getCoorY() - c.getCenter().getCoorY());
	//计算半径的平方
	int rr = c.getR() * c.getR();
	//判断
	if (dis > rr) 
	{
		cout << "点在圆外" << endl;
	}
	else if(dis==rr)
	{
		cout << "点在圆上" << endl;
	}
	else
	{
		cout << "点在圆内" << endl;
	}

}

int main()
{
	//创建一个圆
	Circle c;

	//创建一个点
	Point p;

	//创建圆心
	Point c_center;

	//点位置坐标
	p.setCoor(2, 4);
	c_center.setCoor(0, 0);

	//圆设置
	c.setCenter(c_center);
	c.setR(2);

	//判断
	estRel(p, c);
}
```

### 11.7 对象的初始化和清理

#### 11.7.1构造函数和析构函数

1. C++利用了**构造函数**和**析构函数**解决上述问题，这两个函数将会被编译器自动调用，完成对象**初始化**和**清理**工作。
2. 对象的初始化和清理工作是编译器强制要我们做的事情，因此如果我们不提供构造和析构，编译器会提供编译器提供的构造函数和析构函数是空实现。
3. 构造函数：主要作用在于创建对象时为对象的成员属性赋值，构造函数由编译器自动调用，无须手动调用。
4. 析构函数：主要作用在于对象销毁前系统自动调用，执行一些清理工作。

构造函数语法：`类名(){}`

1. 构造函数，没有返回值也不写void；
2. 函数名和类型相同；
3. 构造函数可以有参数，可以发生重载；
4. 程序在调用对象时可以自动调用，无须手动调用，而且只会调用**一次**；

析构函数语法：`~类名(){}`

1. 析构函数，没有返回值也不写void；
2. 函数名称与类名相同，在名称前面加`~`
3. 构造函数不可以有参数，不可发生重载；
4. 程序在对象销毁前自动调用，无须手动调用，只会调用一次；

**代码实现**

```c
#include<iostream>
using namespace std;

class Person
{
public:
	// 构造函数
	Person()
	{
		cout << "对象的构造函数被调用" << endl;
	}
	// 析构函数
	~Person()
	{
		cout << "对象的析构函数被调用" << endl;
	}
};

void test01() {
	// 因为在栈区，test01执行完毕之后，里面的数据会释放
	Person p;
}

int main()
{
	//test01();
	Person p;
	system("pause");
	return 0;
}
```

![](https://test-123456-md-images.oss-cn-beijing.aliyuncs.com/img/image-20220402104115102.png#crop=0&crop=0&crop=1&crop=1&id=vlfnM&originHeight=414&originWidth=952&originalType=binary&ratio=1&rotation=0&showTitle=false&status=done&style=none&title=)

![](https://test-123456-md-images.oss-cn-beijing.aliyuncs.com/img/image-20220402104142720.png#crop=0&crop=0&crop=1&crop=1&id=MCdHk&originHeight=358&originWidth=859&originalType=binary&ratio=1&rotation=0&showTitle=false&status=done&style=none&title=)

#### 11.7.2构造函数的分类

按参数分：有参构造和无参构造；

按类型分：普通构造和拷贝构造；

三种调用方法：括号法、显示法和隐式转换法；

括号法：

```c
Person p1;
Person p2(10);
Person p3(p2);
```

显示法：

```c
Person p1;
Person p2 = Person(10);
Person p3 = Person(p2);
```

隐式转换法：

```c
Person p1;
Person p2 = 10;
Person p3 = p2;
```

> 匿名对象(没有名字)


当前行执行后，系统会回收匿名对象

```c
Person(10);
```

不要使用拷贝构造函数初始化匿名对象

```c
Person(p3)
这行代码等价于Person (p3) === Person p3;
```

> 调用默认构造时不要加括号


这样是代表函数的声明；

```c
Person p();
```

**代码**

```c
#include<iostream>
using namespace std;

class Person
{
private:
	int age;
public:
	// 无参构造函数
	Person()
	{
		cout << "无参构造被调用" << endl;
	}
	// 有参构造函数
	Person(int a)
	{
		cout << "有参构造被调用" << endl;
	}
	// 拷贝构造函数
	Person(const Person &p)
	{
		age = p.age;
		cout << "拷贝构造被调用" << endl;
	}
	// 析构函数
	~Person()
	{
		cout << "析构被调用" << endl;
	}
};
void test01()
{
	Person p1;
	Person p2(10);
	Person p3(p2);
}

int main()
{
	test01();
}
```

#### 11.7.3 拷贝函数的调用时机

1. 使用一个已经创建完毕的对象来初始化一个新对象；

![](https://test-123456-md-images.oss-cn-beijing.aliyuncs.com/img/image-20220403144711591.png#crop=0&crop=0&crop=1&crop=1&id=hhOnX&originHeight=559&originWidth=1280&originalType=binary&ratio=1&rotation=0&showTitle=false&status=done&style=none&title=)

2. 值传递的方式给函数参数传值；

![](https://test-123456-md-images.oss-cn-beijing.aliyuncs.com/img/image-20220403144959804.png#crop=0&crop=0&crop=1&crop=1&id=GMzir&originHeight=618&originWidth=1185&originalType=binary&ratio=1&rotation=0&showTitle=false&status=done&style=none&title=)

3. 值方式返回局部对象；

![](https://test-123456-md-images.oss-cn-beijing.aliyuncs.com/img/image-20220403145253154.png#crop=0&crop=0&crop=1&crop=1&id=HGW6N&originHeight=665&originWidth=1255&originalType=binary&ratio=1&rotation=0&showTitle=false&status=done&style=none&title=)

`doWork在返回时重新拷贝了一个p1传给p；`

**代码**

```c
#include<iostream>
using namespace std;




class Person
{
public:
	Person()
	{
		cout << "Person默认构造函数调用" << endl;
	}
	Person(int _age)
	{
		age = _age;
		cout << "Person有参构造函数调用" << endl;
	}
	Person(const Person &p)
	{
		age = p.age;
		cout << "Person默认构造函数调用" << endl;
	}
	// 析构函数
	~Person()
	{
		cout << "析构函数被调用" << endl;
	}
private:
	int age;

};


// 1.使用一个已经创建完毕的对象来初始化一个新对象
void test01()
{
	Person p1(20);
	Person p2(p1);
}

// 2.值传递的方式给函数参数传值
void doWork(Person p)
{

}
void test02()
{
	Person p;
	doWork(p);
}

// 3.值方式返回局部对象
Person doWork2()
{
	Person p1;
	return p1;
}
void test03()
{
	Person p = doWork2();
}


int main()
{
	//test01();
	//test02();
	test03();
}
```

#### 11.7.4 构造函数的调用原则

1. 创建一个类，c++编译器会给每个类都添加至少3个函数；默认构造（空实现）、析构函数（空实现）和拷贝函数（值拷贝）；

**写了拷贝构造函数时**

![](https://test-123456-md-images.oss-cn-beijing.aliyuncs.com/img/image-20220403150658824.png#crop=0&crop=0&crop=1&crop=1&id=esz81&originHeight=572&originWidth=1050&originalType=binary&ratio=1&rotation=0&showTitle=false&status=done&style=none&title=)

**不写拷贝函数时**

![](https://test-123456-md-images.oss-cn-beijing.aliyuncs.com/img/image-20220403150741445.png#crop=0&crop=0&crop=1&crop=1&id=BtAG2&originHeight=491&originWidth=985&originalType=binary&ratio=1&rotation=0&showTitle=false&status=done&style=none&title=)

> 不管有没有写拷贝构造函数，系统在创建对象时都会自动创建拷贝构造函数，只不过里面全是赋值操作。


2. 如果用户提供了有参构造函数，而没有提供默认构造函数，系统也不会提供默认构造函数；

![](https://test-123456-md-images.oss-cn-beijing.aliyuncs.com/img/image-20220403151314416.png#crop=0&crop=0&crop=1&crop=1&id=uHmjj&originHeight=710&originWidth=1453&originalType=binary&ratio=1&rotation=0&showTitle=false&status=done&style=none&title=)

3. 如果我们写了拷贝构造函数，则系统就不会提供有参构造函数和默认构造函数；

#### 11.7.5 深拷贝与浅拷贝

浅拷贝：简单的赋值拷贝操作；

深拷贝：在堆区重新申请内存空间，进行拷贝操作；

![](https://test-123456-md-images.oss-cn-beijing.aliyuncs.com/img/image-20220403154332310.png#crop=0&crop=0&crop=1&crop=1&id=URyO5&originHeight=890&originWidth=1982&originalType=binary&ratio=1&rotation=0&showTitle=false&status=done&style=none&title=)

**使用系统的拷贝构造函数**

```c
#include<iostream>
using namespace std;

class Person
{
	
public:
	int age;
	int* height;//定义一个指针

	Person()
	{
		cout << "默认构造函数被调用" << endl;
	}
	Person(int _age,int _height)
	{
		age = _age;
		height = new int(_height); // 用指针来接收堆区开辟的数据
		cout << "有参构造函数被调用" << endl;
	}

	~Person()
	{
		if (height != NULL)
		{
			delete height;
			height = NULL; //防止野指针出现
		}
		cout << "析构构造函数被调用" << endl;
	}


};

void test01()
{
	Person p1(10,160);
	cout << "p1的年龄为" << p1.age << ",身高为" << *p1.height << endl;
	Person p2(p1);
	cout << "p2的年龄为" << p2.age << ",身高为" << *p2.height << endl;


}

int main()
{
	test01();
}
```

会崩掉

![](https://test-123456-md-images.oss-cn-beijing.aliyuncs.com/img/image-20220403155840450.png#crop=0&crop=0&crop=1&crop=1&id=rY2sj&originHeight=375&originWidth=600&originalType=binary&ratio=1&rotation=0&showTitle=false&status=done&style=none&title=)

**自己写拷贝构造函数**

```c
//为了防止程序崩掉自己写拷贝构造函数
	Person(const Person &p)
	{
		age = p.age;
		//height = p.height;编译器默认会这样做
		
		// 深拷贝
		height = new int(*p.height);
	}
```

![](https://test-123456-md-images.oss-cn-beijing.aliyuncs.com/img/image-20220403160219989.png#crop=0&crop=0&crop=1&crop=1&id=mAZEy&originHeight=953&originWidth=1559&originalType=binary&ratio=1&rotation=0&showTitle=false&status=done&style=none&title=)

**完整代码**

```c
#include<iostream>
using namespace std;

class Person
{
	
public:
	int age;
	int* height;//定义一个指针

	Person()
	{
		cout << "默认构造函数被调用" << endl;
	}
	Person(int _age,int _height)
	{
		age = _age;
		height = new int(_height); // 用指针来接收堆区开辟的数据
		cout << "有参构造函数被调用" << endl;
	}

	//为了防止程序崩掉自己写拷贝构造函数
	Person(const Person &p)
	{
		age = p.age;
		//height = p.height;编译器默认会这样做
		
		// 深拷贝
		height = new int(*p.height);
	}


	~Person()
	{
		if (height != NULL)
		{
			delete height;
			height = NULL; //防止野指针出现
		}
		cout << "析构构造函数被调用" << endl;
	}


};

void test01()
{
	Person p1(10,160);
	cout << "p1的年龄为" << p1.age << ",身高为" << *p1.height << endl;
	Person p2(p1);
	cout << "p2的年龄为" << p2.age << ",身高为" << *p2.height << endl;


}

int main()
{
	test01();
}
```

#### 11.7.6 初始化列表

语法：`构造函数()：属性（值），属性（值）{}`

传统的初始化是在构造函数中

```c
Person(int _age,string _sex)
{
	age = _age;
  sex = _sex;
}
```

应用初始化列表

```c
Person():age(10),sex("male")
{
  
}
```

更进一步

```c
Person(int _age,string _sex):age(_age),sex(_sex)
{
  
}
```

**代码**

```c
#include<iostream>
using namespace std;

class Person
{
public:
	Person(int _age,string _sex) :age(_age), sex(_sex)
	{

	}
	int age;
	string sex;
};


// 初始化列表
void test01()
{
	Person p(10,"male");
	cout << p.age << endl;
	cout << p.sex << endl;

}

int main()
{
	test01();
}
```

#### 11.7.7 类作为成员变量

> 类作为成员变量时，先生成后销毁


![](https://test-123456-md-images.oss-cn-beijing.aliyuncs.com/img/image-20220405124755888.png#crop=0&crop=0&crop=1&crop=1&id=tAwey&originHeight=687&originWidth=1264&originalType=binary&ratio=1&rotation=0&showTitle=false&status=done&style=none&title=)

**代码**

```c
#include<iostream>
using namespace std;


class Phone
{
public:
	Phone(string _pname) :pname(_pname)
	{
		cout << "Phone构造函数被调用" << endl;
	}
	~Phone()
	{
		cout << "Phone析构函数被调用" << endl;
	}
	string pname;
	
};


class Person
{
public:
	Person(string _name, string _ph) :name(_name), ph(_ph)//这里的ph()相当于调用了Phone里的构造函数，传入字符串
	{
		cout << "Person构造函数被调用" << endl;
	}
	~Person()
	{
		cout << "Person析构函数被调用" << endl;
	}

	string getName()
	{
		return name;
	}
	Phone getPh()
	{
		return ph;
	}
	string name;
	Phone ph;

};

void test01()
{
	Person p("张三","苹果X");
	cout << p.name << "拿着" << p.ph.pname << endl;
}

int main()
{
	test01();
}
```

#### 11.7.8 类静态成员变量

> 有时我们需要**有些成员**与**类本身**相关，而与对象无关；


**声明**

在声明变量时加上关键字`static`，静态成员变量可以是`public`也可以是`private`

```c
class Children()
{
public:
  // father对象被共享
	static string father;
  static string getMother(){return mother}
private:
  // mother对象被共享
  static string mother;
  
}
```

**访问静态成员**

可以使用作用域的方式直接访问

```c
string motherName = Children::getMother();
```

**定义静态函数成员**

和其他的成员函数一样，我们既可以在类的内部也可以在类的外部定义静态成员函数。当在类的外部定义静态成员时，不能重复`static`关键字（类似`explicit`关键字），该关键字只出现在类内部的声明语句：

类外

```c
void Accout::rate(double newRate) {
    interestRate = newRate;
}
```

**定义静态数据成员**

1.  类似于全部变量，静态数据成员被定义在任何函数之外，因为一旦它被定义，就将一直存在于程序的整个生命周期中。 
2.  由于静态数据成员不属于类的任何一个对象，所以它们并不是在创建类的对象时被定义的，这意味着它们不是由类的构造函数初始化的。而且一般而言我们不能在类的内部初始化静态成员，而应该在类的外部定义和初始化每个静态数据成员。 
3.  要确保静态数据成员只定义一次，最好是把静态数据成员的定义与其他非内联函数的定义放在同一个文件中。 

**静态成员的类内初始化**

通常情况下，类的静态成员不应该在类的内部初始化。但是我们可以给静态成员提供`const`整数类型的类内初始值，不过要求静态成员必须是字面值常量类型的`constexpr`

```c
class Account {
 public:
    static double rate() { return interestRate; }
    static void rate(double);
 private:
    static constexpr int period = 30;  // period是常量表达式
    double daily_tbl[period];
};

// 即使一个常量静态数据成员在类内部被初始化了, 通常情况下也应该在类的外部定义一下该成员
constexpr int Account::period;
```

#### 11.7.9 静态成员函数

> 所有对象共享同一个函数
>
> 静态成员函数只能访问静态成员变量


![](https://test-123456-md-images.oss-cn-beijing.aliyuncs.com/img/image-20220405130711934.png#crop=0&crop=0&crop=1&crop=1&id=x0sRO&originHeight=744&originWidth=1330&originalType=binary&ratio=1&rotation=0&showTitle=false&status=done&style=none&title=)

**静态成员函数访问方式**

通过对象访问和通过作用域访问

```c
#include<iostream>
using namespace std;

class Person
{
public:
	static void f()
	{
		cout << "f()被调用了！" << endl;
	}
};

// 1.通过对象访问
void test01()
{
	Person p;
	p.f();
}

// 2.通过作用域访问
void test02()
{
	Person::f();
}

int main()
{
	test01();
	test02();
}
```

### 11.8 对象模型和this指针

#### 11.8.1 成员变量和成员函数分开存储

1.  类内的成员变量和成员函数分开存储； 
2.  只有非静态的成员变量存储在类内； 
3.  空对象占用1个字节，来区分不同的对象；`sizeof()`查看大小 
4.  一旦空对象里有非静态成员变量，则该对象占用的空间等于非静态成员变量的大小； 

![](https://test-123456-md-images.oss-cn-beijing.aliyuncs.com/img/image-20220405131326402.png#crop=0&crop=0&crop=1&crop=1&id=WKJ71&originHeight=218&originWidth=712&originalType=binary&ratio=1&rotation=0&showTitle=false&status=done&style=none&title=)

#### 11.8.2 this指针

**用途**

1. 当成员变量和形参名相同时，可以通过this来区分；
2. 在类内非静态成员函数中可以返回对象本身，*this；

**区分形参和成员变量**

```c
class Person
{
  Person(int age)
  {
    // 可将传递过来的形参age赋值到成员属性上
    this->age = age;
  }
  int age;
}
```

**返回对象本身**

1. this本身是指针，返回时需要解引用；
2. 且要使用&进行接收；

![](https://test-123456-md-images.oss-cn-beijing.aliyuncs.com/img/image-20220405132600133.png#crop=0&crop=0&crop=1&crop=1&id=rvJfL&originHeight=866&originWidth=1647&originalType=binary&ratio=1&rotation=0&showTitle=false&status=done&style=none&title=)

```
#include<iostream>
using namespace std;

class Person
{
public:
	Person(int age)
	{
		this->age = age;
	}
	Person& add(Person &p)
	{
		this->age += p.age;
		return *this;
	}
	int age;
};


void test01()
{
	Person p1(10);
	Person p2(20);
	p1.add(p2).add(p1); //相当于10+20+(10+20)
	cout << p1.age << endl;
	cout << p2.age << endl;
}

int main()
{
	test01();
}
```

> 这就是一种编程思想：链式法则，我们可以无限制地往下调用；


#### 11.8.3 空指针访问成员函数

1. 空指针可以访问成员函数，但是成员函数内部不能包含成员变量；

**可以访问**

```c
class Person
{
public:
	void f1()
	{
		cout << "f1()被访问了" << endl;
	}
};
void main()
{
  Person *p = NULL;
	p->f1();
}
```

**不可以访问**

报错

```c
class Person
{
public:
	void f2()
	{
		cout << age << endl;
	}
  int age;
};
void main()
{
  Person *p = NULL;
	p->f2();
}
```

#### 11.8.4 `const`修饰的成员函数

1. 常函数：
   成员函数后加`const`后我们称为这个函数为常函数
   常函数内不可以修改成员属性
   成员属性声明时加关键字mutable后，在常函数中依然可以修改
2. 常对象：
   声明对象前加`const`称该对象为常对象
   常对象只能调用常函数

**常函数**

加上mutable可以修改

![](https://test-123456-md-images.oss-cn-beijing.aliyuncs.com/img/image-20220405134400862.png#crop=0&crop=0&crop=1&crop=1&id=WV6x4&originHeight=640&originWidth=1338&originalType=binary&ratio=1&rotation=0&showTitle=false&status=done&style=none&title=)

**常对象**

![](https://test-123456-md-images.oss-cn-beijing.aliyuncs.com/img/image-20220405134639603.png#crop=0&crop=0&crop=1&crop=1&id=rti1C&originHeight=541&originWidth=1169&originalType=binary&ratio=1&rotation=0&showTitle=false&status=done&style=none&title=)

### 11.9 友元

访问一些私有属性

关键字`friend`

#### 11.9.1 全局函数做友元

类

```c
class Building
{
  // 可以使全局函数访问私有属性
	friend void goodGay(Building* build);
public:
	Building()
	{
		settingRoom = "客厅";
		bedRoom = "卧室";
	}

	string settingRoom;

private:
	string bedRoom;
	
};
```

测试函数

```c
void test01()
{
	Building b;
	goodGay(&b);
}
```

全局函数

```c
void goodGay(Building *build)
{
	cout << "正在访问b的" << build->settingRoom;
	cout << "正在访问b的" << build->bedRoom;
}
```

#### 11.9.2 类做友元

### 11.10 运算符重载

运算符重载概念：对已有的运算符重新进行定义，赋予其另一种功能，以适应不同的数据类型；

#### 11.10.1 加号运算符重载

**成员函数重载**

```c
class Person
{
public:
	Person operator+(Person& p)
	{
		Person temp;
		temp.a = this->a + p.a;
		temp.b = this->b + p.b;
		return temp;
	}

	int a;
	int b;
};
```

**全局函数重载**

```c
// 全局函数重载
Person operator+(Person& p1, Person& p2)
{
	Person temp;
	temp.a = p1.a + p2.a;
	temp.b = p1.b + p2.b;
	return temp;
}
```

**函数重载**

可以使不同类型的数据相加重载

```c
Person operator+(Person& p1, Person& p2)
{
	Person temp;
	temp.a = p1.a + p2.a;
	temp.b = p1.b + p2.b;
	return temp;
}
Person operator+(Person& p1, int num)
{
	Person temp;
	temp.a = p1.a + num;
	temp.b = p1.b + num;
	return temp;
}
```

```c
Person p3 = p1 + p2;
	Person p4 = p1 + 20;

	cout << "p3信息：\t" << p3.a <<"\t" << p3.b << endl;
	cout << "p4信息：\t" << p4.a <<"\t" << p4.b << endl;
```

**代码**

```c
#include<iostream>
using namespace std;

class Person
{
public:
	//成员函数重载
	/*Person operator+(Person& p)
	{
		Person temp;
		temp.a = this->a + p.a;
		temp.b = this->b + p.b;
		return temp;
	}*/

	int a;
	int b;
};

// 全局函数重载
Person operator+(Person& p1, Person& p2)
{
	Person temp;
	temp.a = p1.a + p2.a;
	temp.b = p1.b + p2.b;
	return temp;
}
Person operator+(Person& p1, int num)
{
	Person temp;
	temp.a = p1.a + num;
	temp.b = p1.b + num;
	return temp;
}

void test01()
{
	Person p1;
	p1.a = 10;
	p1.b = 10;

	Person p2;
	p2.a = 10;
	p2.b = 10;

	Person p3 = p1 + p2;
	Person p4 = p1 + 20;

	cout << "p3信息：\t" << p3.a <<"\t" << p3.b << endl;
	cout << "p4信息：\t" << p4.a <<"\t" << p4.b << endl;
}

int main()
{
	test01();
}
```

> 内置数据类型不能发生重载


#### 11.10.2 左移运算符重载

直接输出想要的内容，比如直接输出对象p；

![](https://test-123456-md-images.oss-cn-beijing.aliyuncs.com/img/image-20220405160714704.png#crop=0&crop=0&crop=1&crop=1&id=uRS6W&originHeight=511&originWidth=942&originalType=binary&ratio=1&rotation=0&showTitle=false&status=done&style=none&title=)

> 左移运算符重载只能写在全局函数内


```c
// 只能在全局函数中实现 
void operator<<(ostream &cout, Person &p)	//可以简化成 cout << p
{
	cout << "a为" << p.a << " b为" << p.b << endl;
}
```

![](https://test-123456-md-images.oss-cn-beijing.aliyuncs.com/img/image-20220405161456261.png#crop=0&crop=0&crop=1&crop=1&id=XkpG1&originHeight=584&originWidth=1250&originalType=binary&ratio=1&rotation=0&showTitle=false&status=done&style=none&title=)

**链式思想**

```c
ostream& operator<<(ostream &cout, Person &p)	//可以简化成 cout << p
{
	cout << "a为" << p.a << " b为" << p.b << endl;
	return cout;
}
```

![](https://test-123456-md-images.oss-cn-beijing.aliyuncs.com/img/image-20220405161742086.png#crop=0&crop=0&crop=1&crop=1&id=QLeT4&originHeight=593&originWidth=1377&originalType=binary&ratio=1&rotation=0&showTitle=false&status=done&style=none&title=)

#### 11.10.3 递增运算符重载

1. 应该定义前置运算符和后置运算符；
2. 定义为类的成员；
3. 前置运算符重载应返回引用，后置运算符重载返回值；

**两种形式**

类内

```c
class MyInter
{
public:
	MyInter& operator++()
	{
		num++; 
		return *this;
	}
private:
	int num;
};
```

作用域

```c
MyInter& MyInter::operator++()
{
	num++;
	return *this;
}
```

**前置递增运算符**

```c
MyInter& operator++()
	{
		num++; 
		return *this;//返回自身MyInter数据类型
	}
```

**后置递增运算符**

```c
MyInter operator++(int)
	{
		MyInter temp = *this;//创建临时变量保存当前值用作返回
		num++;
		return temp;
	}
```

**代码**

```c
#include<iostream>
using namespace std;

class MyInter
{
	friend ostream& operator<<(ostream& cout, MyInter Inter);
public:
	MyInter()
	{
		num = 0;
	}
	// 重载++运算符
	// 1.重载前置递增运算符
	MyInter& operator++()
	{
		num++; 
		return *this;//返回自身MyInter数据类型
	}

	// 2.后置递增运算符
	// int表示占位参数，可用于区分前置和后置递增  只能写int，写double等不行
	MyInter operator++(int)
	{
		MyInter temp = *this;//创建临时变量
		num++;
		return temp;
	}

private:
	int num;
};

MyInter& MyInter::operator++()
{
	num++;
	return *this;//返回自身MyInter数据类型
}


//定义左移运算符重载
ostream& operator<<(ostream& cout, MyInter Inter)
{
	cout << "输出为：" << Inter.num << endl;
	return cout;
}

// 前置运算符重载测试
void test01()
{
	MyInter Inter;
	cout << ++(++Inter) << endl;
	cout << Inter << endl;
}

// 后置运算符重载测试
void test02()
{
	MyInter Inter;
	cout << Inter++<< endl;
	cout << Inter << endl;
}

int main()
{
	test02();
}
```

#### 11.10.4 赋值运算符重载

编译器提供的拷贝默认是浅拷贝的操作，在析构函数中释放内存是容易引发问题。

**没有写析构函数释放内存时**

```c
#include<iostream>
using namespace std;

class Person
{
public:
	Person(int a)
	{
		this->a = new int(a); //在堆中开辟一块内存区间
	}
	int *a;
};


void test01()
{
	Person p1(18);
	Person p2(20);
	p2 = p1;

	cout << "p1中a=" << *p1.a << endl;
	cout << "p2中a=" << *p2.a << endl;
}

int main()
{
	test01();
}
```

正常输出

**加上析构函数**

```c
~Person()
{
  if (a != NULL) {
    delete a;
    a = NULL;
  }
}
```

程序会崩掉

原因：在进行拷贝时，`p2 = p1`操作时，因为类里的a为地址，编译器会直接将p1中a的地址直接拷贝给p2中的a，而析构函数在释放内存时会释放两次相同的内存，就会引发错误；

![](https://test-123456-md-images.oss-cn-beijing.aliyuncs.com/img/image-20220405200022099.png#crop=0&crop=0&crop=1&crop=1&id=CCTwI&originHeight=709&originWidth=942&originalType=binary&ratio=1&rotation=0&showTitle=false&status=done&style=none&title=)

**重载=**

我们需要进行赋值运算符重载，将编译器默认的浅拷贝覆盖为深拷贝；

![](https://test-123456-md-images.oss-cn-beijing.aliyuncs.com/img/image-20220405200516414.png#crop=0&crop=0&crop=1&crop=1&id=fhG56&originHeight=835&originWidth=1399&originalType=binary&ratio=1&rotation=0&showTitle=false&status=done&style=none&title=)

```c
Person& operator=(Person &p)
	{
		this->a = new int(*p.a);
		return *this;
	}
```

返回&引用可以进行链式操作

**代码**

```c
#include<iostream>
using namespace std;

class Person
{
public:
	Person(int a)
	{
		this->a = new int(a);
	}
	~Person()
	{
		if (a != NULL) {
			delete a;
			a = NULL;
		}
	}
	Person& operator=(Person &p)
	{
		this->a = new int(*p.a);
		return *this;
	}

	int *a;
};


void test01()
{
	Person p1(18);
	Person p2(20);
	Person p3(30);
	p3 = p2 = p1;

	cout << "p1中a=" << *p1.a << endl;
	cout << "p2中a=" << *p2.a << endl;
	cout << "p3中a=" << *p3.a << endl;
}

int main()
{
	test01();
}
```

#### 11.10.5 关系运算符重载

两个自定义类型对象进行对比

**重载==**

```c
bool operator==(Person& p)
	{
		if (this->name == p.name && this->age == p.age) {
			return true;
		}
		return false;
	}
```

test()

```c
Person p1("Tom", 18);
Person p2("Tom", 18);
if (p1 == p2)
{
  cout << "两人一样" << endl;
}
else
{
  cout << "两人不一样" << endl;
}
```

**也可以重载不等于！=**

```c
bool operator!=(Person& p)
	{
		if (this->name != p.name || this->age != p.age) {
			return true;
		}
		return false;
	}
```

> 这两个运算符都不能采用作用域的方式，因为类本身没有`operator==()`和`operator!=()`函数，只有`operator=()`函数。


**代码**

```c
#include<iostream>
using namespace std;

class Person
{
public:
	
	Person(string _name,int _age):name(_name),age(_age){}

	bool operator==(Person& p)
	{
		if (this->name == p.name && this->age == p.age) {
			return true;
		}
		return false;
	}
	bool operator!=(Person& p)
	{
		if (this->name != p.name || this->age != p.age) {
			return true;
		}
		return false;
	}

	string name;
	int age;
};


void test01()
{
	Person p1("Tom", 18);
	Person p2("Tom", 18);
	if (p1 == p2)
	{
		cout << "两人一样" << endl;
	}
	else
	{
		cout << "两人不一样" << endl;
	}
	if (p1 != p2)
	{
		cout << "两人不一样" << endl;
	}
	else
	{
		cout << "两人一样" << endl;
	}

}

int main()
{
	test01();
}
```

#### 11.10.6 函数调用运算符重载

伪函数

```c
void operator()(string str)
	{
		cout << str << endl;
	}
```

```c
PrintString p;
p("你好");
```

> 这个相当于伪函数，和类内函数不同的是我可以直接传值使用，不需要p.函数名()，有点类似于静态成员函数。


利用这个规则，可以把类当成函数用。

**匿名函数对象**

这里`PrintString()`相当于创建一个匿名对象，之后的（"你不好"）相当于调用函数；

```c
//匿名函数对象
PrintString()("你不好");
```



#### 11.10.7 下表运算符重载

重载下表运算符[]，操作对象中的数组像操作普通数组一样，<u>必须以成员函数的形式重载</u>。



语法：```返回值类型 &operator[](参数)```

或者```const 返回值类型 &operator[](参数) const```

第一种可访问可修改，第二种可访问不可修改



正常写法

```c++
// 获取男朋友信息   这里返回引用可以修改
string& getBoys(int i)
{
    return m_boys[i];
}

// main函数中
girl1.getBoys(1) = "白";
cout << girl1.getBoys(1) << endl;
```

重载后

```c++
string& operator[](int i)
{
    return m_boys[i];
}

// 访问
girl1[1] = "立着";
cout << girl1[1] << endl;
```

直接访问对象的[]即可

全部代码

```c++
#include<iostream>
using std::string; using std::cout; using std::endl;

class SuperGirl
{
public:
	string m_name;
	SuperGirl()
	{
		m_boys[0] = "自读";
		m_boys[1] = "潘安";
		m_boys[2] = "宋玉";
	}
	
	// 获取男朋友信息   这里返回引用可以修改
	//string& getBoys(int i)
	//{
	//	return m_boys[i];
	//}
	string& operator[](int i)
	{
		return m_boys[i];
	}

	// 显示全部男友
	void showBoys()
	{
		cout << "第一任男朋友：" << m_boys[0] << endl;
		cout << "第二任男朋友：" << m_boys[1] << endl;
		cout << "第三任男朋友：" << m_boys[2] << endl;
	}

private:
	string m_boys[3]; // 男朋友
};


int main()
{
	SuperGirl girl1;
	girl1.showBoys();

	//girl1.getBoys(1) = "白";
	//cout << girl1.getBoys(1) << endl;

	// 访问
	girl1[1] = "立着";
	cout << girl1[1] << endl;

	system("pause");
	return 0;
}
```





#### 11.10.8 运算符new&delete重载

1. 不管是整数还是类，只要用到new和delete都会重载；
2. 若需要类调用重载函数，只需要将重载函数放在类中即可。

重载需要用到c语言中的malloc和free函数

```c++
#include<iostream>
using std::string; using std::cout; using std::endl;

void* operator new(size_t size)
{
	cout << "调用了重载的new：" << size << "字节。" << endl;
	void* ptr = malloc(size);
	cout << "申请到的地址是：" << ptr << endl;
	return ptr;
}

void operator delete(void* ptr)
{
	cout << "调用了重载的delete：" << endl;
	if (ptr == 0) return; // 对空指针delete安全
	free(ptr);
}

int main()
{
	int* p1 = new int(3); // 创建并初始化为3
	cout << "p1=" << (void*)p1 << "\t*p1=" << *p1 << endl;
	delete p1;

	system("pause");
	return 0;
}
```

![image-20221023164343123](http://test-123456-md-images.oss-cn-beijing.aliyuncs.com/img/image-20221023164343123.png)



类申请空间

```c++
#include<iostream>
using std::string; using std::cout; using std::endl;

class SuperGirl
{
public:
	SuperGirl(int c_xw,int c_yw)
	{
		cout << "调用了构造函数" << endl;
		m_xw = c_xw;
		m_yw = c_yw;
	};
	~SuperGirl()
	{
		cout << "调用了析构函数" << endl;
	}

	int m_xw;
	int m_yw;
};


void* operator new(size_t size)
{
	cout << "调用了重载的new：" << size << "字节。" << endl;
	void* ptr = malloc(size);
	cout << "申请到的地址是：" << ptr << endl;
	return ptr;
}

void operator delete(void* ptr)
{
	cout << "调用了重载的delete：" << endl;
	if (ptr == 0) return; // 对空指针delete安全
	free(ptr);
}

int main()
{
	//int* p1 = new int(3); // 创建并初始化为3
	//cout << "p1=" << (void*)p1 << "\t*p1=" << *p1 << endl;
	//delete p1;

	SuperGirl *girl1 = new SuperGirl(10, 20);
	cout << "girl1的地址是：" << girl1 << "\t胸围是：" << girl1->m_xw << "\t腰围是：" << girl1->m_yw << endl;
	delete girl1;

	system("pause");
	return 0;
}
```

![image-20221023164909269](http://test-123456-md-images.oss-cn-beijing.aliyuncs.com/img/image-20221023164909269.png)



<strong style="color:#c00000;">内存池的概念</strong>

程序刚开始时预先申请好的一块内存空间。

比如一个类的大小为8，w偶们可以预先申请好16个大小的内存空间，足够放两个对象。当创建对象需要申请内存时，优先从内存池中申请，内存池不够了再向系统申请。

<u>技巧：每一块小内存池空出一个字节来表示该块内存是否被占用。</u>

比如案例中，内存池可以存放2个对象，每个对象8字节，本来要申请16字节足够，这里申请18个字节。



![image-20221023173200977](http://test-123456-md-images.oss-cn-beijing.aliyuncs.com/img/image-20221023173200977.png)



```c++
#include<iostream>
using std::string; using std::cout; using std::endl;

class SuperGirl
{
public:
	int m_xw;
	int m_yw;
	static char* m_pool; // 创建一个内存池

	SuperGirl(int c_xw, int c_yw)
	{
		cout << "调用了构造函数" << endl;
		m_xw = c_xw;
		m_yw = c_yw;
	};

	static bool initPool()
	{
		m_pool = (char*)malloc(18); // 向系统申请18字节作为内存池
		if (m_pool == 0) return false; // 申请内存失败
		memset(m_pool, 0, 18); // 内存地址初始化为空
		cout << "内存池的起始位置时：" << (void*)m_pool << endl;
		return true;
	}

	static void freePool()
	{// 释放内存池
		if (m_pool == 0) return; // 如果内存池为空，则返回
		free(m_pool); // 释放内存池
		cout << "内存池已经释放" << endl;
		return;
	}

	void* operator new(size_t size)
	{
		if (m_pool[0] == 0) // 判断第一块位置是否空闲
		{
			cout << "分配第一块内存：" << (void*)(m_pool + 1) << endl;
			m_pool[0] = 1;
			return m_pool+1;
		}
		if (m_pool[9] == 0) // 判断第二块位置是否空闲
		{
			cout << "分配第二块内存：" << (void*)(m_pool + 9) << endl;
			m_pool[9] = 1;
			return m_pool+9;
		}

		// 如果内存池已满，则向系统申请空间
		cout << "调用了重载的new：" << size << "字节。" << endl;
		void* ptr = malloc(size);
		cout << "申请到的地址是：" << ptr << endl;
		return ptr;
	}

	void operator delete(void* ptr)
	{
		cout << "调用了重载的delete：" << endl;
		if (ptr == 0) return;  // 对空指针delete安全

		if (ptr == m_pool + 1) // 判断是否为内存池的第一块内存
		{
			cout << "释放第一块内存" << endl;
			m_pool[0] = 0;
			return;
		}
		if (ptr == m_pool + 9) // 判断是否为内存池的第二块内存
		{
			cout << "释放第二块内存" << endl;
			m_pool[9] = 0;
			return;
		}

		free(ptr); // 释放内存池或系统内存
	}

	~SuperGirl()
	{
		cout << "调用了析构函数" << endl;
	}
};

char* SuperGirl::m_pool = 0; // 初始化内存池指针


int main()
{
	// 初始化内存池分配空间
	if (SuperGirl::initPool() == false)
	{
		cout << "初始化内存池失败" << endl;
		return -1;
	}

	SuperGirl* girl1 = new SuperGirl(10, 20);
	cout << "girl1的地址是：" << girl1 << "\t胸围是：" << girl1->m_xw << "\t腰围是：" << girl1->m_yw << endl;

	SuperGirl* girl2 = new SuperGirl(10, 20);
	cout << "girl2的地址是：" << girl2 << "\t胸围是：" << girl2->m_xw << "\t腰围是：" << girl2->m_yw << endl;

	SuperGirl* girl3 = new SuperGirl(10, 20);
	cout << "girl3的地址是：" << girl3 << "\t胸围是：" << girl3->m_xw << "\t腰围是：" << girl3->m_yw << endl;
	
	delete girl1;

	SuperGirl* girl4 = new SuperGirl(10, 20);
	cout << "girl4的地址是：" << girl4 << "\t胸围是：" << girl1->m_xw << "\t腰围是：" << girl4->m_yw << endl;
	
	delete girl2;
	delete girl3;
	delete girl4;

	system("pause");
	return 0;
}
```

![image-20221023173223124](http://test-123456-md-images.oss-cn-beijing.aliyuncs.com/img/image-20221023173223124.png)





### 11.11 继承

继承是面向对象三大特性之一。

![](https://test-123456-md-images.oss-cn-beijing.aliyuncs.com/img/image-20220405203800618.png#crop=0&crop=0&crop=1&crop=1&id=VllcF&originHeight=505&originWidth=1057&originalType=binary&ratio=1&rotation=0&showTitle=false&status=done&style=none&title=)

继承语法：`class 子类 : 继承方式 父类`

#### 11.11.1 继承方式

![](https://test-123456-md-images.oss-cn-beijing.aliyuncs.com/img/image-20220405204211371.png#crop=0&crop=0&crop=1&crop=1&id=Aj0Km&originHeight=852&originWidth=1187&originalType=binary&ratio=1&rotation=0&showTitle=false&status=done&style=none&title=)

> 不管子类以什么方式继承都不能继承父类中的私有属性。


#### 11.11.2 继承中的对象模型

父亲中所有成员的静态变量都会继承到子类中去，只不过权限的限制访问不到。

`Base`类中有3个int类型，`Child1`中有一个int类型，`Child1`继承`Base`，则大小为**16字节**。

```c
#include<iostream>
using namespace std;

class Base
{
public:
	int a;
protected:
	int b;
private:
	int c;
};

class Child1 : public Base
{
public:
	int d;
};


void test01()
{
	Child1 c;
	cout << "c的字节大小 " << sizeof(c) << endl;//16
}

int main()
{
	test01();
}
```

**在命令行中查看对象模型**

打开工具

![](https://test-123456-md-images.oss-cn-beijing.aliyuncs.com/img/image-20220405210646202.png#crop=0&crop=0&crop=1&crop=1&id=QcynT&originHeight=517&originWidth=1133&originalType=binary&ratio=1&rotation=0&showTitle=false&status=done&style=none&title=)

进入盘符

```
E:
```

进入文件夹

```
cd E:\04学习课程\08_编程学习\C++\Project\0405继承
```

对象模型查看

```
cl /d1 reportSingleClassLayoutChild1 "01继承中的对象模型.cpp"
```

其中`cl`中为字母l，`d1`中为数字1

#### 11.11.3 继承的构造和析构

父类先生成后销毁

![](http://test-123456-md-images.oss-cn-beijing.aliyuncs.com/img/image-20220407223852205.png#crop=0&crop=0&crop=1&crop=1&id=jEHs4&originHeight=766&originWidth=1468&originalType=binary&ratio=1&rotation=0&showTitle=false&status=done&style=none&title=)

**代码**

```c
#include<iostream>
using namespace std;

class Base
{
public:
	Base()
	{
		cout << "Base的构造函数" << endl;
	}
	~Base()
	{
		cout << "Base的析构函数" << endl;
	}

};

class Child : public Base
{
public:
	Child()
	{
		cout << "Child的构造函数" << endl;
	}
	~Child()
	{
		cout << "Child的析构函数" << endl;
	}
};

void test01()
{
	Child c;
}

int main()
{
	test01();
}
```

#### 11.11.4 同名成员的访问

子类成员和子类中的成员同名

直接访问访问的是子类的成员，也就是本类的成员，想要访问父类的需要加作用域

```c
class Base
{
public:
	int a = 20;
};

class Child : public Base
{
public:
	int a = 10;
};
```

访问子类

```c
Child c;
cout << c.a << endl;
```

访问父类

```c
Child c;
cout << c.Base::a << endl;
```

> 上述举例为同名属性，同名函数同样如此；但如果子类中有和父类同名的成员函数，则会隐藏父类中全部同名成员函数；


#### 11.11.5 同名静态成员处理

访问方式和上一章的同名成员一样，访问子类的直接就能访问，访问父类的需要加作用域。

但是静态函数有两种读法，按照对象的方式和上述规则一样，按照类名的方式有区别

**对象方式**

```c
Child c;
cout << "Child下的a " << c.a << endl;
cout << "Base下的a " << c.Base::a << endl;
c.fn();
```

**类名方式**

```c
cout << "Child下的a " << Child::a << endl;
cout << "Base下的a " << Child::Base::a<< endl;
cout << "Base下的a " << Base::a<< endl;
```

**类代码**

```c
class Base
{
public:
	static int a;
	static void fn()
	{
		cout << "Base下的a " << a << endl;
	}
};

int Base::a = 20;

class Child : public Base
{
public:
	static int a;
};

int Child::a = 10;
```

#### 11.11.6 多继承

**一个儿子继承两个爸爸**

`class Son : public Father1,public Father2 {}`

> 同名成员也需要加作用域


#### 11.11.7 菱形继承

![](http://test-123456-md-images.oss-cn-beijing.aliyuncs.com/img/image-20220407232030713.png#crop=0&crop=0&crop=1&crop=1&id=VTStL&originHeight=412&originWidth=499&originalType=binary&ratio=1&rotation=0&showTitle=false&status=done&style=none&title=)

1. 羊继承了动物的数据，驼同样继承了动物的数据，当草泥马使用数据时，就会产生二义性。
2. 草泥马继承自动物的数据继承了两份，其实我们应该清楚，这份数据我们只需要一份就可以。

羊上面有个age属性，驼上面有个age属性，则会出现二份数据，而我们只需要一份；可以采用虚继承

`class Yang:virtual public Animal {}`

**加上virtual后**

![](http://test-123456-md-images.oss-cn-beijing.aliyuncs.com/img/image-20220407232719879.png#crop=0&crop=0&crop=1&crop=1&id=yVzqg&originHeight=1044&originWidth=2132&originalType=binary&ratio=1&rotation=0&showTitle=false&status=done&style=none&title=)

### 11.12 多态

#### 11.12.1 多态的概念

多态是C++面向对象三大特性之一
多态分为两类

- 静态多态：函数重载和运算符重载属于静态多态，复用函数名
- 动本多态：派生类和虚函数实现运行时多态

静态多态和动态多态区别：

- 静态多态的函数地址早绑定——编译阶段确定函数地址
- 动态多态的函数地址晚绑定——运行阶段确定函数地址

> 总结


多态满足条件

- 有继承关系
- 子类重写父类中的虚函数

多态的使用条件

- 父类指针或引用指向子类对象

重写：函数返回值 函数名 参数列表 完全一致





#### 11.12.2 多态原理

![](http://test-123456-md-images.oss-cn-beijing.aliyuncs.com/img/image-20220415121056725.png#crop=0&crop=0&crop=1&crop=1&id=ZPAPv&originHeight=1002&originWidth=2052&originalType=binary&ratio=1&rotation=0&showTitle=false&status=done&style=none&title=)

![](http://test-123456-md-images.oss-cn-beijing.aliyuncs.com/img/image-20220415121401372.png#crop=0&crop=0&crop=1&crop=1&id=mDiuQ&originHeight=302&originWidth=497&originalType=binary&ratio=1&rotation=0&showTitle=false&status=done&style=none&title=)

![](http://test-123456-md-images.oss-cn-beijing.aliyuncs.com/img/image-20220415121449966.png#crop=0&crop=0&crop=1&crop=1&id=mzNQn&originHeight=346&originWidth=787&originalType=binary&ratio=1&rotation=0&showTitle=false&status=done&style=none&title=)

**重写后**

![](http://test-123456-md-images.oss-cn-beijing.aliyuncs.com/img/image-20220415121206003.png#crop=0&crop=0&crop=1&crop=1&id=u7aH8&originHeight=1002&originWidth=2065&originalType=binary&ratio=1&rotation=0&showTitle=false&status=done&style=none&title=)

![](http://test-123456-md-images.oss-cn-beijing.aliyuncs.com/img/image-20220415121435062.png#crop=0&crop=0&crop=1&crop=1&id=guCZQ&originHeight=357&originWidth=651&originalType=binary&ratio=1&rotation=0&showTitle=false&status=done&style=none&title=)

> 执行cat的speak()


![](http://test-123456-md-images.oss-cn-beijing.aliyuncs.com/img/image-20220415121302391.png#crop=0&crop=0&crop=1&crop=1&id=WyFLo&originHeight=173&originWidth=656&originalType=binary&ratio=1&rotation=0&showTitle=false&status=done&style=none&title=)





#### 11.12.3 案例：计算器

**常规**

```c
#include<iostream>
#include<string>
using namespace std;

class Calculator
{
public:
	int getResult(string str)
	{
		if (str == "+")
		{
			return a + b;
		}
		else if (str == "-")
		{
			return a - b;
		}
		else if (str == "*")
		{
			return a * b;
		}
	}


	int a;
	int b;

};

void test01()
{
	Calculator c;
	c.a = 10;
	c.b = 10;
	cout << c.getResult("+") << endl;
	cout << c.getResult("-") << endl;
	cout << c.getResult("*") << endl;
}

int main()
{
	test01();
}
```

**多态**

> 先定义计算器抽象类，然后向里面添加功能类（继承抽象类）


```c
// 多态 计算器抽象类
class AbstractCalculator
{
public:
	virtual int getResult()
	{
		return 0;
	}
	int a;
	int b;
};

// 加法类
class Add:public AbstractCalculator
{
public:
	int getResult()
	{
		return a + b;
	}

};
// 减法类
class Sub:public AbstractCalculator
{
public:
	int getResult()
	{
		return a - b;
	}

};
// 乘法类
class Mul:public AbstractCalculator
{
public:
	int getResult()
	{
		return a * b;
	}

};
```

**测试**

定义一个指针指向子类

```c
//多态计算器测试
void test02()
{
	AbstractCalculator *c = new Mul;
	c->a = 10;
	c->b= 20;
	cout << c->getResult() << endl;
}
```





#### 11.12.4 纯虚函数

纯虚函数是一种特殊的虚函数，再某些情况下，基类中不能对虚函数给出有意义的实现，把它声明为纯虚函数；

<strong style="color:#ffc000;">**纯虚函数只有函数名、参数和返回值，没有函数体，具体的实现留给派生类去做。**</strong>

纯虚函数再基类中为派生类保留有一个函数名，一边派生类进行重定义，如果再基类中没有保留函数名字，则无法支持多态。



语法：`virtual 返回值类型 函数名() = 0；`

`virtual int getResult() = 0`

> 这样的类也叫做抽象类，抽象类不能实例化对象，且子类必须重写纯虚函数







#### 11.12.5 案例：泡茶

1. 抽象类

```c
class AbstractDrinking
{
public:
	// 煮水
	virtual void Boil() = 0;

	// 冲泡
	virtual void Brew() = 0;

	// 倒入杯中
	virtual void PourInCup() = 0;

	// 添加辅料
	virtual void AddSomething() = 0;


	//制作
	void making()
	{
		Boil();
		Brew();
		PourInCup();
		AddSomething();
	}
};
```

**Coffee类**

```c
class Coffee :public AbstractDrinking
{
public:
	// 煮水
	virtual void Boil()
	{
		cout << "煮Coffee水" << endl;
	}

	// 冲泡
	virtual void Brew()
	{
		cout << "冲泡Coffee水" << endl;
	}

	// 倒入杯中
	virtual void PourInCup()
	{
		cout << "Coffee水倒入杯中" << endl;
	}

	// 添加辅料
	virtual void AddSomething()
	{
		cout << "添加Coffee辅料" << endl;
	}

};
```

**制作函数**

```c
// 制作函数
void doWork(AbstractDrinking* abs)
{
	abs->making();
    delete abs;
}
```

**测试**

```c
void test01()
{
	Coffee *c = new Coffee;
	doWork(c);
	delete c;
	//或者
	doWork(new Coffee);
}
```

> 这里相当于`AbstractDrinking* abs = new Coffee;`


#### 11.12.6 虚析构和纯虚析构

1. 多态使用时，如果子类中有属性开辟到堆区，那么父类指针在释放时无法调用到子类的析构代码
2. 解决方式：将父类中的析构函数改为虚析构或者纯虚析构.

虚析构和纯虚析构共性：

-  可以解决父类指针释放子类对象 
-  都需要有具体的函数实现 

虚析构和纯虚析构区别：

- 如果是纯虚析构，该类属于抽象类，无法实例化对象

虚析构语法：

`virtual ~类名(){}`

纯虚析构语法：

`virtual ~类名() = 0;`

`类名::~类名(){}`

#### 11.12.7 案例：计算机

电脑主要组成部件为CPU（用于计算），显卡（用于显示），内存条（用于存储

将每个零件封装出抽象基类，并且提供不同的厂商生产不同的零件，例如Intel厂商和Lenovo厂商创建电脑类

提供让电脑工作的函数，并且调用每个零件工作的接口测试时组装三台不同的电脑进行工作

**三个零件抽象类**

```c
// 抽象的CPU类
class AbstractCPU
{
public:
	virtual void calculate() = 0;
};

// 抽象的显卡类
class AbstractVedioCard
{
public:
	virtual void view() = 0;
};

// 抽象的内存条类
class AbstractStorage
{
public:
	virtual void storage() = 0;
};
```

**计算机抽象类**

```c
// 电脑类
class Computer
{
public:
	Computer(AbstractCPU *CPU,AbstractVedioCard * VedioCard,AbstractStorage *Storage)
	{
		m_CPU = CPU;
		m_VedioCard = VedioCard;
		m_Storage = Storage;
	}
	void doWork()
	{
		m_CPU->calculate();
		m_VedioCard->view();
		m_Storage->storage();
	}

private:
	AbstractCPU* m_CPU;
	AbstractVedioCard* m_VedioCard;
	AbstractStorage* m_Storage;
};
```

**具体的厂商**

```c
//具体的厂商
class InterCPU :public AbstractCPU
{
public:
	void calculate()
	{
		cout << "InterCPU开始计算" << endl;
	}
};
class InterVedioCard :public AbstractVedioCard
{
public:
	void view()
	{
		cout << "InterVedioCard开始计算" << endl;
	}
};
class InterStorage :public AbstractStorage
{
public:
	void storage()
	{
		cout << "InterStorage开始计算" << endl;
	}
};
```

**测试**

```c
void test01()
{
	//第一个零件CPU
 	 AbstractCPU *iCPU = new InterCPU;
	 //第二个零件显卡
 	 AbstractVedioCard*iVedioCard = new InterVedioCard;
	 //第三个零件内存条
 	 AbstractStorage*iStorage = new InterStorage;

	Computer *c = new Computer(iCPU, iVedioCard, iStorage);
	 c->doWork();
	 delete c;

}
```

**Computer析构函数**释放堆区中数据

```c
~Computer()
	{
		if (m_CPU != NULL)
		{
			delete m_CPU;
			m_CPU = NULL;
		}
		if (m_VedioCard != NULL)
		{
			delete m_VedioCard;
			m_VedioCard = NULL;
		}
		if (m_Storage != NULL)
		{
			delete m_Storage;
			m_Storage = NULL;
		}

	}
```





#### 11.12.8 运行阶段类型识别

<strong style="color:#92d050;">dynamic_cast</strong>

运行阶段类型识别为程序所在运行阶段确定对象的类型，只适用于包含虚函数的类。

```dynamic_cast```运算符用指向基类的指针来生成派生类的指针，它不能回答“指针指向的是什么类的对象”的问题，但能安全的将对象的地址赋给特定类型的指针。



西施、韩信、李白都继承自英雄基类，西施中右成员函数show()，调用show函数需要将基类转换成XS类再调用，如果这里不知道i英雄的id也就不能使用```XS* pxs = (XS*)ptr;```进行转换了。

这里虽然`ptr = new XS;`，ptr仍为Hero对象。

```c++
#include<iostream>
using std::cout; using std::string; using std::endl; using std::cin;

class Hero
{
public:
	virtual void skil1() = 0;
	virtual void skil2() = 0;
	virtual void skil3() = 0;

};

class XS :public Hero
{
public:
	virtual void skil1()
	{
		cout << "西施释放一技能" << endl;
	}
	virtual void skil2()
	{
		cout << "西施释放二技能" << endl;
	}
	virtual void skil3()
	{
		cout << "西施释放三技能" << endl;
	}
	void show()
	{
		cout << "我是大美女" << endl;
	}
};

class HX :public Hero
{
public:
	virtual void skil1()
	{
		cout << "韩信释放一技能" << endl;
	}
	virtual void skil2()
	{
		cout << "韩信释放二技能" << endl;
	}
	virtual void skil3()
	{
		cout << "韩信释放三技能" << endl;
	}

};

class LB :public Hero
{
public:
	virtual void skil1()
	{
		cout << "李白释放一技能" << endl;
	}
	virtual void skil2()
	{
		cout << "李白释放二技能" << endl;
	}
	virtual void skil3()
	{
		cout << "李白释放三技能" << endl;
	}
};

int main()
{
	int id = 0;
	cout << "请输入英雄的id(1-西施，2-韩信，3-李白)";
	cin >> id;
	
	// 创建一个英雄空指针
	Hero* ptr = nullptr;
	if (id == 1)
	{
		ptr = new XS;
	}
	else if (id == 2)
	{
		ptr = new HX;
	}
	else if (id == 3)
	{
		ptr = new LB;
	}

	

	if (ptr != nullptr)
	{
		ptr->skil1();
		ptr->skil2();
		ptr->skil3();
		if (id == 1)
		{
			XS* pxs = (XS*)ptr; // C风格强制转换
			pxs->show();
		}
		delete ptr;
	}

	system("pause");
	return 0;
}
```



dynamic_cast语法

```派生类 = dynamic_cast<派生类类型 *>(基类指针)；```

1. dynamic_cast只适用于包含虚函数的类；
2. dynamic_cast可以将培盛磊指针换成基类指针，这种做法没有意义；
3. dynamic_cast可用于引用，但是，没有与空指针对应的引用值，如果转换请求不正确，会出现bad_cast异常。

![image-20221023224847930](http://test-123456-md-images.oss-cn-beijing.aliyuncs.com/img/image-20221023224847930.png)













## 12、文件操作

程序运行时产生的数据都属于临时数据，程序一旦运行结束都会被释放
通过文件可以将数据持久化
C++中对文件操作需要包含头文件
文件类型分为两种：
1.文本文件·文件以文本的ASC川码形式存储在计算机中
2.二进制文件。文件以文本的二进制形式存储在计算机中，用户一般不能直接读懂它们

```
操作文件的三大类：
1.ofstream:写操作
2.ifstream:读操作
3.fstream:读写操作
```

### 12.1 文本操作

#### 12.1.1 写文件

1. 包含头文件

`#include<fstream>`

2. 创建流对象

`ofstream ofs`

3. 打开文件

`ofs.open("文件路径",打开方式)`

4. 写数据

`ofs<<"写入数据";`

5. 关闭文件

`ofs.close();`

![](http://test-123456-md-images.oss-cn-beijing.aliyuncs.com/img/image-20220415143958750.png#crop=0&crop=0&crop=1&crop=1&id=ud0Y9&originHeight=814&originWidth=1590&originalType=binary&ratio=1&rotation=0&showTitle=false&status=done&style=none&title=)

```c
#include<iostream>
#include<fstream>
using namespace std;

void test01()
{
	// 创建流对象
	ofstream ofs;

	// 以写的方式打开文件
	ofs.open("test01.txt", ios::out);

	// 写入内容
	ofs << "你好张三" << endl;
	ofs << "你好李四" << endl;
	ofs << "你好王五" << endl;

	// 关闭文件
	ofs.close();
}

int main()
{
	test01();
}
```

#### 12.1.2 读文件

1. 包含头文件

`#ifstream<fstream>`

2. 创建流对象

`ifstream ifs`

3. 打开文件并判断是否打开成功

`ifs.open("文件路径",打开方式)`

4.  读数据 
5.  关闭文件 

`ifs.close()`

> 注意
>
> 1. 判断文件是否可读
> 2. 4种读入方式


```c
// 第一种方式
char buf[1024] = { 0 };
while (ifs >> buf)
{
	cout << "a" << endl;
	cout << buf << endl;
}

// 第二种方式
char buf2[1024] = { 0 };
while (ifs.getline(buf2, sizeof(buf2)))
{
	cout << "b" << endl;
	cout << buf2 << endl;
}

// 第三种方式
string buf3;
// 这里得加上string头文件，否则会报错
while (getline(ifs, buf3))
{
	cout << "c" << endl;
	cout << buf3 << endl;
}

// 第四种
// 读取字符串，读一个输出一个一直读到文件尾，不建议使用
char c;
while ((c = ifs.get()) != EOF) //EOF end of file
{
    cout << c;
}
```

### 12.2 二进制文件

以二进制的方式进行文件读写操作

打开方式要指定为`ios::binary`

#### 12.2.1 写文件

```c
// 创建流对象
ofstream ofs("Person.txt", ios::out | ios::binary);

// 打开文件
//ofs.open("Person.txt", ios::out | ios::binary);

// 写内容
Person p = { "张三",18 };
ofs.write((const char*)&p, sizeof(Person));//强转

// 关闭文件
ofs.close();
```

> 通过write进行写入


#### 12.2.2 读文件

```c
// 创建流对象
ifstream ifs;

// 打开文件 并判断是否打开成功
ifs.open("Person.txt", ios::in | ios::binary);
if (!ifs.is_open())
{
    cout << "打开失败" << endl;
    return;
}

// 读文件
Person p;
ifs.read((char*)&p, sizeof(p));
cout << "姓名：" << p.m_name << "\t年龄：" <<p.m_age<< endl;

// 关闭文件
ifs.close();
```

> 通过read读，并给定字节大小


## 13、模板

### 13.1 模板的概念

1. 模板就是建立通用的**模具**，大大提高复用性。

### 13.2 函数模板

1. 泛型编程，主要利用的就是模板；
2. 函数模板和类模板；

#### 13.2.1 函数模板的语法

1. 建立一个通用的函数，其函数返回值类型和形参类型可以不具体指定，用一个**虚拟的类型**代表；
2. 语法：

```c
template<typename T>
函数声明或定义
```

解释：

- template --声明创建模板；
- `typename` --表示其后面的符号是一种数据类型，可以用class代替；
- T --通用数据类型，名称可以代替，通常为大写字母；

3. 两个数据交换函数.

**正常写法**

```c
// 两个整型的数据交换
void exchangeInt(int &a,int &b)
{
	int temp = a;
	a = b;
	b = temp;
}
// 两个浮点型的数据交换
void exchangeDouble(double &a, double&b)
{
	double temp = a;
	a = b;
	b = temp;
}

//测试：两个自定义函数的数据交换
void test01()
{
	int a = 10;
	int b = 20;
	exchangeInt(a, b);
	cout << "a=" << a << " b=" << b << endl;

	double c = 10.1;
	double d = 20.1;
	exchangeDouble(c, d);
	cout << "c=" << c << " d=" << d << endl;

}
```

**函数模板(自动识别类型)**

```c
// 函数模板
template<typename T> //声明模板
void myExchange(T& a, T& b)
{
	T temp = a;
	a = b;
	b = temp;
}

//测试：函数模板的数据交换
void test02()
{
	// 整型
	int a = 10;
	int b = 20;
	myExchange(a, b);
	cout << "a=" << a << " b=" << b << endl;

	// 浮点型
	double c = 10.1;
	double d = 20.1;
	myExchange(a, b);
	cout << "c=" << c << " d=" << d << endl;

	// 字符串
	string e = "我是老大";
	string f = "我是老二";
	myExchange(a, b);
	cout << "e=" << e << " f=" << f << endl;
}
```

**函数模板(自动识别类型)**

调用时

```c
myExchange<double>(a, b);
```

```c
// 函数模板
template<typename T> //声明模板
void myExchange(T& a, T& b)
{
	T temp = a;
	a = b;
	b = temp;
}

//测试：函数模板的数据交换
void test02()
{
	// 整型
	int a = 10;
	int b = 20;
	myExchange<int>(a, b);
	cout << "a=" << a << " b=" << b << endl;

	// 浮点型
	double c = 10.1;
	double d = 20.1;
	myExchange<double>(a, b);
	cout << "c=" << c << " d=" << d << endl;

	// 字符串
	string e = "我是老大";
	string f = "我是老二";
	myExchange<string>(a, b);
	cout << "e=" << e << " f=" << f << endl;
}
```

#### 13.2.2 函数模板注意事项

1. 自动类型推到必须导出一致的数据类型T，才可以使用；

![](http://test-123456-md-images.oss-cn-beijing.aliyuncs.com/img/image-20220427192036745.png#crop=0&crop=0&crop=1&crop=1&id=qDepl&originHeight=515&originWidth=1126&originalType=binary&ratio=1&rotation=0&showTitle=false&status=done&style=none&title=)

2. 模板必须能确定出来T的数据类型，才可以使用；

![](http://test-123456-md-images.oss-cn-beijing.aliyuncs.com/img/image-20220427192230674.png#crop=0&crop=0&crop=1&crop=1&id=Zm7NC&originHeight=809&originWidth=1308&originalType=binary&ratio=1&rotation=0&showTitle=false&status=done&style=none&title=)

解决方法：显示指定类型

```c
myExchange1<int>();
```

#### 13.2.3 函数模板案例

案例描述：

- 利用函数模板封装一个排序函数，可以对不同数据类型数组进行排序；
- 排序规则从大到小，排序算法为选择排序；
- 分别利用char数据和int数据进行测试；

模板

```c
// 交换函数模板
template<class T>
void myExchange(T& a, T& b)
{
	T temp = a;
	a = b;
	b = temp;
}


// 排序模板
template<class T>
void mySort(T arr[], int len)
{
	for (int i = 0; i < len; i++)
	{
		int max = i;
		for (int j = i + 1; j < len; j++)
		{
			if (arr[max] < arr[j])
			{
				max = j;
			}
		}
		if (max != i)
		{
			myExchange(arr[max], arr[i]);
		}
	}
}

// 打印数组模板
template<class T>
void printArray(T arr[], int len)
{
	for (int i = 0; i < len; i++)
	{
		cout << arr[i] <<" ";
	}
	cout << endl;
}
```

测试

```c
void test01()
{
	char charArr[] = "abcdfa";
	int num = sizeof(charArr) / sizeof(char);
	mySort(charArr,num);
	printArray(charArr,num);
}

void test02()
{
	int intArr[] = { 1, 5, 8, 9, 7, 2, 3 };
	int num = sizeof(intArr) / sizeof(int);
	mySort(intArr, num);
	printArray(intArr, num);
}
```

#### 13.2.4 普通函数和函数模板的区别

1. 普通函数可以发生自动类型转换；
2. 函数模板调用时，如果利用自动数据类型转换，不会发生隐式类型转换；
3. 如果利用显示指定类型的方式，可以发生隐式类型转换；

**测试1：**

```c
// 普通函数
int myAdd01(int a, int b)
{
	return a + b;
}


void test01()
{
	int a = 10;
	char b = 'a';
	cout << myAdd01(a, b) << endl;
}
```

输出为109，发生了隐式类型转换。

**测试2：**

```c
template<class T>
T myAdd02(T a, T b )
{
	return a + b;
}


void test02()
{
	int a = 10;
	int b = 20;
	char c = 'a';
	cout << myAdd02(a, c) << endl; //错误：
}
```

![](http://test-123456-md-images.oss-cn-beijing.aliyuncs.com/img/image-20220427195621520.png#crop=0&crop=0&crop=1&crop=1&id=al6Io&originHeight=494&originWidth=967&originalType=binary&ratio=1&rotation=0&showTitle=false&status=done&style=none&title=)

**测试3：**

```c
template<class T>
T myAdd02(T a, T b )
{
	return a + b;
}


void test02()
{
	int a = 10;
	char c = 'a';
	cout << myAdd02<int>(a,c)<< endl; // 指定类型之后就可以
}
```

#### 13.2.5 普通函数与函数模板的调用规则

调用规则：

1. 如果两个函数都可以实现，则优先调用**普通函数**；
2. 可以通过空模板参数列表来强制调用函数模板；
3. 函数模板可以重载；
4. 如果函数模板可以产生更好的匹配，优先调用函数模板；

**测试1：**

```c
template<class T>
void f1(T a,T b)
{
	cout << "我是函数模板1" << endl;
}

void f1(int a, int b)
{
	cout << "我是普通函数1" << endl;
}
void test01()
{
	int a = 10;
	int b = 10;
	f1(a,b); // 输出：我是普通函数1
}
```

> 若普通函数只有声明没有实现则报错；


**测试2：**

```c
// 可以通过空模板参数列表来强制调用函数模板；
f1<>(a, b);
```

**测试3：**

```c
template<class T>
void f1(T a,T b)
{
	cout << "我是函数模板1" << endl;
}
template<class T>
void f1(T a,T b,T c)
{
	cout << "我是函数模板2" << endl;
}

f1<>(a, b,c);
```

**测试4：**

```c
template<class T>
void f1(T a,T b)
{
	cout << "我是函数模板1" << endl;
}
void f1(int a, int b)
{
	cout << "我是普通函数1" << endl;
}
char c1 = 'a';
char c2 = 'b';
f1(a,b);
```

会调用函数模板，因为编译器觉得char还要转换成int，所以干脆直接函数模板；

#### 13.2.6 函数模板的局限性

1. 为某一个类型进行具体化操作；
2. 主要是使用调用规则4，优先使用更好的匹配；

```c
template<class T>
bool myCompare(T& a, T& b)
{
	if (a == b)
		return true;
	else
		return false;
}

// 利用具体化Person的版本实现代码,具体化优先使用
template<> bool myCompare(Person& p1, Person& p2)
{
	if (p1.name == p2.name && p1.age == p2.age)
	{
		return true;
	}
	else
		return false;
}

void test01()
{
	Person p1("张三", 21);
	Person p2("张三", 21);
	cout << myCompare(p1, p2);
}
```

### 13.3 类模板

#### 13.3.1 类模板语法

1. 类模板和函数模板相似；

```c
#include<iostream>
using namespace std;

template<class nameType,class ageType>
class Person
{
public:
	Person(nameType _name, ageType _age)
	{
		name = _name;
		age = _age;
	}

	nameType name;
	ageType age;

	void showDetail()
	{
		cout << "名字是" << name <<" 年龄是" << age << endl;
	}
};

void test01()
{
	Person<string, int> p1("孙悟空", 21);
	p1.showDetail();
}


int main()
{
	test01();
}
```

#### 13.3.2 类模板和函数模板的区别

1. 类模板没有自动类型推导，只能显式指定；
2. 类模板在模板参数列表中可以有默认参数；

**默认参数**

```c
template<class nameType,class ageType = int>
```

使用

```c
Person<string> p1("猪八戒", 25);
```

> 这里就不需要指定数据类型


#### 13.3.3 类模板中的成员函数创建时机

1. 使用的时候才会创建；

```c
// 创建两个类
class Person1
{
public:
	void showPerson1()
	{
		cout << "我是Perosn1" << endl;
	}
};
class Person2
{
public:
	void showPerson2()
	{
		cout << "我是Perosn2" << endl;
	}
};

// 使用函数模板调用两个类的函数
template<class T>
class myClass
{
public:
	T obj;
	void f1()
	{
		obj.showPerson1();
	}
	void f2()
	{
		obj.showPerson2();
	}

};
```

> 上面这套代码能运行成功，因为函数模板中的函数因为没有使用还未创建；


测试

```c
myClass<Person1> p1;
//p1.f1();
//p1.f2();
```

> 这样也能编译成功，因为成员函数还未创建


```c
myClass<Person1> p1;
p1.f1();
//p1.f2();
```

> 传入`Person1`时只能调用`f1`，因为指定了函数模板参数类型，也就创建了里面的成员函数；


#### 13.3.4 类模板做函数参数

三种传入方式

- 指定传入的数据类型  --直接显示对象的数据类型；
- 参数模板化                 --将对象中的参数变为模板进行传递；
- 整个类模板                 --将这个对象类型 模板化后进行传递；

> 查看类型`typeid(模板数据类型).name()`


**测试1**

```c
//-指定传入的数据类型  --直接显示对象的数据类型；
void printPerson1(Person<string,int>&p)
{
    p.showDetail();
}

void test01()
{
    Person<string, int>p("孙悟空", 21);
    printPerson1(p);
}
```

**测试2**

```c
//- 参数模板化         --将对象中的参数变为模板进行传递；
template<class nameType,class ageType>
void printPerson2(Person<nameType, ageType>& p)
{
    p.showDetail();
}

void test02()
{
    Person<string, int>p("猪八戒", 22);
    printPerson1(p);
}
```

**测试3**

```c
//- 整个类模板         --将这个对象类型 模板化后进行传递；
template<class T>
void printPerson3( T& p)
{
    p.showDetail();
}

void test03()
{
    Person<string, int>p("唐僧", 22);
    printPerson1(p);
}
```

> 最常用的是1


#### 13.3.5 类模板与继承

注意：

- 当子类继承的父类是一个类模板时，子类在声明的时候，要指定出父类中的T的类型；
- 如果不指定，编译器无法给子类分配空间；
- 如果想灵活指出父类中的T类型，子类也粗要变为类模板；

**测试2**

![](http://test-123456-md-images.oss-cn-beijing.aliyuncs.com/img/image-20220501213329431.png#crop=0&crop=0&crop=1&crop=1&id=ZSfRk&originHeight=1007&originWidth=1837&originalType=binary&ratio=1&rotation=0&showTitle=false&status=done&style=none&title=)

**代码**

```c
#include <iostream>
using namespace std;

template<class T>
class Base
{
	T m;
};

 //必须知道父类中T的数据类型才能继承子类
//class Son :public Base
class Son1 :public Base<int>  // 这里就告诉子类父类中的T是int类型
{

};


// 如果想要灵活的指定父类中T的数据类型，子类也需要变为类模板
template<class T1,class T2>
class Son2 :public Base<T2>
{
	T1 obj;
};


void test01()
{
	Son2<int,char>s;

}

int main()
{
    
}
```

#### 13.3.6 类模板成员函数类外实现

1. 构造函数的类外实现；

```c
// 构造函数的类外实现
template<class T1,class T2>
Person<T1,T2>::Person(T1 name, T2 age)
{
	this->name = _name;
	this->age = _age;
}
```

2. 成员函数的类外实现；

```c
// 成员函数的类外实现
template<class T1, class T2>
void Person<T1, T2>::showPerson()
{
	cout << "姓名是" << this->name << endl;
	cout << "年龄是" << this->age << endl;
}
```

**代码**

```c
#include <iostream>
#include<string>
using namespace std;

template<class T1, class T2>
class Person
{
public:
	Person(T1 _name, T2 _age);
	void showPerson();

	T1 name;
	T2 age;
};

// 构造函数的类外实现
template<class T1,class T2>
Person<T1,T2>::Person(T1 name, T2 age)
{
	this->name = _name;
	this->age = _age;
}

// 成员函数的类外实现
template<class T1, class T2>
void Person<T1, T2>::showPerson()
{
	cout << "姓名是" << this->name << endl;
	cout << "年龄是" << this->age << endl;
}
```

#### 13.3.7 分文见编写

.h

```c
#pragma once
#include<iostream>
using namespace std;
#include<string>

template<class T1, class T2>
class Person
{
public:
	Person(T1 name, T2 age);
	void showPerson();

	T1 name;
	T2 age;
};
```

.cpp

```c
#include"person.h"

template<class T1, class T2>
Person<T1, T2>::Person(T1 name, T2 age)
{
	this->name = name;
	this->age = age;
}

template<class T1, class T2>
void Person<T1, T2>::showPerson()
{
	cout << "姓名是" << this->name << endl;
	cout << "年龄是" << this->age << endl;
}
```

> 但是在使用时会出错，因为类模板中函数生成时间问题；


解决方案1

```c
// 第一种解决方式，改为.cpp
#include "person.cpp"
```

> 在使用文件中


解决方案2

> 将.h和.cpp写在一起，后缀改为.hpp


#### 13.3.8 类模板和友元





## 14、右值引用、移动语义和完美转发

### 14.1 右值引用

C++中所有的值可分为左值和右值，左值表示表达式结束后仍持久化存储的值，右值表示表达式结束后的就不再存储的临时对象。

区分方法：<u>能取地址，则为左值；不能取地址，则为右值</u>。

```c++
class AA
{
    int m_a;
};

AA getTemp()
{
    return AA();
}

int main()
{
    int ii = 3;        // ii是左值，3是右值
    int jj = ii + 8;   // jj是左值，ii+8是右值
    AA aa = getTemp(); // aa是左值，getTemp()返回值是右值（临时变量）
    printf("测试完毕");
    return 0;
}
```



右值引用：右值引用就是给右值起个名字，使用符号&&

右值引用之后像左值一样，可被修改，可加const修饰、可取地址等

```c++
#include <iostream>
using namespace std;

class AA
{
public:
	int m_a=9;
};

AA getTemp()
{
	return AA();
}

int main()
{
	const int &&a = 3; // 可用const修饰
	//a++;可修改
	int b = 8;
	int &&c = b + 3;
	//c++;
	AA&& aa = getTemp();
	//aa.m_a++;

	// 输出值
	cout << "a=" << a << endl; // 3
	cout << "c=" << c << endl; // 11
	cout << "aa=" << aa.m_a << endl; // 9
	// 输出地址
	cout << "a=" << &a << endl; // a=0113F9D8
	cout << "c=" << &c << endl; // c = 0113F9B4
	cout << "aa=" << &aa << endl; // aa = 0113F99C

	printf("测试完毕");
	return 0;
}
```

注意：右值引用错误，但加const常量右值正确；

```c++
int &d = 1; // 错误
const int &e = 1; // 正确
```







### 14.2 移动语义

如果一个对象中有堆区资源，需要编写接贝构造函数和赋值函数，实现深接贝。深接贝把对象中的堆区资源复制了一份，如果<u>源对象（被拷贝的对象）是临时对象</u>，拷贝完就没什么用了，这样会造成没有意义的资源申请和释放操作。**如果能够直接使用源对象拥有的资源，可以节省资源申请和释放的时间。**

**临时对象——>加上内存地址**   转移资源

C++11新增加的移动语义就能够做到这一点。
实现移动语义要增加两个函数：移动构造函数和移动赋值函数。

移动构造函数的语法：

`类名(类名&& 源对象){...}`

移动赋值函数的语法：

```类名& operator = (A&&a)```

1. move()：将左值转移为右值；
2. 左值被转为右值之后不会立即析构，如果继续使用会产生一些错误；
3. 若类中没有提供移动构造函数，而提供了拷贝构造函数，则编译器会取找拷贝构造函数；

```c++
#include<iostream>
using namespace std;

class AA {
public:
	int* m_data = nullptr; // 空指针

	// 启用默认构造函数
	AA() = default; 

	// 分配内存成员函数
	void alloc()
	{
		m_data = new int; // 给m_data分配内存
		memset(m_data, 0, sizeof(int)); // 初始化已分配的内存
	}

	// 拷贝构造函数和赋值函数均为深拷贝，两者都是拷贝语义
	// 拷贝构造函数
	AA(const AA& a)
	{
		cout << "调用拷贝构造函数" << endl;
		if (m_data == nullptr) alloc(); // 如果没有分配内存就分配
		memcpy(m_data, a.m_data, sizeof(int)); // 把数据从源对象中拷贝过来
	}
	// 赋值函数
	AA& operator = (const AA& a)
	{
		cout << "调用拷贝赋值函数" << endl;
		if (this == &a) return *this; // 避免自我赋值
		if (m_data == nullptr) alloc(); // 如果没有分配内存就分配
		memcpy(m_data, a.m_data, sizeof(int)); // 把数据从源对象中拷贝过来
		return *this;
	}

	// 拷贝构造函数和赋值函数均为深拷贝，两者都是拷贝语义
	// 拷贝构造函数
	AA(AA&& a)
	{
		cout << "调用移动构造函数" << endl;
		if (m_data != nullptr) delete m_data; // 如果分配内存就释放掉
		m_data = a.m_data; // 指向临时变量的内存
		a.m_data = nullptr; // 把临时变量置为空指针
	}
	// 赋值函数
	AA& operator = (AA&& a) // 给临时变化取个名字a
	{
		cout << "调用移动赋值函数" << endl;
		if (this == &a) return *this; // 避免自我赋值
		if (m_data != nullptr) delete m_data; // 如果分配内存就释放掉
		m_data = a.m_data; // 指向临时变量的内存
		a.m_data = nullptr; // 把临时变量置为空指针
		return *this;
	}

	// 析构函数
	~AA()
	{
		if (m_data != nullptr)
		{
			delete m_data;
			m_data = nullptr;
		}
	}
};

int main()
{
	AA a1;
	a1.alloc();
	*a1.m_data = 3;
	cout << "a1.m_data=" << *a1.m_data << endl;

	// 测试拷贝构造函数
	AA a2 = a1;
	cout << "a2.m_data=" << *a2.m_data << endl;

	// 测试拷贝赋值函数
	AA a3;
	a3 = a1;
	cout << "a3.m_data=" << *a3.m_data << endl;

	// lambda表达式返回临时对象
	auto fn = []
	{
		AA aa;
		aa.alloc();
		*aa.m_data = 9;
		return aa;
	};

	// 测试移动构造函数
	AA a4 = fn();
	cout << "a4.m_data=" << *a4.m_data << endl;

	// 测试移动赋值函数
	AA a5;
	a5 = fn();
	cout << "a5.m_data=" << *a5.m_data << endl;

	// 使用move函数将左值改为右值
	// 测试拷贝构造函数
	AA a6 = move(a1);
	cout << "a6.m_data=" << *a6.m_data << endl;

	// 测试拷贝赋值函数
	AA a7;
	a7 = move(a1); // a1转移过一次，会出现错误
	cout << "a7.m_data=" << *a7.m_data << endl;

	return 0;
}
```



### 14.3 完美转移

问题：需要函数2调用函数1，并传递参数。传递的参数可为左值或右值，可以用forward保证传入的参数的左右值不变；

1. forward<T>(参数)用于转发参数，如果转发的参数为左值，则转发后仍为左值，若转发的参数为右值，则转发后仍为右值。

```c++
#include<iostream>
using namespace std;

void fn1(const int &ii)
{
	cout << "传入的左值ii=" << ii << endl;
}

void fn1(const int&& ii)
{
	cout << "传入的右值ii=" << ii << endl;
}

//void fn2(int ii)
//{
//	fn1(ii);
//}

// 模板参数T&&，既可以接受左值又可以接受右值
template<typename T>
void fn2(T&& ii)
{
	fn1(ii);
}

// 使用forward完美转移可以完美解决，forward用于转发参数，如果参数是左值，则转发后仍为左值，如果为右值，则转发后仍为右值
template<typename TT>
void fn3(TT&& ii)
{
	fn1(forward<TT>(ii));
}

int main()
{
	int a = 1;
	//fn1(a);
	//fn1(1);
	fn2(a);
	fn2(1);
	fn3(a);
	fn3(1);

}
```



![image-20221021172608667](http://test-123456-md-images.oss-cn-beijing.aliyuncs.com/img/image-20221021172608667.png)



## 15、类型转换

### 15.1 自动类型转换

C++可以进行自动类型转换盲从更大的数转为小的数会可能造成精度缺失。

C++不能自动转换不兼容的类型，下面的语句时非法的

```c++
int *ptr = 8;
```

不能自动转换时，可以使用强制类型转换

```c++
int *p = (int*)8;
```

 

将构造函数作为自动类型转换函数

![image-20221023215456905](http://test-123456-md-images.oss-cn-beijing.aliyuncs.com/img/image-20221023215456905.png)

![image-20221023215606928](http://test-123456-md-images.oss-cn-beijing.aliyuncs.com/img/image-20221023215606928.png)

使用**explicit**关键字可用于关闭这种特性，再使用隐式转换时就会报错。

![image-20221023220058069](http://test-123456-md-images.oss-cn-beijing.aliyuncs.com/img/image-20221023220058069.png)





### 15.2 转化函数

构造函数只用于某种类型到类类型的转换，如果要进行相反的转换，可以使用特殊的运算符函数——转换函数

语法：operator数据类型();

<u>**注意：转换函数必须是类的成员函数，不能指定返回类型，不能有参数；**</u>



下面的代码是<u>隐式转换函数</u>，编译器根据等号左边的变量类型，自动调用相应的转换函数。

![image-20221023220744301](http://test-123456-md-images.oss-cn-beijing.aliyuncs.com/img/image-20221023220744301.png)

也可以显示转换

```c++
	// 显示转换
	int a = (int)girl1;
	double b = (double)girl1;
	string c = (string)girl1;
	cout << "a=" << a << "\tb=" << b << "\tc=" << c << endl;
```



explicit也可以用于转换函数，则不能使用隐式转换

![image-20221023221254794](http://test-123456-md-images.oss-cn-beijing.aliyuncs.com/img/image-20221023221254794.png)



普通成员函数转换

![image-20221023221606760](http://test-123456-md-images.oss-cn-beijing.aliyuncs.com/img/image-20221023221606760.png)



### 15.3 C++类型转换

C语言类型转换

语法：```(目标类型)```表达式或```目标类型(表达式)```



C++认为C风格的类型过于松散，可能会带来隐患，不够安全。新增4个关键字

```static_cast、const_cast、reinterpret_cast和dynamic_cast```

语法：```static_cast<目标类型>(表达式)```



用的较多的就是static_cast

代码

```c++
double dd = 1.23;
long ll1 = (long)dd; // C风格
long ll2 = static_cast<long>(dd); // C++风格
```





## 16、list容器

list封装了链表，非顺序存储，存储下一个元素的指针

![image-20221025102614807](http://test-123456-md-images.oss-cn-beijing.aliyuncs.com/img/image-20221025102614807.png)

<strong style="color:#00b050;">链表和数组的区别：</strong>

1. 数组静态分配内存，链表动态分配内存。
2. 数组在内存中是连续的，链表是不连续的。
3. 数组利用下标定位，查找的时间复杂度是O(1)，链表通过遍历定位元素，查找的时间复杂度是O(N)。
4. 数组插入和删除需要移动其他元素，时间复杂度是O(N)，链表的插入或删除不需要移动其他元素，时间复杂度是O(1)。

<strong style="color:#00b050;">数组的优点</strong>

1. 随机访问性比较强，可以通过下标进行快速定位。
2. 查找速度快
3. 数组的缺点
4. 插入和删除的效率低，需要移动其他元素。
5. 会造成内存的浪费，因为内存是连续的，所以在申请数组的时候就必须规定七内存的大小，如果不合适，就会造成内存的浪费。
6. 内存空间要求高，创建一个数组，必须要有足够的连续内存空间。
7. 数组的大小是固定的，在创建数组的时候就已经规定好，不能动态拓展。

<strong style="color:#00b050;">链表的优点</strong>

1. 插入和删除的效率高，只需要改变指针的指向就可以进行插入和删除。
2. 内存利用率高，不会浪费内存，可以使用内存中细小的不连续的空间，只有在需要的时候才去创建空间。大小不固定，拓展很灵活。

<strong style="color:#00b050;">链表的缺点</strong>

1. 查找的效率低，因为链表是从第一个节点向后遍历查找。



### 16.1 构造方法

1. list容器的迭代器不支持-和+运算符，不能随意访问；
2. 但使用迭代器构造时，可以使用vector的迭代器；或者使用数组的指针作为迭代器；

<strong style="color:#00b050;">构造函数原型</strong>

```c++
1. list(); 创建一个空list
2. list(initialzer_list<T> il); 使用同一初始化列表
3. list(const list<T>& l); 拷贝构造函数
4. list(iterator first,iterator last); 用迭代器创建list
5. list(list<T> &&v); 移动构造函数
```



```c++
// 1. 创建一个空list容器
list <int> l1;
cout << "l.size()=" << l1.size() << endl; // 0

// 2. 使用统一初始化列表创建list容器
//list <int> l2({ 1,2,3,4,5,6,7,8,9,10 });
//list<int> l2 = { 1,2,3,4,5,6,7,8,9,10 };
list<int> l2{ 1,2,3,4,5,6,7,8,9,10 };
for (int value : l2) cout << value << "\t";
cout << endl;

// 3. list(const list<T> &v) 拷贝构造函数
list<int> l3(l2);
for (int value : l3) cout << value << "\t";
cout << endl;

// 4. list(iterator first,iteratoe last) 使用迭代器创建list容器
list<int> l4(l3.begin(), l3.end()); // 不支持随便访问，比如list<int> l4(l3.begin()+2, l3.end()-3);不支持-和+运算符
for (int value : l4) cout << value << "\t";
cout << endl;

// 5. 如果使用vecotr的迭代器创建是可以的
vector <int> v1 = { 1,2,3,4,5,6,7,8,9,10 };
list <int>l5(v1.begin() + 2, v1.end() - 3);
for (int value : l5) cout << value << "\t";
cout << endl;

// 6. 使用数组的指针作为迭代器
int a1[] = { 1,2,3,4,5,6,7,8,9,10 };
list <int>l6(a1 + 2, a1 + 10 - 3);
for (int value : l6) cout << value << "\t";
cout << endl;
```



### 16.2 特性操作



```c++
1. size_t capacity() const; // 返回容器的容量
2. size_t size() const; // 返回容器的实际大小（已使用的空间）
3. bool empty() const; // 判断容器是否为空
4. void clear(); // 清空容器
5. void reserve(size_t size); // 将容器容量设置为至少size
6. void shrink_to_fit(); // 将容器的容量降到实际大小（需要分配的内存）
7. void resize(size_t size); // 把容器的实际大小设置为size
```





### 16.3 元素操作

```c++
1. T &front(); // 第一个元素
2. const T &front(); // 第一个元素，只读
3. const T&back(); // 最后一个元素，只读
4. T &back(); // 最后一个元素
```





### 16.4 赋值操作



```c++
1. list &operator = (const list &l); // 把容器l赋值给当前容器
2. list &operator = (initialzer_list<T> li); // 使用初始列表赋值
3. list assign(initial_list<T> il); // 使用统一初始化列表赋值
4. list assign(Iterator first,Iterator last); // 使用迭代器赋值
```



### 16.5 交换操作



```c++
1. void swap(list<T> &l); // 把当前容器与l交换，交换的时结点的地址
2. void reverse(); // 反转链表
3. void sort(); // 链表升序
4. void sort(_Pr2 _Pred); // 元素排序，排序方法由_Pred决定（二元函数）
5. void merge(list<T> &l); // 采用归并法合并两个已排序的list容器，合并后仍然是有序的
```



### 16.6 比较操作

```c++
bool operator == (const list <T> &l) const;
bool operator != (const list <T> &l) const;
```



### 16.7 插入和删除

```c++
1. void push_back(const T& value); // 在链表的尾部追加一个元素
2. void emplace_back(...); // 在链表的尾部追加一个元素，用于构造元素。C++11
3. iterator insert(iterator pos,const T& value); // 在指定位置插入一个元素，返回指向插入元素的迭代器
4. iterator emplace(iterator iterator pos,...); // 在指定位置插入一个元素，用于构造元素，返回指向插入元素的迭代器.C++11
5. iterator insert(iterator pos,iterator first,iterator last); // 在指定位置插入一个区间的元素
6. void pop_back(); // 从链表尾部删除一个元素
7. iterator erase(iterator pos); //删除指定位置的元素，返回下一个有效的迭代器
8. iterator erase(iterator first, iterator last); // 删除指定区间的元素，返回下一个有效的迭代器
9. push_front(front T& value); // 在链表的头部插入一个元素
10. emplace_front(...); // 在链表的头部插入一个元素，...用构造元素。C++11
11. splice(iterator pos,const list<T> &l); // 把另一个链表连接到当前列表
12. splice(iterator pos,const list<T> &l,iterator first,iterator last); // 把另一个链表指定的区间连接到当前链表
13. splice(iterator pos,const list<T> &l,iterator first); // 把另一个链表从开始到结尾连接到当前链表
14. void remove(value); // 删除链表中等于value的所有元素
15. void remove_if(_Pr1 _Pred); // 删除链表中满足条件的元素，参数_Pred是医院函数
16. void unique(); // 删除重复的元素，只保留一个
```



## 17、关联容器



### 17.1 Pair键值对



pair是类模板，一般用于key/value数据

pari结构模板的定义

```c++
template <class T1,class T2>
struct pair
{
    T1 first;
    T2 second;
    pair();
    
    pair(const T1 &val1,const T2 &val2); // 有两个参数的构造函数
    pair(const pair<T1,T2> &p); // 拷贝构造函数
    void swap(pair<T1,T2> &p); // 交换两个pair
}
```



### 17.2 pair操作函数

```c++
1. pair<T1, T2> p1;            //创建一个空的pair对象（使用默认构造），它的两个元素分别是T1和T2类型，采用值初始化。
2. pair<T1, T2> p1(v1, v2);    //创建一个pair对象，它的两个元素分别是T1和T2类型，其中first成员初始化为v1，second成员初始化为v2。
3. make_pair(v1, v2);          // 以v1和v2的值创建一个新的pair对象，其元素类型分别是v1和v2的类型。
4. p1 < p2;                    // 两个pair对象间的小于运算，其定义遵循字典次序：如 p1.first < p2.first 或者 !(p2.first < p1.first) && (p1.second < p2.second) 则返回true。
5. p1 == p2；                  // 如果两个对象的first和second依次相等，则这两个对象相等；该运算使用元素的==操作符。
6. p1.first;                   // 返回对象p1中名为first的公有数据成员
7. p1.second;                 // 返回对象p1中名为second的公有数据成员
```







### 17.3 红黑二叉树

![image-20221025104612983](http://test-123456-md-images.oss-cn-beijing.aliyuncs.com/img/image-20221025104612983.png)

每个节点有左右两个节点，左边的节点比该节点小，右边的节点比该节点大。查找效率非常高

比如：查找36。

36>31，则向右查找

36<40，则向左查找

36>35，向右查找，查找成功。只需要查找3次。

<img src="http://test-123456-md-images.oss-cn-beijing.aliyuncs.com/img/image-20221025104940794.png" alt="image-20221025104940794" style="zoom:50%;" />





### 17.4 map容器



map容器的元素是pair键值对。

map类模板的声明：

```c++
template <class K, class V,class P = less<K>,class _Alloc = allocator<pair<const K,V>>>
class map:public_Tree<_Tmap_traits<K,V,P,_Alloc,false>>
{
    ...
}
```

第一个模板参数K：key的数据类型（pair.first）

第二个模板参数V：value的数据类型（pair.second）

第三个模板参数P：排序方法，缺省按key升序

第四个模板参数_Alloc：分配器，缺省用new和delete

map提供了双向迭代器

二叉列表

```c++
struct BTNode
{
    pair<K,V> p; // 键值对
    BTNode *parent; // 父节点
    BTNode *lchild; // 左子树
    BTNode *rchild; // 右子树
}
```



### 17.5 map构造函数

```c++
1. map(); 创建一个空map
2. map(initialzer_list<T> il); 使用同一初始化列表
3. map(const map<T>& m); 拷贝构造函数
4. map(iterator first,iterator last); 用迭代器创建map
5. map(map<T> &&m); 移动构造函数
```







### 17.6 map特性操作

```c++
1. size_t size() const; // 返回容器的实际大小（已使用的空间）
2. bool empty() const; // 判断容器是否为空
3. void clear(); // 清空容器
```



### 17.7 map元素操作

1. []运算符：如果指定键不存在，会向容器中添加新的键值对；如果哦在指定键不存在，则读取或修改容器中指定键的值；
2. at()成员函数：如果指定键不存在，不会向容器中添加新的键值对，而是抛出out_of_range异常。

```c++
V &operator[](K key); // 使用key访问元素
const V &operator[](K key) const; // 使用key访问元素，只读
V &at(K key); // 使用key访问元素
const V&at(K key) const; // 使用key访问元素，只读
```

测试

```c++
map<string, string> m({ {"08","冰冰"},{"02","西施"}, {"05","密密"}, {"01","金莲"}, {"06","喜欢过"} });
cout << "m[08]=" << m["08"]<< endl;
cout << "m[02]=" << m.at("02") << endl;

for (auto& value : m) cout << value.first << ":" << value.second << endl; // 循环输出
```



### 17.7 map赋值操作

给已存在的容器赋值，将覆盖容器中原有的内容

```c++
1. map<K,V> &operator = (const map<K,V> &m); // 把容器m赋值给当前的容器
2. map<K,V> &operator = (initializer_list<pair<K,V>> il); // 用统一初始化列表给当前容器赋值
```





### 17.8 map交换操作

```c++
void swap(map<K,V> &m); // 把当前容器与m交换
```

交换的是树的根节点



### 17.9 比较操作

```c++
bool operator == (const map<K,V> &m) const;
bool operator != (const map <K,V> &m) const;
```





### 17.10 查找操作

1. 查找键值对为key的键值对；

在map容器中查找键值对为key的键值对，如果成功找到，则返回指向该键值对的迭代器；失败返回end()。

```c++
iterator find(const K &key);
const_iterator find(const K &key) const; //只读
```

2. 查找键值>=key的键值对



























