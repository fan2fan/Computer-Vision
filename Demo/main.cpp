//#include<highgui.h>
//#include<qstring.h>

//int main(int argc, char** argv)
//{
//    //ctrl+D删除行，ctrl + shift + ->自动完成，ctrl+C+up向上复制，ctrl+i格式化代码L
//    //插入行（向下）ctrl+enter（向上）ctrl+shift+enter，复制行ctrl+c+，收缩ctrl+<,伸展ctrl+>
//    //IplImage *Img = cvLoadImage("C:/fanfanImage/3.jpg", 1);
//    //下面是打开中文路径的方法
//    //    IplImage *Img = cvLoadImage(QString("C:/fanfanImage/大圣归来.png")
//    //.toLocal8Bit(), 1);
//    IplImage *Img = cvLoadImage("C:/fanfanImage/Monkey_King0.png", 1);
//    //创建窗口,并命名为Image
//    cvNamedWindow("Image",1);
//    //显示图像
//    cvShowImage("Image",Img);
//    //等待按键，按任意键结束
//    cvWaitKey(0);
//    //销毁窗口
//    cvDestroyWindow("Image");
//    //释放图像
//    cvReleaseImage(&Img);
//    return 0;
//}

//C++版本1
//#include <opencv2/highgui/highgui.hpp>
//#include <qstring.h>

//int main()
//{
//    //读取文件，首先创建一个Mat类，名字叫image，然后用imread读取图片
//    //cv表示一个命名空间，namedWindow为其其中定义的函数

//    cv::Mat image=cv::imread("C:/fanfanImage/2.jpg");
//    //创建图像显示窗口叫"My Image"
//    cv::namedWindow("My Image");
//    //利用imshow函数显示图片
//    cv::imshow("My Image",image);
//    //等待直到用户相应，waitKey函数是等待函数，可以设定窗口显示的时间。若为0，则是等待用户相应。
//    cv::waitKey(0);
//    //返回1
//    return 1;
//}

//Copy CopyTo Clone CloneImage
//C++版本2
#include <opencv2/highgui/highgui.hpp>
#include <qstring.h>
using namespace cv;
int main()
{
    /**
    读取文件，首先创建一个Mat类，名字叫image，然后用imread读取图片
    不支持中文
    cv表示一个命名空间，namedWindow为其其中定义的函数P
    Move line up: alt+UP Move line down: alt+Down  Go to line: ctrl+L
    把pro文件的CONFIG += console注释掉可以不显示控制台
    **/
    //    //打开中文路径的文件
    //    Mat image = imread(String((const char*)QString("C:/fanfanImage/大圣归来.png")
    //                              .toLocal8Bit()));
    Mat image = imread("C:/fanfanImage/MonKey_King0.png");
    //创建图像显示窗口叫"My Image"
    namedWindow("My Image");
    moveWindow("My Image",0,0);
    //resizeWindow("My Image",600,300);
    //利用imshow函数显示图片
    imshow("My Image",image);
    //等待直到用户相应，waitKey函数是等待函数，可以设定窗口显示的时间。若为0，则是等待用户相应。
    waitKey(0);
    destroyAllWindows();
    image.release();
    //返回1
    return 1;
}
