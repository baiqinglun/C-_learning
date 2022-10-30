//#include<iostream>
//using namespace std;
//#include<vector>
//#include<list>
//
//int main()
//{
//	// 1. 创建一个空list容器
//	list <int> l1;
//	cout << "l.size()=" << l1.size() << endl; // 0
//
//	// 2. 使用统一初始化列表创建list容器
//	//list <int> l2({ 1,2,3,4,5,6,7,8,9,10 });
//	//list<int> l2 = { 1,2,3,4,5,6,7,8,9,10 };
//	list<int> l2{ 1,2,3,4,5,6,7,8,9,10 };
//	for (int value : l2) cout << value << "\t";
//	cout << endl;
//
//	// 3. list(const list<T> &v) 拷贝构造函数
//	list<int> l3(l2);
//	for (int value : l3) cout << value << "\t";
//	cout << endl;
//
//	// 4. list(iterator first,iteratoe last) 使用迭代器创建list容器
//	list<int> l4(l3.begin(), l3.end()); // 不支持随便访问，比如list<int> l4(l3.begin()+2, l3.end()-3);不支持-和+运算符
//	for (int value : l4) cout << value << "\t";
//	cout << endl;
//
//	// 5. 如果使用vecotr的迭代器创建是可以的
//	vector <int> v1 = { 1,2,3,4,5,6,7,8,9,10 };
//	list <int>l5(v1.begin() + 2, v1.end() - 3);
//	for (int value : l5) cout << value << "\t";
//	cout << endl;
//
//	// 6. 使用数组
//	int a1[] = { 1,2,3,4,5,6,7,8,9,10 };
//	list <int>l6(a1 + 2, a1 + 10 - 3);
//	for (int value : l6) cout << value << "\t";
//	cout << endl;
//
//	system("pause");
//	return 0;
//}