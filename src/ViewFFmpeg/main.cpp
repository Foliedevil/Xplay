#include<iostream>
//引用C语言的库
extern "C"{
#include<libavcodec/avcodec.h>
}
using namespace std;
//预处理指令导入库
#pragma comment(lib,"avcodec.lib")

int main(int argc, char *argv[])
{
	cout << "test ffmpeg" << endl;

#ifdef _WIN32
	//32位和64位 win
    #ifdef _WIN64
        //64位 win
        cout << "this is windows64" << endl;
    #else
        //32位 win
        cout << "this is windows32" << endl;
    #endif
#else
    cout<<" this is linux "<<endl;
#endif
	cout << "ffmpeg config:"<<avcodec_configuration() << endl;
	getchar();
	return 0;
}
