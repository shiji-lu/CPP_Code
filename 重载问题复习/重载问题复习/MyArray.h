#pragma once
#define _CRT_SECURE_NO_WARNINGS 1
#include<iostream>
#include<string>
using namespace std;


//数组类模拟
class MyArray
{
public:
	MyArray();
	MyArray(const MyArray& arr);
	~MyArray();

	//头插
	void PushFront(int val);
	//尾插
	void PushBack(int val);
	//头删
	void PopFront();
	//尾删
	void PopBack();
	//获取数组元素个数
	int Size();
	//获取数组容量
	int Capacity();
	//指定位置插入元素
	void Insert(int pos, int val);
	//获取指定下标的值
	int& Get(int pos);
	//在指定位置修改值
	void Set(int pos, int val);

private:
	int* pArray;//指向堆区空间，存储数据
	int mSize;//元素个数
	int mCapacity;//容量
};

