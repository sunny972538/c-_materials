#include<iostream>
using namespace std;

struct CA
{
private:
	int x1;
protected:
	int x2;
public:
	int x3;
};
struct CB 
{
private:
	int y1;
protected:
	int y2;
public:
	int y3;
};
struct CC: CA, CB
{
private:
	int z1;
protected:
	int z2;
public:
	int z3;
};
void main3()
{
	cout<<sizeof(CC)<<endl;
}
