#include<iostream>

extern "C"{
#include<libavcodec/avcodec.h>
}

using namespace std;
//Ԥ����ָ����
#pragma comment(lib,"avcodec.lib")

int main(int argc, char **argv[]) 
{
	cout << "test ffmpeg" << endl;
	cout << "ffmpeg config:"<<avcodec_configuration() << endl;
	getchar();
	return 0;
}