#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<iostream>
#include <string>

using std::string;
using std::cout;
using std::cin;
using std::endl;


class yuan {
public: 
int a;
	float r;
	yuan(float r) {
		this->r = r;
	}
	float c() {
		return 2 * 3.14 * r;
	}
	float s() {
		return 3.14 * r * r;
	}
};
int main()
{
	yuan r1(2.5);
	cout << r1.c() << endl << r1.s() << endl;
	return 0;
}

//int main()
//{
//	int n;
//	cin >> n;
//	for (int j = 1; j <= n;j++) {
//		for (int i = 0; i < n-j; i++)	cout << ' ';
//		for (int i = 0; i < (2 * j - 1); i++) cout<<'*';
//		cout << endl;
//	}
//	return 0;
//}


//int* twoSum(int* nums, int numsSize, int target, int* returnSize) {
//    int i, j;
//    for (i = 1; i < numsSize; i++) {
//        for (j = 0; j < i; j++) {
//            if ((nums[i] + nums[j]) == target)
//                break;
//        }
//        if ((nums[i] + nums[j]) == target)
//            break;
//    }
//    int ret[2];
//    ret[0] = j;
//    ret[1] = i;
//    return ret;
//}
//int main()
//{
//    int* returnSize=NULL;
//    int nums[] = { 3, 2, 4 };
//    int numsSize = sizeof(nums) / sizeof(nums[0]);
//    int* ret = twoSum(nums, numsSize, 6, returnSize);
//    printf("[%d,%d]", ret[0], ret[1]);
//    return 0;
//}

//int* twoSum(int* nums, int numsSize, int target, int* returnSize) {
//    int i, j;
//    for (i = 1; i < numsSize; i++) {
//        for (j = 0; j < i; j++) {
//            if ((nums[i] + nums[j]) == target)break;
//        }
//        if ((nums[i] + nums[j]) == target)break;
//    }
//    returnSize[0] = j;
//    returnSize[1] = i;
//    return returnSize;
//}
//
////int* twoSum(int* nums, int numsSize, int target, int* returnSize) {
////    int i, j;
////    for (i = 0; i < numsSize; i++) {
////        for (j = i + 1; j < (sizeof(nums) / sizeof(nums[0])); j++) {
////            if ((nums[i] + nums[j]) == target)break;
////        }
////        if ((nums[i] + nums[j]) == target)break;
////    }
////    *returnSize = i;
////    *(returnSize+1)= j;
////    return returnSize;
////}
//int main()
//{
//    int nums[] = { 2,11,7,71};
//    int returnSize[2];
//    int* arr = twoSum(nums, sizeof(nums)/sizeof(nums[0]), 9, returnSize);
//    printf("[%d,%d]", *arr, *(arr+1));
//	return 0;
//}

//string add(int a, int b) {
//	return to_string(a) + to_string(b);
//}
//string add(int a, string b) {
//	return to_string(a) + b;
//}
//string add(string a, int b) {
//	return a + to_string(b);
//}
//string add(string a, string b) {
//	return a+b;
//}
//
//
//int main()
//{
//	cout << add("das", 132);
//	return 0;
//}

//int main()
//{
//	int a, b, i=0;
//	for (a=100; a <= 1000; a++)
//	{
//		int x = a; int c = 0;
//		while ( x > 0)
//		{
//			b = x % 10;
//			x /= 10;
//			c = (b * b * b + c);
//		}
//		if (c == a)i++;
//	}
//	printf("%d", i);
//	return 0;
//}
//void change(int& a, int& b)
//{
//	int tmp = a;
//	a = b;
//	b = tmp;
//}
//int main()
//{
//	int m = 3, n = 4;
//	
//	change(m, n);
//	return 0;
//}
//int main()
//{
//	typedef struct sd
//	{
//		int num;
//	}s;
//	s a = { 6 };
//	s* c = &a;
//	printf("%d", c->num);
//	return 0;
//}