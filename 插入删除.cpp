#include<iostream>
using namespace std;
#include<vector>
#include<list>

int main()
{
	// 1. ����һ����list����
	list <int> l1({1,2,3,5,6});
	iterator<int>  l1.insert(l1.begin(), 4);

	

	system("pause");
	return 0;
}