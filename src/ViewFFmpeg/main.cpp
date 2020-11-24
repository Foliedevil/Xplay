#include<iostream>

extern "C"{
#include<libavcodec/avcodec.h>
}

using namespace std;
//预处理指令导入库
#pragma comment(lib,"avcodec.lib")

int main(int argc, char **argv[]) 
{
	cout << "test ffmpeg" << endl;
	cout << "ffmpeg config:"<<avcodec_configuration() << endl;
	getchar();
	return 0;
}