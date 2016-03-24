//#include<highgui.h>
//#include<qstring.h>

// C Version
//int main(int argc, char** argv)
//{

//    IplImage *Img = cvLoadImage("image.jpg", 1); // 1 means show in RGB style 
//    // create a window and named as "Image"
//    cvNamedWindow("Image",1);
//    // show the image
//    cvShowImage("Image",Img);
//    //wait
//    cvWaitKey(0);
//    //destroy the window
//    cvDestroyWindow("Image");
//    //realease the image and memory
//    cvReleaseImage(&Img);
//    return 0;
//}

// C++ Version
#include <opencv2/highgui/highgui.hpp>
#include <qstring.h>
using namespace cv;
int main()
{
    //load a image
    Mat image = imread("image.jpg");
    
    //create a window named "My Image"
    namedWindow("My Image");
    //move the window to (0,0) coordinate of the screen
    moveWindow("My Image",0,0);
    //resize the window, the width is 600 pixels & the height is 300 pixels
    resizeWindow("My Image",600,300);
    //show the image
    imshow("My Image",image);
    //wait
    waitKey(0);
    //destory all windows created
    destroyAllWindows();
    //release the image and memory
    image.release();
    
    return 1;
}
