#include<iostream>
//����C���ԵĿ�
extern "C"{
#include<libavcodec/avcodec.h>
}
using namespace std;
//Ԥ����ָ����
#pragma comment(lib,"avcodec.lib")

int main(int argc, char *argv[])
{
	cout << "test ffmpeg" << endl;

#ifdef _WIN32
	//32λ��64λ win
    #ifdef _WIN64
        //64λ win
        cout << "this is windows64" << endl;
    #else
        //32λ win
        cout << "this is windows32" << endl;
    #endif
#endif
	cout << "ffmpeg config:"<<avcodec_configuration() << endl;
	getchar();
	return 0;
}
