//#include "opencv2/highgui.hpp"
//#include "opencv2/imgcodecs.hpp"
//#include "opencv2/imgproc.hpp"
//#include <iostream>
//using namespace std;
//using namespace cv;
//int main(int argc, char** argv)
//{
//    //Load the source image
//    CommandLineParser parser(argc, argv, "{@input | C:/Users/Arafah/Downloads/Acute-Dog-Diarrhea-47066074.jpg | input image}");
//    Mat src = imread(samples::findFile(parser.get<String>("@input")), IMREAD_COLOR);
//    if (src.empty())
//    {
//        return EXIT_FAILURE;
//    }
//    //Separate the source image in its three R,G and B planes. For this we use the OpenCV function cv::split :
//    vector<Mat> bgr_planes;
//    split(src, bgr_planes);
//    //range interval value
//    int histSize = 256;
//    //range of values
//    float range[] = { 0, 256 }; //the upper boundary is exclusive
//    const float* histRange[] = { range };
//    //to have the same size (uniform) and to clear the histograms in the beginning
//    bool uniform = true, accumulate = false;
//    //proceed to calculate the histograms by using the OpenCV function cv::calcHist :
//    Mat b_hist, g_hist, r_hist;
//    calcHist(&bgr_planes[0], 1, 0, Mat(), b_hist, 1, &histSize, histRange, uniform, accumulate);
//    calcHist(&bgr_planes[1], 1, 0, Mat(), g_hist, 1, &histSize, histRange, uniform, accumulate);
//    calcHist(&bgr_planes[2], 1, 0, Mat(), r_hist, 1, &histSize, histRange, uniform, accumulate);
//    //Create an image to display the histograms:
//    int hist_w = 512, hist_h = 400;
//    int bin_w = cvRound((double)hist_w / histSize);
//    Mat histImage(hist_h, hist_w, CV_8UC3, Scalar(0, 0, 0));
//    //Notice that before drawing, we first cv::normalize the histogram so its values fall in the range indicated by the parameters entered:
//    normalize(b_hist, b_hist, 0, histImage.rows, NORM_MINMAX, -1, Mat());
//    normalize(g_hist, g_hist, 0, histImage.rows, NORM_MINMAX, -1, Mat());
//    normalize(r_hist, r_hist, 0, histImage.rows, NORM_MINMAX, -1, Mat());
//    // to access the bin (in this case in this 1D-Histogram)
//    for (int i = 1; i < histSize; i++)
//    {
//        line(histImage, Point(bin_w * (i - 1), hist_h - cvRound(b_hist.at<float>(i - 1))),
//            Point(bin_w * (i), hist_h - cvRound(b_hist.at<float>(i))),
//            Scalar(255, 0, 0), 2, 8, 0);
//        line(histImage, Point(bin_w * (i - 1), hist_h - cvRound(g_hist.at<float>(i - 1))),
//            Point(bin_w * (i), hist_h - cvRound(g_hist.at<float>(i))),
//            Scalar(0, 255, 0), 2, 8, 0);
//        line(histImage, Point(bin_w * (i - 1), hist_h - cvRound(r_hist.at<float>(i - 1))),
//            Point(bin_w * (i), hist_h - cvRound(r_hist.at<float>(i))),
//            Scalar(0, 0, 255), 2, 8, 0);
//    }
//    //display histograms
//    imshow("Source image", src);
//    imshow("calcHist Demo", histImage);
//    waitKey();
//    return EXIT_SUCCESS;
//}